int value(int n){
  if(n%4==0)
    return n;
  else if(n%4==1)
    return 1;
  else if(n%4==2)
    return n+1;
  else if(n%4==3)
    return 0;
}

/* N=5
1^2^3^4^5=1

N=2
1^2=3

there is a pattern generated
1 -> 1
2 -> 3
3 -> 0
4 -> 4
5 -> 1
6 -> 7
7 -> 0
8 -> 8
