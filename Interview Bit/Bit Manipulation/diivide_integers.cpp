int Solution::divide(int b, int a) {
    long long B=b,A=a;
        if(B==0)return 0;
        if(A==1)return B;
        int sign=-1;
        if((A<0) and (B<0))sign =1;
        if((A>=0) and (B>=0))sign=1;
        A=abs(A),B=abs(B);
        long long ans=0,q=0,divisor=0;
        for(int i=31;i>-1;i--){
            if(divisor+(A<<i)<=B)divisor+=(A<<i),ans+=(1LL<<i);
        }
        if(ans>INT_MAX)return INT_MAX;
        if(sign>0)
        return (int)ans;
        return (int)(-ans);
}
