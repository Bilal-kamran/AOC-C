#include "input.h"

int list[1000][9] =
{

{ 6, 8, 9, 11, 10, -1},
{ 13, 16, 19, 22, 24, 25, 25, -1},
{ 43, 46, 47, 48, 50, 52, 56, -1},
{ 55, 57, 60, 61, 64, 65, 68, 74, -1},
{ 81, 84, 86, 83, 84, 87, -1},
{ 45, 47, 50, 49, 46, -1},
{ 15, 16, 18, 16, 16, -1},
{ 79, 80, 81, 79, 80, 83, 85, 89, -1},
{ 70, 73, 74, 72, 77, -1},
{ 78, 80, 81, 81, 83, -1},
{ 77, 79, 82, 85, 88, 88, 89, 87, -1},
{ 74, 75, 75, 78, 80, 82, 82, -1},
{ 83, 84, 84, 87, 88, 90, 94, -1},
{ 9, 11, 14, 16, 16, 21, -1},
{ 40, 42, 44, 48, 51, 53, 56, -1},
{ 71, 74, 78, 81, 80, -1},
{ 7, 9, 11, 14, 18, 20, 21, 21, -1},
{ 74, 77, 81, 82, 83, 87, -1},
{ 76, 77, 79, 80, 84, 86, 93, -1},
{ 62, 63, 69, 72, 75, 77, 78, -1},
{ 21, 23, 29, 32, 35, 37, 35, -1},
{ 85, 87, 88, 94, 94, -1},
{ 45, 47, 49, 56, 60, -1},
{ 45, 46, 51, 54, 56, 61, -1},
{ 63, 60, 62, 65, 67, 69, -1},
{ 39, 37, 40, 43, 44, 45, 46, 45, -1},
{ 84, 81, 84, 87, 87, -1},
{ 93, 91, 93, 95, 99, -1},
{ 45, 44, 46, 47, 49, 56, -1},
{ 72, 69, 68, 69, 72, -1},
{ 83, 81, 84, 81, 80, -1},
{ 4, 3, 5, 7, 6, 8, 10, 10, -1},
{ 92, 90, 87, 89, 93, -1},
{ 46, 45, 47, 44, 47, 48, 49, 54, -1},
{ 43, 42, 43, 43, 45, -1},
{ 18, 15, 15, 17, 20, 21, 19, -1},
{ 72, 71, 72, 73, 75, 75, 78, 78, -1},
{ 49, 46, 47, 49, 51, 51, 52, 56, -1},
{ 73, 72, 73, 74, 75, 78, 78, 84, -1},
{ 52, 49, 53, 55, 57, 60, 62, -1},
{ 21, 19, 23, 25, 27, 29, 28, -1},
{ 80, 77, 78, 81, 85, 86, 88, 88, -1},
{ 21, 20, 24, 27, 31, -1},
{ 37, 35, 39, 42, 48, -1},
{ 64, 61, 63, 69, 70, 72, 74, 75, -1},
{ 84, 83, 85, 88, 94, 91, -1},
{ 24, 23, 30, 32, 34, 37, 37, -1},
{ 70, 69, 70, 75, 79, -1},
{ 4, 3, 8, 10, 13, 20, -1},
{ 13, 13, 15, 17, 18, 19, 21, -1},
{ 9, 9, 10, 12, 15, 13, -1},
{ 50, 50, 53, 55, 57, 60, 62, 62, -1},
{ 5, 5, 7, 9, 13, -1},
{ 43, 43, 45, 47, 48, 50, 55, -1},
{ 79, 79, 81, 84, 82, 85, 88, -1},
{ 92, 92, 95, 93, 96, 95, -1},
{ 22, 22, 23, 22, 23, 25, 26, 26, -1},
{ 84, 84, 85, 83, 87, -1},
{ 72, 72, 70, 71, 72, 78, -1},
{ 17, 17, 19, 19, 20, 21, 24, -1},
{ 41, 41, 44, 47, 47, 44, -1},
{ 31, 31, 31, 32, 34, 35, 35, -1},
{ 7, 7, 9, 12, 12, 14, 18, -1},
{ 21, 21, 21, 22, 29, -1},
{ 83, 83, 85, 86, 88, 92, 94, 97, -1},
{ 26, 26, 27, 30, 33, 37, 35, -1},
{ 28, 28, 32, 35, 35, -1},
{ 82, 82, 85, 88, 92, 96, -1},
{ 6, 6, 10, 12, 18, -1},
{ 83, 83, 88, 89, 90, 92, 95, -1},
{ 19, 19, 24, 26, 28, 27, -1},
{ 41, 41, 48, 49, 49, -1},
{ 25, 25, 32, 33, 34, 36, 40, -1},
{ 28, 28, 29, 30, 33, 36, 43, 50, -1},
{ 83, 87, 89, 90, 93, 96, 99, -1},
{ 46, 50, 53, 54, 55, 58, 59, 56, -1},
{ 65, 69, 70, 73, 76, 78, 78, -1},
{ 67, 71, 72, 75, 77, 78, 82, -1},
{ 82, 86, 87, 89, 96, -1},
{ 81, 85, 86, 88, 91, 93, 92, 94, -1},
{ 59, 63, 66, 67, 65, 67, 64, -1},
{ 16, 20, 19, 20, 20, -1},
{ 89, 93, 96, 93, 97, -1},
{ 70, 74, 72, 74, 77, 83, -1},
{ 7, 11, 13, 14, 14, 15, 16, -1},
{ 26, 30, 31, 33, 36, 39, 39, 38, -1},
{ 55, 59, 62, 64, 64, 66, 66, -1},
{ 30, 34, 35, 35, 38, 40, 43, 47, -1},
{ 5, 9, 9, 12, 15, 22, -1},
{ 43, 47, 49, 52, 53, 54, 58, 61, -1},
{ 38, 42, 46, 48, 51, 53, 50, -1},
{ 1, 5, 6, 10, 10, -1},
{ 9, 13, 17, 20, 21, 23, 27, -1},
{ 28, 32, 36, 39, 40, 43, 48, -1},
{ 23, 27, 33, 36, 38, 40, 41, -1},
{ 51, 55, 57, 63, 61, -1},
{ 64, 68, 70, 77, 78, 81, 83, 83, -1},
{ 22, 26, 29, 32, 37, 41, -1},
{ 80, 84, 90, 92, 93, 99, -1},
{ 57, 63, 66, 68, 70, -1},
{ 75, 82, 84, 85, 86, 85, -1},
{ 52, 58, 61, 62, 62, -1},
{ 49, 56, 59, 61, 63, 66, 70, -1},
{ 33, 39, 40, 42, 45, 46, 53, -1},
{ 71, 77, 75, 76, 77, -1},
{ 73, 79, 76, 79, 82, 84, 82, -1},
{ 53, 58, 60, 62, 64, 63, 63, -1},
{ 47, 54, 51, 53, 55, 58, 60, 64, -1},
{ 70, 77, 74, 76, 83, -1},
{ 41, 46, 46, 48, 49, -1},
{ 26, 31, 33, 33, 32, -1},
{ 82, 89, 91, 91, 92, 92, -1},
{ 54, 60, 60, 61, 65, -1},
{ 20, 25, 26, 26, 31, -1},
{ 49, 56, 57, 61, 62, 65, -1},
{ 60, 65, 68, 70, 72, 76, 77, 75, -1},
{ 8, 13, 16, 20, 22, 24, 27, 27, -1},
{ 17, 24, 25, 29, 31, 35, -1},
{ 74, 79, 83, 86, 93, -1},
{ 5, 11, 14, 21, 22, 25, 28, -1},
{ 48, 53, 55, 61, 64, 67, 69, 68, -1},
{ 68, 73, 74, 80, 82, 82, -1},
{ 9, 14, 19, 20, 21, 25, -1},
{ 10, 15, 22, 24, 29, -1},
{ 68, 65, 63, 61, 59, 60, -1},
{ 25, 24, 21, 20, 20, -1},
{ 71, 69, 66, 65, 62, 58, -1},
{ 77, 76, 73, 71, 64, -1},
{ 83, 80, 81, 79, 78, 75, -1},
{ 20, 17, 20, 19, 18, 20, -1},
{ 70, 67, 65, 64, 66, 66, -1},
{ 93, 92, 94, 92, 88, -1},
{ 75, 72, 69, 70, 68, 61, -1},
{ 12, 10, 7, 7, 5, 4, 2, -1},
{ 63, 62, 59, 59, 62, -1},
{ 18, 17, 14, 13, 12, 12, 10, 10, -1},
{ 82, 80, 78, 78, 75, 71, -1},
{ 26, 24, 23, 23, 18, -1},
{ 49, 47, 43, 42, 39, 36, 34, 33, -1},
{ 50, 49, 46, 42, 39, 41, -1},
{ 38, 35, 31, 29, 27, 25, 25, -1},
{ 15, 14, 10, 7, 5, 1, -1},
{ 69, 66, 64, 60, 59, 56, 55, 49, -1},
{ 77, 75, 73, 67, 64, 62, -1},
{ 95, 93, 90, 87, 81, 82, -1},
{ 14, 13, 12, 10, 9, 4, 4, -1},
{ 62, 59, 56, 49, 46, 42, -1},
{ 47, 44, 37, 34, 32, 30, 29, 24, -1},
{ 79, 81, 78, 75, 72, 70, 67, 65, -1},
{ 62, 64, 63, 60, 58, 59, -1},
{ 66, 67, 66, 64, 63, 61, 61, -1},
{ 38, 39, 38, 36, 34, 30, -1},
{ 39, 42, 41, 39, 38, 37, 34, 27, -1},
{ 58, 61, 58, 55, 53, 52, 53, 52, -1},
{ 82, 85, 87, 85, 88, -1},
{ 25, 26, 27, 25, 23, 21, 21, -1},
{ 87, 89, 91, 88, 87, 86, 84, 80, -1},
{ 34, 35, 33, 34, 32, 27, -1},
{ 85, 88, 85, 84, 84, 83, -1},
{ 14, 16, 16, 14, 15, -1},
{ 16, 18, 15, 12, 12, 10, 10, -1},
{ 55, 57, 54, 52, 52, 48, -1},
{ 71, 74, 73, 73, 72, 67, -1},
{ 25, 28, 24, 21, 19, 16, -1},
{ 59, 62, 60, 56, 55, 53, 52, 54, -1},
{ 55, 57, 53, 50, 47, 45, 44, 44, -1},
{ 34, 37, 34, 33, 32, 28, 24, -1},
{ 84, 87, 83, 80, 78, 76, 73, 66, -1},
{ 23, 25, 23, 17, 15, -1},
{ 75, 78, 76, 74, 73, 70, 65, 68, -1},
{ 24, 25, 19, 17, 17, -1},
{ 95, 98, 92, 91, 87, -1},
{ 91, 92, 90, 83, 77, -1},
{ 45, 45, 44, 43, 42, -1},
{ 88, 88, 85, 82, 79, 78, 75, 77, -1},
{ 55, 55, 54, 53, 50, 50, -1},
{ 73, 73, 70, 67, 64, 60, -1},
{ 97, 97, 94, 92, 91, 84, -1},
{ 7, 7, 6, 3, 4, 3, -1},
{ 71, 71, 70, 67, 65, 66, 67, -1},
{ 69, 69, 70, 67, 64, 61, 60, 60, -1},
{ 20, 20, 18, 16, 14, 16, 15, 11, -1},
{ 39, 39, 36, 38, 35, 33, 30, 25, -1},
{ 42, 42, 42, 40, 38, 36, -1},
{ 49, 49, 46, 46, 44, 43, 45, -1},
{ 19, 19, 17, 15, 15, 13, 13, -1},
{ 81, 81, 81, 78, 76, 75, 71, -1},
{ 20, 20, 17, 17, 14, 12, 11, 5, -1},
{ 74, 74, 73, 69, 68, 66, 63, -1},
{ 68, 68, 65, 61, 58, 61, -1},
{ 44, 44, 40, 37, 34, 34, -1},
{ 60, 60, 59, 55, 53, 49, -1},
{ 38, 38, 36, 32, 30, 23, -1},
{ 70, 70, 68, 62, 61, 58, -1},
{ 51, 51, 49, 48, 41, 39, 41, -1},
{ 28, 28, 25, 19, 18, 18, -1},
{ 19, 19, 12, 9, 8, 4, -1},
{ 83, 83, 76, 73, 67, -1},
{ 66, 62, 59, 56, 55, 53, -1},
{ 19, 15, 14, 13, 15, -1},
{ 78, 74, 72, 69, 67, 66, 66, -1},
{ 93, 89, 88, 87, 84, 82, 78, -1},
{ 92, 88, 87, 86, 85, 83, 80, 73, -1},
{ 84, 80, 82, 80, 78, 76, -1},
{ 71, 67, 69, 66, 67, -1},
{ 84, 80, 78, 81, 81, -1},
{ 25, 21, 18, 17, 16, 18, 14, -1},
{ 57, 53, 55, 54, 47, -1},
{ 18, 14, 14, 11, 10, -1},
{ 66, 62, 59, 58, 55, 55, 58, -1},
{ 79, 75, 74, 74, 74, -1},
{ 67, 63, 60, 60, 59, 56, 52, -1},
{ 49, 45, 42, 40, 38, 37, 37, 31, -1},
{ 94, 90, 87, 85, 81, 79, -1},
{ 30, 26, 23, 22, 21, 17, 19, -1},
{ 75, 71, 68, 65, 63, 60, 56, 56, -1},
{ 97, 93, 91, 90, 86, 83, 79, -1},
{ 23, 19, 18, 14, 12, 6, -1},
{ 93, 89, 88, 82, 79, 77, 74, -1},
{ 57, 53, 52, 50, 47, 42, 45, -1},
{ 41, 37, 34, 32, 27, 27, -1},
{ 96, 92, 91, 86, 84, 81, 80, 76, -1},
{ 57, 53, 47, 44, 41, 39, 33, -1},
{ 49, 43, 41, 39, 38, 37, 35, -1},
{ 44, 38, 37, 35, 38, -1},
{ 24, 18, 16, 13, 11, 11, -1},
{ 67, 61, 58, 57, 55, 51, -1},
{ 60, 55, 53, 52, 46, -1},
{ 49, 44, 46, 44, 41, -1},
{ 16, 9, 10, 8, 5, 7, -1},
{ 27, 21, 20, 21, 19, 16, 16, -1},
{ 20, 15, 13, 16, 13, 9, -1},
{ 91, 84, 87, 86, 81, -1},
{ 60, 55, 52, 49, 49, 46, 45, -1},
{ 16, 9, 7, 5, 4, 4, 3, 5, -1},
{ 94, 88, 88, 86, 83, 83, -1},
{ 84, 77, 76, 76, 73, 70, 68, 64, -1},
{ 65, 59, 57, 55, 52, 49, 49, 42, -1},
{ 47, 41, 38, 36, 32, 30, -1},
{ 24, 19, 18, 14, 12, 14, -1},
{ 43, 38, 36, 32, 32, -1},
{ 78, 71, 68, 64, 62, 58, -1},
{ 38, 31, 27, 26, 20, -1},
{ 30, 24, 23, 18, 16, 13, -1},
{ 61, 55, 52, 45, 42, 39, 37, 40, -1},
{ 30, 24, 23, 22, 17, 15, 15, -1},
{ 75, 69, 64, 62, 60, 57, 55, 51, -1},
{ 94, 89, 86, 80, 78, 71, -1},
{ 13, 15, 18, 21, 19, -1},
{ 20, 22, 23, 26, 29, 29, -1},
{ 41, 43, 46, 49, 53, -1},
{ 27, 30, 31, 32, 39, -1},
{ 18, 21, 23, 22, 23, 26, 28, -1},
{ 64, 66, 69, 66, 68, 69, 71, 68, -1},
{ 15, 18, 21, 19, 21, 24, 24, -1},
{ 76, 78, 80, 77, 81, -1},
{ 60, 61, 62, 64, 63, 64, 70, -1},
{ 13, 16, 17, 17, 20, 21, -1},
{ 66, 69, 72, 72, 75, 74, -1},
{ 14, 16, 16, 17, 17, -1},
{ 5, 6, 6, 8, 12, -1},
{ 1, 3, 6, 6, 12, -1},
{ 64, 67, 71, 74, 75, 78, 81, 83, -1},
{ 20, 22, 24, 26, 30, 33, 35, 34, -1},
{ 29, 31, 35, 37, 37, -1},
{ 31, 32, 36, 37, 40, 42, 46, -1},
{ 59, 62, 65, 69, 72, 74, 77, 82, -1},
{ 77, 78, 83, 84, 85, 88, 91, -1},
{ 72, 74, 76, 82, 83, 85, 83, -1},
{ 12, 13, 15, 21, 21, -1},
{ 63, 65, 68, 70, 76, 80, -1},
{ 42, 44, 47, 48, 53, 54, 55, 60, -1},
{ 43, 41, 43, 45, 46, 49, -1},
{ 38, 36, 39, 40, 41, 40, -1},
{ 16, 15, 16, 17, 17, -1},
{ 29, 27, 29, 32, 35, 39, -1},
{ 28, 25, 27, 30, 33, 38, -1},
{ 44, 41, 43, 40, 42, 44, 46, -1},
{ 72, 70, 71, 70, 72, 70, -1},
{ 83, 80, 78, 81, 83, 85, 88, 88, -1},
{ 43, 41, 43, 45, 46, 49, 47, 51, -1},
{ 69, 66, 65, 66, 67, 68, 74, -1},
{ 31, 28, 31, 31, 34, -1},
{ 66, 64, 67, 70, 70, 71, 68, -1},
{ 86, 83, 83, 86, 87, 89, 89, -1},
{ 76, 74, 74, 76, 79, 82, 86, -1},
{ 6, 3, 3, 4, 10, -1},
{ 43, 42, 43, 44, 47, 49, 53, 55, -1},
{ 64, 62, 64, 68, 65, -1},
{ 61, 59, 62, 64, 65, 69, 72, 72, -1},
{ 87, 85, 88, 92, 96, -1},
{ 48, 46, 50, 53, 60, -1},
{ 12, 10, 15, 17, 19, 20, -1},
{ 26, 25, 27, 29, 30, 37, 34, -1},
{ 25, 22, 25, 27, 32, 33, 35, 35, -1},
{ 55, 53, 55, 62, 65, 67, 70, 74, -1},
{ 79, 78, 80, 87, 89, 96, -1},
{ 58, 58, 61, 62, 64, 66, 68, -1},
{ 66, 66, 68, 71, 73, 75, 72, -1},
{ 30, 30, 32, 33, 34, 37, 37, -1},
{ 30, 30, 33, 36, 38, 40, 44, -1},
{ 78, 78, 80, 81, 83, 90, -1},
{ 56, 56, 59, 62, 65, 63, 64, 66, -1},
{ 38, 38, 39, 40, 37, 39, 41, 40, -1},
{ 79, 79, 77, 79, 82, 84, 87, 87, -1},
{ 21, 21, 19, 21, 22, 24, 28, -1},
{ 23, 23, 22, 25, 31, -1},
{ 68, 68, 70, 72, 72, 75, -1},
{ 21, 21, 22, 22, 23, 25, 23, -1},
{ 22, 22, 25, 26, 26, 28, 28, -1},
{ 84, 84, 84, 87, 90, 92, 96, -1},
{ 76, 76, 79, 79, 85, -1},
{ 26, 26, 28, 32, 34, 36, 38, 40, -1},
{ 15, 15, 17, 21, 19, -1},
{ 59, 59, 62, 65, 69, 71, 71, -1},
{ 30, 30, 32, 35, 38, 42, 43, 47, -1},
{ 53, 53, 54, 55, 59, 64, -1},
{ 28, 28, 30, 37, 38, -1},
{ 57, 57, 64, 67, 66, -1},
{ 65, 65, 66, 69, 74, 74, -1},
{ 49, 49, 55, 56, 60, -1},
{ 39, 39, 41, 42, 49, 56, -1},
{ 77, 81, 83, 84, 86, 89, 91, -1},
{ 12, 16, 18, 19, 22, 24, 22, -1},
{ 24, 28, 30, 33, 35, 38, 41, 41, -1},
{ 85, 89, 91, 93, 95, 99, -1},
{ 1, 5, 6, 9, 11, 18, -1},
{ 66, 70, 72, 74, 75, 77, 75, 76, -1},
{ 67, 71, 72, 74, 76, 73, 70, -1},
{ 2, 6, 8, 11, 12, 9, 9, -1},
{ 52, 56, 53, 55, 56, 60, -1},
{ 15, 19, 22, 21, 28, -1},
{ 71, 75, 77, 77, 80, 83, -1},
{ 16, 20, 22, 22, 25, 23, -1},
{ 18, 22, 25, 26, 26, 26, -1},
{ 8, 12, 12, 14, 15, 18, 19, 23, -1},
{ 53, 57, 60, 63, 63, 64, 66, 72, -1},
{ 37, 41, 44, 48, 50, -1},
{ 32, 36, 38, 42, 44, 47, 46, -1},
{ 3, 7, 9, 11, 13, 17, 17, -1},
{ 72, 76, 80, 83, 87, -1},
{ 61, 65, 68, 70, 72, 76, 77, 82, -1},
{ 35, 39, 41, 48, 51, 53, -1},
{ 80, 84, 85, 92, 94, 95, 94, -1},
{ 17, 21, 24, 31, 31, -1},
{ 61, 65, 70, 73, 76, 80, -1},
{ 34, 38, 41, 44, 50, 51, 58, -1},
{ 22, 27, 30, 31, 33, 36, 39, 42, -1},
{ 51, 58, 59, 60, 63, 61, -1},
{ 35, 41, 42, 44, 45, 46, 49, 49, -1},
{ 77, 83, 85, 87, 89, 93, -1},
{ 14, 20, 23, 24, 25, 27, 32, -1},
{ 28, 34, 36, 37, 39, 36, 38, -1},
{ 62, 69, 71, 70, 68, -1},
{ 79, 84, 81, 82, 85, 86, 86, -1},
{ 63, 69, 71, 68, 70, 74, -1},
{ 18, 24, 21, 22, 23, 28, -1},
{ 76, 81, 82, 83, 83, 84, 86, 87, -1},
{ 62, 69, 72, 72, 69, -1},
{ 79, 84, 84, 87, 90, 90, -1},
{ 4, 10, 11, 11, 15, -1},
{ 46, 52, 55, 56, 56, 58, 63, -1},
{ 58, 65, 68, 72, 73, -1},
{ 44, 50, 53, 55, 59, 56, -1},
{ 67, 72, 76, 79, 81, 83, 84, 84, -1},
{ 64, 70, 72, 76, 77, 79, 80, 84, -1},
{ 14, 21, 25, 27, 29, 35, -1},
{ 11, 16, 18, 19, 25, 27, 30, -1},
{ 26, 32, 34, 41, 39, -1},
{ 18, 25, 26, 29, 35, 35, -1},
{ 15, 22, 28, 29, 32, 33, 37, -1},
{ 74, 81, 82, 88, 95, -1},
{ 56, 53, 52, 51, 50, 48, 51, -1},
{ 11, 9, 6, 3, 3, -1},
{ 42, 39, 36, 35, 31, -1},
{ 67, 64, 62, 60, 54, -1},
{ 9, 6, 9, 8, 5, -1},
{ 38, 35, 33, 36, 35, 36, -1},
{ 59, 57, 56, 53, 55, 55, -1},
{ 97, 96, 94, 92, 93, 89, -1},
{ 88, 87, 86, 87, 86, 81, -1},
{ 40, 37, 37, 34, 31, -1},
{ 29, 28, 28, 27, 26, 29, -1},
{ 91, 89, 87, 84, 84, 84, -1},
{ 85, 84, 84, 81, 77, -1},
{ 16, 14, 11, 11, 5, -1},
{ 95, 94, 91, 90, 86, 83, -1},
{ 40, 39, 38, 37, 33, 35, -1},
{ 32, 31, 27, 26, 26, -1},
{ 22, 20, 16, 13, 9, -1},
{ 32, 29, 27, 25, 24, 20, 19, 14, -1},
{ 60, 57, 55, 50, 48, -1},
{ 28, 25, 22, 20, 13, 10, 8, 9, -1},
{ 45, 43, 42, 36, 33, 30, 30, -1},
{ 89, 88, 86, 79, 77, 76, 73, 69, -1},
{ 27, 26, 19, 16, 13, 10, 3, -1},
{ 21, 24, 23, 21, 20, 19, 18, -1},
{ 32, 35, 32, 30, 28, 27, 29, -1},
{ 68, 71, 68, 65, 63, 60, 59, 59, -1},
{ 58, 59, 58, 57, 53, -1},
{ 43, 46, 44, 43, 40, 38, 35, 28, -1},
{ 9, 11, 12, 10, 7, -1},
{ 85, 86, 83, 80, 77, 80, 77, 78, -1},
{ 8, 10, 8, 7, 5, 6, 6, -1},
{ 53, 56, 53, 52, 53, 49, -1},
{ 24, 27, 25, 23, 20, 22, 20, 15, -1},
{ 12, 15, 14, 14, 13, 10, -1},
{ 53, 54, 53, 50, 50, 47, 44, 45, -1},
{ 36, 38, 35, 35, 34, 33, 31, 31, -1},
{ 36, 39, 39, 37, 33, -1},
{ 71, 72, 72, 71, 69, 64, -1},
{ 11, 13, 11, 10, 6, 4, -1},
{ 52, 53, 49, 48, 50, -1},
{ 59, 61, 59, 55, 54, 54, -1},
{ 82, 84, 81, 77, 76, 73, 71, 67, -1},
{ 56, 57, 54, 53, 49, 46, 44, 37, -1},
{ 64, 66, 65, 60, 57, -1},
{ 65, 67, 64, 58, 57, 56, 59, -1},
{ 90, 92, 85, 84, 81, 78, 78, -1},
{ 43, 45, 44, 42, 36, 32, -1},
{ 27, 29, 26, 24, 23, 20, 14, 9, -1},
{ 53, 53, 51, 49, 47, 44, 42, 39, -1},
{ 85, 85, 82, 81, 79, 76, 75, 78, -1},
{ 51, 51, 50, 48, 46, 46, -1},
{ 78, 78, 75, 73, 71, 69, 67, 63, -1},
{ 36, 36, 33, 31, 29, 22, -1},
{ 73, 73, 71, 74, 71, -1},
{ 16, 16, 13, 11, 13, 14, -1},
{ 64, 64, 61, 62, 62, -1},
{ 53, 53, 55, 52, 48, -1},
{ 48, 48, 49, 48, 41, -1},
{ 28, 28, 26, 26, 25, -1},
{ 48, 48, 46, 43, 43, 42, 45, -1},
{ 77, 77, 74, 72, 71, 71, 68, 68, -1},
{ 36, 36, 33, 31, 31, 30, 28, 24, -1},
{ 26, 26, 23, 23, 17, -1},
{ 89, 89, 86, 82, 79, 76, 75, -1},
{ 14, 14, 13, 12, 8, 6, 8, -1},
{ 88, 88, 84, 81, 80, 80, -1},
{ 55, 55, 54, 50, 47, 43, -1},
{ 99, 99, 95, 92, 89, 86, 84, 78, -1},
{ 56, 56, 54, 47, 44, -1},
{ 18, 18, 16, 14, 8, 7, 8, -1},
{ 87, 87, 80, 79, 78, 76, 74, 74, -1},
{ 86, 86, 81, 78, 76, 72, -1},
{ 87, 87, 84, 77, 75, 73, 66, -1},
{ 82, 78, 76, 73, 70, 69, 68, -1},
{ 38, 34, 32, 30, 27, 25, 24, 25, -1},
{ 64, 60, 59, 56, 55, 55, -1},
{ 50, 46, 45, 44, 42, 38, -1},
{ 21, 17, 14, 11, 9, 3, -1},
{ 39, 35, 34, 32, 34, 31, -1},
{ 73, 69, 67, 64, 61, 58, 59, 62, -1},
{ 23, 19, 16, 14, 17, 17, -1},
{ 22, 18, 19, 17, 13, -1},
{ 27, 23, 21, 19, 21, 18, 17, 12, -1},
{ 60, 56, 55, 53, 50, 50, 49, -1},
{ 21, 17, 14, 14, 17, -1},
{ 61, 57, 57, 55, 53, 52, 52, -1},
{ 89, 85, 83, 82, 82, 81, 79, 75, -1},
{ 90, 86, 84, 84, 78, -1},
{ 52, 48, 46, 42, 39, -1},
{ 85, 81, 79, 78, 74, 72, 69, 72, -1},
{ 40, 36, 34, 31, 28, 24, 24, -1},
{ 89, 85, 81, 79, 76, 74, 70, -1},
{ 43, 39, 35, 32, 29, 27, 22, -1},
{ 45, 41, 35, 34, 33, 32, 30, 28, -1},
{ 74, 70, 68, 62, 64, -1},
{ 92, 88, 86, 81, 79, 76, 73, 73, -1},
{ 71, 67, 64, 63, 57, 56, 52, -1},
{ 93, 89, 88, 81, 80, 75, -1},
{ 27, 21, 18, 16, 14, -1},
{ 18, 11, 10, 9, 8, 6, 7, -1},
{ 80, 75, 73, 71, 71, -1},
{ 27, 21, 19, 17, 15, 12, 10, 6, -1},
{ 43, 38, 36, 34, 33, 28, -1},
{ 71, 64, 63, 64, 62, -1},
{ 97, 91, 89, 88, 87, 88, 89, -1},
{ 68, 63, 60, 63, 61, 61, -1},
{ 17, 11, 13, 10, 9, 7, 5, 1, -1},
{ 64, 57, 55, 57, 55, 53, 47, -1},
{ 73, 66, 63, 60, 59, 59, 56, 53, -1},
{ 27, 22, 21, 20, 19, 16, 16, 19, -1},
{ 31, 25, 25, 24, 24, -1},
{ 34, 28, 28, 25, 24, 20, -1},
{ 73, 68, 65, 65, 64, 59, -1},
{ 67, 62, 59, 55, 54, 51, 48, 46, -1},
{ 76, 70, 68, 64, 61, 58, 60, -1},
{ 83, 76, 75, 71, 71, -1},
{ 76, 71, 69, 68, 64, 60, -1},
{ 42, 35, 32, 31, 27, 24, 21, 14, -1},
{ 52, 46, 44, 43, 36, 33, -1},
{ 69, 62, 56, 53, 52, 49, 51, -1},
{ 23, 18, 12, 10, 9, 7, 7, -1},
{ 74, 67, 64, 62, 56, 52, -1},
{ 28, 21, 15, 12, 9, 2, -1},
{ 48, 49, 50, 51, 49, -1},
{ 48, 51, 52, 53, 54, 56, 56, -1},
{ 61, 64, 67, 70, 74, -1},
{ 14, 17, 20, 23, 29, -1},
{ 11, 13, 10, 13, 16, -1},
{ 26, 28, 31, 30, 33, 30, -1},
{ 17, 20, 22, 19, 19, -1},
{ 59, 61, 63, 65, 62, 66, -1},
{ 64, 66, 67, 70, 67, 70, 71, 76, -1},
{ 20, 22, 22, 25, 28, 31, -1},
{ 82, 84, 85, 85, 87, 90, 87, -1},
{ 32, 33, 36, 37, 37, 39, 41, 41, -1},
{ 30, 33, 36, 38, 40, 42, 42, 46, -1},
{ 83, 85, 86, 89, 92, 92, 93, 99, -1},
{ 13, 14, 15, 19, 22, 23, 25, -1},
{ 20, 21, 25, 28, 26, -1},
{ 17, 19, 22, 26, 26, -1},
{ 35, 36, 40, 42, 45, 49, -1},
{ 19, 22, 23, 24, 28, 34, -1},
{ 37, 39, 40, 46, 49, -1},
{ 74, 76, 78, 84, 81, -1},
{ 23, 25, 28, 35, 35, -1},
{ 82, 83, 89, 90, 92, 96, -1},
{ 39, 41, 47, 48, 53, -1},
{ 26, 24, 26, 29, 30, 31, 33, 34, -1},
{ 8, 7, 10, 11, 9, -1},
{ 38, 37, 39, 40, 41, 41, -1},
{ 39, 38, 40, 42, 46, -1},
{ 68, 66, 69, 70, 72, 78, -1},
{ 60, 57, 59, 60, 58, 61, 62, -1},
{ 62, 60, 61, 59, 58, -1},
{ 11, 10, 12, 14, 13, 13, -1},
{ 63, 62, 61, 64, 67, 71, -1},
{ 89, 86, 85, 88, 90, 91, 97, -1},
{ 34, 32, 32, 33, 35, -1},
{ 16, 14, 14, 17, 18, 19, 18, -1},
{ 20, 17, 20, 22, 25, 28, 28, 28, -1},
{ 6, 5, 6, 6, 10, -1},
{ 20, 17, 18, 18, 20, 25, -1},
{ 20, 19, 22, 26, 29, 32, 35, -1},
{ 59, 56, 59, 62, 65, 69, 66, -1},
{ 72, 70, 71, 75, 76, 79, 82, 82, -1},
{ 30, 29, 32, 36, 40, -1},
{ 80, 79, 83, 86, 93, -1},
{ 25, 24, 31, 32, 34, 35, 36, -1},
{ 12, 9, 14, 16, 13, -1},
{ 26, 23, 29, 32, 35, 36, 36, -1},
{ 23, 22, 27, 28, 32, -1},
{ 71, 68, 74, 77, 80, 83, 89, -1},
{ 81, 81, 84, 87, 90, 93, 95, 97, -1},
{ 66, 66, 67, 69, 72, 73, 75, 73, -1},
{ 75, 75, 76, 78, 80, 82, 82, -1},
{ 15, 15, 16, 18, 21, 25, -1},
{ 51, 51, 53, 56, 61, -1},
{ 74, 74, 71, 72, 75, -1},
{ 34, 34, 36, 35, 32, -1},
{ 41, 41, 44, 43, 43, -1},
{ 72, 72, 69, 71, 75, -1},
{ 51, 51, 52, 53, 51, 57, -1},
{ 53, 53, 55, 58, 59, 59, 61, -1},
{ 1, 1, 4, 4, 7, 4, -1},
{ 76, 76, 79, 79, 82, 83, 83, -1},
{ 2, 2, 4, 4, 7, 8, 12, -1},
{ 85, 85, 86, 88, 88, 93, -1},
{ 57, 57, 59, 63, 66, 67, -1},
{ 65, 65, 68, 69, 71, 72, 76, 75, -1},
{ 71, 71, 75, 78, 80, 80, -1},
{ 29, 29, 33, 36, 40, -1},
{ 63, 63, 65, 69, 70, 73, 74, 81, -1},
{ 11, 11, 17, 18, 21, 24, -1},
{ 79, 79, 82, 84, 90, 91, 93, 91, -1},
{ 15, 15, 20, 23, 25, 25, -1},
{ 76, 76, 78, 80, 86, 88, 91, 95, -1},
{ 38, 38, 39, 46, 51, -1},
{ 47, 51, 53, 54, 55, -1},
{ 33, 37, 38, 41, 40, -1},
{ 6, 10, 13, 15, 15, -1},
{ 50, 54, 56, 59, 60, 62, 66, -1},
{ 1, 5, 6, 9, 14, -1},
{ 44, 48, 46, 48, 50, 52, -1},
{ 34, 38, 40, 41, 42, 43, 40, 37, -1},
{ 77, 81, 82, 83, 82, 83, 83, -1},
{ 17, 21, 22, 23, 21, 22, 26, -1},
{ 74, 78, 80, 78, 80, 83, 88, -1},
{ 47, 51, 51, 52, 54, 56, -1},
{ 65, 69, 72, 74, 75, 75, 77, 76, -1},
{ 56, 60, 63, 63, 64, 66, 68, 68, -1},
{ 53, 57, 58, 59, 59, 61, 65, -1},
{ 30, 34, 35, 37, 39, 39, 42, 47, -1},
{ 72, 76, 78, 82, 85, 88, 89, -1},
{ 56, 60, 64, 65, 68, 66, -1},
{ 83, 87, 90, 94, 94, -1},
{ 12, 16, 20, 22, 25, 29, -1},
{ 45, 49, 53, 56, 63, -1},
{ 67, 71, 78, 79, 80, 81, 82, -1},
{ 75, 79, 82, 84, 89, 92, 91, -1},
{ 49, 53, 55, 58, 61, 62, 69, 69, -1},
{ 58, 62, 64, 69, 70, 73, 76, 80, -1},
{ 48, 52, 57, 60, 61, 62, 63, 69, -1},
{ 45, 52, 54, 56, 58, 60, -1},
{ 13, 19, 21, 24, 23, -1},
{ 25, 31, 32, 33, 34, 37, 37, -1},
{ 76, 82, 83, 85, 86, 88, 92, -1},
{ 48, 55, 56, 58, 64, -1},
{ 16, 22, 23, 21, 24, 25, 28, -1},
{ 25, 32, 34, 36, 35, 32, -1},
{ 11, 18, 19, 16, 17, 19, 19, -1},
{ 25, 31, 32, 34, 37, 40, 38, 42, -1},
{ 15, 20, 22, 20, 26, -1},
{ 67, 72, 75, 75, 76, 79, -1},
{ 26, 31, 32, 34, 35, 35, 32, -1},
{ 71, 77, 80, 81, 83, 85, 85, 85, -1},
{ 44, 49, 52, 52, 56, -1},
{ 66, 71, 71, 72, 73, 76, 78, 83, -1},
{ 54, 60, 64, 66, 68, 71, 73, -1},
{ 36, 42, 45, 46, 50, 52, 49, -1},
{ 79, 84, 87, 90, 92, 96, 96, -1},
{ 30, 37, 40, 42, 44, 45, 49, 53, -1},
{ 36, 41, 45, 47, 53, -1},
{ 45, 52, 59, 61, 63, -1},
{ 11, 18, 20, 27, 28, 26, -1},
{ 16, 21, 28, 31, 31, -1},
{ 13, 19, 20, 26, 28, 29, 30, 34, -1},
{ 56, 61, 62, 65, 72, 75, 82, -1},
{ 20, 18, 16, 15, 16, -1},
{ 37, 34, 33, 32, 31, 30, 30, -1},
{ 50, 49, 46, 45, 42, 38, -1},
{ 61, 58, 55, 53, 51, 48, 43, -1},
{ 72, 69, 68, 71, 70, 67, 65, -1},
{ 13, 10, 11, 9, 8, 7, 10, -1},
{ 64, 63, 61, 62, 62, -1},
{ 48, 46, 47, 46, 42, -1},
{ 44, 42, 43, 41, 40, 33, -1},
{ 11, 8, 8, 5, 2, -1},
{ 94, 91, 91, 88, 89, -1},
{ 47, 46, 43, 43, 40, 40, -1},
{ 93, 90, 87, 87, 83, -1},
{ 25, 23, 20, 18, 18, 12, -1},
{ 83, 82, 79, 75, 72, -1},
{ 38, 35, 32, 29, 25, 23, 24, -1},
{ 77, 76, 74, 70, 68, 66, 66, -1},
{ 85, 83, 81, 78, 77, 75, 71, 67, -1},
{ 49, 48, 47, 43, 42, 36, -1},
{ 79, 78, 75, 73, 72, 70, 63, 61, -1},
{ 32, 29, 27, 24, 18, 19, -1},
{ 48, 47, 40, 38, 38, -1},
{ 56, 53, 50, 49, 42, 39, 35, -1},
{ 25, 22, 21, 20, 15, 8, -1},
{ 59, 61, 58, 57, 55, 54, -1},
{ 64, 67, 64, 61, 60, 58, 61, -1},
{ 21, 23, 22, 20, 19, 16, 16, -1},
{ 68, 69, 67, 65, 64, 60, -1},
{ 21, 23, 21, 20, 17, 15, 12, 5, -1},
{ 11, 12, 10, 7, 8, 6, 4, 3, -1},
{ 94, 96, 93, 95, 98, -1},
{ 77, 79, 77, 78, 75, 72, 72, -1},
{ 23, 24, 21, 19, 20, 19, 15, -1},
{ 32, 34, 33, 34, 27, -1},
{ 15, 17, 17, 16, 15, -1},
{ 34, 37, 35, 32, 31, 31, 33, -1},
{ 24, 25, 22, 20, 19, 19, 19, -1},
{ 15, 18, 15, 15, 13, 11, 7, -1},
{ 88, 90, 90, 89, 86, 85, 83, 76, -1},
{ 81, 84, 81, 77, 74, 72, 69, -1},
{ 50, 53, 50, 46, 49, -1},
{ 51, 53, 49, 48, 48, -1},
{ 52, 53, 49, 46, 44, 41, 38, 34, -1},
{ 57, 60, 58, 55, 51, 48, 41, -1},
{ 87, 89, 88, 82, 79, -1},
{ 64, 65, 64, 61, 54, 55, -1},
{ 95, 96, 93, 90, 83, 81, 78, 78, -1},
{ 17, 20, 18, 11, 9, 6, 5, 1, -1},
{ 42, 45, 38, 36, 29, -1},
{ 48, 48, 47, 44, 41, 40, -1},
{ 21, 21, 18, 16, 13, 12, 10, 13, -1},
{ 64, 64, 63, 60, 57, 57, -1},
{ 19, 19, 17, 14, 11, 8, 6, 2, -1},
{ 18, 18, 15, 13, 8, -1},
{ 97, 97, 99, 98, 95, 94, -1},
{ 42, 42, 40, 42, 40, 38, 39, -1},
{ 5, 5, 8, 6, 4, 4, -1},
{ 66, 66, 64, 63, 61, 64, 62, 58, -1},
{ 18, 18, 16, 18, 16, 15, 13, 6, -1},
{ 23, 23, 23, 20, 17, 16, -1},
{ 41, 41, 41, 38, 40, -1},
{ 36, 36, 34, 31, 28, 28, 28, -1},
{ 70, 70, 70, 68, 65, 64, 62, 58, -1},
{ 21, 21, 19, 19, 14, -1},
{ 66, 66, 62, 61, 59, 56, 54, 53, -1},
{ 78, 78, 74, 71, 68, 67, 66, 68, -1},
{ 81, 81, 80, 78, 74, 73, 71, 71, -1},
{ 69, 69, 68, 64, 60, -1},
{ 68, 68, 66, 62, 60, 57, 55, 48, -1},
{ 55, 55, 48, 45, 43, 42, 40, 38, -1},
{ 23, 23, 21, 14, 15, -1},
{ 61, 61, 60, 57, 56, 51, 51, -1},
{ 66, 66, 64, 62, 60, 54, 50, -1},
{ 96, 96, 90, 87, 81, -1},
{ 39, 35, 33, 31, 30, 28, 25, -1},
{ 35, 31, 28, 26, 23, 26, -1},
{ 83, 79, 78, 77, 75, 72, 72, -1},
{ 42, 38, 37, 35, 31, -1},
{ 50, 46, 44, 43, 40, 38, 37, 31, -1},
{ 74, 70, 69, 71, 69, 68, 65, 63, -1},
{ 97, 93, 90, 93, 96, -1},
{ 43, 39, 38, 35, 38, 35, 35, -1},
{ 60, 56, 59, 57, 53, -1},
{ 87, 83, 82, 85, 83, 77, -1},
{ 28, 24, 22, 22, 19, 17, -1},
{ 52, 48, 48, 45, 48, -1},
{ 16, 12, 9, 9, 8, 6, 6, -1},
{ 94, 90, 88, 86, 86, 84, 81, 77, -1},
{ 87, 83, 83, 80, 78, 77, 71, -1},
{ 66, 62, 61, 57, 56, -1},
{ 36, 32, 28, 25, 24, 21, 24, -1},
{ 64, 60, 59, 56, 52, 52, -1},
{ 73, 69, 68, 65, 63, 62, 58, 54, -1},
{ 76, 72, 68, 67, 65, 62, 56, -1},
{ 33, 29, 24, 21, 18, -1},
{ 94, 90, 88, 81, 83, -1},
{ 30, 26, 21, 20, 20, -1},
{ 42, 38, 36, 30, 26, -1},
{ 47, 43, 38, 35, 28, -1},
{ 40, 35, 32, 31, 28, 25, -1},
{ 87, 82, 80, 77, 76, 75, 76, -1},
{ 16, 10, 8, 5, 2, 2, -1},
{ 29, 24, 23, 20, 18, 15, 12, 8, -1},
{ 57, 50, 48, 45, 40, -1},
{ 58, 52, 54, 53, 50, 49, -1},
{ 86, 80, 77, 78, 76, 73, 75, -1},
{ 75, 70, 67, 69, 69, -1},
{ 66, 60, 57, 58, 55, 54, 51, 47, -1},
{ 38, 32, 30, 29, 31, 24, -1},
{ 54, 47, 45, 43, 43, 41, -1},
{ 74, 69, 67, 67, 70, -1},
{ 52, 47, 44, 44, 41, 39, 37, 37, -1},
{ 36, 31, 29, 26, 26, 24, 20, -1},
{ 32, 26, 25, 23, 22, 22, 21, 16, -1},
{ 34, 28, 25, 21, 19, -1},
{ 86, 80, 76, 73, 75, -1},
{ 65, 58, 54, 51, 50, 49, 49, -1},
{ 50, 43, 41, 38, 37, 35, 31, 27, -1},
{ 35, 28, 24, 21, 18, 11, -1},
{ 34, 27, 20, 18, 16, -1},
{ 14, 9, 8, 3, 6, -1},
{ 63, 57, 56, 49, 49, -1},
{ 94, 88, 85, 79, 77, 73, -1},
{ 70, 65, 60, 57, 56, 55, 52, 45, -1},
{ 69, 69, 66, 65, 64, 67, 66, 66, -1},
{ 62, 64, 66, 66, 63, -1},
{ 82, 80, 78, 76, 72, 74, -1},
{ 90, 92, 92, 93, 94, -1},
{ 69, 67, 64, 62, 60, -1},
{ 42, 45, 47, 48, 51, -1},
{ 36, 39, 42, 43, 46, 49, 52, -1},
{ 13, 10, 9, 7, 5, -1},
{ 25, 26, 28, 29, 31, 33, 35, 38, -1},
{ 14, 13, 12, 9, 7, 4, 2, -1},
{ 65, 68, 70, 72, 75, 77, -1},
{ 23, 26, 28, 29, 31, 34, 35, 37, -1},
{ 17, 14, 12, 9, 7, 6, 4, 2, -1},
{ 33, 34, 37, 38, 41, -1},
{ 37, 36, 33, 30, 27, -1},
{ 5, 8, 9, 10, 12, -1},
{ 63, 61, 58, 57, 54, -1},
{ 23, 25, 28, 31, 33, 35, 38, 39, -1},
{ 13, 10, 7, 6, 4, -1},
{ 86, 88, 90, 91, 92, 94, -1},
{ 55, 54, 53, 51, 50, 48, 46, -1},
{ 33, 30, 27, 24, 21, 18, -1},
{ 65, 67, 70, 73, 74, 75, 78, -1},
{ 53, 51, 48, 45, 43, 40, 37, -1},
{ 94, 92, 91, 89, 87, 86, 83, -1},
{ 69, 71, 74, 75, 76, -1},
{ 72, 74, 77, 79, 81, 82, 84, 85, -1},
{ 21, 18, 17, 14, 11, -1},
{ 18, 17, 14, 12, 9, -1},
{ 88, 91, 92, 94, 96, 99, -1},
{ 12, 9, 6, 5, 2, -1},
{ 68, 65, 62, 61, 60, 57, 55, 53, -1},
{ 30, 27, 25, 22, 19, 18, 17, -1},
{ 34, 37, 39, 42, 44, 47, 49, 51, -1},
{ 71, 74, 77, 80, 81, 84, 87, -1},
{ 29, 28, 25, 23, 20, 17, 14, 12, -1},
{ 53, 54, 57, 58, 59, -1},
{ 23, 21, 19, 17, 16, 15, -1},
{ 31, 34, 36, 37, 39, 41, 42, 44, -1},
{ 58, 61, 64, 66, 68, 70, 72, -1},
{ 3, 4, 6, 9, 10, 13, 15, -1},
{ 64, 63, 60, 58, 56, 54, 53, 52, -1},
{ 75, 77, 78, 80, 81, 83, 86, 88, -1},
{ 61, 63, 65, 66, 68, 71, 73, -1},
{ 20, 23, 24, 26, 28, 30, 33, -1},
{ 18, 15, 12, 10, 7, -1},
{ 50, 48, 45, 43, 40, 39, 37, 36, -1},
{ 48, 47, 45, 42, 41, 39, -1},
{ 7, 10, 11, 13, 14, 17, 18, -1},
{ 25, 22, 19, 18, 16, 14, 12, 11, -1},
{ 53, 50, 47, 45, 42, -1},
{ 57, 58, 59, 60, 62, 64, 65, -1},
{ 38, 41, 42, 43, 44, 46, 47, -1},
{ 50, 53, 56, 57, 60, 62, 64, -1},
{ 86, 83, 81, 78, 76, 74, 72, 69, -1},
{ 60, 61, 64, 66, 68, 69, 71, 73, -1},
{ 13, 16, 18, 19, 22, 25, 26, 27, -1},
{ 77, 79, 81, 84, 85, -1},
{ 81, 79, 78, 76, 73, 71, -1},
{ 32, 34, 37, 40, 42, -1},
{ 89, 88, 87, 85, 84, 83, -1},
{ 59, 62, 65, 67, 68, 70, 73, 74, -1},
{ 54, 57, 58, 60, 63, -1},
{ 34, 32, 31, 29, 27, 24, 21, -1},
{ 43, 45, 46, 49, 51, -1},
{ 76, 78, 79, 80, 82, 84, -1},
{ 36, 34, 32, 30, 27, -1},
{ 23, 24, 25, 28, 29, -1},
{ 19, 22, 25, 28, 30, 33, 35, -1},
{ 61, 59, 57, 54, 52, 50, -1},
{ 23, 24, 25, 27, 30, 32, 33, 34, -1},
{ 63, 64, 66, 69, 70, 71, 72, 74, -1},
{ 85, 86, 88, 89, 92, 95, 96, 97, -1},
{ 8, 9, 10, 13, 15, -1},
{ 74, 73, 71, 68, 65, 62, 60, 59, -1},
{ 51, 48, 45, 44, 41, 38, 36, -1},
{ 41, 39, 38, 36, 34, 31, -1},
{ 58, 59, 60, 62, 64, -1},
{ 29, 31, 33, 36, 38, 39, 41, 43, -1},
{ 1, 2, 4, 5, 7, 10, 11, 14, -1},
{ 24, 27, 29, 32, 33, 35, -1},
{ 54, 52, 50, 49, 47, 45, -1},
{ 30, 29, 27, 24, 21, 19, 16, 14, -1},
{ 44, 46, 49, 50, 51, 52, 54, -1},
{ 24, 25, 28, 31, 34, 36, -1},
{ 53, 52, 51, 50, 47, -1},
{ 63, 62, 60, 58, 57, 56, 54, 51, -1},
{ 38, 39, 41, 44, 47, 49, 52, -1},
{ 97, 96, 93, 90, 87, 84, 83, -1},
{ 81, 79, 77, 75, 72, 70, -1},
{ 36, 35, 32, 31, 29, -1},
{ 76, 77, 80, 83, 86, 89, 91, -1},
{ 21, 22, 24, 27, 28, 30, 32, 33, -1},
{ 80, 81, 82, 84, 85, 86, -1},
{ 94, 93, 91, 88, 85, 84, 81, 79, -1},
{ 77, 79, 81, 82, 85, 86, 89, 91, -1},
{ 42, 39, 36, 35, 32, 29, 27, -1},
{ 19, 18, 16, 15, 14, -1},
{ 63, 62, 60, 57, 55, 54, 53, 51, -1},
{ 31, 30, 27, 25, 23, 22, 20, 18, -1},
{ 35, 37, 38, 40, 42, 45, 46, -1},
{ 41, 44, 45, 47, 48, 51, -1},
{ 19, 21, 23, 26, 29, 31, -1},
{ 32, 30, 28, 26, 23, -1},
{ 31, 33, 35, 37, 38, -1},
{ 46, 43, 40, 37, 35, 32, -1},
{ 81, 80, 77, 74, 71, -1},
{ 16, 17, 18, 19, 22, -1},
{ 67, 65, 64, 62, 61, -1},
{ 66, 63, 61, 58, 55, 54, 51, -1},
{ 46, 49, 52, 54, 56, -1},
{ 51, 50, 47, 46, 43, -1},
{ 30, 32, 33, 35, 36, -1},
{ 66, 63, 60, 58, 57, 56, 55, -1},
{ 67, 64, 61, 59, 56, 55, -1},
{ 37, 36, 33, 32, 31, -1},
{ 87, 88, 91, 92, 93, 95, 96, -1},
{ 62, 59, 58, 55, 54, -1},
{ 12, 10, 9, 8, 5, -1},
{ 64, 62, 61, 60, 58, -1},
{ 16, 18, 21, 24, 27, 28, 29, -1},
{ 79, 78, 76, 73, 71, 70, 69, 66, -1},
{ 87, 85, 84, 82, 81, 79, 77, -1},
{ 74, 76, 79, 81, 82, 83, 86, 89, -1},
{ 91, 89, 87, 85, 84, 81, 78, 77, -1},
{ 75, 72, 71, 68, 65, 64, 62, 59, -1},
{ 52, 55, 58, 60, 62, 64, -1},
{ 44, 46, 49, 51, 53, 54, 55, 56, -1},
{ 65, 63, 62, 59, 56, 55, 52, 51, -1},
{ 21, 23, 25, 28, 31, 32, 34, 37, -1},
{ 81, 79, 78, 76, 73, 72, 69, 67, -1},
{ 14, 11, 10, 9, 8, 6, 3, -1},
{ 59, 56, 55, 53, 51, 49, -1},
{ 62, 59, 58, 56, 54, 53, 52, 49, -1},
{ 45, 48, 49, 51, 53, 55, 56, -1},
{ 11, 13, 16, 18, 20, 21, 24, -1},
{ 27, 26, 23, 22, 19, 18, -1},
{ 70, 67, 64, 62, 60, 57, 55, -1},
{ 96, 94, 91, 90, 88, 86, -1},
{ 63, 66, 67, 70, 73, -1},
{ 5, 8, 11, 14, 16, 19, 21, 22, -1},
{ 83, 85, 86, 88, 91, 92, -1},
{ 40, 39, 36, 35, 34, -1},
{ 73, 75, 77, 78, 81, 83, -1},
{ 50, 49, 47, 46, 44, 41, 38, 35, -1},
{ 73, 76, 79, 81, 83, 86, 88, 90, -1},
{ 15, 16, 18, 20, 21, -1},
{ 85, 87, 88, 89, 91, -1},
{ 71, 73, 75, 76, 77, 79, 80, 83, -1},
{ 28, 25, 22, 21, 20, -1},
{ 15, 17, 19, 20, 21, 24, 25, -1},
{ 40, 39, 37, 34, 31, 30, 27, 25, -1},
{ 90, 87, 86, 83, 81, 78, 76, 75, -1},
{ 32, 31, 28, 25, 24, 21, 18, -1},
{ 9, 11, 14, 16, 18, -1},
{ 9, 10, 11, 14, 16, 19, 21, 22, -1},
{ 14, 13, 12, 10, 9, 7, 6, -1},
{ 53, 50, 48, 46, 43, 42, -1},
{ 51, 54, 56, 59, 61, 63, 66, 68, -1},
{ 39, 41, 43, 44, 47, 50, 53, -1},
{ 77, 75, 74, 73, 72, 70, 68, -1},
{ 40, 43, 46, 48, 50, 52, 54, -1},
{ 44, 46, 49, 50, 53, 55, 58, 59, -1},
{ 13, 14, 15, 18, 20, 21, 24, -1},
{ 13, 16, 18, 20, 23, 25, -1},
{ 16, 19, 20, 23, 26, -1},
{ 34, 35, 36, 38, 41, 43, -1},
{ 62, 59, 58, 56, 55, 53, 52, -1},
{ 14, 13, 10, 8, 5, 4, 2, -1},
{ 14, 13, 12, 9, 6, 4, -1},
{ 25, 23, 21, 19, 16, 15, -1},
{ 64, 63, 60, 57, 55, 53, 50, 48, -1},
{ 51, 53, 54, 55, 56, 58, 60, -1},
{ 74, 72, 69, 66, 64, 63, 61, 58, -1},
{ 6, 9, 11, 14, 15, 18, 19, -1},
{ 69, 72, 73, 76, 78, 79, -1},
{ 47, 45, 43, 41, 39, -1},
{ 30, 28, 26, 23, 20, 19, 17, -1},
{ 11, 9, 7, 6, 5, 2, 1, -1},
{ 53, 51, 50, 49, 48, 45, -1},
{ 56, 58, 59, 60, 63, 65, 67, -1},
{ 88, 85, 84, 81, 79, 78, 77, -1},
{ 90, 87, 85, 84, 81, 80, 77, -1},
{ 49, 46, 45, 42, 40, 37, 36, -1},
{ 26, 24, 23, 22, 20, 18, -1},
{ 45, 43, 42, 41, 38, -1},
{ 66, 68, 69, 72, 75, -1},
{ 25, 24, 21, 20, 17, 14, -1},
{ 50, 52, 55, 56, 57, 59, 60, 63, -1},
{ 15, 14, 13, 10, 9, 6, -1},
{ 47, 46, 44, 42, 41, 39, -1},
{ 75, 77, 79, 80, 83, 85, 86, 88, -1},
{ 13, 10, 7, 4, 3, -1},
{ 95, 92, 89, 87, 84, 81, -1},
{ 88, 89, 91, 94, 95, 97, 99, -1},
{ 79, 76, 74, 71, 68, 66, 65, -1},
{ 83, 85, 86, 87, 89, 90, 92, -1},
{ 44, 45, 46, 48, 51, -1},
{ 20, 17, 16, 14, 12, -1},
{ 59, 60, 63, 65, 67, 70, 72, 75, -1},
{ 11, 12, 13, 14, 16, 18, -1},
{ 63, 60, 59, 57, 55, 53, 51, -1},
{ 39, 36, 34, 33, 31, 30, 27, 24, -1},
{ 61, 59, 58, 56, 53, -1},
{ 34, 31, 29, 27, 24, -1},
{ 66, 67, 68, 70, 73, 74, 77, -1},
{ 88, 90, 91, 93, 96, 97, 98, -1},
{ 58, 59, 61, 64, 65, 68, 71, -1},
{ 19, 16, 15, 14, 11, 10, -1},
{ 34, 31, 28, 25, 23, 21, 18, 16, -1},
{ 9, 12, 15, 16, 19, 22, -1},
{ 11, 13, 16, 19, 20, 23, 24, -1},
{ 97, 96, 95, 94, 93, 92, 89, -1},
{ 33, 30, 29, 28, 26, -1},
{ 2, 3, 4, 5, 7, 8, -1},
{ 57, 60, 61, 64, 67, -1},
{ 23, 25, 27, 29, 31, 34, 37, 38, -1},
{ 70, 67, 65, 64, 61, -1},
{ 80, 79, 78, 77, 75, 72, -1},
{ 43, 40, 38, 37, 34, -1},
{ 56, 58, 59, 61, 62, 64, -1},
{ 54, 57, 58, 60, 62, 64, 67, 69, -1},
{ 36, 33, 30, 27, 26, 25, -1},
{ 48, 50, 53, 56, 59, 62, 63, -1},
{ 61, 59, 58, 57, 55, 53, -1},
{ 81, 82, 83, 85, 86, 89, 92, -1},
{ 37, 40, 43, 45, 47, 49, 51, -1},
{ 99, 97, 95, 92, 89, -1},
{ 30, 32, 35, 37, 38, -1},
{ 52, 53, 54, 57, 59, 60, 61, 62, -1},
{ 58, 56, 53, 51, 50, -1},
{ 30, 29, 26, 25, 24, -1},
{ 16, 15, 13, 11, 8, 6, -1},
{ 26, 23, 21, 20, 19, 18, -1},
{ 72, 71, 68, 67, 66, 63, 60, -1},
{ 18, 15, 13, 12, 9, 6, -1},
{ 70, 69, 68, 67, 66, 65, -1},
{ 64, 66, 68, 71, 72, 74, 76, -1},
{ 47, 45, 43, 40, 38, -1},
{ 9, 12, 13, 14, 15, 17, 19, 20, -1},
{ 50, 52, 54, 55, 57, 59, 62, 65, -1},
{ 17, 15, 14, 12, 10, -1},
{ 26, 25, 23, 22, 20, 18, 16, 15, -1},
{ 82, 80, 78, 77, 75, -1},
{ 96, 95, 93, 92, 89, -1},
{ 22, 23, 25, 28, 29, 32, 33, 35, -1},
{ 35, 37, 40, 42, 44, 47, 50, -1},
{ 74, 73, 70, 69, 67, 64, -1},
{ 19, 17, 14, 12, 11, 8, 5, 3, -1},
{ 62, 64, 67, 68, 70, -1},
{ 69, 71, 73, 74, 76, 78, -1},
{ 7, 8, 9, 10, 13, 14, -1},
{ 84, 82, 80, 78, 76, 75, 72, -1},
{ 18, 21, 24, 25, 26, -1},
{ 54, 56, 57, 60, 62, 64, 65, -1},
{ 62, 63, 66, 68, 70, 73, -1}

};
