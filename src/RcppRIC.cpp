// Loic Thibaut
// 18/07/2018

//

// a port of Simone Romano's C++ implementation of the Randomized Information 
// Coefficient to R.
// https://github.com/ialuronico/RandomizedInformationCoefficient

//

#include <Rcpp.h>

#include "computeRIC.h"
using namespace Rcpp;

#define MIN(a,b) ((a) < (b) ? a : b)

// Enable C++11 via this plugin (Rcpp 0.10.3 or later)
// [[Rcpp::plugins(cpp11)]]

// [[Rcpp::export]]
double RIC(NumericVector x, NumericVector y, int Kr, int Dmax) {
  // for safety, (x and y are supposed to have the same size)
  int n = MIN(x.size(), y.size());
  
  // TODO should check that n, Kr and Dmax are > 0
  return RIC(x.begin(), y.begin(), n, Kr, Dmax);
}

