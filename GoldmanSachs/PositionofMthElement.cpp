class Solution {
  public:
    int findPosition(int n , int m , int k) {
        // code here
        if(m<(n-k+1))
        return k+m-1;
        else
        m=m-(n-k+1);
        if(m%n)
        return m%n;
        else
        return n;
       // return m%n?0:n;
    }
};
