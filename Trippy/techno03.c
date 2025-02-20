#include <stdio.h>
#include "video.h"
#include "techno03.h"

video techno03;

void techno03_init(void) {
    video_open("../assets/Techno/techno03.mpg", &techno03);
}

void techno03_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&techno03, pixels, time);
}
