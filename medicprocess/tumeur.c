#include <stdio.h>
#include "video.h"
#include "tumeur.h"

video tumeur;

void tumeur_init(void) {
    video_open("../assets/MedicProcess/tumeur.mpg", &tumeur);
}

void tumeur_frame(uint32_t *pixels, uint32_t time) {
    video_frame(&tumeur, pixels, time);
}
