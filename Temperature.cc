#include "Temperature.h"
using namespace std;
istream & operator >>(istream & in,Temperature & Temp);
istream & operator >>(istream & in,Temperature & Temp) {
    in>> Temp.temp;
    in>> Temp.scale;
}
void test_temperature_imput ()
{
    Temperature Temp;
    string inp = "10C";
    istringstream iss(inp);
    iss >>Temp;
    assert (Temp.temp ==10);
    assert (Temp.scale =='C');
    istringstream iss2("0K");
    iss2 >>Temp;
    assert (Temp.temp ==0);
    assert (Temp.scale =='K');
    istringstream iss3("-100F");
    iss3 >>Temp;
    assert (Temp.temp ==-100);
    assert (Temp.scale =='F');
}
double convert ( const Temperature & Temp, char scale_to){
    double Kelvins;
    Kelvins=Temp.scale;
    switch (Temp.scale) {
    case 'C':
    case 'c':
        Kelvins += 273.15;
        break;
    case 'F':
    case 'f':
        Kelvins =((5.0/9)*(Kelvins-32)+273.15);
        break;
    }
    switch(scale_to){
    case 'C':
    case 'c':
        Kelvins-= 273.15;
        break;
    case 'F':
    case 'f':
        Kelvins =((9.0/5)*(Kelvins-273.15)+32);
        break;
    }
    return Kelvins;
}

bool operator <(const Temperature& lhs, const Temperature& rhs) {
    return  convert ( lhs , 'K') <  convert ( rhs , 'K');
}
Temperature  operator - (const  Temperature & lhs, const Temperature &
rhs) {
    Temperature ret_temp;
    ret_temp.temp=convert(lhs,'K')- convert(rhs,'K');
    ret_temp.scale='K': return ret_temp;
}
Temperature operator/(const Temperature & lhs,const Temperature & rhs )
{
    Temperature ret_temp;
    ret_temp.temp=convert(lhs,'K')/convert(rhs,'K');
    ret_temp.scale='K': return ret_temp;
}//
// Created by u211-11 on 03.04.2018.
//

