#include <stdio.h>
#include "video.h"
#include "techno04.h"

video techno04;

void techno04_init(void) {
    video_open("../assets/Techno/techno04.mpg", &techno04);
}

void techno04_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&techno04, pixels, time);
}
