if(num<10)
return num;
else
return addDigits(addDigits(num/10)+num%10);