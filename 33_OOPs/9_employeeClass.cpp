#include<iostream>
using namespace std;
class Employee{
private:
    char name[10];
    int idNo;
    int salary;

public:
    void getInfo(){
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the idNo: ";
        cin>>idNo;
        cout<<"Enter the salary: ";
        cin>>salary;
    }
    void display(){
        cout<<"Name = "<<name<<endl;
        cout<<"ID_no = "<<idNo<<endl;
        cout<<"Salary = "<<salary<<endl;
    }
};
int main(){
    Employee suvesh;
    suvesh.getInfo();
    suvesh.display();
}