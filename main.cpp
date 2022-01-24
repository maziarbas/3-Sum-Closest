#include<iostream>
#include<vector>
#include<algorithm>

using std::cout;
using std::vector;
using std::sort;
int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    int len = nums.size();
    int diff = INT_MAX;
    for(int i=0;i<len && diff;i++)
    {
        int lo = i+1;
        int hi = len-1;
        while(lo<hi){
            int sum = nums[i]+nums[lo]+nums[hi];
            if(abs(target-sum)<abs(diff)){
                diff=target-sum;
            }
            if(sum<target){
                ++lo;
            }
            else
            {
                --hi;
            }
        }
    }
    return target-diff;
}
int main(){
    vector<int> test{-1,2,1,-4};
    
    cout<<threeSumClosest(test, 1);
}