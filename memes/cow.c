#include <stdio.h>
#include "video.h"
#include "cow.h"

video cow;

void cow_init(void) {
    video_open("../assets/Memes/cow.mpg", &cow);
}

void cow_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&cow, pixels, time);
}
