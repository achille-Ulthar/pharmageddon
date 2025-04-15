#include <stdio.h>
#include "video.h"
#include "hazmat.h"

video hazmat;

void hazmat_init(void) {
    video_open("../assets/Memes/hazmat.mpg", &hazmat);
}

void hazmat_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&hazmat, pixels, time);
}
