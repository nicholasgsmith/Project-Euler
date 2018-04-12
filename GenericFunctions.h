#ifndef GENERICFUNCTIONS_H
#define GENERICFUNCTIONS_H

#include <cmath>
#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

bool prime(int n);
bool palindrome(int n);
bool* findPrimes(bool* b, int size);
int numberOfFactors(long long n);
int sumOfFactors(int n);
long long nChooser(int n, int r);
int toInt(string t);
long long fac(int n);
int max(int n, int m);
int sumDigits(long long n);
bool extractWords(string fileName, vector<string>& words, char delimiter);
bool sortAlphabetical(string first, string second);
int wordScore(string word);
void sortArray(int* sortStart, int elements, bool ascending);

#endif GENERICFUNCTIONS_H
