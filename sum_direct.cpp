#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>
#include <cstdlib>
#include <cmath>

#include "sums.h"

void 
setup(int64_t N, double A[])
{
   for(int i = 0; i < N; i++){
      A[i] = 2;
   }
   printf(" inside direct_sum problem_setup, N=%lld \n", N);
}

double
sum(int64_t N, double A[])
{
   double sum = 0.0;
   for(int i = 0; i < N; i ++){
      sum += A[i];
   }

   printf(" inside direct_sum perform_sum, N=%lld \n", N);
   return sum;
}

