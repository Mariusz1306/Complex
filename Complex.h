#include <stdio.h>
#include <iostream>

class complex{
private:
    float real;
    float imag;
public:
    complex(float r=0.0f,float im=0.0f);
    complex(const complex&);
    complex operator +(const complex&);
    friend complex operator +(const float, const complex&);
    complex operator -(const complex&);
    friend complex operator -(const float, const complex&);
    complex operator *(const complex&);
    friend complex operator *(const float, const complex&);
    complex operator /(const complex&);
    friend complex operator /(const float, const complex&);
    complex& operator +=(const complex&);
    complex& operator -=(const complex&);
    complex& operator *=(const complex&);
    complex& operator /=(const complex&);
    void operator =(complex);
    bool operator ==(const complex&);
    friend std::ostream& operator <<(std::ostream &s, complex &b);
    float getreal();
    float getimag();
    float getmod(); //amplituda
    float getarg(); //faza
    complex getconj();
};
