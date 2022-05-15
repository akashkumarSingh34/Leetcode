bool isPalindrome(int x) {
        if(x<0 || (x%10==0 && x!=0))
            return false;
        else if(x>=0&&x<=9)
            return true;
        else{int sum=0;
             for(;x>sum;x/=10)
                sum=sum*10 + x%10;
             return x == sum || x == sum/10;
        }
