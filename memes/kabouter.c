#include <stdio.h>
#include "video.h"
#include "kabouter.h"

video kabouter;

void kabouter_init(void) {
    video_open("../assets/Memes/kabouter.mpg", &kabouter);
}

void kabouter_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&kabouter, pixels, time);
}
