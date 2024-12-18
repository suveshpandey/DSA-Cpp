#include <bits/stdc++.h>
using namespace std;

void strSubSets(string s, int idx, string res, bool flag){
    if(idx == s.length()){
        cout<<res;
        cout<<endl;
        return;
    }
    if(s.length() == 1){
        if(flag == true) strSubSets(s, idx+1, res+s[idx], true);
        strSubSets(s, idx+1, res, true);
        return;
    }
    if(s[idx+1] and s[idx] == s[idx+1]){
        if(flag == true) strSubSets(s, idx+1, res+s[idx], true);
        strSubSets(s, idx+1, res,false);
    }
    else{
        if(flag == true) strSubSets(s, idx+1, res+s[idx], true);
        strSubSets(s, idx+1, res, true);
    }
}

void vectorSubSetsDupl(vector<int> &nums, vector<int> temp, int idx, vector<vector<int>> &ans, bool flag){
    if(idx == nums.size()){
        ans.push_back(temp);
        for(int i = 0; i<temp.size(); i++){
            cout<<temp[i];
        }
        cout<<endl;
        return;
    }
    if(nums.size() == 1){
        if(flag == true){
            temp.push_back(nums[idx]);
            vectorSubSetsDupl(nums, temp, idx+1, ans, true);
        }
        vectorSubSetsDupl(nums, temp, idx+1, ans, true);
        return;
    }
    if(nums[idx+1] and nums[idx] == nums[idx+1]){
        if(flag == true){
            temp.push_back(nums[idx]);
            vectorSubSetsDupl(nums, temp, idx+1, ans, true);
        }
        vectorSubSetsDupl(nums, temp, idx+1, ans, false);
    }
    else{
        if(flag == true){
            temp.push_back(nums[idx]);
            vectorSubSetsDupl(nums, temp, idx+1, ans, true);
        }
        vectorSubSetsDupl(nums, temp, idx+1, ans, true);
    }

}

void vectorSub(vector<vector<int>> &ans, vector<int> &nums, vector<int> temp, int idx){
    if(idx == nums.size()){
        ans.push_back(temp);
        return;
    }
    vectorSub(ans, nums, temp, idx+1);
    temp.push_back(nums[idx]);
    vectorSub(ans, nums, temp, idx+1);
}

void incresingSubSeq(vector<int> &nums, vector<int> temp, int idx, int k){
    if(idx == nums.size()){
        if(temp.size() == k){
            for(int i = 0; i<temp.size(); i++){
                cout<<temp[i]<<" "; 
            }
            cout<<endl; 
        }
        return;
    }
    if(temp.size()+(nums.size()-idx) < k) return;
    incresingSubSeq(nums, temp, idx+1, k);
    temp.push_back(nums[idx]);
    incresingSubSeq(nums, temp, idx+1, k);
}

void stringPermutations(string ans, string original){
    if(original == ""){
        cout<<ans<<endl;
        return;
    }
    for(int i = 0; i<original.length(); i++){
        char ch = original[i];
        string left = original.substr(0, i);
        string right = original.substr(i+1);
        stringPermutations(ans + ch, left+right);
    }
}

int minInArr(vector<int> &nums, int mn, int idx){
    if(idx == nums.size()) return mn;
    mn = min(mn, nums[idx]);
    return minInArr(nums, mn, idx+1);
}

int findNum(vector<int> &nums, int target, int targetIdx, int idx){
    if(idx == nums.size()) return targetIdx;
    if(nums[idx] == target) targetIdx = idx;
    return findNum(nums, target, targetIdx, idx+1);
}

void printRevArr(vector<int> &nums, int idx){
    if(idx == nums.size()) return;
    printRevArr(nums, idx+1);
    cout<<nums[idx]<<" ";
}

void sortVec(vector<int> &v, int idx){
    if(idx == v.size()-1) return;
    for(int i = 0; i<v.size()-1; i++){
        if(v[i]>v[i+1]){
            swap(v[i], v[i+1]);
        }
    }
    sortVec(v, idx+1);

}


void generateStrs(string binary, int size, int k){
    if(size == k){
        cout<<binary<<endl;
        return;
    }
    if(binary.length() == 0){
        generateStrs(binary + '0', size+1, k);
        generateStrs(binary + '1', size+1, k);
    }
    if(binary.back() == '1'){
        generateStrs(binary + '0', size+1, k);
    }
    else if(binary.back() == '0'){
        generateStrs(binary + '0', size+1, k);
        generateStrs(binary + '1', size+1, k);
    }
    

}

void generateSubSeqStr(string s, int idx, string ans){
    if(idx == s.length()){
        cout<<ans<<endl;
        return;
    }
    generateSubSeqStr(s, idx+1, ans + s[idx]);
    generateSubSeqStr(s, idx+1, ans);
}

int countSum(vector<int> temp){
    int sum = 0;
    for(int i= 0;i<temp.size(); i++){
        sum += temp[i];
    }
    return sum;
}

void solve(int arr[], int n, vector<int> temp, int idx, int &count, int sum){
    if(idx == n){
        int currSum = countSum(temp);
        if(currSum == sum){
            count++;
        }
        return;
    }
    solve(arr, n, temp, idx+1, count, sum);
    temp.push_back(arr[idx]);
    solve(arr, n, temp, idx+1, count, sum);
}

bool checkPalondrome(string s){
    int i = 0;
    int j = s.length()-1;

    while(i < j){
        if(s[i] != s[j]) return false;
        else{
            i++;
            j--;
        }
    }
    return true;
}
void generateSubStr(string &s, string ans, int idx){
    if(idx == s.length()){
        cout<<ans<<endl;
        return;
    }
    generateSubStr(s, ans, idx+1);
    generateSubStr(s, ans + s[idx], idx+1);
}

void printSubarray(vector<int> nums, int s, int e){
    if(s == nums.size()) return;
    if(e == nums.size()){
        printSubarray(nums, s+1, s+1);
        return;
    }
    for(int i = s; i<=e; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    printSubarray(nums, s, e+1);
}
int main() {
    string s = "abcde";
}
