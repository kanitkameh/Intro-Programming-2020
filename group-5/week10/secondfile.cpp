#include<iostream>
extern int global;
extern int staticVar;
double average(double a, double b){
    std::cout << global + 22 << std::endl;
    std::cout << staticVar + 22 << std::endl;
    return (a+b)/2;
}