//time _Compleexity o(n);
//memoizatino method


int helper(int n, int *ans){
    if(n<=1){
        
        return n;
    }
    
  if(ans[n]!= -1){
      return ans[n];
        
    }
    int a =  helper(n-1,ans);
    int b = helper(n-2, ans);
    ans[n]= a+b;
    return ans[n];
}

int  fibonacc(int n){
    int * ans= new int[n+1];
    helper(n, ans);
}