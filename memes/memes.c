#include "cow.h"
#include "hazmat.h"
#include "kabouter.h"
#include "scoobydoo.h"
#include "shoebodybop.h"
#include "simpsonsA2.h"
#include "southpark.h"
#include "spongebob.h"

void memes_init(void) {
    cow_init();
    hazmat_init();
    kabouter_init();
    scoobydoo_init();
    shoebodybop_init();
    simpsonsA2_init();
    southpark_init();
    spongebob_init();
}

#define TIMEcow 40000
#define TIMEhazmat 131000 
#define TIMEkabouter 72000 
#define TIMEscoobydoo 4000
#define TIMEshoebodybop 140000 
#define TIMEsimpsonsA2 69000 
#define TIMEsouthpark 31000
#define TIMEspongebob 300000

void memes_frame(uint32_t *pixels, uint32_t time) {
    // Total sequence time (only one scoobydoo_frame kept)
    time = time % (
        TIMEcow +
        TIMEhazmat + TIMEscoobydoo +
        TIMEkabouter +
        TIMEshoebodybop +
        TIMEsimpsonsA2 +
        TIMEsouthpark +
        TIMEspongebob
    );

    if (time < TIMEcow) {
        cow_frame(pixels, time);
    } else if ((time -= TIMEcow) < TIMEhazmat) {
        hazmat_frame(pixels, time);
    } else if ((time -= TIMEhazmat) < TIMEscoobydoo) {
        scoobydoo_frame(pixels, time); 
    } else if ((time -= TIMEscoobydoo) < TIMEkabouter) {
        kabouter_frame(pixels, time);
    } else if ((time -= TIMEkabouter) < TIMEshoebodybop) {
        shoebodybop_frame(pixels, time);
    } else if ((time -= TIMEshoebodybop) < TIMEsimpsonsA2) {
        simpsonsA2_frame(pixels, time);
    } else if ((time -= TIMEsimpsonsA2) < TIMEsouthpark) {
        southpark_frame(pixels, time);
    } else {
        time -= TIMEsouthpark;
        spongebob_frame(pixels, time);
    }
}
