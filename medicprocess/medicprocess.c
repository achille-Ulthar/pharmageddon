
#include "brain.h"
#include "brulures.h"
#include "frond.h"
#include "genoux.h"
#include "tumeur.h"
#include "visage.h"


void medicprocess_init(void) {
    brain_init();
    brulures_init();
    frond_init();
    genoux_init();
    tumeur_init();
    visage_init();

}

#define TIMEbrain 112000 
#define TIMEbrulures 45000 
#define TIMEfrond 36000  
#define TIMEgenoux 41000 
#define TIMEtumeur 53000  
#define TIMEvisage 30000  


void medicprocess_frame(uint32_t *pixels, uint32_t time) {
    // Total sequence time (only one genoux_frame kept)
    time = time % (
        TIMEbrain +
        TIMEbrulures + TIMEgenoux +
        TIMEfrond +
        TIMEtumeur +
        TIMEvisage 
    );

    if (time < TIMEfrond) {
       frond_frame(pixels, time);
    } else if ((time -= TIMEbrain) < TIMEbrulures) {
        brulures_frame(pixels, time);
    } else if ((time -= TIMEbrulures) < TIMEgenoux) {
        genoux_frame(pixels, time); 
    } else if ((time -= TIMEgenoux) < TIMEbrain) {
       brain_frame(pixels, time);
    } else if ((time -= TIMEfrond) < TIMEtumeur) {
        tumeur_frame(pixels, time);
    } else {
        visage_frame(pixels, time);
    }   

}