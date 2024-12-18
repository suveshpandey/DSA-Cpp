#include<iostream>
using namespace std;
class Book{
    public:
    string name;
    int price;
    int noOfPages;

    int countBooks(int p){
        if(p>price)
            return 1;
        else return 0;
    }
    bool isBookPresent(string title){
        if(title == name) 
        return true;
        else 
        return false;
        
    }
};
int main(){
    Book ramayan;
    ramayan.name = "rm";
    ramayan.price = 500;
    ramayan.noOfPages = 200;

    cout<<ramayan.countBooks(1000);
    cout<<endl;
    cout<<ramayan.isBookPresent("rm");
}