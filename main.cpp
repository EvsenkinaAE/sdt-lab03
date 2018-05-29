#include <iostream>
#include <vector>
using namespace std;
int main() {
    size_t number;
    cerr<<" Vvedite kolichestvo znacheniy";
            cin>>number;
    size_t stolbec;
    cerr<<"\n Vvedite kolishestvo stolbtsov";
    cin>>stolbec;
    vector <double> X (number);
    cerr<<"\n Vvod massiva";
    for(int i=0;i<number;i++)
    {
        cin>>X[i];
    }
    double min,max;
    min=X[0];
    max=X[0];
    for(double x:X) {
        if (x > max)
            max = x;
        else if (x < min)
            min = x;
    }
    cerr<<"\n max="<<max<<"   min="<<min<<"\n";
    vector<int>col_count(stolbec);
    for(double x:X)
    {
    size_t index= (size_t)((x-min)/(max-min)*stolbec);
        if(x==max) {
            index = index - 1;
        }
        col_count[index]=col_count[index]+1;
    }
    for(int i=0;i<stolbec;i++)
    {
        cout<< col_count[i] << "|";
        for (int j = 0; j<col_count[i]; j++)
        {
            cout << "*";
    }
        cout<<endl;
    }

    return 0;
}