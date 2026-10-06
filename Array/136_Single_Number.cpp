class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //   for(int i=0;i<nums.size();i++){
    //        int count=0;
    //        for(int j=0;j<nums.size();j++){
    //          if(nums[i]==nums[j]){
    //             count ++;
    //          }
    //        }

    //        if(count!=2){
    //         return nums[i];
    //        }
    //     }
    //     return 0;
    // }

      int ans=0;
      for(int i=0; i<nums.size();i++){
          ans=ans^nums[i];
      }
    return ans;
  }
};