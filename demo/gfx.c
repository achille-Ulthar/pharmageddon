#include <stdlib.h>
#include <math.h>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#include "gfx.h"

#define WIDTH 192
#define HEIGHT 192

const int circletab[]={
65536,65535,65535,65535,65535,65535,65534,65534,65534,65533,65532,65532,65531,65530,65529,65528,
65528,65526,65525,65524,65523,65522,65520,65519,65517,65516,65514,65513,65511,65509,65507,65505,
65503,65501,65499,65497,65495,65493,65490,65488,65485,65483,65480,65478,65475,65472,65469,65466,
65463,65460,65457,65454,65451,65448,65444,65441,65437,65434,65430,65427,65423,65419,65415,65411,
65407,65403,65399,65395,65391,65387,65382,65378,65373,65369,65364,65359,65355,65350,65345,65340,
65335,65330,65325,65320,65315,65309,65304,65299,65293,65288,65282,65276,65270,65265,65259,65253,
65247,65241,65235,65229,65222,65216,65210,65203,65197,65190,65183,65177,65170,65163,65156,65149,
65142,65135,65128,65121,65114,65106,65099,65091,65084,65076,65069,65061,65053,65045,65037,65030,
65021,65013,65005,64997,64989,64980,64972,64963,64955,64946,64938,64929,64920,64911,64902,64893,
64884,64875,64866,64857,64847,64838,64829,64819,64809,64800,64790,64780,64771,64761,64751,64741,
64731,64720,64710,64700,64690,64679,64669,64658,64647,64637,64626,64615,64604,64593,64582,64571,
64560,64549,64538,64526,64515,64504,64492,64480,64469,64457,64445,64433,64422,64410,64397,64385,
64373,64361,64349,64336,64324,64311,64299,64286,64273,64261,64248,64235,64222,64209,64196,64183,
64169,64156,64143,64129,64116,64102,64088,64075,64061,64047,64033,64019,64005,63991,63977,63963,
63948,63934,63919,63905,63890,63876,63861,63846,63831,63816,63801,63786,63771,63756,63741,63725,
63710,63695,63679,63663,63648,63632,63616,63600,63584,63568,63552,63536,63520,63504,63487,63471,
63454,63438,63421,63405,63388,63371,63354,63337,63320,63303,63286,63269,63251,63234,63216,63199,
63181,63164,63146,63128,63110,63092,63074,63056,63038,63020,63001,62983,62965,62946,62927,62909,
62890,62871,62852,62834,62815,62795,62776,62757,62738,62718,62699,62679,62660,62640,62621,62601,
62581,62561,62541,62521,62501,62481,62460,62440,62419,62399,62378,62358,62337,62316,62295,62274,
62253,62232,62211,62190,62169,62147,62126,62104,62083,62061,62039,62017,61995,61973,61951,61929,
61907,61885,61862,61840,61818,61795,61772,61750,61727,61704,61681,61658,61635,61612,61589,61565,
61542,61518,61495,61471,61448,61424,61400,61376,61352,61328,61304,61280,61255,61231,61206,61182,
61157,61133,61108,61083,61058,61033,61008,60983,60958,60932,60907,60881,60856,60830,60805,60779,
60753,60727,60701,60675,60649,60623,60596,60570,60543,60517,60490,60463,60437,60410,60383,60356,
60329,60301,60274,60247,60219,60192,60164,60137,60109,60081,60053,60025,59997,59969,59941,59912,
59884,59855,59827,59798,59769,59741,59712,59683,59654,59624,59595,59566,59536,59507,59477,59448,
59418,59388,59358,59328,59298,59268,59238,59207,59177,59147,59116,59085,59055,59024,58993,58962,
58931,58899,58868,58837,58805,58774,58742,58711,58679,58647,58615,58583,58551,58519,58486,58454,
58421,58389,58356,58323,58291,58258,58225,58191,58158,58125,58092,58058,58025,57991,57957,57923,
57889,57855,57821,57787,57753,57719,57684,57650,57615,57580,57545,57510,57475,57440,57405,57370,
57334,57299,57263,57228,57192,57156,57120,57084,57048,57012,56975,56939,56902,56866,56829,56792,
56755,56718,56681,56644,56607,56569,56532,56494,56457,56419,56381,56343,56305,56267,56229,56190,
56152,56113,56074,56036,55997,55958,55919,55880,55840,55801,55762,55722,55682,55643,55603,55563,
55523,55482,55442,55402,55361,55321,55280,55239,55198,55157,55116,55075,55034,54992,54951,54909,
54867,54825,54783,54741,54699,54657,54614,54572,54529,54487,54444,54401,54358,54315,54271,54228,
54184,54141,54097,54053,54009,53965,53921,53877,53833,53788,53743,53699,53654,53609,53564,53519,
53473,53428,53383,53337,53291,53245,53199,53153,53107,53061,53014,52968,52921,52874,52827,52780,
52733,52686,52638,52591,52543,52495,52447,52399,52351,52303,52255,52206,52158,52109,52060,52011,
51962,51913,51863,51814,51764,51714,51664,51614,51564,51514,51464,51413,51362,51312,51261,51210,
51159,51107,51056,51004,50953,50901,50849,50797,50744,50692,50639,50587,50534,50481,50428,50375,
50322,50268,50215,50161,50107,50053,49999,49944,49890,49835,49781,49726,49671,49616,49560,49505,
49449,49394,49338,49282,49225,49169,49113,49056,48999,48942,48885,48828,48771,48713,48655,48598,
48540,48482,48423,48365,48306,48247,48189,48130,48070,48011,47951,47892,47832,47772,47712,47651,
47591,47530,47469,47408,47347,47286,47224,47163,47101,47039,46977,46914,46852,46789,46726,46663,
46600,46537,46473,46409,46345,46281,46217,46153,46088,46023,45958,45893,45828,45762,45697,45631,
45565,45498,45432,45365,45298,45231,45164,45097,45029,44962,44894,44825,44757,44689,44620,44551,
44482,44412,44343,44273,44203,44133,44063,43992,43921,43850,43779,43708,43636,43564,43492,43420,
43347,43275,43202,43129,43055,42982,42908,42834,42760,42685,42611,42536,42461,42385,42310,42234,
42158,42082,42005,41928,41851,41774,41697,41619,41541,41463,41384,41306,41227,41147,41068,40988,
40908,40828,40748,40667,40586,40505,40423,40341,40259,40177,40094,40011,39928,39845,39761,39677,
39593,39508,39423,39338,39253,39167,39081,38995,38908,38821,38734,38647,38559,38471,38382,38293,
38204,38115,38025,37935,37845,37754,37663,37572,37481,37389,37296,37204,37111,37017,36924,36830,
36735,36641,36545,36450,36354,36258,36161,36065,35967,35870,35772,35673,35574,35475,35375,35275,
35175,35074,34973,34871,34769,34667,34564,34461,34357,34253,34148,34043,33938,33832,33725,33618,
33511,33403,33295,33186,33077,32967,32857,32746,32635,32524,32411,32299,32185,32072,31957,31842,
31727,31611,31495,31377,31260,31142,31023,30903,30783,30663,30542,30420,30297,30174,30051,29926,
29801,29676,29549,29422,29294,29166,29037,28907,28776,28645,28513,28380,28247,28112,27977,27841,
27704,27567,27428,27289,27149,27008,26866,26723,26579,26434,26289,26142,25995,25846,25696,25546,
25394,25241,25087,24932,24776,24619,24460,24301,24140,23977,23814,23649,23483,23316,23147,22977,
22805,22632,22457,22281,22103,21924,21743,21560,21375,21189,21000,20810,20618,20424,20228,20030,
19829,19626,19421,19214,19004,18791,18576,18358,18138,17914,17687,17457,17224,16987,16747,16503,
16255,16003,15747,15486,15220,14950,14674,14392,14105,13811,13511,13204,12889,12566,12233,11892,
11539,11176,10799,10409,10003,9580,9136,8669,8175,7649,7084,6468,5786,5012,4093,2895,};


