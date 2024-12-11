bool isPalindrome(int x){
int t=x,b;
long long int s=0;
while(x>0){
     b=x%10;
    s=(s*10)+b;
    x/=10;
}
if(s==t)
return true;
else 
return false;
}