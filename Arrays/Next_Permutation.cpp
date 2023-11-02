//https://leetcode.com/problems/next-permutation/submissions/1089006621/

class Solution {
public:
    vector<int> nextPermutation(vector<int>& nums) {
        // int num[3], ans[3];
        // for(int i=0;i<3;i++)
        //     num[i]=nums[i];
        // next_permutation(num, num+3);
        // cout<<num[0]<<" "<<num[1]<<" "<<num[2];
        int index = -1, n = nums.size();
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                index = i;
                break;}
        }
        if(index == -1){
            reverse(nums.begin(), nums.end());
            return nums;
        }

        for(int i=n-1;i>index; i--){
            if(nums[i]>nums[index]){
                swap(nums[i], nums[index]);
                break;
            }
        }

        reverse(nums.begin()+index+1, nums.end());
        return nums;
    }
};