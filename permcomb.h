#pragma once
#include "permcomb.h"
#ifndef PERCOMB_H
#define PERCOMB_H

long long P(int a, int b);
long long C(int a, int b);
long long permcomb_h_fact_arr[21] = {1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800,87178291200,1307674368000,20922789888000,355687428096000,6402373705728000,121645100408832000,2432902008176640000};

long long P(int n, int k) {
	if (n < k||n>20||k>20||n<0||k<0) return -1;
	return permcomb_h_fact_arr[n] / permcomb_h_fact_arr[n - k];
}

long long C(int n, int k) {
	if (n < k||n>20||k>20||n<0||k<0) return -1;
	return (permcomb_h_fact_arr[n] / permcomb_h_fact_arr[k]) / permcomb_h_fact_arr[n - k];
}

#endif
