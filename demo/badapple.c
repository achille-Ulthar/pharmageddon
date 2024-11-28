#include <stdio.h>

#include "video.h"
#include "badapple.h"

video badapple;

void badapple_init(void) {
    video_open("../assets/EyesSpinAnimPovRay.mpg", &badapple);
}

void badapple_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&badapple, pixels, time);
}
