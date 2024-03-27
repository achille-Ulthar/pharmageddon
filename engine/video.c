#include <stdio.h>

#include "video.h"

#define PL_MPEG_IMPLEMENTATION
#include "pl_mpeg.h"

void video_open(char *filename, video *v, int green) {
    v->plm = plm_create_with_filename(filename);
    if (v->plm == NULL) {
        printf("Could not load video\n");
        return;
    }
    v->ms_per_frame = 1000.0 / plm_get_framerate(v->plm);
    v->next_frame_time = 0;
    plm_set_audio_enabled(v->plm, 0);
    v->green = green;
}

static void video_get_frame(video *v) {
    v->plm_frame = plm_decode_video(v->plm);
}

static void video_show_frame(video *v, uint32_t *pixels) {
    /* use abgr on the assumption that we're on a little-endian architecture */
    if (v->plm_frame != NULL) plm_frame_to_abgr(v->plm_frame, (uint8_t *)pixels, 192*4);
    if (v->green) {
        for (int i = 0; i < 192*192; i++) {
            pixels[i] = (pixels[i] & 0x00ff00ff);
        }
    }
}

int video_frame(video *v, uint32_t *pixels, uint32_t time) {
    double td = (double)time;
    if (v->next_frame_time == 0 || (td - v->next_frame_time > 1000)) {
        /* first frame (or more than one second since the last call) */
        video_get_frame(v);
        if (plm_has_ended(v->plm)) return 1;
        video_show_frame(v, pixels);
        v->next_frame_time = td + v->ms_per_frame;
    } else {
        int got_frame = 0;
        while (v->next_frame_time <= td) {
            video_get_frame(v);
            if (plm_has_ended(v->plm)) return 1;
            got_frame = 1;
            v->next_frame_time += v->ms_per_frame;
        }
        if (got_frame) video_show_frame(v, pixels);
    }
    return 0;
}
