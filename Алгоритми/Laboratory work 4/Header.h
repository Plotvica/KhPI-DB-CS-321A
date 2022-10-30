#pragma once
#include <iostream>
#include <iomanip>
#include <ctime>
#include <algorithm>
#include <vector>
#include <fstream>

using namespace std;


void printArray(int* array, int size);

void read—haotically(int* array, int size);
void create—haotically(int* array, int size);
void createAscending(int* array, int size);
void createDescending(int* array, int size);

//sorting
void BubbleSort(int* array, int size, int& operationCounter);
void ShekerSort(int* array, int size, int& operationCounter);
void BucketSort(int* array, int size, int& operationCounter);