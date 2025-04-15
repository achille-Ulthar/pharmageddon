#include <stdio.h>
#include "video.h"
#include "southpark.h"

video southpark;

void southpark_init(void) {
    video_open("../assets/Memes/southpark.mpg", &southpark);
}

void southpark_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&southpark, pixels, time);
}
