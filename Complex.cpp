#include <stdio.h>
#include <iostream>
#include <cmath>
#include "complex.h"

complex::complex(float r,float im){
    real = r;
    imag = im;
}

complex::complex(const complex& b){
    this->real = b.real;
    this->imag = b.imag;
}

complex complex::operator +(const complex& b){
    complex tmp;
    tmp.real = this->real + b.real;
    tmp.imag = this->imag + b.imag;
    return tmp;
}

complex operator +(const float a, const complex& b){
    complex tmp;
    tmp.real = a + b.real;
    tmp.imag = b.imag;
    return tmp;
}

complex complex::operator -(const complex& b){
    complex tmp;
    tmp.real = this->real - b.real;
    tmp.imag = this->imag - b.imag;
    return tmp;
}

complex operator -(const float a, const complex& b){
    complex tmp;
    tmp.real = a - b.real;
    tmp.imag = b.imag;
    return tmp;
}


complex complex::operator *(const complex& b){
    complex tmp;
    tmp.real = (real * b.real) - (imag * b.imag);
    tmp.imag = (imag * b.real) + (real * b.imag);
    return tmp;
}

complex operator *(const float a, const complex& b){
    complex tmp;
    tmp.real = a * b.real;
    tmp.imag = a * b.imag;
    return tmp;
}

complex complex::operator /(const complex& b){
    float div=(b.real*b.real) + (b.imag*b.imag);
    complex tmp;
    tmp.real=(real*b.real)+(imag*b.imag);
    tmp.real/=div;
    tmp.imag=(imag*b.real)-(real*b.imag);
    tmp.imag/=div;
    return tmp;
}

complex operator /(float a, const complex& b){
    complex tmp_a;
    complex tmp_b = b;
    tmp_a = a * tmp_b.getconj();
    tmp_b = tmp_b * tmp_b.getconj();
    return (tmp_a / tmp_b);
}

complex& complex::operator +=(const complex& b){
    this->real += b.real;
    this->imag += b.imag;
    return *this;
}

complex& complex::operator -=(const complex& b){
    this->real -= b.real;
    this->imag -= b.imag;
    return *this;
}

complex& complex::operator *=(const complex& b){
    complex tmp;
    tmp.real = (real * b.real) - (imag * b.imag);
    tmp.imag = (imag * b.real) + (real * b.imag);
    this->real = tmp.real;
    this->imag = tmp.imag;
    return *this;
}

complex& complex::operator /=(const complex& b){
    float div=(b.real*b.real) + (b.imag*b.imag);
    complex tmp;
    tmp.real=(real*b.real)+(imag*b.imag);
    tmp.real/=div;
    tmp.imag=(imag*b.real)-(real*b.imag);
    tmp.imag/=div;
    this->real = tmp.real;
    this->imag = tmp.imag;
    return *this;
}

void complex::operator =(complex b){
    real = b.real;
    imag = b.imag;
}
bool complex::operator ==(const complex& b){
    return (real == b.real && imag == b.imag) ? 1 : 0;
}
std::ostream& operator <<(std::ostream &s,complex &b){
    s<<"z = "<<b.real<<((b.imag >= 0) ? "+" :"")<<b.imag<<"i";
    return s;
}
float complex::getreal(){
    return real;
}

float complex::getimag(){
    return imag;
}

float complex::getmod(){
    float z;
    z = (real * real) + (imag * imag);
    z = sqrt(z);
    return z;
}

float complex::getarg(){
    float z;
    z = atan2(getimag(), getreal());
    return z;
}

complex complex::getconj(){
    complex tmp;
    tmp.real=this->real;
    tmp.imag=this->imag * -1;
    return tmp;
}
