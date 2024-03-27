#include "video1.h"
#include "video.h"

video vid1;

void demo_init(char *filename) {
    video_open(filename, &vid1);
}

int demo_frame(uint32_t *pixels, uint32_t time) {
    return video_frame(&vid1, pixels, time);
}
