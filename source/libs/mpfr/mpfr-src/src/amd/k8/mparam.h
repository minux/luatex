/* Various Thresholds of MPFR, not exported.  -*- mode: C -*-

Copyright 2005-2017 Free Software Foundation, Inc.

This file is part of the GNU MPFR Library.

The GNU MPFR Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MPFR Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MPFR Library; see the file COPYING.LESSER.  If not, see
http://www.gnu.org/licenses/ or write to the Free Software Foundation, Inc.,
51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA. */

/* Generated by MPFR's tuneup.c, 2011-07-31, gcc 4.3.2 */
/* gcc11.fsffrance.org (Dual-Core AMD Opteron(tm) Processor 2212)
   with gmp 5.0.2.
   Keith Briggs sent similar parameters obtained on a AMD Athlon
   (__tune_k8__, __x86_64, __amd64, __k8) */


#define MPFR_MULHIGH_TAB  \
 -1,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,9,11,11, \
 12,12,11,15,14,14,15,16,18,18,19,20,18,19,19,20, \
 22,22,23,24,26,30,28,28,32,30,30,32,32,30,32,32, \
 32,30,30,32,32,38,32,32,36,40,40,40,36,38,40,38, \
 40,44,40,44,44,44,44,48,48,46,48,48,56,56,56,56, \
 56,56,56,60,64,60,60,64,64,64,64,64,64,64,64,64, \
 72,72,72,72,72,72,72,72,72,72,72,72,80,80,80,80, \
 80,80,80,80,80,80,80,80,80,80,80,80,93,80,93,93, \
 93,76,80,93,80,93,93,90,93,93,93,93,93,93,93,93, \
 93,93,111,105,93,117,105,105,117,117,111,117,117,105,117,117, \
 117,105,117,117,117,117,117,117,117,117,117,117,117,117,117,117, \
 117,117,117,117,116,117,116,117,117,117,117,117,117,117,117,117, \
 117,117,140,117,140,140,140,140,140,148,148,147,140,156,156,156, \
 148,148,156,148,156,156,156,156,156,155,156,155,156,155,156,156, \
 156,156,156,156,156,156,156,156,172,172,172,156,172,172,172,172, \
 172,172,172,172,180,180,180,180,180,180,180,188,188,188,188,188, \
 180,188,188,188,188,187,188,188,188,188,188,188,188,188,188,188, \
 188,188,188,188,188,188,188,188,188,188,188,188,188,220,220,204, \
 220,220,220,219,220,220,220,220,220,219,220,219,220,219,220,220, \
 220,236,236,220,236,219,233,236,233,252,236,252,236,252,252,236, \
 235,236,236,252,252,236,236,252,252,236,252,252,236,251,250,251, \
 252,252,251,252,252,252,252,252,252,252,252,252,252,252,252,252, \
 252,252,284,252,284,284,284,284,284,252,284,284,284,284,284,284, \
 283,284,284,284,284,284,284,284,284,284,284,283,284,284,284,284, \
 284,284,283,284,284,284,284,284,284,284,284,284,284,300,284,300, \
 300,316,300,300,300,316,300,300,316,316,316,316,316,316,316,316, \
 316,316,316,316,316,316,316,316,316,316,316,316,316,316,316,316, \
 316,315,316,316,315,316,316,316,315,316,316,316,316,316,316,316, \
 316,316,316,368,316,316,367,368,368,368,368,368,368,368,368,368, \
 368,368,368,368,368,368,368,368,368,368,368,368,368,368,368,368, \
 368,368,368,368,368,368,367,368,368,368,368,367,368,367,367,368, \
 368,367,367,368,367,368,368,367,368,368,368,367,368,368,368,368, \
 367,368,416,415,416,416,416,416,416,416,415,416,416,416,416,416, \
 416,416,416,416,416,416,415,416,415,416,415,416,416,416,416,416, \
 416,415,416,416,415,416,416,415,416,416,440,416,416,416,440,416, \
 415,416,415,416,464,464,464,464,464,464,463,464,464,464,463,464, \
 464,464,464,464,464,463,464,464,474,474,464,464,473,474,474,504, \
 474,474,504,504,504,504,504,504,504,504,504,504,504,504,504,504, \
 504,504,504,504,504,504,504,504,504,503,504,504,504,504,504,504, \
 503,504,504,504,504,504,503,504,504,504,504,504,503,504,504,503, \
 504,504,504,504,504,504,504,504,503,504,504,504,504,504,503,504, \
 504,504,504,504,568,568,568,504,568,568,568,568,568,568,568,568, \
 568,567,568,568,568,567,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,567,567,568,566,568,568,568,567, \
 568,568,568,568,568,568,568,568,568,568,567,568,568,567,568,568, \
 568,568,568,568,567,568,568,566,567,568,568,568,568,568,568,568, \
 568,567,568,568,567,568,567,568,567,568,567,568,567,568,632,568, \
 600,632,632,600,631,632,632,632,632,631,600,600,632,632,600,631, \
 632,632,632,632,632,632,631,632,632,632,631,632,631,632,632,632, \
 632,632,631,632,632,631,632,632,632,631,632,632,632,632,631,632, \
 632,632,632,632,630,632,632,632,632,632,631,632,631,632,631,632, \
 632,632,632,632,632,632,632,632,631,632,632,632,632,632,632,631, \
 632,632,632,631,632,632,632,736,632,631,632,736,632,632,632,632, \
 736,736,736,736,736,736,736,736,736,736,736,736,736,736,736,736, \
 736,734,736,736,735,736,736,735,736,736,736,736,736,736,736,736, \
 736,736,736,736,736,736,736,736,736,736,736,736,736,736,736,736, \
 736,736,736,736,736,736,735,736,736,736,736,736,736,736,735,736, \
 736,736,735,736,735,736,736,736,735,736,736,736,736,736,736,736, \
 736,736,736,735,736,736,736,735,736,736,736,736,736,735,736,736, \
 736,736,736,736,736,736,736,736,736,735,736,735,736,832,736,832, \
 832,832,832,832,831,832,832,831,832,832,832,832,832,832,831,832, \
 831,832,831,832,832,831,832,832,832,832,832,832,831,832,832,832, \
 831,832,832,832,832,832,831,832,832,832,832,832,831,832,831,832, \
 832,832,831,832,831,832,831,832,832,832,832,832,832,832,831,832 \
  
