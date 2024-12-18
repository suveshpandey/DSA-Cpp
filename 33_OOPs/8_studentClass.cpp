#include<iostream>
using namespace std;
class students{
private:
    char name[20];
    int rollno;
    int marks;
public:
void getInfo(){
    cout<<"Enter the name of the student: ";
    cin>>name;
    cout<<"Enter the rollno of the student: ";
    cin>>rollno;
    cout<<"Enter the marks obtained by the student: ";
    cin>>marks;
}
void displayInfo(){
    cout<<"The name of the student is: "<<name<<endl;
    cout<<"roll no = "<<rollno<<endl;
    cout<<"marks = "<<marks<<endl;
}
};
int main(){
    students suvesh;
    suvesh.getInfo();
    suvesh.displayInfo();
}