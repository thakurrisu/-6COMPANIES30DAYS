class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
        int i=0,j=0;
        int arr=0,sum=0;
        if(sum>=target)
            arr++;
        while( j<a.size())
        {
            
                if(sum<target)
                {sum+=a[j];
                    j++;
                }
            
            if(sum>=target)
            {
                while(sum>=target && i<=j )
                {
                   
                    sum=sum-a[i];
                     i++;
                }
                int temp=(j-i+1);
                if(arr==0)
                    arr=temp;
                else
                    arr=min(arr,temp);
            }
            
           
        }
        return arr;
    }
};
