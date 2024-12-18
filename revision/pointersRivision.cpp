#include<iostream>
using namespace std;
int main(){
    int i = 9;
    cout<<&i<<endl;
    // pointer
    int *p = &i;
    cout<<p<<endl;

    float f = 198.38;
    float *pf = &f;
    cout<<pf<<endl;

    double d = 1987.89;
    double *pd = &d;
    cout<<pd<<endl;


    // printing the value od the variable through pointer

    int s  = 198;
    int *ps = &s;
    cout<<*ps<<endl;
    cout<<sizeof(ps)<<endl;


}