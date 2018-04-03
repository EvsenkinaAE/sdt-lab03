//
// Created by u211-11 on 03.04.2018.
//

#ifndef BULENOK_TEMPERATURE_H
#define BULENOK_TEMPERATURE_H
#include <iostream>
#include <sstream>
#include <cassert>
char scale[]="CKF";
struct Temperature{
    double temp;
    char scale;
};
istream & operator >>(istream & in,Temperature & Temp);
istream & operator >>(istream & in,Temperature & Temp);
void test_temperature_imput ();
double convert ( const Temperature & Temp, char scale_to);
bool operator <(const Temperature& lhs, const Temperature& rhs);
Temperature  operator - (const  Temperature & lhs, const Temperature &
rhs);
Temperature operator/(const Temperature & lhs,const Temperature & rhs );
#endif //BULENOK_TEMPERATURE_H