void gfx_cls(uint32_t *pixels, uint32_t colour) {
    uint32_t *end = pixels + (WIDTH * HEIGHT);
    for (uint32_t *i = pixels; i < end; i++) {
        *i = colour;
    }
}

void gfx_putpixel(uint32_t *pixels, int x, int y, uint32_t colour) {
    if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT)
      pixels[(y * WIDTH) + x] = colour;
}

void gfx_fillrect(uint32_t *pixels, int x, int y, int w, int h, uint32_t colour) {
    if (x < 0) x = 0;
    if (w <= 0) return;
    if (y < 0) y = 0;
    if (h <= 0) return;
    int x_end = x + w;
    if (x_end > WIDTH) x_end = WIDTH;
    int y_end = y + h;
    if (y_end > HEIGHT) y_end = HEIGHT;
    for (int cy = y; cy < y_end; cy++) {
        uint32_t *i = pixels + (cy * WIDTH) + x;
        for (int cx = x; cx < x_end; cx++) {
            *i = colour;
            i++;
        }
    }
}

void gfx_hline(uint32_t *pixels, int x1, int x2, int y, uint32_t colour) {
    if (x1 < 0) x1 = 0;
    if (x2 < x1) return;
    if (x2 >= WIDTH) x2 = WIDTH - 1;
    if (y < 0 || y >= HEIGHT) return;

    uint32_t *i = pixels + (y * WIDTH) + x1;
    for (int x = x1; x <= x2; x++) {
        *i = colour;
        i++;
    }
}

