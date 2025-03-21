#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>

#include "sums.h"

void 
setup(int64_t N, double A[])
{
   srand48(time(nullptr));

   for (int64_t i = 0; i < N; i++) {
       A[i] = lrand48() % N;
   }
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);
}

double
sum(int64_t N, double A[])
{
   double sum = 0.0;
   for(int i = 0; i < N; i ++){
      sum += A[i];
   }
   printf(" inside sum_indirect perform_sum, N=%lld \n", N);

   return sum;
}

