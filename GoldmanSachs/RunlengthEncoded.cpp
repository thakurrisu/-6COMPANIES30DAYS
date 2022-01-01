string encode(string src)
{     
  //Your code here 
  string res="";
  char c=src[0];
  int count=1;
  for(int i=1;i<src.size();i++)
  {
      if(src[i]==src[i-1])
      count++;
      else
      {
          res+=c;
          res+=(count+ '0');
          count=1;
          c=src[i];
      }
  }
  res+=c;
  res+=(count+'0');
  return res;
}  
