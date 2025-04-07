#include<bits/stdc++.h>
using namespace std;
bool check(vector<int> &nums){
    int n = nums.size();
    
    if(n == 1) return true;
    
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if( nums[i] & nums[j] != 0 ) return false;
        }
    }
    return true;
}
void subArray(vector<int> &nums, int idx, vector<int> temp, int &mxLen){
    if(idx == nums.size()){
        if(check(temp)){
            int s = temp.size();
            mxLen = max(mxLen, s);
        }
        return;
    }
    subArray(nums, idx+1, temp, mxLen);
    temp.push_back(nums[idx]);
    subArray(nums, idx+1, temp, mxLen);
}
int main(){
    vector<int> nums = {5, 1, 6};

    int result = 12;
    for(int i = 0; i<3; i++){
        result ^= nums[i];
    }
    cout<<result;
}

