// Find the error.

/*double getAverage(int arr[], int size);
int main () {
int balance[5] = {1000, 2, 3, 17, 50};
double avg;
avg = getAverage( balance[0], 5 ) ;
cout << "Average value is: " << avg << endl;
return 0;
}*/

/* solution-  1st error -> not used header files
#include<iostream>
using namespace std; shoud be used
double getAverage(int arr[], int size);
and 2nd error -> in the getAverage(balance, 5) shoud be passed rather  than (balance[0], 5) */


// right code
#include<iostream>
using namespace std;
double getAverage(int arr[], int size);
int main () {
int balance[5] = {1000, 2, 3, 17, 50};
double avg;
avg = getAverage( balance, 5 ) ;
cout << "Average value is: " << avg << endl;
return 0;
}


