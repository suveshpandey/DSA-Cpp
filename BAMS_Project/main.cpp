#include<iostream>
#include<fstream>
#include<windows.h>
#include<sstream>
using namespace std;

class Account{
    private:
    string AccountNo;
    string password;
    string name;
    int Balance;

    public:
    Account(){
        AccountNo = "";
        password = "";
        name = "";
        Balance = 0;
    }

    //setters
    void setAccountNo(string acc){
        AccountNo = acc;
    }
    void setAccountPassword(string pass){
        password = pass;
    }
    void setName(string n){
        name = n;
    }
    void setBalance(int bal){
        Balance = bal;
    }

    //getters
    string getAccountNo(){
        return AccountNo;
    }
    string getAccountPassword(){
        return password;
    }
    string getName(){
        return name;
    }
    int getBalance(){
        return Balance;
    }
};

void createAccount(Account user){
    system("cls");

    string accountNo;
    string password;
    string name;

    cout<<"\tEnter Account No: ";
    cin>>accountNo;

    cout<<"\tEnter a Strong Password: ";
    cin>>password;

    cin.ignore();
    cout<<"\tEnter the Name: ";
    getline(cin, name);

    user.setAccountNo(accountNo);
    user.setAccountPassword(password);
    user.setName(name);
    user.setBalance(0);

    ofstream outfile("Account.txt", ios::app);
    if(!outfile){
        cout<<"\tFile Not Found."<<endl;
        return;
    }
    else{
        outfile<<"\t"<<user.getAccountNo()<<" : "<<user.getAccountPassword()<<" : "<<user.getName()<<" : "<<user.getBalance()<<endl;
        cout<<endl<<"\tAccount Created Successfully.";
    }
    outfile.close();

    Sleep(3000);
}
void addBalance(){
    system("cls");
    string accountNo;

    cout<<"\tEnter Your Account No: ";
    cin>>accountNo;

    ifstream infile("Account.txt");
    
    ofstream outfile("AccountTemp.txt");

    if(!infile || !outfile){
        cout<<"\tError: File Not Fount."<<endl;
    }
    else{
        string line;
        bool found = false;

        while(getline(infile, line)){
            stringstream ss;
            ss<<line;

            string accNo, userPass, userName;
            int userBal;
            char delimiter;

            ss>>accNo>>delimiter>>userPass>>delimiter>>userName>>delimiter>>userBal;

            if(accountNo == accNo){
                found = true;

                int amount;
                cout<<"\tEnter Amount To Add: ";
                cin>>amount;

                int newBal = userBal + amount;
                userBal = newBal;

                outfile<<"\t"<<accNo<<" : "<<userPass<<" : "<<userName<<" : "<<userBal<<endl;
                cout<<endl<<"\tAmount Added Successfully."<<endl;
                cout<<"\tUpdated Balance: "<<userBal<<endl;
            }
            else{
                outfile<<line<<endl;
            }
        }
        if(!found){
            cout<<endl<<"\tAccount Not Found."<<endl;
        }
        outfile.close();
        infile.close();
        remove("Account.txt");
        rename("AccountTemp.txt", "Account.txt");
    }

    Sleep(3000);

}
void withdrawCash(){
    system("cls");
    string accountNo;
    string password;

    cout<<"\tEnter Your Account No: ";
    cin>>accountNo;
    cout<<"\tEnter Your password: ";
    cin>>password;

    ifstream infile("Account.txt");
    ofstream outfile("AccountTemp.txt");

    if(!infile || !outfile){
        cout<<"\tError: File Not Found."<<endl;
    }
    else{
        string line;
        bool found = false;

        while(getline(infile, line)){
            stringstream ss;
            ss<<line;
            string accNo, userPass, userName;
            int userBal;
            char delimiter;

            ss>>accNo>>delimiter>>userPass>>delimiter>>userName>>delimiter>>userBal;

            if(accountNo == accNo && password == userPass){
                found = true;

                int amount;
                cout<<"\tEnter Amount To Withdraw: ";
                cin>>amount;

                if(amount <= userBal){
                    int newBal = userBal - amount;
                    userBal = newBal;
                    outfile<<"\t"<<accNo<<" : "<<userPass<<" : "<<userName<<" : "<<userBal<<endl;
                    cout<<endl<<"\tAmount Debited Successfully."<<endl;
                    cout<<"\tRemaining Balance: "<<userBal<<endl;
                    return;
                }
                else{
                    cout<<endl<<"\tInsufficient Balance."<<endl;
                    outfile<<"\t"<<accNo<<" : "<<userPass<<" : "<<userName<<" : "<<userBal<<endl;
                    return;
                }
            }
            else{
                outfile<<line<<endl;
            }
        }
        if(!found){
            cout<<endl<<"\tInvalid AccountNo or Password."<<endl;
        }
        outfile.close();
        infile.close();
        remove("Account.txt");
        rename("AccountTemp.txt", "Account.txt");
    }
    Sleep(3000);
}
void getMyInfo(){
    system("cls");

    string accountNo;
    cout<<"\tEnter your account no: ";
    cin>>accountNo;

    string password;
    cout<<"\tEnter your password: ";
    cin>>password;

    ifstream infile("Account.txt");

    if(!infile){
        cout<<"Error: File Not Opended."<<endl;
    }
    else{
        string line;
        bool found = false;

        while(getline(infile, line)){
            stringstream ss;
            ss<<line;

            string accNo, userPass, userName;
            int userBal;
            char delimiter;

            ss>>accNo>>delimiter>>userPass>>delimiter>>userName>>delimiter>>userBal;

            if(accountNo == accNo && password == userPass){
                found = true;
                cout<<endl<<"\tYour current baalance is = "<<userBal<<endl;
                return;
            }
            if(found == false){
                cout<<endl<<"\tInvalid AccountNo or Password."<<endl;
                return;
            }
        }
        if(!found){
            cout<<endl<<"\tAccount Not Found."<<endl;
            return;
        }
    }

    infile.close();
    Sleep(3000);
}
void changePass(){
    system("cls");

    string accountNo;
    cout<<"\tEnter your account no: ";
    cin>>accountNo;

    string password;
    cout<<"\tEnter your password: ";
    cin>>password;

    ifstream infile("Account.txt");
    ofstream outfile("AccountTemp.txt");

    if(!infile || !outfile){
        cout<<"Error: File Not Opended."<<endl;
    }
    else{
        string line;
        bool found = false;

        while(getline(infile, line)){
            stringstream ss;
            ss<<line;

            string accNo, userPass, userName;
            int userBal;
            char delimiter;

            ss>>accNo>>delimiter>>userPass>>delimiter>>userName>>delimiter>>userBal;

            if(accountNo == accNo && password == userPass){
                found = true;

                string newPass;
                cout<<"\tEnter New Password: ";
                cin>>newPass;

                userPass = newPass;
            }
            outfile<<"\t"<<accNo<<" : "<<userPass<<" : "<<userName<<" : "<<userBal<<endl;
        }
        if(!found){
            cout<<endl<<"\tInvalid AccountNo or Password."<<endl;
        }
        else{
            cout<<endl<<"\tPassword Changed Successfully."<<endl;
        }
    }

    infile.close();
    outfile.close();
    remove("Account.txt");
    rename("AccountTemp.txt", "Account.txt");
    Sleep(3000);
}
void changeUsername(){
    system("cls");

    string accountNo;
    cout<<"\tEnter your account no: ";
    cin>>accountNo;

    string password;
    cout<<"\tEnter your password: ";
    cin>>password;

    ifstream infile("Account.txt");
    ofstream outfile("AccountTemp.txt");

    if(!infile || !outfile){
        cout<<"Error: File Not Opended."<<endl;
    }
    else{
        string line;
        bool found = false;

        while(getline(infile, line)){
            stringstream ss;
            ss<<line;

            string accNo, userPass, userName;
            int userBal;
            char delimiter;

            ss>>accNo>>delimiter>>userPass>>delimiter>>userName>>delimiter>>userBal;

            if(accountNo == accNo && password == userPass){
                found = true;

                string newUsername;
                cout<<"\tEnter New Username: ";
                cin>>newUsername;

                userName = newUsername;
            }
            outfile<<"\t"<<accNo<<" : "<<userPass<<" : "<<userName<<" : "<<userBal<<endl;
        }
        if(!found){
            cout<<endl<<"\tInvalid AccountNo or Password."<<endl;
        }
        else{
            cout<<endl<<"\tUsername Changed Successfully."<<endl;
        }
    }

    infile.close();
    outfile.close();
    remove("Account.txt");
    rename("AccountTemp.txt", "Account.txt");
    Sleep(3000);
}
void deleteAccount(){
    system("cls");

    string accountNo;
    cout<<"\tEnter your account no: ";
    cin>>accountNo;

    string password;
    cout<<"\tEnter your password: ";
    cin>>password;

    ifstream infile("Account.txt");
    ofstream outfile("AccountTemp.txt");

    if(!infile || !outfile){
        cout<<"Error: File Not Opended."<<endl;
    }
    else{
        string line;
        bool found = false;

        while(getline(infile, line)){
            stringstream ss;
            ss<<line;

            string accNo, userPass, userName;
            int userBal;
            char delimiter;

            ss>>accNo>>delimiter>>userPass>>delimiter>>userName>>delimiter>>userBal;

            if(accountNo == accNo && password == userPass){
                found = true;
                cout<<endl<<"\tAccount Deleted Successfully." << endl;
            }
            else{
                outfile<<"\t"<<accNo<<" : "<<userPass<<" : "<<userName<<" : "<<userBal<<endl;
            }
            if(!found){
                cout<<endl<<"\tInvalid AccountNo or Password."<<endl;
            }
        }
    }

    infile.close();
    outfile.close();
    remove("Account.txt");
    rename("AccountTemp.txt", "Account.txt");
    Sleep(3000);
}


