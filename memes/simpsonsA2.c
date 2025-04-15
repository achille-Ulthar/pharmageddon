#include <stdio.h>
#include "video.h"
#include "simpsonsA2.h"

video simpsonsA2;

void simpsonsA2_init(void) {
    video_open("../assets/Memes/simpsonsA2.mpg", &simpsonsA2);
}

void simpsonsA2_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&simpsonsA2, pixels, time);
}
