//Write a program to count the minimum number of notes in a given amount using the switch statement.
#include<iostream>
using namespace std;
int main(){
    int amount;
    int n1, n2, n5, n10, n20, n50, n100, n500;

    n1 = n2 = n5 = n10 = n20 = n50 = n100 = n500 = 0;
    cout<<"Enter your total amount to get the notes: ";
    cin>>amount;

    switch(amount>=500){
        case 1:
        n500 = amount/500;
        amount -= n500*500;
        break;

    }
    switch(amount >= 100){
        case 1:
        n100 = amount/100;
        amount -= n100 * 100;
        break;
    }

    switch(amount>=50){
        n50 = amount/50;
        amount -= n50*50;
        break;
    }

    switch(amount>=20){
        n20 = amount/20;
        amount -= n20 * 20;
        break;

    }

    switch(amount>=10){
        n10 = amount/10;
        amount -= n10*10;
        break;
    }
    switch(amount>=5){
        n5 = amount/5;
        amount -= n5*5;
        break;
    }

    switch(amount>=2){
        n2 = amount/2;
        amount -= n2*2;
        break;

    }

    switch(amount>=1){
        n1 = amount/1;
        amount -= n1*1;
        break;
    }

    cout<<"Rs.500 = "<<n500<<endl;
    cout<<"Rs.100 = "<<n100<<endl;
    cout<<"Rs.50 = "<<n50<<endl;
    cout<<"Rs.20 = "<<n20<<endl;
    cout<<"Rs.10 = "<<n10<<endl;
    cout<<"Rs.5 = "<<n5<<endl;
    cout<<"Rs.2 = "<<n2<<endl;
    cout<<"Rs.1 = "<<n1<<endl;


}