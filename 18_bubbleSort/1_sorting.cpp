// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> v(5);
//     for(int i = 0; i<5;i++){
//         cin>>v[i];
//     }

//     sort(v.begin(), v.end()); // TC = O(nlogn)
//     // reverse(v.begin(), v.end());
//     for(int i = 0; i<5;i++){
//         cout<<v[i]<<" ";
//     }
// }
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    // for(int i = 0;i<n-1;i++){
    //     for(int j = i+1;j<n;j++){
    //         if(arr[i]>arr[j]){
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    // }

    // bubble sort   //tc = O(n^2)
    // for(int i = 0;i<n-1;i++){
    //     //traverse
    //     for(int j = 0;j<n-1-i;j++){          //although, we can write n-1 only, but doing n-1-i has saved the redundant iteration all the time throught the while array
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
    // }

    // bubble sort optimized  //tc = O()
    for(int i = 0;i<n-1;i++){
        //traverse
        bool flag =true;
        for(int j = 0;j<n-1-i;j++){          //although, we can write n-1 only, but doing n-1-i has saved the redundant iteration all the time throught the whole array
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = false;
            }
        }
        if(flag == true) break;
    }



    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
