const unsigned int knockSampleRate = 22050;
const unsigned int knockSampleCount = 598;
const signed char knockSamples[] = {
-1, 8, 8, -3, -7, -4, 5, -2, -12, -6, 10, 17, -1, -9, -14, -25, 
-31, -12, -20, -22, -2, 10, 16, 19, 6, 0, -8, -10, 10, 11, 12, 24, 
18, 8, 9, 12, -3, -27, -24, -10, -5, -1, 5, 19, 33, 39, 37, 21, 
-3, -27, -50, -69, -57, -27, 0, 12, 36, 96, 91, 76, 61, 25, -7, -43, 
-65, -79, -80, -68, -33, -1, 26, 47, 39, 11, 8, 8, -16, -46, -65, -62, 
-22, 3, 29, 55, 60, 43, 33, 12, -15, -41, -76, -93, -68, -48, -34, -25, 
-25, 0, 21, 21, 11, 3, 4, 21, 39, 45, 53, 60, 46, 18, 1, -5, 
-19, -39, -59, -48, -26, -16, -9, 9, 15, 27, 31, 22, 27, 39, 28, 36, 
60, 78, 79, 42, 15, 0, -8, -25, -53, -72, -76, -50, -17, -2, -14, -16, 
9, 41, 52, 48, 28, -4, -15, -1, 11, 24, 23, 12, 6, 17, 36, 18, 
5, -2, -26, -41, -37, -29, -32, -48, -41, -12, 21, 33, 35, 31, 48, 65, 
8, -33, -42, -43, -53, -56, -48, -47, -35, -21, -27, -29, -21, -30, -46, -46, 
-38, -21, 3, 18, 15, 13, 25, 18, 8, -5, -24, -35, -38, -12, 24, 42, 
62, 99, 127, 106, 43, -30, -51, -32, -59, -99, -92, -36, -2, -25, -15, 12, 
15, 3, -4, 19, 36, 20, 0, 18, 81, 91, 70, 50, 34, 15, -12, -6, 
-1, -10, -17, -10, 15, 13, 4, -28, -88, -112, -77, -53, -33, -6, 16, 38, 
52, 48, 26, 1, -30, -65, -43, -11, 3, -1, -11, 10, 34, 28, -6, -28, 
-17, 15, 57, 80, 75, 52, 25, 22, 12, -28, -66, -82, -69, -15, 32, 29, 
6, 1, 24, 34, 9, -33, -70, -56, -23, 17, 61, 93, 75, 58, 62, 52, 
12, -33, -65, -72, -46, 2, 37, 55, 43, 32, 25, 14, -11, -62, -80, -90, 
-85, -51, -4, 34, 36, 41, 67, 70, 33, 17, -3, -9, -21, -28, 1, -4, 
-26, -35, -20, -2, -14, -44, -58, -41, -35, -38, -26, -15, -11, -11, 1, 29, 
50, 64, 64, 54, 19, -25, -30, -45, -62, -61, -7, 40, 67, 87, 97, 78, 
19, -16, -16, 2, -11, -35, -16, 26, 52, 40, 11, -30, -41, -40, -35, -34, 
-28, -5, 7, 31, 49, 42, 19, -6, -19, -40, -48, -41, -53, -58, -44, -16, 
7, 15, 23, 31, 35, 33, 29, 18, 3, -7, -17, -14, -5, -9, -20, -23, 
-4, 9, -2, -26, -26, -20, -20, -19, -21, -23, -16, -2, 20, 40, 34, 12, 
-3, -14, -21, -18, -1, 17, 41, 76, 103, 103, 59, 6, -18, -21, -31, -86, 
-97, -75, -49, -18, 5, -1, -7, -7, 0, 15, -1, -27, -26, 5, 39, 62, 
89, 79, 56, 49, 42, 31, -1, -47, -79, -72, -38, -20, -26, -22, -23, -26, 
-22, -7, -17, -39, -43, -18, 10, 19, 11, 4, 10, 22, 29, 16, 13, 11, 
-9, -12, 9, -2, -14, -14, -7, 3, 8, 0, -7, -6, 3, 8, 1, 3, 
15, 13, 7, 34, 40, 29, 11, 4, -3, -31, -39, -43, -35, -28, -12, 3, 
10, 9, -1, -7, -10, -15, -18, -19, -11, 7, 28, 45, 51, 32, 15, 12, 
11, 4, -9, -26, -40, -34, -27, -20, -15, -16, -10, 12, 15, 11, 0, -14, 
-18, -10, -1, 2, -7, -17, -4, 19, 37, 28, 9, 4, 12, 19, 21, 18, 
4, -19, -19, -10, -3, -13, -25, -1, 21, 36, 43, 31, -2, -8, 1, 16, 
28, 24, 8, 30, 15, 0, };