void gfx_line(uint32_t *pixels, int x1, int y1, int x2, int y2, uint32_t colour) {
    int x, y, d, deltax, deltay;
    int dinc1, dinc2, xinc1, xinc2, yinc1, yinc2;
    int i, numpixels;

    deltax = abs(x2-x1);
    deltay = abs(y2-y1);
    if (deltax >= deltay) {
        numpixels = deltax+1;
        d = (deltay << 1) - deltax;
        dinc1 = deltay << 1;
        dinc2 = (deltay - deltax) << 1;
        xinc1 = 1; xinc2 = 1;
        yinc1 = 0; yinc2 = 1;
    } else {
        numpixels = deltay+1;
        d = (deltax << 1) - deltay;
        dinc1 = deltax << 1;
        dinc2 = (deltax - deltay) << 1;
        xinc1 = 0; xinc2 = 1;
        yinc1 = 1; yinc2 = 1;
    }
    if (x1 > x2) {xinc1 = -xinc1; xinc2 = -xinc2;}
    if (y1 > y2) {yinc1 = -yinc1; yinc2 = -yinc2;}

    // Start drawing
    x=x1; y=y1;
    for (i=0; i < numpixels; i++) {
        gfx_putpixel(pixels, x, y, colour);
        if (d < 0) {
            d += dinc1;
            x += xinc1;
            y += yinc1;
        } else {
            d += dinc2;
            x += xinc2;
            y += yinc2;
        }
    }
}

void gfx_rect(uint32_t *pixels, int x, int y, int w, int h, uint32_t colour) {
    int x1, y1, x2, y2;
    x1 = x; y1 = y;
    x2 = x + w - 1; y2 = y + h - 1;

    if (x2 >= 0 && y2 >= 0 && x1 < WIDTH && y1 < HEIGHT) {
        gfx_hline(pixels, x1, x2, y1, colour);
        gfx_hline(pixels, x1, x2, y2, colour);
        gfx_line(pixels, x1, y1, x1, y2, colour);
        gfx_line(pixels, x2, y1, x2, y2, colour);
    }
}

void gfx_circle(uint32_t *pixels, int cx, int cy, int r, uint32_t colour) {
    int invradius, ofs;
    int dx, dy;

    if (r > 0) invradius = 65536/r; else invradius = 0;
    dx = 0; dy = r-1; ofs = 0;
    do {
        gfx_putpixel(pixels, cx+dx, cy+dy, colour);
        gfx_putpixel(pixels, cx+dy, cy+dx, colour);

        gfx_putpixel(pixels, cx-dx, cy+dy, colour);
        gfx_putpixel(pixels, cx-dy, cy+dx, colour);

        gfx_putpixel(pixels, cx+dx, cy-dy, colour);
        gfx_putpixel(pixels, cx+dy, cy-dx, colour);

        gfx_putpixel(pixels, cx-dx, cy-dy, colour);
        gfx_putpixel(pixels, cx-dy, cy-dx, colour);

        dx++; ofs += invradius;
        dy = (int)((r * circletab[(int)(ofs >> 6)]) >> 16);
    } while (dx <= dy);
}

