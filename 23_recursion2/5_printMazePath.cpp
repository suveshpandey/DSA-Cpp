#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){

    if(sc>ec || sr>er) return 0;
    if(sc == ec || sr == er) return 1;
    int rightways = maze(sr, sc+1, er, ec);
    int downways = maze(sr+1, sc, er, ec);
    int totalways = rightways + downways;
    return totalways;
}
void printPath(int sr, int sc, int er, int ec, string s){
    if(sr>er || sc>ec) return;
    if(sr == er && sc == ec){
        cout<<s<<endl;
        return;
    }
    printPath(sr, sc+1, er, ec, s+'R');
    printPath(sr+1, sc, er, ec, s+'D');
    
}
int main(){
    
    printPath(1,1,3,3,"");     
}