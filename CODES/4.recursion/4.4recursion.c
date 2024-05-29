// Finding Greatest Comman Factor(GCD)
#include<stdio.h>
int GCD(int m, int n){
    if(m==n||n%m==0)
        return m;
    else{
        if(m%n==0)
            return n;
    }
    if(m>n)
        GCD(m%n,n);
    else
        GCD(m,n%m);
}
int main(){
    int a,b,x;
    printf("enter any two number : ");
    scanf("%d %d",&a,&b);
    x=GCD(a,b);
    printf("%d\n",x);
    return 0;
}