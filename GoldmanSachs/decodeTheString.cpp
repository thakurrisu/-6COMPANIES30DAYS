class Solution{
public:
    string decodedString(string s){
        // code here
        string ans="";
        //string temp="";//stack store;
        int num=0;
        stack<int> nums;
        stack<string> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==']')
             {
                 string temp="";
                 string top=st.top();
                 st.pop();
                 while(top!="[")
                {
                    
                    temp+=top;
                    top=st.top();
                    st.pop();
                }
                int rep=nums.top();
                nums.pop();
                reverse(temp.begin(),temp.end());
                string to_push="";
                for(int i=1;i<=rep;i++)
                to_push+=temp;
                reverse(to_push.begin(),to_push.end());
                st.push(to_push);
            } 
            else if(s[i]>='0' && s[i]<='9')
                 num = num*10 + (s[i]-'0');
            else
            { 
                if(num>0)
                nums.push(num);
                num=0;
                string temp="";
                 temp+=s[i];
                 st.push(temp);
            }
        
            
            
        }
        string top=st.top();
        reverse(top.begin(),top.end());
        return top;
        //reverse(temp.begin(),temp.end());
        //return temp;
    }
