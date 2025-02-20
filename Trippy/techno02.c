#include <stdio.h>
#include "video.h"
#include "techno02.h"

video techno02;

void techno02_init(void) {
    video_open("../assets/Techno/techno02.mpg", &techno02);
}

void techno02_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&techno02, pixels, time);
}
