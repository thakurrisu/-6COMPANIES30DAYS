int *findTwoElement(int *arr, int n) {
        // code here
        int *ans =new int[2];
        int rep,miss;
        for(int i=0;i<n;i++)
        {
            int num=abs(arr[i])-1;
            if(arr[num]>0)
            arr[num]=-1*arr[num];
            else
            rep=abs(arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0){
                miss=i+1;
            }
        }
        ans[0]=rep;
        ans[1]=miss;
        return ans;
    }
