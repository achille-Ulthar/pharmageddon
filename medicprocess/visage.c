#include <stdio.h>
#include "video.h"
#include "visage.h"

video visage;

void visage_init(void) {
    video_open("../assets/MedicProcess/visage.mpg", &visage);
}

void visage_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&visage, pixels, time);
}
