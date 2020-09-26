#pragma once
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;


class ClntN
{
    bool s; int n; int *arr;
public:
    ClntN(){SetZero();}
    ClntN(const ClntN &b){CopyOnly(b);}
    ~ClntN(){Clean();}
    ClntN &operator=(const ClntN&b){if(this!=&b){Clean(); CopyOnly(b);} return *this;}
    void Clean(){delete[] arr; SetZero();}
    void SetZero(){arr=NULL; s=NULL; n=0;}
    void CopyOnly(const ClntN &b);
    ClntN operator+(const ClntN&b);
    ClntN operator-(const ClntN&b);
    void CopyOnly(const bool r,const int m, const int* brr);
    ClntN(const bool r,const int m, const int* brr){CopyOnly(r,m,brr);}
    int &operator[](int i){if(i<0 || i>=n) throw 3; return arr[i];}
    bool sign(){return s;}
    void print();
};


void Autotest(void);
ostream &operator<<(ostream &cout,  ClntN &s);
ClntN FuncVvoda(const char t);

