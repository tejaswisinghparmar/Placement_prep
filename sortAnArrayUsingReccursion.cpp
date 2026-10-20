#include<bits/stdc++.h>
using namespace std;

void r_insert(vector<int>&nums, int temp){
    if(nums.empty() || nums.back() <= temp){
        nums.push_back(temp);
        return;
    }

    int val=nums.back();
    nums.pop_back();

    r_insert(nums, temp);
    nums.push_back(val);
}

void r_sort(vector<int>&nums, int k){
    if(k<=1){
        return;
    }

    int temp= nums.back();
    nums.pop_back();

    r_sort(nums, k-1);
    r_insert(nums, temp);
}

int main(){
    vector<int> nums={2, 4, 5, 6, 3, 1, 8};

    r_sort(nums,nums.size());
    
    for(int i: nums){
        cout<<i<<", ";
    }
    cout<<"\n";
}

