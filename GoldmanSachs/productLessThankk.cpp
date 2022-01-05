class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long prod=1;
        int i=0;
        int count=0;
        int j=0;
        for(int i=0;i<n;i++)
        {
              prod*=a[i];
              
              while(prod>=k && j<=i )
              {
                  prod/=a[j];
                  j++;
              }
              count=count+(i-j+1);
        }
        return count;
    }
};
