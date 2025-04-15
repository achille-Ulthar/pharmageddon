#include <stdio.h>
#include "video.h"
#include "genoux.h"

video genoux;

void genoux_init(void) {
    video_open("../assets/MedicProcess/genoux.mpg", &genoux);
}

void genoux_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&genoux, pixels, time);
}
