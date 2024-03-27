#include "pl_mpeg.h"

typedef struct video {
    plm_t *plm;
    plm_frame_t *plm_frame;
    double next_frame_time;
    double ms_per_frame;
    int green;
} video;

void video_open(char *filename, video *v, int green);
int video_frame(video *v, uint32_t *pixels, uint32_t time);
