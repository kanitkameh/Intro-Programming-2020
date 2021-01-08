#include <iostream>
extern int globalVar;
//extern int staticVar;
double average(double a, double b){
    std::cout << globalVar << std::endl;
    //std::cout << staticVar << std::endl;
    return (a+b)/2;
}