#include <stdio.h>
#include "video.h"
#include "brain.h"

video brain;

void brain_init(void) {
    video_open("../assets/MedicProcess/brain.mpg", &brain);
}

void brain_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&brain, pixels, time);
}
