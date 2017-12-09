#include <stdio.h>
#include <iostream>
#include "complex.h"

int main(){
    std::cout<<std::endl<<"Constructor tests:"<<std::endl<<std::endl;
    complex t1(10.1f, -2.2f);
    complex t2(10.1f, 2.2f);
    complex ct1(t1);
    complex ct2(t2);
    complex t3;
    complex t4(-2);
    std::cout<<"t1: "<<t1<<std::endl;
    std::cout<<"t2: "<<t2<<std::endl;
    std::cout<<"t3: "<<t3<<std::endl;
    std::cout<<"t4: "<<t4<<std::endl;
    std::cout<<"ct1: "<<ct1<<std::endl;
    std::cout<<"ct2: "<<ct2<<std::endl;

    std::cout<<std::endl<<"Comparison tests:"<<std::endl<<std::endl;
    std::cout<<"t1==t2?: "<<(t1==t2)<<std::endl;
    std::cout<<"t1==ct1?: "<<(t1==ct1)<<std::endl;
    std::cout<<"t2==ct2?: "<<(t2==ct2)<<std::endl;

    std::cout<<std::endl<<"getreal & getimag tests:"<<std::endl<<std::endl;
    std::cout<<"t1 real part: "<<t1.getreal()<<std::endl;
    std::cout<<"t1 imag part: "<<t1.getimag()<<std::endl;
    std::cout<<"t2 real part: "<<t2.getreal()<<std::endl;
    std::cout<<"t2 imag part: "<<t2.getimag()<<std::endl;

    std::cout<<std::endl<<"assignments tests:"<<std::endl<<std::endl;
    t3 = t1;
    std::cout<<"t3 = t1: "<<t3<<std::endl;
    t3 += t1;
    std::cout<<"t3 += t1: "<<t3<<std::endl;
    t3 -= t1;
    std::cout<<"t3 -= t1: "<<t3<<std::endl;

    std::cout<<std::endl<<"CRITICAL assignments tests:"<<std::endl<<std::endl;
    t3 += t1;
    std::cout<<"t3 += t1: "<<t3<<std::endl;
    t3 += t1;
    std::cout<<"t3 += t1: "<<t3<<std::endl;
    t3 -= t1;
    t3 -= t1;
    t3 += t1 += t1;
    std::cout<<"t3 += t1 += t1: "<<t3<<std::endl;

    std::cout<<std::endl<<"math op. tests:"<<std::endl<<std::endl;
    t4 = t1 + t3;
    std::cout<<"t1 + t3: "<<t4<<std::endl;
    t4 = t1 - t3;
    std::cout<<"t1 - t3: "<<t4<<std::endl;
    return 0;
}
