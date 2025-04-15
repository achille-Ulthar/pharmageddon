#include <stdio.h>
#include "video.h"
#include "spongebob.h"

video spongebob;

void spongebob_init(void) {
    video_open("../assets/Memes/spongebob.mpg", &spongebob);
}

void spongebob_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&spongebob, pixels, time);
}
