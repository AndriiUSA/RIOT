/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   signal.h
 * Author: Alexander
 *
 * Created on 7 февраля 2019 г., 11:59
 */

#ifndef SIGNAL_H
#define SIGNAL_H

#ifdef __cplusplus
extern "C" {
#endif

#include "dsp/dsp_type.h"    

#define FREQ_SAMPLE 400
#define DATA_SIZE   1024    
    
const q15_t signal[1024] = {
     0,  14876,  26510,  32365,  31164,  23170,  10126,  -5126, -19261, -29197, -32768,
-29197, -19261,  -5126,  10126,  23170,  31164,  32365,  26510,  14876,      0, -14876,
-26510, -32365, -31164, -23170, -10126,   5126,  19261,  29197,  32767,  29197,  19261,
  5126, -10126, -23170, -31164, -32365, -26510, -14876,      0,  14876,  26510,  32365,
 31164,  23170,  10126,  -5126, -19261, -29197, -32768, -29197, -19261,  -5126,  10126,
 23170,  31164,  32365,  26510,  14876,      0, -14876, -26510, -32365, -31164, -23170,
-10126,   5126,  19261,  29197,  32767,  29197,  19261,   5126, -10126, -23170, -31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,
-31164,
-23170,
-10126,
5126,
19261,
29197,
32767,
29197,
19261,
5126,
-10126,
-23170,
-31164,
-32365,
-26510,
-14876,
0,
14876,
26510,
32365,
31164,
23170,
10126,
-5126,
-19261,
-29197,
-32768,
-29197,
-19261,
-5126,
10126,
23170,
31164,
32365,
26510,
14876,
0,
-14876,
-26510,
-32365,


};

#ifdef __cplusplus
}
#endif

#endif /* SIGNAL_H */

