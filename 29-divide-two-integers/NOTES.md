if (divisor == INT_MIN)
if (dividend == divisor) return 1;
else return 0;
if (dividend == INT_MIN)
if (divisor == 1) return INT_MIN;
else if (divisor == -1) return INT_MAX;
if (dividend == INT_MAX)
if (divisor == 1) return INT_MAX;
else if (divisor == -1) return INT_MAX;
if(dividend==1<<31 && divisor==-1 )
return INT_MAX;
bool sign= (dividend>=0)==(divisor>=0)? true:false;
dividend =abs(dividend);
divisor =abs(divisor);
int ans=0;
while(dividend - divisor >=0){
int c=0;
while( dividend - (divisor <<1 <<c ) >= 0){
c++;
}
ans+=1<<c;
dividend -= divisor<<c;
}
return sign?ans: -ans;