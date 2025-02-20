#include <stdio.h>
#include "video.h"
#include "techno06.h"

video techno06;

void techno06_init(void) {
    video_open("../assets/Techno/techno06.mpg", &techno06);
}

void techno06_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&techno06, pixels, time);
}
