class Solution {
public:
    int reverse(int x) {
       int rev=0;
       int temp=0;
       int sign=0;
       
       //if(x<0) {sign=-1;x=abs(x);}
       //else {sign=1;}
       
       while(x!=0){
            temp=x%10;
            x=x/10;
           
           //if (x<=- pow (2.0, 31.0)||x>=pow (2.0, 31.0)-1){
           //  return 0;break;
           //  } 是为了倒序之后不overflow
           if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && temp > 7)) return 0;//?
           if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && temp < -8)) return 0;//?
           
            rev=rev*10+temp;
        }
        return rev;//sign*rev;
        
    }
};
