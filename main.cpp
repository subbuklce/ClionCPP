//
// Created by subrahmanyam_g on 6/28/20.
//

#include <iostream>
#include <string>
#include "Ex1_03.h"

using namespace std;

struct stest{

    stest(const int& idata):data(idata){};
    void reset(const int newdata){
        data = newdata;
    };
    int getdata() const { return data;};
private:
    int data;
};
int main(){

    calculate_sqrt();

    return 0;
}