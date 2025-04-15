#include <stdio.h>
#include "video.h"
#include "frond.h"

video frond;

void frond_init(void) {
    video_open("../assets/MedicProcess/frond.mpg", &frond);
}

void frond_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&frond, pixels, time);
}
