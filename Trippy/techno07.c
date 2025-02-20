#include <stdio.h>
#include "video.h"
#include "techno07.h"

video techno07;

void techno07_init(void) {
    video_open("../assets/Techno/techno07.mpg", &techno07);
}

void techno07_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&techno07, pixels, time);
}
