#include <iostream>
#include <vector>
#include <sstream>
#include <cassert>
using namespace std;
char scale[]="CKF";
struct Temperature{
double temp;
char scale;
};
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

    int main() {
        test_temperature_imput ();
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
                Kelvins - = 273.15;
                break;
            case 'F':
            case 'f':
                Kelvins =((9.0/5)*(Kelvins-273.15)+32);
                break;
            }
            return Kelvins;
            bool operator<(const Temperature $ lhs, const Temperature $ rhs) {
                convert ( lhs , 'K')
                convert ( rhs , 'K')
return  convert ( lhs , 'K') <  convert ( rhs , 'K')
        


            }
        }


//        size_t number;
//    cout<<" Vvedite kolichestvo znacheniy";
//            cin>>number;
//    size_t stolbec;
//    cout<<"\n Vvedite kolishestvo stolbtsov";
//    cin>>stolbec;
//    vector <double> X (number);
//    cout<<"\n Vvod massiva";
//    for(int i=0;i<number;i++)
//    {
//        cin>>X[i];
//    }
//    size_t shirina;
//    //size_t dopustimuyashirina;
//    cout<<"\n VVedite shiriny gistogramy";
//    cin>>shirina;
//
//    while ((shirina < 7) || (shirina >80) || (shirina < number / 3))
//    {
//            cout << "\n Vvedite zanovo  dopustimuy shiriny";
//            cin >> shirina;
//        }
//
//
//    double min,max;
//    min=X[0];
//    max=X[0];
//    for(double x:X) {
//        if (x > max)
//            max = x;
//        else if (x < min)
//            min = x;
//    }
//    cout<<"\n max="<<max<<"   min="<<min<<"\n";
//    vector<int>col_count(stolbec);
//    for(double x:X)
//    {
//    size_t index= (size_t)((x-min)/(max-min)*stolbec);
//        if(x==max) {
//            index = index - 1;
//        }
//        col_count[index]=col_count[index]+1;
//    }
//    float maxcol_count;
//    double kof;
//    maxcol_count=col_count[0];
//    for(float x:col_count)
//    {
//        if(maxcol_count<x)
//            maxcol_count=x;
//    }
//    kof=1;
//    if(maxcol_count>shirina)
//        kof=(double)(1-(maxcol_count-shirina)/(maxcol_count));
//
//    for(int i=0;i<stolbec;i++)
//    {   if (col_count[i]>=100)
//            cout<< col_count[i] << "|";
//        else
//        if (col_count[i]<10)
//            cout<<"  "<< col_count[i] << "|";
//        else
//            cout<<" "<<col_count[i] << "|";
//        for (int j = 0; j<col_count[i]*kof; j++)
//        {
//            cout << "*";
//    }
//        cout<<endl;
//    }

    return 0;
}