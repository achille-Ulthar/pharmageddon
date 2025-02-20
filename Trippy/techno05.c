#include <stdio.h>
#include "video.h"
#include "techno05.h"

video techno05;

void techno05_init(void) {
    video_open("../assets/Techno/techno05.mpg", &techno05);
}

void techno05_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&techno05, pixels, time);
}
