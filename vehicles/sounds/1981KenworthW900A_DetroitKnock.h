const unsigned int knockSampleRate = 22050;
const unsigned int knockSampleCount = 727;
const signed char knockSamples[] = {
0, 8, 12, 14, 17, 20, 23, 25, 26, 28, 30, 32, 34, 35, 35, 36,
37, 39, 40, 42, 42, 44, 46, 48, 49, 50, 52, 53, 54, 56, 56, 57, 
58, 57, 58, 59, 59, 60, 60, 61, 61, 62, 64, 65, 66, 67, 68, 68, 
69, 70, 69, 70, 70, 70, 70, 69, 70, 68, 68, 68, 67, 66, 66, 64, 
64, 65, 64, 63, 63, 63, 64, 63, 62, 63, 62, 62, 62, 61, 61, 60, 
61, 60, 61, 62, 63, 64, 66, 68, 69, 71, 73, 75, 76, 78, 79, 79, 
80, 80, 81, 81, 81, 81, 82, 82, 83, 84, 84, 85, 86, 86, 87, 87, 
87, 87, 86, 86, 86, 85, 85, 83, 83, 83, 81, 81, 81, 79, 79, 79, 
79, 78, 78, 78, 79, 79, 79, 80, 80, 80, 81, 81, 81, 81, 81, 81, 
81, 81, 81, 81, 81, 81, 81, 81, 82, 82, 82, 82, 82, 81, 81, 80, 
80, 78, 78, 77, 75, 74, 74, 74, 73, 73, 73, 73, 74, 75, 75, 76, 
77, 78, 79, 80, 81, 82, 83, 84, 84, 85, 85, 85, 85, 85, 85, 85, 
84, 82, 81, 81, 80, 79, 78, 78, 76, 76, 75, 74, 72, 71, 69, 67, 
65, 63, 59, 55, 52, 50, 47, 43, 40, 38, 36, 34, 33, 31, 30, 30, 
29, 28, 28, 27, 26, 25, 24, 23, 21, 19, 17, 16, 15, 13, 10, 9, 
7, 5, 4, 2, -1, -3, -4, -7, -9, -12, -15, -17, -19, -21, -23, -27, 
-28, -30, -31, -33, -34, -36, -38, -38, -39, -40, -43, -44, -45, -47, -49, -51, 
-53, -56, -58, -60, -62, -64, -66, -68, -69, -70, -71, -72, -72, -72, -72, -72, 
-72, -71, -71, -71, -71, -71, -72, -73, -74, -75, -76, -77, -79, -80, -81, -82, 
-83, -84, -85, -86, -87, -88, -89, -90, -92, -93, -94, -95, -96, -97, -98, -99, 
-99, -100, -100, -100, -100, -100, -100, -100, -101, -101, -102, -103, -104, -105, -107, -108, 
-110, -111, -112, -114, -115, -117, -118, -118, -120, -122, -123, -124, -125, -126, -126, -127, 
-127, -127, -126, -126, -125, -124, -123, -122, -121, -120, -118, -116, -115, -114, -112, -111, 
-108, -107, -106, -104, -102, -102, -100, -99, -98, -98, -98, -98, -98, -98, -98, -99, 
-99, -99, -99, -99, -98, -98, -98, -97, -97, -97, -95, -95, -94, -93, -92, -90, 
-90, -88, -86, -85, -83, -82, -81, -80, -79, -79, -78, -78, -78, -78, -78, -78, 
-78, -77, -77, -74, -73, -71, -68, -66, -64, -59, -56, -53, -51, -48, -45, -42, 
-40, -38, -37, -36, -34, -33, -32, -31, -31, -30, -30, -29, -29, -29, -28, -28, 
-28, -27, -27, -26, -25, -24, -24, -23, -21, -20, -19, -18, -17, -16, -15, -13, 
-12, -10, -9, -8, -6, -5, -2, 0, 1, 2, 4, 6, 7, 8, 8, 9, 
9, 8, 8, 8, 7, 7, 7, 6, 6, 7, 7, 7, 9, 10, 12, 13, 
14, 16, 19, 21, 22, 24, 26, 27, 30, 31, 31, 33, 34, 36, 37, 37, 
39, 40, 41, 43, 43, 44, 44, 45, 45, 45, 44, 43, 42, 41, 40, 39, 
38, 37, 36, 36, 36, 37, 37, 38, 39, 40, 44, 46, 49, 52, 54, 58, 
61, 64, 67, 69, 72, 76, 79, 82, 84, 85, 87, 90, 92, 93, 94, 94, 
94, 94, 94, 94, 94, 92, 92, 91, 90, 90, 90, 89, 88, 88, 88, 86, 
86, 84, 83, 82, 80, 78, 76, 72, 70, 67, 64, 61, 58, 56, 53, 50, 
47, 45, 42, 40, 38, 36, 34, 33, 30, 29, 28, 27, 27, 27, 27, 27, 
27, 28, 29, 31, 32, 34, 34, 35, 36, 37, 37, 38, 38, 38, 38, 38, 
37, 37, 37, 37, 38, 38, 38, 39, 40, 41, 41, 42, 42, 43, 42, 44, 
44, 44, 44, 44, 45, 45, 46, 46, 47, 47, 48, 47, 48, 49, 49, 49, 
49, 49, 48, 48, 47, 46, 44, 43, 41, 39, 37, 35, 34, 32, 31, 29, 
29, 28, 28, 28, 28, 28, 28, 29, 29, 30, 30, 30, 30, 30, 29, 29, 
29, 28, 28, 28, 27, 27, 26, 26, 25, 24, 22, 21, 20, 18, 16, 15, 
13, 12, 11, 9, 8, 8, 7, 6, 6, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 4, 3, 2, 0, };