void gfx_fillcircle(uint32_t *pixels, int cx, int cy, int r, uint32_t colour) {
    int invradius, ofs;
    int dx, dy;

    if (r < 0) r = -r;
    if (r > 3) {
        invradius = 65536 / r; //else invradius=0;
        dx=0; dy=r; ofs=0;
        do {
            gfx_hline(pixels, cx-dx, cx+dx, cy+dy, colour);
            gfx_hline(pixels, cx-dx, cx+dx, cy-dy, colour);
            gfx_hline(pixels, cx-dy, cx+dy, cy+dx, colour);
            gfx_hline(pixels, cx-dy, cx+dy, cy-dx, colour);

            dx++; ofs += invradius;
            dy = (int)((r * circletab[(int)(ofs >> 6)]) >> 16);
        } while (dx <= dy);
    } else if (r > 1) {
        gfx_putpixel(pixels, cx, cy, colour);
        gfx_putpixel(pixels, cx+1, cy, colour);
        gfx_putpixel(pixels, cx, cy+1, colour);
        gfx_putpixel(pixels, cx+1, cy+1, colour);
    } else {
        gfx_putpixel(pixels, cx, cy, colour);
    }
}

void gfx_tri(uint32_t *pixels, int v1x, int v1y, int v2x, int v2y, int v3x, int v3y, uint32_t colour) {
    gfx_line(pixels, v1x, v1y, v2x, v2y, colour);
    gfx_line(pixels, v2x, v2y, v3x, v3y, colour);
    gfx_line(pixels, v3x, v3y, v1x, v1y, colour);
}

static void blitfill(uint32_t *pos, int len, uint32_t colour) {
    for (int i = 0; i < len; i++) {
        *pos = colour;
        pos++;
    }
}

void gfx_filltri(uint32_t *pixels, int v1x, int v1y, int v2x, int v2y, int v3x, int v3y, uint32_t colour) {
    int tempx, tempy;
    unsigned short *dest16;
    unsigned int *dest32;
    int x1,y1,z1,x2,y2,z2,x3,y3,z3;
    int xstep1,xstep2,xstep3;
    int startx,endx,px,ry;
    int dx1,dx2;
    int dy31,dy21,dy32;
    int x4,dmx4;
    int py,xskip,i;

    // Sort points
    if (v1y > v2y) {
        tempx = v1x; tempy = v1y;
        v1x = v2x; v1y = v2y;
        v2x = tempx; v2y = tempy;
    }
    if (v1y > v3y) {
        tempx = v1x; tempy = v1y;
        v1x = v3x; v1y = v3y;
        v3x = tempx; v3y = tempy;
    }
    if (v2y > v3y) {
        tempx = v2x; tempy = v2y;
        v2x = v3x; v2y = v3y;
        v3x = tempx; v3y = tempy;
    }
    if ((v1y == v2y) && (v1x > v2x)) {   
        x1 = v2x; x2 = v1x; x3 = v3x;
    } else {
        x1 = v1x; x2 = v2x; x3 = v3x;
    }
    y1 = v1y; y2 = v2y; y3 = v3y;

    // Calculate Edge steps
    dy31 = (y3-y1); dy21 = (y2-y1); dy32 = (y3-y2);
    xstep1 = (x3-x1) << 16; if (dy31>0) xstep1/=dy31;
    xstep2 = (x2-x1) << 16; if (dy21>0) xstep2/=dy21;
    xstep3 = (x3-x2) << 16; if (dy32>0) xstep3/=dy32;

    // Start drawing
    dx1 = x1 << 16; dx2 = dx1;
    py = y1 * WIDTH;

    // Long edge on the left
    if (xstep1 < xstep2) {
        for (ry=y1; ry<=y3; ry++) {
            startx = dx1 >> 16; endx = dx2 >> 16;
            if ((ry >= 0) && (ry < HEIGHT) && (startx < WIDTH) && (endx >= 0)) {
                if (startx < 0) startx = 0;
                if (endx > WIDTH - 1) endx = WIDTH - 1;
                if ((endx - startx + 1) > 0) {
                    blitfill(pixels + startx + py, endx - startx + 1, colour);
                }
            }
            dx1 += xstep1;
            if (ry < y2) dx2 += xstep2;
            if (ry == y2) dx2 = x2 << 16;
            if (ry > y2) dx2 += xstep3;
            py += WIDTH;
        }
    }

    // Long edge on the right
    if (xstep1 >= xstep2) {
        for (ry=y1; ry<=y3; ry++) {
            startx = dx1 >> 16; endx = dx2 >> 16;
            if ((ry >= 0) && (ry < HEIGHT) && (startx < WIDTH) && (endx >= 0)) {
                if (startx < 0) startx = 0;
                if (endx > WIDTH - 1) endx = WIDTH - 1;
                if ((endx - startx + 1) > 0) {
                    blitfill(pixels + startx + py, endx - startx + 1, colour);
                }
            }
            dx2 += xstep1;
            if (ry < y2) dx1 += xstep2;
            if (ry == y2) dx1 = x2 << 16;
            if (ry > y2) dx1 += xstep3;
            py += WIDTH;
        }
    }
}

