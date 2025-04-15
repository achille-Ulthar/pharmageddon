#include <stdio.h>
#include "video.h"
#include "shoebodybop.h"

video shoebodybop;

void shoebodybop_init(void) {
    video_open("../assets/Memes/shoebodybop.mpg", &shoebodybop);
}

void shoebodybop_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&shoebodybop, pixels, time);
}
