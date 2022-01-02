class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        if(nums.size()&1)
        return false;
       int count=0;
        for(int i=0;i<nums.size();i++)
        {  nums[i]=nums[i]%k;
         if(nums[i]==0)
         count++;
        }
        if(count&1)
        return false;
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
         while(nums[i]==0)
            i++;
        while(i<j)
        {
           
            if(nums[i]+nums[j]!=k)// || nums[i]+nums[j]!=0 )
            return false;
            i++;
            j--;
        }
        return true;
    }
};
