const unsigned int revSampleRate = 22050;
const unsigned int revSampleCount = 2473;
const signed char revSamples[] = {
0, 3, 14, 23, 32, 41, 50, 51, 50, 48, 46, 44, 36, 30, 23, 18,
14, 8, 6, 6, 6, 7, 11, 21, 28, 34, 37, 36, 31, 18, 8, -3, 
-12, -20, -28, -30, -30, -31, -32, -36, -45, -51, -56, -59, -58, -54, -44, -38, 
-32, -28, -24, -21, -19, -20, -20, -20, -18, -10, -6, -2, -1, 1, 3, 4, 
1, -5, -10, -15, -17, -15, -8, 0, 4, 3, -3, -6, -5, 1, 8, 14, 
21, 21, 18, 12, 2, -22, -37, -47, -50, -46, -38, -25, -17, -10, -2, 5, 
9, 10, 8, 4, 2, 3, 7, 9, 8, 4, 0, -3, -7, -11, -19, -31, 
-45, -58, -72, -76, -76, -71, -62, -42, -28, -14, -2, 7, 13, 20, 24, 26, 
24, 19, 11, -2, -10, -15, -18, -19, -12, 0, 16, 30, 40, 43, 40, 36, 
30, 26, 24, 26, 30, 34, 39, 43, 47, 54, 56, 53, 47, 36, 23, 7, 
-3, -10, -15, -18, -25, -28, -28, -26, -22, -19, -14, -11, -7, -2, 4, 9, 
15, 19, 24, 27, 26, 19, 13, 8, 5, 5, 2, -6, -11, -16, -16, -14, 
-12, -9, -7, -4, 2, 9, 20, 22, 19, 12, 2, -8, -24, -32, -39, -42, 
-40, -32, -6, 11, 26, 35, 37, 34, 29, 20, 10, 2, -2, -3, -1, 4, 
10, 20, 30, 42, 51, 58, 62, 61, 51, 39, 26, 9, -10, -28, -51, -58, 
-58, -56, -50, -42, -26, -15, -5, 2, 7, 12, 11, 6, -3, -12, -18, -16, 
-13, -8, -3, 3, 11, 23, 29, 33, 32, 27, 15, 8, 1, -6, -10, -14, 
-19, -20, -19, -17, -13, -7, 3, 12, 19, 28, 37, 54, 62, 68, 72, 71, 
66, 52, 41, 29, 17, 8, -4, -10, -14, -18, -17, -13, -2, 5, 13, 19, 
22, 20, 8, -6, -21, -35, -50, -67, -74, -74, -71, -66, -58, -48, -42, -36, 
-32, -28, -25, -26, -29, -31, -33, -35, -37, -36, -35, -33, -29, -25, -12, -2, 
8, 18, 27, 34, 41, 41, 39, 34, 27, 13, 3, -7, -16, -23, -29, -33, 
-34, -33, -29, -25, -21, -14, -11, -10, -8, -6, -4, -3, -4, -5, -6, -9, 
-14, -16, -16, -15, -12, -8, 2, 9, 16, 20, 22, 23, 21, 18, 14, 10, 
5, -1, -5, -8, -9, -8, -7, -5, -3, -2, -1, -1, -4, -8, -14, -20, 
-26, -31, -39, -43, -46, -48, -49, -51, -49, -45, -40, -35, -29, -21, -16, -13, 
-10, -7, -3, 3, 5, 5, 4, 1, -3, -9, -10, -9, -5, 1, 10, 14, 
19, 24, 28, 33, 36, 36, 35, 33, 31, 31, 29, 27, 25, 22, 19, 13, 
8, 1, -6, -12, -17, -24, -26, -28, -30, -33, -36, -33, -28, -21, -11, 0, 
18, 28, 35, 37, 36, 33, 30, 28, 24, 17, 7, -10, -17, -25, -31, -35, 
-36, -30, -26, -22, -19, -18, -18, -16, -14, -9, -5, -3, -6, -11, -14, -17, 
-18, -19, -23, -25, -25, -21, -16, -11, -4, 3, 11, 19, 24, 25, 22, 15, 
7, 5, 8, 22, 31, 38, 44, 48, 52, 62, 66, 68, 66, 61, 58, 55, 
48, 36, 22, 11, 3, 5, 7, 9, 11, 14, 22, 24, 23, 19, 15, 11, 
10, 9, 8, 4, -1, -8, -14, -21, -28, -33, -33, -29, -27, -27, -30, -31, 
-28, -22, -16, -11, -3, 7, 24, 35, 42, 46, 49, 52, 50, 43, 35, 25, 
14, 1, -5, -7, -6, -5, -5, -3, -3, -2, 1, 2, 6, 9, 12, 17, 
20, 22, 20, 18, 18, 18, 22, 27, 33, 35, 35, 36, 38, 41, 39, 36, 
34, 31, 31, 27, 22, 15, 7, 0, -7, -14, -17, -20, -24, -29, -37, -41, 
-42, -41, -39, -37, -36, -35, -32, -28, -25, -24, -29, -33, -33, -28, -18, -2, 
6, 13, 19, 25, 30, 36, 37, 36, 32, 29, 29, 30, 29, 27, 24, 21, 
17, 16, 16, 14, 10, 6, 1, -1, -3, -3, -4, -4, -3, -2, 0, 2, 
2, 4, 4, 3, 2, 2, 4, 5, 3, 1, -1, -3, -4, -3, -1, 3, 
7, 11, 13, 13, 11, 6, 2, -4, -9, -10, -11, -11, -12, -12, -13, -14, 
-17, -22, -27, -33, -34, -34, -33, -32, -30, -24, -20, -17, -14, -13, -14, -19, 
-25, -33, -41, -48, -57, -62, -66, -67, -66, -63, -57, -52, -44, -35, -25, -11, 
-4, 2, 7, 10, 13, 15, 16, 16, 17, 17, 17, 15, 11, 6, 1, -5, 
-15, -22, -26, -28, -28, -25, -14, -5, 4, 10, 13, 14, 9, 4, -3, -8, 
-14, -23, -25, -23, -16, -8, -1, 6, 7, 7, 8, 9, 10, 10, 7, 5, 
2, 2, 7, 11, 14, 16, 17, 19, 24, 25, 22, 16, 8, 0, -12, -19, 
-26, -35, -44, -55, -55, -53, -48, -44, -40, -29, -21, -13, -6, -4, -5, -5, 
-3, -2, -2, -3, -5, -4, -3, -2, -1, -1, 0, 0, 1, 4, 6, 8, 
7, 5, 3, 0, -1, -3, -6, -6, -3, 3, 13, 27, 32, 31, 27, 20, 
12, -2, -10, -16, -20, -22, -17, -11, -2, 7, 17, 28, 45, 57, 66, 70, 
68, 60, 42, 30, 19, 10, 3, -4, -7, -9, -9, -8, -6, -3, -2, -1, 
2, 6, 9, 8, 5, 0, -7, -15, -24, -29, -34, -37, -39, -41, -40, -38, 
-33, -26, -16, 3, 18, 30, 37, 39, 36, 32, 32, 33, 37, 40, 40, 35, 
31, 26, 21, 16, 11, 9, 5, 0, -3, -4, -3, -2, -1, 4, 12, 23, 
36, 38, 36, 33, 30, 27, 23, 17, 12, 8, 3, -6, -11, -13, -13, -10, 
-6, 5, 13, 23, 31, 38, 44, 45, 47, 48, 49, 49, 45, 42, 36, 30, 
23, 15, 2, -6, -14, -22, -31, -40, -44, -44, -40, -33, -24, -11, -5, 0, 
3, 3, 2, 4, 7, 13, 20, 23, 25, 23, 21, 17, 11, 6, 0, 0, 
1, 2, 3, 6, 10, 13, 16, 20, 24, 27, 27, 24, 17, 9, 0, -16, 
-27, -35, -40, -44, -46, -48, -49, -50, -52, -56, -62, -66, -68, -67, -63, -57, 
-44, -34, -24, -15, -7, 1, 2, 0, -4, -9, -15, -23, -28, -31, -31, -29, 
-25, -15, -8, -1, 5, 11, 18, 19, 17, 14, 9, 4, -6, -11, -13, -15, 
-17, -18, -16, -13, -8, -4, -1, 4, 6, 5, 4, 1, -1, -4, -4, -3, 
-2, 0, 3, 6, 8, 10, 11, 11, 12, 11, 9, 8, 4, 2, 0, 1, 
3, 4, 4, 1, -2, -5, -10, -16, -23, -32, -35, -35, -31, -25, -20, -15, 
-14, -15, -18, -21, -24, -30, -33, -35, -35, -32, -26, -21, -15, -8, 0, 7, 
15, 15, 12, 6, -1, -7, -12, -15, -17, -21, -24, -23, -20, -13, -5, 3, 
14, 28, 33, 35, 35, 34, 34, 35, 37, 41, 44, 45, 43, 39, 37, 34, 
31, 29, 31, 33, 35, 35, 34, 30, 18, 5, -9, -23, -34, -40, -37, -33, 
-28, -26, -28, -35, -38, -36, -26, -10, 13, 22, 20, 9, -7, -24, -40, -43, 
-40, -31, -22, -15, -13, -15, -13, -5, 11, 39, 47, 42, 25, 0, -22, -36, 
-33, -27, -26, -33, -45, -65, -72, -69, -57, -41, -18, -8, -2, 1, -1, -5, 
-13, -17, -17, -12, -4, 4, 21, 36, 54, 70, 83, 88, 86, 84, 81, 82, 
82, 79, 72, 62, 50, 38, 30, 23, 22, 19, 14, 4, -15, -25, -28, -20, 
-3, 17, 40, 40, 29, 11, -6, -15, -5, 13, 31, 41, 43, 31, 23, 19, 
21, 28, 39, 56, 63, 62, 56, 46, 37, 30, 27, 20, 10, -6, -32, -48, 
-57, -58, -52, -41, -31, -32, -37, -42, -44, -40, -22, -10, 1, 11, 23, 42, 
55, 66, 73, 75, 74, 69, 67, 63, 59, 54, 49, 41, 33, 27, 20, 15, 
2, -10, -26, -41, -53, -58, -50, -38, -25, -14, -8, -9, -15, -23, -32, -39, 
-43, -44, -42, -41, -42, -45, -48, -50, -46, -37, -23, -5, 24, 39, 46, 44, 
35, 21, 0, -12, -25, -36, -46, -52, -49, -38, -25, -14, -7, -2, -2, -3, 
-8, -13, -18, -22, -21, -18, -11, -1, 9, 16, 17, 17, 17, 19, 23, 26, 
26, 21, 13, 3, -5, -6, -4, 1, 4, 5, -1, -9, -17, -23, -22, -9, 
2, 11, 13, 8, 0, -9, -8, -5, -1, -1, -3, -5, -4, -2, 2, 9, 
23, 31, 36, 39, 40, 42, 47, 51, 56, 59, 61, 61, 57, 52, 44, 32, 
19, 6, 0, -2, -7, -12, -19, -35, -46, -55, -59, -60, -60, -57, -54, -50, 
-46, -43, -44, -46, -45, -41, -34, -27, -22, -24, -29, -35, -43, -50, -49, -39, 
-24, -6, 8, 17, 15, 12, 9, 9, 12, 17, 16, 8, -2, -13, -27, -34, 
-39, -44, -47, -51, -59, -65, -70, -70, -67, -63, -55, -49, -42, -35, -28, -19, 
-15, -12, -10, -7, -3, 1, 2, 2, 1, -2, -5, -8, -7, -2, 3, 9, 
12, 11, 10, 12, 18, 30, 48, 55, 56, 52, 46, 40, 34, 28, 20, 12, 
5, 4, 6, 6, 3, -2, -7, -8, -5, 1, 8, 15, 23, 30, 29, 25, 
17, 11, 5, 3, 0, -5, -10, -15, -19, -18, -15, -11, -11, -15, -21, -23, 
-20, -15, -8, 6, 16, 28, 42, 53, 61, 68, 69, 69, 64, 56, 46, 34, 
25, 16, 7, -2, -15, -22, -30, -36, -43, -48, -51, -48, -41, -31, -21, -9, 
5, 12, 16, 16, 12, 3, -2, -7, -9, -9, -9, -7, -5, -3, 1, 2, 
1, -7, -13, -14, -8, 2, 22, 32, 38, 41, 42, 42, 40, 37, 30, 21, 
13, 7, 8, 10, 10, 6, 1, -10, -16, -23, -29, -33, -37, -36, -29, -19, 
-8, 1, 11, 16, 20, 23, 25, 26, 25, 24, 24, 24, 24, 23, 16, 11, 
7, 7, 8, 13, 18, 21, 22, 22, 22, 19, 18, 16, 10, 2, -7, -20, 
-28, -33, -33, -30, -24, -20, -16, -11, -5, -1, 4, 5, 7, 12, 17, 22, 
27, 29, 31, 32, 32, 32, 30, 28, 23, 19, 16, 13, 13, 14, 17, 18, 
18, 14, 11, 7, 0, -7, -16, -20, -22, -24, -24, -24, -27, -30, -35, -40, 
-44, -46, -45, -43, -40, -37, -34, -29, -25, -21, -16, -8, 0, 8, 10, 10, 
8, 5, 2, -4, -7, -11, -15, -18, -24, -27, -30, -31, -30, -24, -13, -4, 
4, 11, 15, 16, 15, 13, 10, 9, 9, 9, 8, 8, 7, 6, 5, 4, 
2, -2, -5, -8, -9, -9, -9, -7, -3, 1, 7, 9, 11, 11, 10, 9, 
2, -2, -7, -10, -12, -13, -11, -10, -10, -10, -10, -12, -11, -12, -13, -14, 
-16, -15, -14, -11, -6, -2, 5, 11, 17, 21, 22, 21, 17, 14, 8, -1, 
-8, -15, -26, -30, -32, -31, -30, -28, -26, -23, -18, -14, -11, -7, -7, -6, 
-5, -2, 3, 9, 12, 14, 15, 15, 15, 14, 13, 8, 4, 1, -6, -10, 
-13, -17, -20, -20, -19, -20, -22, -23, -25, -26, -25, -24, -24, -25, -25, -25, 
-25, -26, -29, -33, -38, -45, -48, -49, -52, -55, -62, -68, -72, -78, -82, -85, 
-90, -92, -92, -87, -79, -69, -54, -46, -41, -40, -42, -48, -50, -49, -45, -40, 
-32, -14, 2, 18, 35, 53, 70, 89, 98, 105, 109, 111, 108, 104, 100, 97, 
94, 91, 82, 75, 69, 62, 53, 37, 28, 22, 18, 17, 17, 13, 10, 8, 
8, 11, 16, 27, 34, 41, 45, 48, 56, 62, 65, 65, 64, 62, 60, 61, 
62, 62, 61, 57, 47, 41, 35, 27, 19, 5, -2, -6, -9, -11, -13, -16, 
-18, -21, -24, -26, -25, -20, -19, -18, -14, -7, 0, -1, -6, -15, -23, -32, 
-45, -51, -56, -59, -60, -59, -54, -47, -38, -29, -18, -2, 8, 19, 29, 36, 
40, 39, 36, 28, 18, 5, -7, -19, -19, -16, -7, 5, 25, 39, 53, 64, 
69, 71, 73, 74, 72, 67, 60, 50, 31, 18, 4, -12, -26, -37, -40, -41, 
-43, -43, -40, -34, -32, -33, -35, -35, -32, -23, -15, -8, -1, 6, 13, 12, 
9, 5, 5, 5, 4, 3, 4, 5, 5, 8, 17, 26, 36, 44, 52, 59, 
61, 60, 58, 54, 49, 43, 38, 32, 27, 24, 21, 19, 17, 14, 11, 8, 
8, 14, 24, 35, 46, 56, 64, 66, 66, 62, 58, 44, 32, 19, 6, -4, 
-10, -16, -21, -29, -34, -38, -41, -48, -52, -57, -61, -64, -66, -67, -67, -67, 
-66, -63, -63, -67, -74, -80, -86, -88, -87, -85, -80, -76, -70, -62, -54, -44, 
-32, -19, -6, 14, 28, 41, 53, 62, 68, 67, 62, 55, 47, 36, 18, 8, 
1, -3, -6, -9, -10, -7, -1, 7, 15, 20, 22, 24, 25, 23, 18, 2, 
-12, -25, -37, -46, -53, -60, -60, -59, -56, -53, -48, -39, -33, -27, -22, -17, 
-8, 0, 9, 18, 27, 34, 44, 49, 52, 53, 49, 42, 22, 6, -11, -27, 
-43, -61, -67, -67, -65, -62, -57, -51, -48, -46, -42, -39, -35, -31, -29, -24, 
-20, -18, -21, -25, -28, -30, -29, -29, -24, -17, -3, 15, 32, 52, 64, 77, 
91, 106, 117, 127, 127, 122, 114, 101, 86, 55, 33, 9, -14, -32, -50, -57, 
-64, -70, -77, -85, -93, -96, -96, -94, -89, -81, -69, -60, -50, -41, -31, -16, 
-6, 3, 9, 13, 18, 25, 27, 26, 23, 18, 15, 15, 19, 25, 30, 33, 
32, 32, 33, 35, 36, 33, 22, 16, 10, 2, -5, -12, -23, -30, -37, -44, 
-50, -55, -55, -52, -49, -46, -44, -36, -23, -7, 9, 20, 30, 43, 54, 65, 
72, 76, 75, 72, 69, 65, 62, 61, 61, 60, 56, 51, 45, 39, 35, 34, 
32, 28, 23, 18, 19, 21, 23, 25, 27, 28, 27, 25, 22, 20, 17, 6, 
-6, -18, -25, -27, -25, -25, -25, -23, -18, -9, 5, 12, 17, 20, 21, 21, 
23, 26, 29, 33, 36, 35, 32, 30, 27, 25, 24, 16, 11, 6, 3, 1, 
-3, -6, -11, -21, -32, -42, -53, -56, -57, -57, -58, -60, -60, -59, -56, -53, 
-50, -44, -40, -35, -30, -23, -17, -11, -8, -6, -4, -2, 0, 4, 9, 15, 
23, 31, 37, 38, 36, 32, 28, 25, 22, 21, 20, 17, 15, 15, 13, 11, 
8, 4, 1, -5, -10, -13, -13, -10, -4, 3, 6, 8, 9, 11, 13, 16, 
16, 15, 14, 13, 15, 19, 22, 27, 31, 33, 33, 30, 29, 29, 29, 27, 
20, 14, 9, 6, 3, -2, -8, -16, -23, -29, -33, -39, -43, -46, -47, -47, 
-46, -42, -40, -40, -41, -43, -44, -43, -43, -42, -42, -44, -44, -44, -43, -40, 
-39, -38, -35, -33, -31, -27, -24, -12, 0, };