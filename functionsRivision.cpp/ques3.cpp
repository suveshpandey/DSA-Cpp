#include<iostream>
#include<math.h>
using namespace std;
bool check(int age, int eligibility){
    if(age >= eligibility){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int eligibilty = 18;

    int age;
    cout<<"Enter the age : ";
    cin>>age;
    
    int is_eligible_for_voting = check(age, 18);

    if(is_eligible_for_voting){
        cout<<"Yes, the person can vote.";
    }
    else{
        cout<<"No, the person can  not vote.";
    }



    

}