int main(){

    Account user;

    bool exit = false;

    while(!exit){
        system("cls");
        int val;
        cout<<"\t~~~~~~~~~~~~~~~ Bank Account Management System ~~~~~~~~~~~~~~~"<<endl;
        cout<<"\t--------------------------------------------------------------"<<endl;
        cout<<"\tEnter '1' to Open New Account."<<endl;
        cout<<"\tEnter '2' to Add Cash."<<endl;
        cout<<"\tEnter '3' to Withdraw Cash."<<endl;
        cout<<"\tEnter '4' to Check Your Amount."<<endl;
        cout<<"\tEnter '5' to Change Your Password."<<endl;
        cout<<"\tEnter '6' to Change Your Username."<<endl;
        cout<<"\tEnter '7' to Delete Your Account."<<endl;
        cout<<"\tEnter '8' to Exit."<<endl<<endl;
        cout<<"\tEnter Your Choice: ";

        cin>>val;

        if(val == 1){
            createAccount(user);
        }
        else if(val == 2){
            addBalance();
        }
        else if(val == 3){
            withdrawCash();
        }
        else if(val == 4){
            getMyInfo();
        }
        else if(val == 5){
            changePass();
        }
        else if(val == 6){
            changeUsername();
        }
        else if(val == 7){
            deleteAccount();
        }
        else if(val == 8){
            system("cls");
            exit = true;
            cout<<"\tThankyou For Using Our Service."<<endl;
            Sleep(2000);
        }
        Sleep(3000);
    }
}