void gfx_loadimage(char *filename, gfx_image *image) {
    int channels;
    image->data = stbi_load(filename, &(image->width), &(image->height), &channels, 4);
}

void gfx_drawimage(uint32_t *pixels, gfx_image *image, int x, int y) {
    int screen_y = y;
    unsigned char *image_data_row = image->data;

    for (int image_y = 0; image_y < image->height; image_y++) {
        if (screen_y >= HEIGHT) return;
        if (screen_y >= 0) {
            uint32_t *screen_pos = pixels + screen_y * WIDTH + x;
            int screen_x = x;
            unsigned char *image_data_pos = image_data_row;
            for (int image_x = 0; image_x < image->width; image_x++) {
                if (screen_x >= WIDTH) break;
                if (screen_x >= 0 && image_data_pos[3] > 0) {
                    *screen_pos = (
                        (image_data_pos[0] << 24)
                        | (image_data_pos[1] << 16)
                        | (image_data_pos[2] << 8)
                    );
                }
                screen_pos++;
                image_data_pos += 4;
                screen_x++;
            }
        }
        screen_y++;
        image_data_row += image->width * 4;
    }
}

void gfx_rotateimage(uint32_t *pixels, gfx_image *image, double cx, double cy, double r, double s) {
    /* width / height as measured from centre */
    double w = ((double)image->width) / 2.0;
    double h = ((double)image->height) / 2.0;

    /* calculate bounding box of rotated / scaled image */
    double cr = cos(r);
    double sr = sin(r);
    double wcr = fabs(s*w*cr);
    double hsr = fabs(s*h*sr);
    double hcr = fabs(s*h*cr);
    double wsr = fabs(s*w*sr);

    int min_x = (int)floor(cx - wcr - hsr);
    if (min_x < 0) min_x = 0;
    int max_x = (int)ceil(cx + wcr + hsr);
    if (max_x > 191) max_x = 191;
    int min_y = (int)floor(cy - hcr - wsr);
    if (min_y < 0) min_y = 0;
    int max_y = (int)ceil(cy + hcr + wsr);
    if (max_y > 191) max_y = 191;

    for (int sy = min_y; sy <= max_y; sy++) {
        for (int sx = min_x; sx <= max_x; sx++) {
            double rx = ((double)sx - cx) / s;
            double ry = ((double)sy - cy) / s;
            int ix = (int)round(rx * cr + ry * sr + w);
            int iy = (int)round(ry * cr - rx * sr + h);
            if (ix >= 0 && ix < image->width && iy >= 0 && iy < image->height) {
                unsigned char *pix_val = (image->data) + (iy * image->width + ix) * 4;
                if (pix_val[3] > 0) {
                    uint32_t *scr_pos = pixels + sy * 192 + sx;
                    *scr_pos = (
                        (pix_val[0] << 24) | (pix_val[1] << 16) | (pix_val[2] << 8)
                    );
                }
            }
        }
    }
}
