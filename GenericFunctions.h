#ifndef GENERICFUNCTIONS_H
#define GENERICFUNCTIONS_H

#include <cmath>
#include <string>
#include <sstream>

bool prime(int n);
bool palindrome(int n);
bool* findPrimes(bool* b, int size);
int numberOfFactors(long long n);
int sumOFFactors(int n);
long long nChooser(int n, int r);
int toInt(std::string t);
long long fac(int n);
int max(int n, int m);
int sumDigits(long long n);

#endif GENERICFUNCTIONS_H
