//
//
//
//Author: Gordon Griesel
//Date: April 7, 2019
//Purpose: Framework for a coding exam
//
//See instructions on assignment web page to produce a unit-test
//for the vec_length function.
//
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//type defines
typedef double Flt;
typedef Flt Vec[3];

//prototype
Flt vec_length(Vec v);

//Array of vector values
const Flt arr[] = {
    1.0,   0.0,
    1.0,   1.0,
    -1.2,   2.5,
    99.9,  99.9,
    2.2,  -1.2,
    0.0,   0.0



};

const Flt mytest[] = {
-3.77983,   -8.11711,   -6.19391,   -7.48675,   0.46671,    7.98604,    -3.78165,    
9.45696,    -1.08659,   -4.1334,    -1.09663,   4.13138,    -0.42783,   -3.57757,
9.33954,    -1.55691,   0.07     ,   3.31899,   4.83957,    -5.8867,    2.63395 ,
-8.08769,   -2.86933,    7.61333,   -6.52007,   -4.95898,   -0.09036 ,  -3.03667,
2.38575,    -7.40187,   0.04122,    -6.80627,   5.51272,    1.45683,    4.57013 ,
9.48918,    -8.59851 ,  -1.32101,   -3.70768  , 6.27192,    -8.68706,   -7.2146,
-1.25128  , 9.30296,    -8.0989,    -6.20071,   -4.00698  , -6.99062,   3.46622, 
8.09713,    7.58631,    -8.61934,   -0.94035 ,  3.3763,     -0.35179  , -2.9038,
-1.1184,    -7.72024,   -8.41728  , -2.11187,   0.68743,    -1.37543,   0.63395, 
-7.52031,   9.57682,    -2.95578,   -2.57512  , -4.62305,   7.75325,    9.6709,
-3.2329,    1.96071,    3.24047,    5.54636,    -6.56551  , -1.95618,   5.66838 ,
-2.26684,   -0.78715,   -5.01144,   1.03279 ,   9.53901 ,  -5.08404  , -8.89627,
9.77463,    -7.22131,   3.7394 ,    -4.56671,   9.97965,    1.46945,    8.51326 ,
5.11009,    -7.15675 ,  -5.66156,   -1.673 ,    -1.11353,   -1.57452  , -5.20144,
-5.09771  ,  -1.24036,  0.53834,    -6.91867,   -2.48538  , 0.40908,    -8.12148,  
0.06069,    -4.82922  , -4.55551,   -1.21708  , 3.0574,     -8.05613  , 5.91589,
9.71445,    0.28716,    8.04681,    4.72145,    6.80278,    7.5123,     -2.07862,  
-7.8795,    1.18118,    9.7201,     -4.83541  , -8.23489,   3.82251,    8.43613,
4.35203 ,   -6.47285,   2.81431 ,   -5.15347,   8.56799 ,   -4.02313,   -6.51083,   
0.30913,    1.42963 ,   -0.50014,   -0.78004 ,  -3.59786,   -2.83275  ,  8.32878,
6.76492 ,   4.38949,    6.91664 ,   7.89187,    -7.26159 ,  -7.13336,   -2.15649,  
8.03831,    -1.65255  , 4.36534,    -6.1348,    7.95367,    -5.64419 ,   7.35067,
5.67945,    0.80175,    -4.80875  , -4.73105,   -6.83917  , -2.25526,   -0.38863,  
0.43089,    -1.53079  , 9.88279,    4.24814 ,   -3.46922,   -5.51555  , 4.98163,
2.3323 ,    3.66819,    -5.53006  , -2.12387,   2.14508 ,-  6.98257,    -0.23783,   
9.60791,    0.0388 ,    -6.58923,   -6.70644  , -8.38403,   -2.85325  , -2.0816,
-7.09998,   -7.14648,   5.52171 ,   4.83477,    -7.2891 ,   -8.29981,   -6.28238,  
6.42191,    6.02982,    -3.63298,   -1.22221,   -4.31825,   -3.70228,   5.90129,
-6.18031,   -8.73192,   -6.8784,    9.54712,    4.38189,    -8.8039,    -8.10371,   
-5.71221,   9.7097,     7.11065,    -6.52233,   -3.05296,   1.62879,    -5.61525,
9.28604,    -1.06013,   -0.79205 ,  1.44665,    0.99377 ,   -3.22254,   -3.02644,   
-4.39218,   -1.10439  , 0.41721,    -2.47215,   -2.42252,   3.52452 ,   -4.84705,
-1.4623,    -7.4122,    0.52767,    0.45081,    -8.10254,   6.7549,     -6.46763,   
8.03804,    -6.35414  , 6.73533,    -2.84746,   -2.14044,   4.43703 ,   -6.5084,
-2.35545 ,  -6.0531,    -4.4653,    3.1947,     -6.35449  , 1.93546,    -1.30964,  
-6.13683,   -8.09879  , 1.7011,     -1.56357  , 6.10445,    -6.03599  , 4.23533,
6.72693,    0.95528,    3.90218 ,   6.47746,    -0.32785 ,  -8.44029,   2.49517, 
-2.70276,   0.16041,    1.29485,    -7.00405 ,  1.13693,    -2.75862  , -0.30275,
-6.06742,   2.29071,    -6.75401,   1.96902,    -1.55352 ,  -7.41529,   -6.85558,  
-1.91571,   4.38153,    -4.70306,   5.59179,    -3.7666,    6.37034,    -0.78774,
7.90951,    2.04146,    -5.66783,   9.42354,    1.39256,    -5.46741,   -3.8827 ,
6.31137,    -5.60434 ,  -4.60604,   -0.3091,    6.72645,    -7.04014 ,  5.92268,
-4.86507 ,  -0.10947,   -8.06801 ,  3.75903,    3.18257 ,   -5.61187,   -2.07928,   
2.56865,    -1.11998  , 8.37183,    -6.23421,   -6.79895,   8.9275 ,    1.37199,
-2.70533 ,   8.6098,    -1.49967  , -8.84053,   3.9185 ,    6.36057,    9.74871, 
-5.46119,   6.10746,    3.09036,    1.46219,    -8.99283,   -6.79178  , -3.68397,
6.68801 ,-  6.57596,    -7.96616  , -7.75937,   -7.59989   ,-2.11367,   -5.7531 ,
1.66297,    5.20177 ,   2.09588,    -4.81376 ,  0.37246,    0.37963 ,   1.55987,
6.8759 ,    5.56107,    7.98511,    5.74664,    6.98728,    0.95888,    7.8452 , 
-3.48041,   7.18256 ,   5.12568,    -2.77844 ,  4.75274,    -4.87479  , 7.99028,
-0.44985   ,5.93263,    1.49369 ,   9.81625,    5.56289 ,   5.53655,    -3.50457,   
6.05086,    -7.42955  , -5.35645,   8.76923 ,   -0.47955,   -5.72681 ,  3.83092,
1.8212 ,    -6.54519,   8.38744 ,   -1.00408,   -1.18783 ,  -4.21264,   -8.67608,  
-3.14231,   -7.09145   ,-3.13721,   0.50634 ,   4.59272,    -5.88683 ,  3.36937,
-2.79971  ,  0.66494,   3.11976 ,   6.688,      -4.31609 ,  -4.80975,   -0.02239,  
8.74828,    -4.39403   ,2.79638,    8.65917 ,   -3.71915,   9.87356 ,   3.22554,
-3.40509 ,   1.70744,   -7.62762  , -4.84215,   -8.15415   ,-0.79046,   3.39979 ,
-3.61233,   -4.86405 ,  5.89699,    -1.30663  , -1.2002,    4.08065 ,   -2.75005,
9.47549 ,   2.95914,   -5.33343  ,  -2.68597,   1.47188 ,   -1.31769,   6.89185 ,
-4.46958,   0.9181  ,   6.87333,    2.77033 ,   -4.65203,   3.14777 ,   -8.94762,
-2.69767 ,   -6.66569,  5.29344 ,   7.12357,    -5.5624 ,   -0.28617,   7.39614 ,
-5.46994,   -0.93951 ,  -4.9253,    -8.05197  , 6.24868,    -8.40335   ,7.82858,
7.88096 ,   -8.00169,   -5.66738 ,  -8.84452,   7.27905 ,   -7.19067,   1.52316 ,
-7.41495,   -3.88488 ,  -7.14667,   -3.07197  , -3.21308,   -6.9644 ,   -2.81319,
-4.98461 ,   4.77648,   5.77479 ,   6.34952,    6.505  ,    7.04074,    8.85007, 
5.31955,    6.90461,    0.12682,    1.98015 ,   -8.50018,   -2.71327 ,  -0.65049,
5.53633 ,   -3.62133,  -8.84485 ,   -1.66875,   -5.31922  , -1.4723,    -4.43156, 
2.77082,    -1.90962,   -1.52949,   7.59733 ,   2.08427,    2.58409 ,   -6.78997,
1.55954 ,   2.26991,    7.64858 ,   9.14773,    -2.52101 ,  -1.90435,   5.62335 ,
-1.22898,   -8.45815 ,  -4.68064,   2.78587 ,   7.40205,    -0.51368 ,  8.64191,
-8.14806  , -3.55365,   7.71627 ,   -1.86561,   -2.71787 ,  -4.84506,   2.25058 ,
-3.09775,   4.67327,    5.26641,    9.58177 ,   1.67602,    -0.92193 ,  5.47455,
4.11646 ,   -8.28847,   -2.84211 ,  8.57605,    -3.28956  , -4.11276,   0.04217 ,
2.40758,    8.30983 ,   0.67455,    -4.05903 ,  6.23241,    -2.09157  , 1.04557,
-3.47988   , 8.64122,   9.63658 ,   9.352750,
0,0,0,0
};