#define MPFR_SQRHIGH_TAB  \
 -1,0,0,0,0,-1,-1,-1,-1,-1,7,7,8,9,9,11, \
 11,11,11,11,13,13,15,15,17,17,18,17,17,17,18,20, \
 20,21,23,23,20,21,23,23,24,25,23,23,24,25,26,25, \
 28,27,28,29,28,31,34,31,34,34,34,34,34,34,34,34, \
 40,34,40,36,40,42,40,42,40,40,42,42,48,48,46,46, \
 42,46,48,48,46,50,46,52,54,54,48,56,54,50,54,52, \
 50,54,54,52,54,54,58,58,62,64,58,58,58,64,62,64, \
 58,64,66,72,68,68,68,68,68,62,66,72,72,72,68,68, \
 72,72,68,72,72,72,72,72,80,84,80,80,80,84,80,80, \
 80,84,84,84,84,84,92,80,80,84,92,84,92,92,92,96, \
 100,92,100,92,96,92,92,96,100,100,96,96,96,100,100,96, \
 96,96,92,92,96,96,108,100,96,100,100,112,112,112,112,112, \
 112,112,108,112,100,104,112,116,104,116,116,108,112,112,112,116, \
 112,112,112,112,112,141,135,141,116,135,135,135,141,141,141,141, \
 141,141,141,141,141,141,135,135,141,141,147,141,141,141,140,141, \
 141,141,147,147,141,147,147,147,147,147,147,147,147,147,147,159, \
 153,147,147,159,159,159,159,159,159,159,159,159,165,171,171,171, \
 165,170,171,171,165,171,171,171,165,171,171,171,183,171,171,171, \
 183,183,171,183,171,183,183,183,183,183,183,183,189,189,183,195, \
 171,171,188,171,171,195,171,171,171,195,195,182,195,177,182,183, \
 183,181,182,183,183,189,183,194,195,195,194,195,195,195,195,195, \
 195,195,213,195,195,195,195,195,189,195,195,195,195,195,195,195, \
 212,195,213,195,195,195,213,195,195,195,195,195,195,213,213,201, \
 195,195,195,213,213,213,213,213,212,213,213,213,213,213,213,213, \
 237,212,213,213,213,213,213,225,213,213,213,249,213,249,237,237, \
 237,237,237,249,237,237,237,237,249,237,249,237,237,237,249,249, \
 249,236,237,249,249,249,249,249,249,249,249,249,249,249,249,249, \
 249,273,273,273,273,273,273,272,273,273,273,273,273,273,273,273, \
 273,273,273,273,273,273,273,285,273,284,285,285,285,285,297,284, \
 285,297,285,297,297,297,297,297,297,297,297,296,297,296,297,296, \
 297,297,297,297,297,297,297,273,297,273,309,273,273,273,273,320, \
 321,321,321,285,285,285,285,285,284,285,297,285,297,297,297,297, \
 297,297,333,297,297,297,296,297,309,297,297,297,297,285,309,348, \
 297,297,348,348,285,321,297,321,321,297,320,321,321,297,297,321, \
 297,321,333,366,333,333,309,333,333,333,332,333,297,321,321,321, \
 321,348,321,345,348,348,348,366,348,347,348,365,366,365,333,366, \
 402,366,333,366,366,366,366,402,366,365,366,366,366,366,366,366, \
 366,348,420,420,348,420,419,420,419,420,420,420,366,366,420,366, \
 366,365,366,402,366,366,366,366,402,402,402,401,402,402,402,401, \
 420,401,402,402,420,420,420,420,402,420,420,420,420,419,420,419, \
 420,419,420,420,402,401,420,402,402,420,402,420,402,401,420,420, \
 420,420,420,420,420,402,420,420,402,420,420,420,420,420,420,420, \
 420,420,420,420,420,420,420,420,420,419,420,420,438,420,420,438, \
 420,420,420,420,420,420,438,420,437,438,438,420,438,438,420,420, \
 438,420,420,438,438,420,420,420,438,420,420,420,420,419,420,420, \
 420,420,420,420,474,419,420,420,420,438,419,456,438,474,438,437, \
 438,438,438,438,438,420,438,420,438,438,438,420,420,419,420,420, \
 438,420,438,419,420,420,420,420,420,419,420,474,420,420,438,420, \
 438,473,474,474,474,473,438,474,474,438,438,437,438,438,438,438, \
 438,438,474,437,437,474,560,456,473,474,535,536,474,560,536,536, \
 560,560,560,560,560,560,560,560,560,560,560,560,560,560,560,560, \
 560,560,559,560,560,560,560,560,560,560,560,560,560,560,560,560, \
 559,560,560,560,560,560,560,560,560,560,560,560,560,560,560,560, \
 560,560,560,560,560,560,560,560,560,560,560,560,560,560,560,560, \
 559,560,560,560,560,560,560,560,559,560,559,560,560,560,560,559, \
 559,560,559,560,560,560,560,560,560,559,560,560,559,560,559,560, \
 560,560,559,560,560,560,560,559,560,560,560,560,560,560,560,560, \
 560,560,560,560,560,560,560,560,560,560,559,584,560,560,560,560, \
 559,560,560,559,560,560,560,560,560,560,559,559,560,560,560,560, \
 560,560,559,560,560,560,560,560,560,583,560,560,584,560,584,584, \
 584,560,583,583,584,584,582,584,584,584,583,584,584,584,584,584, \
 727,584,728,632,728,560,727,728,728,560,584,560,560,727,728,728, \
 727,728,728,728,608,728,728,724,728,728,760,727,728,727,728,728, \
 728,759,728,696,728,728,728,728,728,727,759,760,727,760,760,727 \
  
