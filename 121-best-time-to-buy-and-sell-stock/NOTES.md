int i,j;
int minprice=INT_MAX;
int maxPro=0;
for(i=0;i<prices.size();i++){
if(prices[i]<minprice)
minprice=prices[i];
else if(prices[i]-minprice > maxPro)
maxPro = prices[i]-minprice ;
}
return maxPro;