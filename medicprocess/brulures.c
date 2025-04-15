#include <stdio.h>
#include "video.h"
#include "brulures.h"

video brulures;

void brulures_init(void) {
    video_open("../assets/MedicProcess/brulures.mpg", &brulures);
}

void brulures_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&brulures, pixels, time);
}
