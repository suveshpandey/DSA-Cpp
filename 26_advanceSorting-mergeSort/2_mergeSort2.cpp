// 1 bade vector v ko 2 small vectors me divide karke a, b, then, un dono ke elements ko sort karke 
// again v = a+b karke v ko sort karna h
// time complexity = O(n.logn)

//merge sort is stabe.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
#include<iostream>
#include<vector>                                
using namespace std;                                  
void merge(vector<int>& a, vector<int>& b, vector<int>& res){
    int i = 0;  // for a
    int j = 0;  // for b
    int k = 0;  // for res

    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            res[k++] = a[i++];
        }
        else{
            res[k++] = b[j++];
        }
    }
    if(i == a.size()){
        while(j<b.size()){
            res[k++] = b[j++];
        }
    }
    if(j == b.size()){
        while(i<a.size()){
            res[k++] = a[i++];
        }
    }
}
void mergeSort(vector<int> & v){
    int n = v.size();
    if(n == 1) return;
    int n1 = n/2, n2 = n-n/2;
    vector<int> a(n1), b(n2);
    // copy pasting
    for(int i = 0; i<n1;i++){
        a[i] = v[i];
    }
    for(int i=0; i<n2;i++){
        b[i] = v[i+n1];
    }
    // recursion = magic 
    mergeSort(a);
    mergeSort(b);
    // merge
    merge(a,b,v);

    a.clear(); // space somplexity ko kam karne ke liye faltu ke arrays ko delete kr rhe hain. 
    b.clear();

}
int main(){
    int arr[] = {5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    // printing the array;
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    // printing merge array
    for(int i =0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
