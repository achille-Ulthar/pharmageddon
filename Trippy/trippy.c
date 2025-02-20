#include "techno01.h"
#include "techno02.h"
#include "techno03.h"
#include "techno04.h"
#include "techno05.h"
#include "techno06.h"
#include "techno07.h"

void trippy_init(void) {
    techno01_init();
    techno02_init();
    techno03_init();
    techno04_init();
    techno05_init();
    techno06_init();
    techno07_init();
}

#define TIMETECHNO01 12000
#define TIMETECHNO02 TIMETECHNO01+29000
#define TIMETECHNO03 TIMETECHNO02+27000
#define TIMETECHNO04 TIMETECHNO03+39000
#define TIMETECHNO05 TIMETECHNO04+60000
#define TIMETECHNO06 TIMETECHNO05+22000
#define TIMETECHNO07 TIMETECHNO06+60000

void trippy_frame(uint32_t *pixels, uint32_t time) {
   
    if (time < TIMETECHNO01) {
        techno01_frame(pixels, time);
    } else if (time < TIMETECHNO02) {
        techno02_frame(pixels, time);
    } else if (time < TIMETECHNO03) {
        techno03_frame(pixels, time);
    } else if (time < TIMETECHNO04) {
        techno04_frame(pixels, time);
    } else if (time < TIMETECHNO05) {
        techno05_frame(pixels, time);
    } else if (time < TIMETECHNO06) {
        techno06_frame(pixels, time);
    } else if (time < TIMETECHNO07){
        techno07_frame(pixels, time);
    }
    time = time % TIMETECHNO07;

}
