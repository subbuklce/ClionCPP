//
// Created by subrahmanyam_g on 6/28/20.
//
#ifndef __EX1_03_H__
#define __EX1_03_H__

#include <iostream>
#include <functional>
#include <algorithm>
#include <iterator>
#include <cmath>
using namespace std;

class Root{

public:
    double operator()(double x) { return std::sqrt(x);};
};

void calculate_sqrt(){
    double data[] {1.5,2.5,3.5,4.5};
    Root root;
    // Using the functor as an argument to transform function.
    std::transform(begin(data), end(data), ostream_iterator<double>(cout, " "), root);

    //Using lamda as an argument to transform function.
    auto op = [](double x){ return std::sqrt(x);};
    std::transform(begin(data), end(data), std::ostream_iterator<double>(cout, " "), op);
    // Using function as an argument to transform funtion
    std::function<double(double)> fn {[](double x){return sqrt(x);}};
    transform(begin(data), end(data), ostream_iterator<double>(cout, " " ), fn);

}
#endif