//double myUtest(int arc, char *argv[])
        int main(int argc, char *argv[])
        {
#ifdef UnitTest

            float tolerance;
            // (argc != 0) {

            //Program to calculate vector normalization and length.
            //
            printf("                                    \n");
            printf("3350 software engineering           \n");
            printf("                                    \n");
            printf("Calculation of vector lengths:      \n");
            printf("                                    \n");
            printf("     x         y         length     \n");
            printf("     --------  --------  ---------- \n");
            //read until sentinel found.
            int i=0;
            Vec v = { arr[i*2+0], arr[i*2+1] };
            do {
                Flt ret = vec_length(v);
                printf("%3i  %8.5lf  %8.5lf  %10.5lf\n", i+1, v[0], v[1], ret);
                ++i;
                v[0] = arr[i*2+0];
                v[1] = arr[i*2+1];
            } while (!(v[0]==0.0 && v[1]==0.0));
            printf("                                      \n");
            printf("3350 software engineering             \n");
            printf("Unit Test of Vector Length:           \n");
            printf("                                      \n");
            printf("    x           y           length    \n");
            printf("    -------     --------    --------- \n");
            printf("\nProgram complete.\n\n");
            return 0;

            do{
                    Flt tolerance = vec_length(w);
                    printf("%3i %8.5lf  %8.5lf  %10.5lf\n", i+1, w[0], w[1], tol);
                    ++i;
                    w[0] = arr[i*2+0];
                    w[1] = arr[i*2+1];
                }
            while (!(w[0]==0.0 && w[1]==0.0));
#endif
        }

    Flt vec_length(Vec v)
    {
        //Normalize a vector.
        //Return the original length of the vector.
        //
        //input: the 2 components of a vector
        //output: the pre-normalized vector length is returned
        //        the vector argument is scaled to a length of 1.0
        //
        //A degenerate vector causes an error condition.
        //It will return a length of 0.0
        //and an arbitrary vector with length 1.0.
        //
        //calculate the vector dot product with itself...
        Flt dot = v[0]*v[0] + v[1]*v[1];
        //check for degenerate vector...
        if (dot == 0.0) {
            //set an arbitrary vector of length 1.0
            //printf("ERROR vector magnitude is zero.\n");
            v[0] = 1.0;
            v[1] = 0.0;
            return 0.0;
        }
        //vector has a magnitude so continue.
        Flt len = sqrt(dot);
        Flt oolen = 1.0 / len;
        v[0] *= oolen;
        v[1] *= oolen;
        return len;
    }


