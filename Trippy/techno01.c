#include <stdio.h>
#include "video.h"
#include "techno01.h"

video techno01;

void techno01_init(void) {
    video_open("../assets/Techno/techno01.mpg", &techno01);
}

void techno01_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&techno01, pixels, time);
}
