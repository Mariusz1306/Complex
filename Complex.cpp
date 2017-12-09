#include <stdio.h>
#include <iostream>
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

complex complex::operator -(const complex& b){
    complex tmp;
    tmp.real = this->real - b.real;
    tmp.imag = this->imag - b.imag;
    return tmp;
}

complex complex::operator *(const complex& b){
    complex tmp;
    //TODO
    return tmp;
}
complex complex::operator /(const complex& b){
    complex tmp;
    //TODO
    return tmp;
}

complex complex::operator +=(const complex& b){
    this->real = this->real + b.real;
    this->imag = this->imag + b.imag;
}

complex complex::operator -=(const complex& b){
    this->real = this->real - b.real;
    this->imag = this->imag - b.imag;
}

complex complex::operator *=(const complex& b){
    //TODO
}

complex complex::operator /=(const complex& b){
    //TODO
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
