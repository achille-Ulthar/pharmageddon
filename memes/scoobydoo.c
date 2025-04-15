#include <stdio.h>
#include "video.h"
#include "scoobydoo.h"

video scoobydoo;

void scoobydoo_init(void) {
    video_open("../assets/Memes/scoobydoo.mpg", &scoobydoo);
}

void scoobydoo_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&scoobydoo, pixels, time);
}
