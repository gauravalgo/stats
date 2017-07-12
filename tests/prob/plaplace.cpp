/*################################################################################
  ##
  ##   Copyright (C) 2011-2017 Keith O'Hara
  ##
  ##   This file is part of the StatsLib C++ library.
  ##
  ##   StatsLib is free software: you can redistribute it and/or modify
  ##   it under the terms of the GNU General Public License as published by
  ##   the Free Software Foundation, either version 2 of the License, or
  ##   (at your option) any later version.
  ##
  ##   StatsLib is distributed in the hope that it will be useful,
  ##   but WITHOUT ANY WARRANTY; without even the implied warranty of
  ##   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  ##   GNU General Public License for more details.
  ##
  ################################################################################*/

// g++-mp-5 -O2 -Wall -std=c++11 -I./../../ -I/opt/local/include plaplace_test.cpp -o plaplace.test -framework Accelerate

#include <math.h>
#include "armadillo"
#include "stats.hpp"

int main()
{
    double err_tol = 1E-05;
    int round_digits = 5;

    double mu = 1;
    double sigma = 2;

    // x = -1.01
    double val_1 = 0.1830223;
    double prob_1 = stats::plaplace(-1.01,mu,sigma);
    bool success_1 = (std::abs(prob_1 - val_1) < err_tol);
    std::cout << "plaplace(-1.01): " << stats::round_dbl(prob_1,round_digits) << ". Success = " << success_1 << std::endl;

    // x = -0.37
    double val_2 = 0.2520451;
    double prob_2 = stats::plaplace(-0.37,mu,sigma);
    bool success_2 = (std::abs(prob_2 - val_2) < err_tol);
    std::cout << "plaplace(-0.37): " << stats::round_dbl(prob_2,round_digits) << ". Success = " << success_2 << std::endl;

    // x = 0
    double val_3 = 0.3032653;
    double prob_3 = stats::plaplace(0.0,mu,sigma);
    bool success_3 = (std::abs(prob_3 - val_3) < err_tol);
    std::cout << "plaplace(+0.00): " << stats::round_dbl(prob_3,round_digits) << ". Success = " << success_3 << std::endl;

    // x = +0.37
    double val_4 = 0.3648944;
    double prob_4 = stats::plaplace(0.37,mu,sigma);
    bool success_4 = (std::abs(prob_4 - val_4) < err_tol);
    std::cout << "plaplace(+0.37): " << stats::round_dbl(prob_4,round_digits) << ". Success = " << success_4 << std::endl;

    // x = +1.01
    double val_5 = 0.5024938;
    double prob_5 = stats::plaplace(1.01,mu,sigma);
    bool success_5 = (std::abs(prob_5 - val_5) < err_tol);
    std::cout << "plaplace(+1.01): " << stats::round_dbl(prob_5,round_digits) << ". Success = " << success_5 << std::endl;

    // x = +1.58
    double val_6 = 0.6258682;
    double prob_6 = stats::plaplace(1.58,mu,sigma);
    bool success_6 = (std::abs(prob_6 - val_6) < err_tol);
    std::cout << "plaplace(+1.58): " << stats::round_dbl(prob_6,round_digits) << ". Success = " << success_6 << std::endl;

    // x = +2.5
    double val_7 = 0.7638167;
    double prob_7 = stats::plaplace(2.50,mu,sigma);
    bool success_7 = (std::abs(prob_7 - val_7) < err_tol);
    std::cout << "plaplace(+2.50): " << stats::round_dbl(prob_7,round_digits) << ". Success = " << success_7 << std::endl;

    // x = +3.5
    double val_8 = 0.8567476;
    double prob_8 = stats::plaplace(3.50,mu,sigma);
    bool success_8 = (std::abs(prob_8 - val_8) < err_tol);
    std::cout << "plaplace(+3.50): " << stats::round_dbl(prob_8,round_digits) << ". Success = " << success_8 << std::endl;

    // x = +5.0
    double val_9 = 0.9323324;
    double prob_9 = stats::plaplace(5.0,mu,sigma);
    bool success_9 = (std::abs(prob_9 - val_9) < err_tol);
    std::cout << "plaplace(+5.00): " << stats::round_dbl(prob_9,round_digits) << ". Success = " << success_9 << std::endl;

    if (success_1 && success_2 && success_3 && success_4 && success_5 && success_6 && success_7 && success_8 && success_9) {
        printf("\nplaplace: all tests passed.\n");
    }

    return 0;
}