const unsigned int sampleRate = 22050;
const unsigned int sampleCount = 6468;
const signed char samples[] = {
0, 3, 9, 12, 12, 14, 24, 46, 70, 85, 98, 109, 107, 91, 71, 55, 
41, 20, 4, -10, -14, -16, -15, -13, -22, -35, -50, -66, -76, -81, -80, -63, 
-40, -20, 17, 39, 50, 55, 59, 69, 84, 86, 86, 90, 90, 81, 68, 56, 
41, 23, 4, -18, -26, -27, -24, -23, -21, -29, -39, -52, -73, -92, -104, -104, 
-88, -66, -40, -15, 19, 27, 19, 0, -24, -34, -12, 10, 35, 59, 72, 78, 
73, 48, 21, 2, -14, -23, -21, -18, -6, 12, 26, 43, 50, 45, 31, 21, 
12, -3, -4, 2, 8, 14, 10, 0, -5, -16, -34, -45, -51, -52, -49, -48, 
-50, -52, -60, -70, -72, -63, -52, -43, -36, -28, -15, -4, 4, 9, 5, 7, 
10, 13, 21, 45, 64, 77, 80, 75, 58, 40, 13, -11, -24, -32, -22, -3, 
9, 21, 28, 36, 44, 41, 26, 4, -13, -21, -14, 5, 24, 39, 50, 52, 
43, 34, 24, 14, -5, -12, -17, -24, -20, -8, 5, 5, -1, -7, -15, -28, 
-42, -55, -67, -71, -70, -53, -44, -41, -32, -26, -21, -7, -1, 1, 1, 4, 
8, 12, 17, 28, 39, 48, 64, 62, 54, 48, 46, 37, 16, 3, -7, -19, 
-33, -44, -56, -54, -53, -51, -49, -45, -49, -57, -69, -82, -79, -57, -36, -13, 
14, 41, 62, 83, 86, 84, 74, 55, 20, 8, 9, 12, 16, 23, 30, 26, 
15, -4, -28, -52, -94, -113, -117, -112, -98, -62, -31, -12, -7, -3, -7, -23, 
-25, -15, 1, 13, 24, 39, 44, 53, 54, 51, 44, 40, 47, 61, 75, 79, 
72, 56, 33, 16, 3, -1, 4, 19, 39, 53, 63, 66, 52, 30, -1, -32, 
-53, -71, -69, -52, -22, 5, 23, 25, 15, -8, -33, -51, -62, -62, -52, -36, 
-19, 0, 15, 13, 4, -8, -17, -29, -35, -38, -33, -30, -26, -4, 4, 6, 
4, 0, -9, -20, -25, -25, -13, -2, 2, -2, -1, 4, 8, 5, -14, -16, 
-12, -9, -6, -1, -5, -8, -14, -15, -3, 24, 39, 55, 69, 79, 84, 99, 
105, 102, 91, 79, 71, 63, 61, 68, 78, 85, 86, 81, 72, 60, 35, 6, 
-8, -5, 9, 24, 28, 23, 9, -7, -29, -56, -75, -96, -102, -99, -90, -74, 
-62, -44, -39, -46, -49, -58, -74, -93, -94, -86, -78, -65, -37, -25, -16, -17, 
-25, -29, -36, -32, -23, -16, -6, 1, 10, 8, 6, 3, -8, -27, -40, -46, 
-48, -43, -32, -18, -14, -16, -21, -29, -30, -19, -10, 3, 21, 46, 78, 84, 
82, 74, 56, 37, 10, -3, 0, 13, 21, 26, 25, 20, 8, -11, -28, -44, 
-50, -48, -39, -22, -1, 19, 25, 26, 23, 18, 18, 23, 27, 38, 54, 66, 
73, 71, 59, 42, 20, 0, -18, -17, -16, -10, 3, 8, 6, 0, -7, -18, 
-35, -46, -48, -41, -26, -16, -4, 22, 35, 44, 46, 48, 37, 30, 30, 31, 
39, 48, 53, 54, 48, 32, 11, -11, -38, -51, -56, -53, -51, -43, -40, -42, 
-46, -48, -48, -52, -47, -44, -45, -34, -22, -12, -3, -5, -10, -14, -19, -17, 
-8, 2, 13, 28, 49, 57, 50, 33, 14, -5, -18, -24, -21, -12, -10, -9, 
-2, 5, 8, 0, -16, -38, -39, -24, -4, 15, 32, 53, 56, 45, 29, 11, 
-15, -22, -26, -28, -18, -6, 5, 13, 10, -3, -16, -26, -40, -46, -54, -52, 
-44, -22, -5, 1, 2, -6, -21, -21, -12, 3, 22, 35, 41, 44, 45, 40, 
36, 30, 17, 14, 11, 12, 24, 37, 32, 22, 12, 0, -7, -10, -7, 6, 
17, 29, 43, 58, 63, 51, 31, 16, 3, 2, 16, 28, 42, 56, 63, 63, 
55, 40, 20, -8, -45, -59, -64, -55, -38, -20, -6, -1, 2, -1, -11, -37, 
-55, -68, -67, -53, -34, -5, 2, 0, -3, 2, 8, 16, 22, 20, 15, 8, 
11, 22, 31, 33, 28, 19, 7, -1, -9, -14, -21, -27, -38, -50, -61, -74, 
-77, -66, -56, -46, -33, -22, -12, 1, -1, -4, -13, -25, -23, -18, -7, 14, 
35, 51, 58, 64, 62, 50, 34, 12, -14, -23, -23, -18, -6, 9, 25, 31, 
30, 32, 25, -5, -30, -45, -47, -41, -29, -20, -19, -22, -30, -48, -67, -77, 
-86, -94, -95, -84, -65, -48, -33, -29, -30, -36, -43, -38, -33, -26, -20, -10, 
3, 20, 38, 51, 63, 65, 59, 58, 58, 66, 76, 76, 65, 47, 35, 27, 
22, 23, 23, 24, 25, 31, 45, 45, 33, 10, -12, -25, -32, -24, -6, 18, 
42, 72, 81, 86, 86, 71, 49, 13, -3, -7, -1, 11, 27, 56, 59, 47, 
31, 16, -16, -43, -63, -73, -76, -69, -54, -46, -39, -34, -37, -39, -35, -32, 
-26, -23, -18, -10, -1, 6, 10, 13, 16, 12, 12, 18, 18, 16, 16, 4, 
0, -1, -7, -10, -11, -13, -10, -6, 2, 7, 4, -1, -17, -37, -46, -45, 
-32, -17, -7, 7, 22, 35, 42, 48, 46, 34, 20, 7, -2, -1, 12, 29, 
49, 53, 47, 40, 30, 17, -10, -27, -45, -61, -61, -47, -29, -17, -9, -14, 
-25, -40, -62, -72, -75, -67, -53, -34, -20, -5, 5, 8, 10, 11, 4, -3, 
-5, -5, 2, 11, 17, 20, 21, 20, 19, 14, 16, 18, 22, 24, 18, 17, 
8, -3, -14, -36, -41, -38, -32, -19, -1, 23, 26, 14, -3, -18, -26, -26, 
-20, -8, 10, 34, 55, 63, 63, 60, 54, 37, 6, -9, -16, -20, -11, 5, 
25, 34, 30, 18, 10, -17, -39, -43, -41, -32, -16, 15, 35, 53, 59, 51, 
39, 16, -1, -9, -8, -10, -9, -10, -8, -3, 1, 0, -9, -20, -33, -46, 
-58, -71, -73, -71, -67, -58, -53, -41, -34, -30, -27, -21, -14, -4, -2, 0, 
3, 6, 16, 35, 40, 43, 51, 61, 69, 65, 53, 35, 10, -13, -38, -51, 
-61, -64, -56, -43, -31, -26, -22, -21, -18, -26, -27, -19, -9, 1, 14, 43, 
59, 68, 67, 52, 25, -1, -5, -5, 1, 7, 18, 32, 49, 63, 62, 44, 
0, -26, -38, -38, -31, -19, -15, -14, -17, -17, -13, -10, -15, -30, -43, -44, 
-28, 1, 16, 28, 27, 21, 12, 13, 21, 28, 37, 38, 18, 14, 15, 16, 
15, 9, 0, -1, 6, 19, 34, 40, 42, 35, 22, 14, 4, -2, -1, 4, 
13, 19, 26, 39, 43, 41, 34, 21, 5, -1, -13, -22, -25, -20, -8, -5, 
-6, -14, -28, -41, -62, -73, -74, -69, -64, -52, -33, -13, 12, 33, 39, 26, 
9, -4, -5, 10, 28, 46, 47, 45, 45, 39, 27, 16, -8, -30, -49, -68, 
-73, -76, -80, -81, -87, -96, -110, -108, -97, -83, -68, -48, -34, -22, -11, -2, 
3, 4, 5, 11, 22, 45, 74, 96, 104, 101, 88, 78, 57, 51, 53, 53, 
51, 52, 65, 64, 58, 43, 17, -11, -50, -54, -49, -39, -23, 6, 31, 52, 
63, 62, 44, 13, 9, 19, 32, 46, 70, 84, 86, 76, 58, 43, 11, -12, 
-33, -50, -62, -60, -33, -19, -7, -11, -30, -49, -54, -56, -54, -57, -62, -61, 
-57, -45, -35, -34, -40, -46, -48, -41, -23, -6, 2, 1, 4, 11, 14, 14, 
4, 2, 10, 15, 21, 35, 49, 49, 40, 23, 2, -27, -34, -35, -28, -20, 
-14, -1, 8, 14, 9, -9, -33, -51, -63, -70, -66, -56, -35, -22, -7, 8, 
17, 16, 1, -18, -30, -28, -17, -6, 9, 19, 22, 21, 19, 10, -1, -15, 
-23, -24, -19, 0, 15, 28, 40, 43, 34, 16, 6, 3, 4, -1, -12, -3, 
8, 16, 16, 11, 5, -4, -10, -2, 17, 28, 35, 27, 12, 0, -5, -16, 
-10, 11, 22, 31, 40, 52, 66, 69, 51, 21, -11, -45, -49, -40, -23, -9, 
5, 5, 13, 19, 13, -3, -42, -55, -55, -50, -39, -14, 3, 14, 21, 26, 
30, 25, 15, 2, -4, 1, 13, 33, 47, 61, 61, 55, 46, 40, 30, 18, 
8, 3, 9, 16, 18, 17, 20, 17, 7, 1, -11, -23, -27, -38, -43, -43, 
-46, -40, -34, -28, -26, -28, -27, -20, -3, 18, 17, 12, 5, -5, -13, -4, 
8, 18, 32, 40, 37, 33, 29, 29, 19, 1, -20, -34, -36, -32, -25, -6, 
-6, -12, -23, -47, -69, -94, -102, -104, -102, -94, -81, -44, -15, 6, 14, 9, 
-6, -9, -10, -15, -20, -12, 21, 43, 63, 78, 87, 88, 74, 64, 51, 39, 
32, 21, 23, 35, 41, 41, 42, 29, 18, 18, 14, 9, 9, 1, 4, 11, 
16, 19, 31, 35, 32, 33, 33, 30, 23, 19, 10, -7, -29, -42, -42, -46, 
-43, -29, -15, -2, -2, -2, 0, -2, -9, -36, -49, -48, -35, -12, 31, 51, 
58, 50, 37, 26, 2, -20, -48, -63, -65, -66, -42, -26, -2, 17, 14, -9, 
-24, -38, -50, -57, -58, -43, -33, -20, -4, 4, 9, 3, -6, -12, -21, -34, 
-44, -43, -35, -25, -22, -22, -13, -6, -6, -7, -11, -18, -23, -21, -23, -20, 
-17, -18, -12, -5, 9, 21, 28, 34, 39, 39, 31, 22, 10, -2, -7, 0, 
19, 38, 51, 47, 37, 26, 13, 2, -7, -18, -25, -26, -15, 1, 32, 47, 
49, 43, 24, -1, -15, -15, -9, -2, 17, 42, 56, 73, 89, 99, 95, 68, 
49, 31, 20, 10, 1, 3, 10, 21, 21, 17, 18, 6, -7, -19, -31, -40, 
-41, -33, -22, -6, 4, 13, 17, 14, 12, 16, 23, 30, 25, 16, 10, 1, 
-8, -13, -15, -13, -12, -9, -5, -2, -6, -14, -20, -34, -49, -55, -62, -68, 
-64, -30, -17, -17, -25, -36, -49, -58, -65, -63, -55, -39, -13, 20, 48, 75, 
84, 72, 39, 19, 3, 1, 5, 8, 16, 24, 32, 41, 54, 51, 20, 5, 
-16, -30, -33, -32, -31, -28, -23, -17, -7, 11, 17, 17, 12, 3, 2, 6, 
4, 14, 26, 35, 44, 40, 45, 44, 36, 37, 21, 9, -2, -18, -32, -48, 
-74, -75, -78, -78, -67, -54, -52, -48, -41, -37, -40, -52, -57, -53, -38, -24, 
-4, 42, 65, 71, 61, 48, 22, 5, -10, -21, -22, -15, 11, 33, 53, 61, 
48, 26, -8, -25, -27, -25, -22, -1, 11, 22, 33, 40, 41, 32, 14, -3, 
-13, -11, 3, 28, 39, 45, 43, 34, 29, 24, 21, 14, 3, -9, -23, -31, 
-40, -43, -45, -49, -49, -46, -41, -35, -32, -27, -20, -13, -9, -10, -13, -4, 
7, 20, 30, 33, 43, 45, 41, 30, 10, -14, -42, -53, -56, -52, -42, -28, 
-2, 14, 16, 10, 0, -27, -33, -32, -31, -26, -23, -13, -3, 12, 29, 33, 
21, -8, -30, -42, -38, -27, -15, -10, 0, 14, 26, 35, 40, 31, 20, -2, 
-26, -35, -27, -12, 0, 4, 1, -3, -4, 0, 11, 20, 25, 14, 14, 19, 
28, 39, 41, 40, 32, 29, 43, 58, 66, 64, 52, 40, 33, 25, 17, 17, 
24, 34, 46, 57, 69, 72, 70, 51, 28, -12, -38, -54, -59, -47, -31, -14, 
-5, 1, -2, -16, -35, -63, -70, -68, -56, -41, -21, -3, 15, 29, 39, 37, 
21, -3, -29, -44, -50, -45, -28, -20, -12, -10, -20, -32, -38, -40, -35, -37, 
-39, -28, -23, -19, -9, 2, 14, 20, 20, 26, 36, 47, 46, 39, 29, 21, 
19, 18, 25, 27, 31, 31, 24, 28, 29, 19, -3, -27, -49, -94, -108, -105, 
-94, -79, -63, -52, -53, -54, -51, -47, -38, -31, -24, -7, 18, 42, 73, 77, 
71, 59, 44, 33, 10, -6, -8, -9, -13, -12, -2, 9, 18, 23, 16, -10, 
-32, -62, -86, -94, -86, -54, -35, -23, -13, -2, 22, 32, 45, 53, 45, 44, 
49, 50, 45, 44, 47, 45, 43, 36, 30, 30, 37, 36, 25, 11, -8, -30, 
-44, -56, -51, -43, -38, -30, -17, 10, 24, 31, 24, 9, -6, -8, 0, 20, 
46, 67, 80, 74, 62, 53, 39, 20, 1, -12, -21, -19, -11, 7, 25, 36, 
31, 19, 5, -27, -46, -58, -66, -69, -64, -48, -35, -18, -7, -3, -1, -9, 
-21, -33, -37, -31, -18, -7, -3, -1, 2, 2, -1, -6, -13, -16, -16, -26, 
-36, -39, -35, -29, -19, -4, 10, 23, 31, 45, 67, 70, 68, 60, 46, 27, 
17, 20, 23, 28, 32, 31, 31, 28, 19, -1, -31, -72, -90, -93, -77, -54, 
-30, -3, -3, -4, 1, 3, -6, -23, -28, -23, -10, 6, 34, 54, 72, 83, 
83, 70, 43, 25, 11, 4, 1, -4, -1, 2, 8, 16, 14, 0, -12, -24, 
-34, -41, -41, -47, -46, -44, -41, -35, -35, -32, -27, -23, -23, -28, -37, -44, 
-45, -29, -16, -14, -13, -17, -16, -18, -13, -7, -13, -13, -11, -10, -7, -10, 
-11, 1, 13, 23, 31, 38, 51, 59, 57, 48, 35, 19, 16, 20, 33, 52, 
72, 72, 61, 47, 32, 15, -18, -46, -62, -66, -66, -53, -20, -1, 13, 17, 
7, -17, -25, -33, -35, -25, -13, 6, 16, 23, 31, 44, 55, 50, 41, 25, 
5, -5, -1, 2, -2, -4, -10, -17, -20, -22, -22, -17, -11, -14, -15, -14, 
-14, -13, -10, -10, -4, 5, 15, 24, 32, 49, 59, 63, 57, 46, 33, 25, 
18, 23, 34, 39, 32, 26, 18, 3, -15, -34, -62, -72, -75, -62, -40, -1, 
20, 30, 35, 34, 27, 13, -2, -13, -18, -18, -14, 2, 22, 40, 56, 57, 
45, 33, 18, 4, -5, -5, -9, -16, -16, -15, -16, -19, -35, -47, -59, -70, 
-74, -74, -68, -61, -54, -54, -64, -73, -65, -49, -32, -20, -17, -24, -26, -22, 
-10, 3, 16, 23, 25, 30, 38, 38, 36, 28, 19, 15, 11, 4, -14, -22, 
-21, -15, -7, 6, 12, 15, 16, 17, 13, -1, -10, -19, -21, -16, -6, 17, 
27, 23, 6, -14, -34, -43, -47, -43, -35, -26, -9, 6, 21, 42, 55, 50, 
18, -5, -17, -18, -6, 31, 48, 60, 61, 52, 45, 41, 34, 21, 7, -5, 
-14, -4, 10, 22, 29, 25, 8, 0, -2, 3, 5, 2, -16, -30, -42, -49, 
-52, -58, -56, -49, -34, -14, 3, 20, 25, 27, 26, 18, 6, 0, 5, 13, 
26, 39, 44, 43, 36, 33, 31, 19, -10, -25, -36, -44, -50, -49, -40, -34, 
-31, -38, -55, -81, -84, -82, -74, -55, -37, -15, 4, 24, 47, 71, 87, 89, 
80, 73, 69, 68, 76, 83, 81, 75, 68, 57, 43, 33, 26, 13, -5, -21, 
-40, -40, -29, -20, -16, -17, -24, -26, -24, -14, 1, 10, 10, 3, -5, -7, 
-5, 8, 16, 19, 21, 27, 24, 17, 12, 2, -8, -25, -47, -55, -55, -45, 
-34, -27, -14, -10, -16, -27, -35, -34, -30, -24, -12, 1, 13, 38, 58, 66, 
66, 64, 45, 8, -10, -24, -26, -15, 7, 14, 15, 16, 15, 13, 1, -19, 
-40, -57, -62, -61, -59, -50, -38, -28, -30, -33, -30, -25, -24, -33, -41, -52, 
-54, -47, -35, -22, -2, 7, 6, 11, 23, 34, 38, 35, 32, 26, 22, 20, 
25, 28, 34, 39, 37, 37, 32, 25, 17, 9, 0, -18, -26, -30, -23, -10, 
6, 27, 31, 30, 17, 2, -17, -30, -36, -42, -45, -38, -14, 8, 27, 37, 
37, 27, 3, -11, -16, -12, -5, 17, 37, 58, 76, 85, 83, 68, 51, 26, 
0, -21, -34, -28, -18, -9, -4, -10, -28, -42, -53, -55, -55, -59, -67, -70, 
-69, -60, -45, -30, -11, -2, 6, 15, 31, 59, 73, 82, 80, 66, 45, 25, 
21, 22, 22, 18, 21, 35, 41, 43, 44, 40, 25, 11, -5, -12, -11, -4, 
12, 17, 20, 17, 3, -18, -45, -59, -62, -51, -39, -25, -11, -1, 6, 5, 
0, -20, -38, -48, -52, -50, -32, -25, -23, -21, -19, -21, -23, -22, -21, -20, 
-22, -25, -22, -16, -3, 8, 8, 0, -4, -5, -5, 0, 6, 15, 24, 20, 
13, 9, 8, 11, 5, -1, -1, -3, -1, 3, 11, 17, 6, -13, -38, -46, 
-43, -27, -10, -3, -6, -15, -21, -20, -17, -17, -17, -18, -18, -9, 6, 30, 
52, 69, 78, 78, 66, 56, 55, 53, 57, 59, 60, 64, 72, 79, 77, 66, 
40, 14, -14, -33, -48, -58, -61, -58, -56, -56, -55, -55, -50, -43, -38, -37, 
-37, -39, -31, -17, -8, -1, 2, -4, -13, -22, -24, -28, -27, -27, -29, -24, 
-17, -13, -12, -19, -30, -37, -41, -40, -20, -11, -6, -6, -9, -13, -9, -4, 
1, 10, 23, 36, 37, 32, 26, 13, -1, -10, -12, -15, -19, -18, -6, 11, 
23, 22, 13, -8, -37, -41, -35, -25, -12, 14, 27, 37, 47, 56, 59, 54, 
45, 36, 33, 36, 45, 69, 83, 87, 81, 71, 51, 35, 24, 14, 1, -12, 
-28, -30, -25, -19, -13, -15, -26, -40, -48, -48, -39, -16, -5, 2, 4, 2, 
-1, 11, 20, 23, 31, 41, 49, 62, 64, 61, 62, 62, 54, 41, 29, 19, 
12, 13, 12, 1, -12, -27, -44, -58, -72, -80, -86, -83, -72, -55, -42, -28, 
-18, -15, -22, -34, -32, -27, -13, 13, 38, 50, 52, 52, 45, 36, 23, 18, 
8, -9, -22, -25, -18, -13, -11, -13, -25, -44, -66, -74, -71, -69, -69, -67, 
-58, -41, -24, -8, 8, 23, 20, 16, 12, 13, 18, 22, 22, 22, 22, 17, 
5, 0, -5, -10, -16, -20, -28, -29, -29, -31, -31, -34, -50, -57, -56, -47, 
-32, -5, 14, 23, 25, 24, 22, 16, 10, 7, 7, 5, 4, 12, 24, 34, 
31, 20, 0, -10, -12, -7, 3, 10, 22, 26, 29, 31, 28, 20, 11, 6, 
5, 9, 18, 28, 40, 57, 64, 64, 62, 48, 39, 36, 41, 49, 51, 47, 
46, 46, 48, 48, 33, 21, 10, 4, 0, -3, -4, -6, -3, -6, -18, -29, 
-34, -40, -37, -28, -23, -25, -33, -39, -38, -37, -40, -42, -35, -20, -13, -9, 
4, 15, 26, 33, 34, 24, -2, -10, -11, -7, -4, -7, -22, -30, -26, -19, 
-16, -27, -43, -47, -42, -27, -9, 18, 31, 35, 31, 28, 21, 2, -7, -14, 
-21, -22, -11, 4, 20, 28, 26, 16, -1, -7, -18, -28, -37, -45, -44, -44, 
-40, -34, -28, -24, -36, -50, -57, -54, -47, -40, -23, -5, 8, 21, 25, 25, 
25, 17, 18, 29, 36, 35, 29, 17, 5, -3, -10, -20, -25, -25, -29, -32, 
-24, -12, -5, -9, -19, -27, -30, -37, -38, -27, -8, 13, 17, 20, 19, 16, 
12, 4, -9, -20, -25, -15, 19, 38, 48, 47, 38, 27, 25, 32, 27, 17, 
10, 6, 13, 22, 35, 48, 44, 24, 12, 10, 14, 14, 14, 24, 34, 37, 
30, 16, 5, 2, 5, 5, 5, 11, 23, 22, 21, 22, 16, 7, -15, -26, 
-30, -31, -26, -29, -33, -39, -48, -58, -78, -108, -113, -107, -90, -67, -50, -24, 
-13, -12, -14, -25, -54, -73, -83, -82, -70, -51, -15, 3, 11, 14, 14, 19, 
20, 9, 4, 7, 15, 36, 49, 59, 63, 54, 40, 12, 1, 1, 1, 6, 
14, 20, 28, 42, 56, 66, 68, 62, 54, 48, 47, 47, 57, 73, 83, 84, 
76, 65, 51, 39, 23, 8, -4, -12, -12, -16, -19, -24, -38, -52, -52, -45, 
-29, -9, 15, 20, 22, 27, 29, 25, 13, 2, -8, -7, 3, 11, 28, 39, 
44, 45, 34, -7, -38, -67, -81, -84, -84, -62, -44, -25, -9, -5, -11, -30, 
-44, -55, -52, -44, -25, -8, 11, 34, 53, 59, 47, 32, 28, 29, 33, 39, 
41, 47, 53, 57, 53, 36, 19, -3, -14, -20, -26, -22, -15, -8, -7, -6, 
-12, -25, -31, -34, -25, -19, -15, -6, 2, 6, 4, 1, -4, -5, -3, 1, 
6, 14, 27, 31, 27, 14, -6, -37, -51, -63, -74, -79, -82, -65, -41, -27, 
-27, -31, -42, -70, -83, -88, -80, -65, -44, -27, -10, -1, 0, -4, -10, -12, 
-11, -4, 2, 6, 25, 44, 58, 68, 63, 36, 17, -1, -14, -20, -21, -14, 
-3, 8, 18, 27, 29, 22, 18, 12, 6, 7, 8, 13, 21, 25, 31, 27, 
12, 9, 15, 27, 37, 52, 61, 67, 70, 65, 57, 45, 36, 26, 15, 10, 
10, 18, 20, 13, 6, -5, -15, -22, -26, -26, -26, -26, -19, -11, -3, 6, 
12, 5, -2, -5, -8, -3, 2, 14, 23, 28, 33, 34, 26, 3, -5, -8, 
-6, -6, -9, -10, -11, -17, -25, -33, -46, -60, -72, -75, -69, -61, -50, -43, 
-36, -28, -24, -21, -18, -18, -19, -20, -20, -12, -1, 13, 25, 29, 26, 18, 
12, 5, 6, 8, 6, -6, -12, -13, -17, -22, -26, -28, -33, -43, -52, -53, 
-45, -35, -19, -2, 10, 19, 27, 35, 44, 52, 58, 60, 65, 72, 74, 65, 
54, 33, 19, 8, 0, -5, -6, 2, 6, 14, 18, 11, -8, -16, -25, -39, 
-48, -50, -53, -51, -47, -37, -26, -21, -8, -4, -3, 1, 10, 31, 44, 56, 
60, 57, 55, 51, 48, 51, 50, 44, 30, 22, 22, 21, 23, 27, 23, 19, 
13, 8, 7, 7, 1, -4, -7, -10, -12, -12, -9, -13, -25, -37, -44, -33, 
-20, -9, -8, -16, -30, -48, -47, -41, -32, -23, -21, -20, -18, -13, -5, -1, 
-17, -36, -49, -52, -48, -42, -30, -17, -5, 0, 4, 11, 6, -7, -17, -19, 
-23, -22, -9, 7, 21, 29, 32, 31, 22, 9, -3, -16, -25, -18, -6, 11, 
26, 34, 27, 18, 11, 5, 5, 5, 0, -2, -5, 2, 13, 15, 11, 3, 
-4, -5, 3, 20, 27, 34, 38, 35, 31, 17, 10, 6, -1, -6, -12, -16, 
-11, -6, -14, -28, -49, -57, -54, -43, -30, -14, 8, 22, 32, 34, 26, 13, 
-5, -20, -24, -27, -22, 1, 14, 22, 28, 33, 30, 15, -3, -22, -31, -35, 
-33, -18, -4, 6, 15, 18, 11, 3, -3, -8, -9, 7, 20, 32, 40, 42, 
42, 27, 15, 7, 3, 2, 1, -5, -4, 5, 15, 19, 16, 4, -4, -5, 
-7, -5, 10, 16, 18, 16, 8, -4, -19, -19, -19, -18, -6, 9, 20, 32, 
36, 36, 35, 9, -11, -24, -28, -24, -15, -6, -3, 0, 3, -3, -25, -35, 
-46, -53, -57, -59, -49, -38, -21, -6, 0, -7, -25, -40, -53, -60, -64, -52, 
-45, -39, -34, -37, -47, -53, -52, -51, -46, -38, -28, -10, 6, 20, 27, 32, 
25, 17, 13, 15, 22, 26, 39, 49, 48, 50, 58, 62, 52, 37, 24, 13, 
11, 19, 25, 30, 29, 29, 24, 4, -3, -7, -11, -11, -2, 16, 27, 32, 
35, 37, 34, 23, 13, 6, -1, 0, 21, 39, 46, 46, 43, 38, 28, 19, 
10, 0, -11, -24, -27, -27, -24, -23, -29, -39, -49, -57, -59, -59, -51, -36, 
-17, -2, 7, 11, 17, 20, 25, 29, 34, 39, 49, 54, 60, 63, 58, 47, 
35, 23, 10, -4, -13, -22, -25, -28, -31, -35, -42, -51, -59, -69, -74, -71, 
-60, -48, -28, -9, 1, 8, 5, 0, -1, -2, -2, -1, -1, -4, 1, 11, 
18, 24, 19, 12, 2, -4, -2, 0, 0, 2, 6, 10, 16, 8, 1, -10, 
-28, -40, -41, -38, -33, -30, -30, -34, -41, -45, -50, -58, -61, -53, -31, -12, 
6, 23, 36, 35, 35, 27, 12, 4, 1, 5, 12, 20, 27, 33, 36, 24, 
11, 4, -2, -5, -1, -2, 1, 8, 16, 24, 28, 27, 22, 15, 11, 10, 
27, 41, 54, 65, 69, 74, 70, 59, 50, 42, 31, 29, 35, 38, 42, 43, 
38, 19, -4, -24, -39, -52, -51, -41, -25, -10, 2, 8, 10, 9, 0, -8, 
-16, -31, -32, -29, -24, -20, -15, -26, -47, -68, -83, -91, -97, -94, -84, -70, 
-52, -40, -39, -39, -41, -45, -53, -64, -65, -57, -39, -21, -7, 6, 6, 0, 
-8, -8, 3, 20, 30, 45, 59, 67, 73, 70, 66, 62, 50, 36, 24, 19, 
19, 28, 39, 42, 37, 25, 17, 13, 11, 14, 23, 26, 31, 36, 36, 30, 
12, -8, -21, -31, -36, -29, -22, -13, -11, -13, -9, -4, -9, -15, -20, -26, 
-28, -22, -11, 2, 8, 8, 4, 2, -1, -4, -8, -7, 2, 15, 31, 38, 
45, 50, 39, 27, 14, 0, -17, -40, -52, -55, -47, -32, -16, -1, -6, -20, 
-34, -39, -37, -25, -16, -8, 2, 13, 31, 37, 41, 34, 25, 22, 22, 35, 
49, 58, 59, 52, 39, 24, 5, -11, -18, -27, -26, -18, -2, 18, 33, 36, 
27, 13, 2, -1, 3, 14, 26, 35, 40, 39, 32, 23, 12, 1, -11, -19, 
-18, -9, 2, 13, 13, -9, -26, -47, -68, -92, -110, -125, -126, -115, -98, -80, 
-69, -70, -70, -70, -65, -57, -54, -46, -34, -15, 13, 32, 44, 43, 31, 17, 
8, -3, -8, 0, 12, 26, 35, 34, 32, 22, 9, 2, 1, 0, 0, 11, 
24, 38, 56, 58, 43, 27, 17, 13, 22, 32, 40, 54, 73, 87, 95, 86, 
70, 58, 46, 32, 22, 17, 16, 20, 20, 13, -2, -25, -49, -62, -72, -75, 
-62, -47, -32, -22, -19, -16, -22, -34, -47, -58, -61, -54, -38, -15, 6, 23, 
29, 23, 13, -1, -19, -29, -36, -38, -34, -29, -20, -9, -5, -5, -8, -14, 
-24, -22, -8, 9, 30, 44, 51, 61, 56, 45, 36, 23, 7, 0, -3, -2, 
1, 2, -6, -11, -13, -19, -28, -40, -44, -41, -37, -29, -16, -1, 4, 1, 
-1, -2, 3, 11, 17, 31, 45, 61, 75, 73, 65, 54, 40, 24, 15, 15, 
17, 27, 40, 48, 41, 24, 4, -21, -45, -63, -68, -68, -61, -46, -30, -8, 
-1, -5, -15, -30, -44, -58, -58, -57, -50, -36, -23, -18, -22, -31, -33, -32, 
-32, -23, -15, -5, 7, 19, 25, 23, 20, 11, 4, -6, -9, -10, -9, -1, 
5, 5, 5, 2, 0, 5, 9, 9, 13, 19, 24, 32, 39, 35, 32, 29, 
26, 25, 24, 27, 34, 49, 65, 75, 77, 70, 51, 26, 6, -15, -24, -27, 
-20, -5, 7, 22, 28, 28, 19, -2, -26, -46, -52, -45, -31, -16, 11, 22, 
24, 20, 13, 6, -3, -5, -3, 9, 24, 33, 35, 34, 30, 16, -6, -40, 
-56, -63, -64, -55, -41, -26, -27, -25, -22, -24, -19, -17, -16, -20, -17, -8, 
6, 17, 15, 3, -7, -17, -23, -16, -7, 7, 16, 26, 30, 28, 18, 2, 
-10, -29, -30, -25, -20, -6, 8, 11, 9, 4, -3, -16, -36, -44, -45, -34, 
-14, 7, 36, 43, 42, 38, 25, 11, -10, -19, -21, -22, -15, -7, -3, -2, 
-13, -27, -44, -62, -63, -56, -45, -38, -29, -9, 5, 14, 17, 11, -6, -7, 
-2, 6, 13, 17, 17, 17, 21, 28, 29, 18, 1, -4, -3, 8, 19, 34, 
34, 27, 27, 22, 10, 4, -4, -7, 1, 13, 24, 37, 44, 40, 28, 20, 
11, 15, 23, 30, 41, 54, 71, 74, 74, 63, 35, 2, -33, -49, -55, -56, 
-57, -54, -45, -32, -30, -36, -45, -60, -59, -57, -51, -36, -16, 5, 14, 21, 
19, 12, 13, 17, 17, 14, 12, 13, 16, 18, 17, 17, 9, -16, -29, -34, 
-36, -40, -41, -39, -35, -28, -31, -37, -38, -41, -34, -22, -9, 6, 34, 45, 
52, 55, 47, 36, 20, 19, 18, 12, 22, 40, 54, 58, 45, 29, 13, -8, 
-14, -17, -15, -8, 4, 29, 47, 52, 46, 32, 18, 3, 4, 12, 15, 22, 
38, 51, 63, 63, 55, 45, 24, 12, 6, 2, 0, 3, 8, 12, 15, 9, 
-4, -39, -60, -67, -70, -71, -66, -61, -59, -57, -55, -61, -72, -82, -90, -89, 
-79, -66, -49, -38, -31, -28, -27, -29, -34, -35, -34, -31, -19, 1, 22, 33, 
37, 38, 35, 20, 11, 4, 4, 14, 28, 46, 49, 48, 42, 31, 26, 19, 
8, 4, 10, 20, 39, 51, 58, 61, 57, 42, 7, -8, -15, -17, -12, -5, 
-2, -12, -21, -26, -35, -54, -67, -70, -60, -46, -33, -8, 11, 25, 25, 16, 
2, -8, -12, -5, 5, 14, 29, 37, 40, 41, 37, 25, 1, -16, -30, -36, 
-36, -35, -38, -42, -44, -46, -44, -38, -30, -18, -12, -1, 14, 20, 26, 25, 
18, 13, 8, 5, 3, 8, 18, 31, 46, 51, 56, 58, 50, 34, 18, 6, 
0, 4, 6, 6, 7, 7, 7, 1, -8, -19, -32, -38, -27, -6, 16, 47, 
61, 66, 62, 56, 47, 33, 16, 8, 8, 14, 26, 35, 40, 41, 28, 10, 
-14, -35, -55, -69, -73, -69, -60, -52, -49, -53, -59, -56, -58, -58, -59, -58, 
-42, -7, 0, 3, 6, 5, 6, 8, 10, 12, 14, 17, 29, 40, 37, 32, 
28, 15, -3, -3, 0, -2, -6, -3, 7, 15, 18, 15, 7, -12, -25, -25, 
-17, -10, -3, 11, 19, 23, 25, 19, -4, -16, -23, -24, -16, -4, 18, 34, 
40, 34, 20, 2, -14, -28, -35, -37, -37, -18, 4, 25, 45, 59, 58, 45, 
35, 20, 7, -1, -11, -7, 7, 17, 15, 8, -14, -23, -20, -13, -6, -4, 
1, 15, 30, 39, 39, 32, 27, 22, 21, 26, 32, 34, 31, 31, 30, 23, 
11, -14, -24, -31, -38, -39, -28, -25, -27, -33, -42, -46, -60, -74, -78, -70, 
-57, -45, -22, -3, 14, 24, 24, 8, -8, -20, -31, -40, -39, -22, -9, 7, 
22, 25, 27, 23, 8, -4, -11, -13, -2, 12, 24, 33, 43, 49, 45, 27, 
6, -11, -23, -24, -15, -5, 7, 14, 16, 9, 5, 1, -7, -14, -21, -32, 
-36, -35, -29, -24, -20, -21, -26, -31, -34, -32, -27, -26, -25, -18, -13, -14, 
-20, -26, -29, -30, -25, -19, -4, 7, 15, 21, 24, 16, 9, 2, -3, 1, 
10, 29, 43, 57, 55, 41, 22, 10, -2, -12, -18, -19, -1, 22, 50, 75, 
84, 83, 71, 56, 43, 37, 38, 35, 28, 27, 28, 23, 15, 11, 1, -15, 
-26, -38, -54, -64, -60, -53, -44, -34, -22, -20, -20, -21, -22, -21, -23, -27, 
-26, -17, -12, -14, -15, -23, -31, -28, -22, -16, -8, -7, -10, -15, -20, -23, 
-24, -21, -11, 2, 11, 31, 42, 43, 42, 36, 23, 21, 16, 6, 3, 9, 
23, 37, 47, 51, 48, 38, 8, -20, -45, -54, -49, -29, -12, 0, 10, 23, 
33, 33, 29, 18, 4, -2, 2, 18, 26, 30, 35, 39, 38, 37, 25, 10, 
2, -5, -15, -16, -15, -15, -16, -18, -28, -35, -34, -31, -34, -38, -41, -42, 
-36, -27, -17, 1, 9, 10, 12, 16, 18, 27, 28, 20, 11, 9, 11, 8, 
3, -1, -1, -1, 2, 6, 11, 11, 3, -16, -29, -33, -39, -49, -51, -40, 
-22, -2, 16, 31, 36, 25, 10, -4, -17, -23, -25, -27, -25, -19, -11, -6, 
-1, 1, -5, -22, -41, -47, -35, -23, -6, 12, 22, 23, 19, 12, 2, -18, 
-41, -58, -57, -45, -29, -14, -2, 1, -4, -15, -21, -15, -1, 5, 2, -4, 
-2, 2, 5, 1, -10, -19, -21, -18, -3, 10, 17, 18, 21, 22, 22, 21, 
18, 15, 9, 13, 20, 23, 33, 46, 50, 40, 33, 26, 25, 31, 49, 59, 
65, 67, 71, 75, 66, 54, 38, 26, 14, 1, 5, 23, 37, 48, 59, 62, 
62, 57, 44, 25, 4, -7, 1, 11, 21, 23, 19, 9, 1, -14, -35, -57, 
-82, -85, -83, -78, -63, -41, -22, -12, -2, 0, -1, -4, -7, -13, -22, -27, 
-29, -22, -18, -18, -21, -29, -35, -35, -30, -22, -18, -23, -42, -58, -75, -88, 
-89, -79, -71, -59, -39, -24, -11, 1, -3, -16, -27, -35, -37, -22, -11, 6, 
33, 52, 60, 66, 56, 36, 14, -10, -29, -38, -35, -23, -15, -12, 4, -2, 
-9, -16, -31, -47, -63, -68, -69, -60, -44, -29, -15, -11, -8, -8, -10, -15, 
-13, -8, -6, 4, 20, 46, 63, 66, 58, 47, 32, 26, 30, 31, 29, 20, 
8, 3, 6, 8, 8, 13, 28, 37, 47, 62, 71, 62, 41, 34, 21, 8, 
-2, -12, -9, 8, 32, 52, 67, 85, 87, 75, 64, 55, 48, 44, 43, 47, 
50, 46, 33, 21, 7, -10, -28, -45, -65, -67, -55, -35, -16, -2, 10, 6, 
-9, -25, -36, -40, -39, -41, -36, -20, -3, 24, 34, 29, 17, -1, -20, -37, 
-43, -49, -51, -50, -41, -37, -38, -41, -44, -47, -57, -58, -50, -42, -35, -33, 
-33, -31, -25, -19, -17, -10, -1, 7, 21, 38, 44, 39, 24, 7, -10, -27, 
-35, -30, -24, -12, 2, 14, 24, 20, 12, -6, -27, -41, -47, -34, -13, 10, 
34, 69, 83, 83, 72, 48, 17, -18, -27, -24, -13, 6, 26, 52, 60, 55, 
44, 32, 6, -11, -23, -35, -43, -39, -30, -27, -22, -18, -16, -13, -3, 13, 
28, 43, 52, 69, 85, 94, 93, 85, 73, 59, 54, 51, 52, 53, 55, 39, 
24, 14, 2, -8, -31, -43, -47, -48, -49, -48, -45, -50, -56, -55, -48, -39, 
-27, -12, 8, 31, 54, 67, 62, 51, 37, 21, 4, -17, -22, -12, 2, 15, 
29, 41, 39, 26, 5, -22, -53, -69, -80, -79, -64, -45, -16, -3, -1, -7, 
-20, -26, -14, -11, -7, -4, -2, 2, 10, 16, 13, 7, -9, -28, -33, -36, 
-33, -32, -47, -56, -60, -63, -68, -69, -71, -75, -81, -81, -67, -49, -34, -41, 
-52, -57, -57, -38, -28, -25, -17, -7, 3, 18, 18, 12, -1, -12, -18, -24, 
-21, -16, -12, -2, 16, 27, 25, 12, 0, -11, -16, -15, -5, 12, 27, 46, 
80, 91, 88, 80, 68, 50, 48, 51, 58, 65, 75, 89, 88, 85, 80, 66, 
48, 18, 3, -2, 2, 10, 20, 30, 39, 42, 35, 26, 19, 11, 9, 14, 
17, 23, 34, 32, 27, 26, 23, 20, 15, 10, 11, 18, 24, 22, 15, 2, 
-19, -38, -49, -71, -75, -72, -66, -53, -52, -52, -51, -56, -63, -72, -83, -80, 
-70, -50, -20, 7, 30, 35, 37, 37, 33, 27, 25, 24, 33, 48, 62, 79, 
80, 81, 75, 58, 37, -2, -23, -32, -35, -33, -20, -9, 6, 12, 12, 4, 
-27, -42, -47, -41, -27, -3, 16, 26, 30, 34, 36, 33, 20, 5, -9, -19, 
-28, -31, -32, -35, -37, -44, -61, -72, -73, -64, -52, -40, -37, -34, -33, -33, 
-29, -32, -49, -54, -49, -33, -16, 2, 7, -1, -16, -29, -38, -36, -30, -22, 
-11, -2, 14, 41, 44, 37, 18, -3, -29, -37, -36, -24, -7, 9, 44, 60, 
76, 84, 75, 55, 7, -13, -21, -23, -9, 8, 13, 21, 29, 39, 42, 27, 
6, -15, -23, -22, -8, 13, 26, 35, 34, 27, 28, 30, 25, 16, 5, -8, 
-20, -15, -2, 8, 7, 1, -10, -13, -6, 5, 8, -3, -13, -22, -29, -33, 
-32, -31, -29, -21, -7, 15, 36, 53, 53, 45, 31, 18, 14, 6, 2, 3, 
10, 31, 64, 76, 79, 65, 39, 8, -41, -60, -74, -79, -77, -63, -46, -33, 
-25, -26, -37, -69, -86, -100, -101, -78, -37, -21, -8, 8, 25, 43, 52, 43, 
28, 14, 8, 12, 29, 39, 48, 50, 42, 31, 24, 21, 23, 20, 6, -14, 
-20, -18, -11, -3, -1, -8, -11, -11, -3, 8, 28, 36, 32, 24, 22, 22, 
19, 14, 8, 10, 19, 32, 46, 46, 43, 30, 8, -24, -44, -54, -51, -47, 
-42, -36, -32, -29, -29, -36, -48, -67, -78, -80, -74, -65, -42, -21, 3, 23, 
36, 45, 47, 40, 28, 19, 18, 24, 29, 29, 25, 15, 10, 15, 18, 17, 
13, 6, -3, 2, 7, 15, 28, 31, 31, 24, 24, 23, 16, 18, 19, 16, 
20, 30, 40, 48, 50, 48, 42, 37, 38, 39, 25, 21, 10, -7, -23, -42, 
-41, -37, -39, -42, -42, -34, -29, -28, -31, -43, -68, -100, -113, -114, -101, -85, 
-44, -16, 9, 32, 44, 47, 33, 13, 6, 1, 3, 22, 33, 48, 59, 67, 
65, 28, 3, -20, -41, -47, -43, -28, -15, -11, -6, -6, -11, -18, -24, -29, 
-30, -25, -8, 8, 21, 35, 45, 44, 36, 25, 23, 30, 30, 33, 27, 15, 
7, -2, -7, -9, -12, -14, -17, -13, -6, 0, -3, -11, -30, -56, -78, -81, 
-76, -62, -44, -23, 12, 34, 50, 58, 60, 46, 9, -13, -26, -21, -7, 25, 
34, 34, 40, 39, 27, -2, -25, -48, -67, -76, -68, -48, -27, -8, 2, 6, 
-6, -27, -47, -59, -69, -73, -65, -54, -39, -24, -16, -13, -18, -14, -9, -7, 
3, 19, 26, 34, 48, 63, 70, 77, 68, 59, 58, 53, 50, 39, 23, 7, 
-9, -12, 2, 9, 23, 32, 34, 42, 42, 33, 20, 6, -7, -23, -47, -49, 
-38, -24, -2, 19, 26, 31, 31, 30, 24, 1, -20, -40, -50, -46, -16, 10, 
26, 33, 37, 38, 31, 16, 4, -4, -10, -12, -4, 18, 37, 46, 50, 54, 
51, 36, 17, -4, -27, -51, -57, -49, -38, -24, -10, -16, -18, -21, -25, -30, 
-36, -36, -34, -26, -7, 11, 28, 34, 38, 43, 49, 56, 57, 56, 53, 45, 
30, 5, -2, -3, -1, 2, 4, 9, 6, -7, -24, -41, -57, -80, -96, -103, 
-96, -69, -23, 1, 18, 31, 37, 27, 8, -4, -12, -15, -19, -8, 25, 45, 
58, 65, 71, 55, 38, 18, -9, -30, -41, -38, -29, -13, 8, 21, 23, 8, 
-11, -32, -49, -63, -72, -72, -66, -57, -43, -20, -7, -4, 0, 0, 0, -4, 
-15, -21, -20, -19, -12, 4, 7, 9, 7, 8, 14, 17, 22, 24, 26, 30, 
32, 28, 28, 35, 41, 46, 50, 52, 51, 46, 37, 23, -1, -24, -37, -39, 
-39, -18, 1, 16, 23, 17, 5, -21, -42, -58, -67, -69, -66, -42, -11, 19, 
38, 47, 34, 14, -10, -35, -49, -55, -48, -39, -31, -17, -2, 6, 13, 7, 
-6, -17, -34, -49, -47, -34, -19, -6, 8, 25, 38, 45, 44, 37, 28, 9, 
3, 15, 30, 41, 40, 36, 34, 33, 34, 35, 27, 18, 9, 4, 2, -1, 
-13, -25, -28, -25, -14, 11, 15, 14, 14, 16, 9, -3, -6, -12, -13, -8, 
5, 39, 58, 67, 61, 45, 8, -21, -40, -51, -63, -72, -65, -63, -53, -36, 
-20, -16, -39, -63, -90, -104, -106, -84, -64, -53, -43, -26, -7, 10, 14, 10, 
-1, -8, -18, -28, -14, 12, 43, 67, 86, 83, 78, 77, 68, 57, 41, 24, 
13, 5, 1, 3, -10, -11, -8, -9, -14, -20, -9, -4, -4, -14, -31, -50, 
-59, -51, -32, 0, };