#define MPFR_DIVHIGH_TAB  \
 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15, \
 14,15,18,19,18,14,22,18,18,18,18,20,18,18,20,22, \
 22,22,23,24,26,26,26,28,24,30,28,28,28,30,30,32, \
 32,34,32,34,32,34,34,31,32,37,32,37,32,33,34,35, \
 39,37,37,39,39,37,39,39,39,39,39,39,43,44,46,46, \
 47,45,46,48,52,48,50,50,48,46,50,50,52,56,54,50, \
 60,60,60,56,56,64,61,60,56,64,60,64,64,64,64,60, \
 64,64,64,63,64,64,64,64,64,64,70,64,64,68,78,66, \
 74,69,70,74,70,69,74,78,78,74,74,74,74,78,78,79, \
 78,78,78,78,78,78,78,78,78,78,88,88,88,88,88,88, \
 92,92,88,91,92,88,95,96,96,96,96,92,92,88,92,112, \
 112,112,112,108,112,112,112,112,120,112,112,112,120,112,120,112, \
 112,120,120,120,104,112,112,128,112,112,112,120,112,112,120,120, \
 128,120,120,120,112,120,128,128,128,120,128,128,128,128,128,128, \
 128,128,120,128,128,128,128,128,120,128,128,128,128,128,128,128, \
 128,128,128,128,128,128,126,128,128,128,127,128,128,128,144,148, \
 136,136,144,144,140,141,140,148,148,151,144,148,148,160,156,148, \
 160,160,160,160,156,156,156,148,148,156,148,160,160,160,148,156, \
 148,148,148,156,156,156,156,160,156,156,158,156,156,157,160,156, \
 156,160,160,158,156,156,158,158,159,160,159,160,160,160,184,183, \
 184,184,180,184,184,176,184,184,184,184,186,184,184,184,184,184, \
 184,184,186,186,192,184,184,186,184,184,186,183,184,185,186,184, \
 184,184,186,185,216,184,192,186,208,192,192,184,208,216,224,209, \
 208,216,224,222,224,216,208,224,224,224,208,224,210,224,216,234, \
 208,216,216,208,224,216,216,224,224,222,224,224,224,216,224,224, \
 224,221,224,216,232,224,224,224,224,224,224,224,208,224,222,224, \
 224,224,216,224,232,224,224,216,224,256,224,256,224,248,224,224, \
 224,224,224,224,224,222,224,232,222,224,224,224,224,224,230,232, \
 256,234,232,240,240,233,240,233,248,240,240,240,240,238,240,256, \
 248,240,248,256,256,256,256,256,256,248,256,256,256,256,256,256, \
 256,256,256,256,256,256,248,256,248,256,248,248,256,256,256,256, \
 256,256,256,256,280,296,280,280,256,288,296,280,256,280,280,296, \
 296,296,280,280,280,296,296,296,280,280,280,296,280,296,295,312, \
 312,312,312,296,312,311,312,312,312,296,296,312,296,296,312,312, \
 312,296,312,312,296,311,312,312,312,312,312,312,312,312,312,296, \
 296,312,311,296,312,312,312,312,312,312,312,312,296,312,312,312, \
 312,312,312,312,312,312,312,312,296,312,312,312,312,312,312,312, \
 312,312,312,312,311,311,312,312,312,312,312,312,312,312,312,312, \
 312,312,312,312,312,312,312,312,312,312,312,312,312,312,320,316, \
 320,319,319,320,320,320,319,320,319,320,360,320,320,320,352,360, \
 368,352,368,368,369,372,344,370,372,366,369,352,370,370,370,360, \
 360,360,360,368,360,372,372,360,370,368,372,367,368,360,370,368, \
 372,371,370,372,372,372,371,368,368,368,370,370,368,368,368,372, \
 370,372,367,368,368,370,368,368,360,368,360,368,370,368,368,367, \
 360,368,368,368,372,368,372,368,368,368,372,371,368,416,368,367, \
 372,368,372,372,372,370,440,372,368,416,368,368,368,433,448,369, \
 440,416,415,416,440,448,440,440,448,448,440,448,440,440,448,416, \
 416,416,415,440,417,416,416,418,432,418,417,448,416,432,416,432, \
 416,420,440,448,408,416,432,448,416,448,448,448,440,440,440,440, \
 448,440,440,440,440,448,416,448,440,416,448,416,448,448,440,448, \
 416,440,416,419,417,448,416,420,416,432,433,420,417,432,416,424, \
 440,440,440,440,448,437,440,440,448,440,440,448,448,448,448,432, \
 480,440,440,440,448,448,448,448,448,448,440,448,445,432,448,448, \
 448,439,448,448,468,448,448,440,440,440,448,448,468,496,480,448, \
 440,448,440,468,440,496,440,466,448,448,448,468,448,440,448,448, \
 448,496,496,496,496,448,448,496,448,468,468,448,448,468,480,467, \
 468,512,496,512,512,496,496,480,512,480,496,512,512,512,496,512, \
 512,496,496,496,512,512,512,512,512,496,512,512,496,496,496,496, \
 512,512,496,512,496,496,496,496,512,512,512,496,480,496,496,496, \
 496,496,512,512,512,512,496,496,512,496,496,496,512,480,496,544, \
 512,496,496,496,576,512,496,560,496,496,512,561,496,560,496,560, \
 560,496,512,512,512,496,512,512,512,576,512,512,512,512,512,512, \
 512,512,512,512,560,512,560,512,576,512,576,592,512,560,591,512, \
 592,512,576,512,576,592,592,624,592,576,560,512,592,576,592,592 \
  
#define MPFR_MUL_THRESHOLD 19 /* limbs */
#define MPFR_SQR_THRESHOLD 18 /* limbs */
#define MPFR_DIV_THRESHOLD 34 /* limbs */
#define MPFR_EXP_2_THRESHOLD 1031 /* bits */
#define MPFR_EXP_THRESHOLD 11014 /* bits */
#define MPFR_SINCOS_THRESHOLD 26907 /* bits */
#define MPFR_AI_THRESHOLD1 -12404 /* threshold for negative input of mpfr_ai */
#define MPFR_AI_THRESHOLD2 1024
#define MPFR_AI_THRESHOLD3 19611
/* Tuneup completed successfully, took 759 seconds */
