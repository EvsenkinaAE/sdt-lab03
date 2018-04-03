#include <iostream>
#include <vector>
#include <sstream>
#include <cassert>
#include "Temperature.h"
using namespace std;

    int main() {
        test_temperature_imput ();


        size_t number;
        cout<<" Vvedite kolichestvo znacheniy";
        cin>>number;
        size_t stolbec;
        cout<<"\n Vvedite kolishestvo stolbtsov";
        cin>>stolbec;
        vector <Temperature> X (number);
        cout<<"\n Vvod massiva";
        for(int i=0;i<number;i++)
        {
            cin>>X[i];
        }
        double min,max;
        min=X[0].temp;
        max=X[0].temp;
        for(Temperature x:X) {
            if (x.temp > max)
                max = x.temp;
            else if (x.temp < min)
                min = x.temp;
        }
        cout<<"\n max="<<max<<"   min="<<min<<"\n";
        vector<int>col_count(stolbec);
        for(Temperature x:X)
        {
            size_t index= (size_t)((x-min)/(max-min)*stolbec);
            if(x==max) {
                index = index - 1;
            }
            col_count[index]=col_count[index]+1;
        }
        float maxcol_count;
        double kof;
        maxcol_count=col_count[0];
        for(float x:col_count)
        {
            if(maxcol_count<x)
                maxcol_count=x;
        }
        kof=1;
        if(maxcol_count>shirina)
            kof=(double)(1-(maxcol_count-shirina)/(maxcol_count));

        for(int i=0;i<stolbec;i++)
        {   if (col_count[i]>=100)
                cout<< col_count[i] << "|";
            else
            if (col_count[i]<10)
                cout<<"  "<< col_count[i] << "|";
            else
                cout<<" "<<col_count[i] << "|";
            for (int j = 0; j<col_count[i]*kof; j++)
            {
                cout << "*";
            }
            cout<<endl;
        }

    return 0;
}