// factorial
#include<stdio.h>
int fac(int);
int main(){
    int k,v;
    printf("enter a number : ");
    scanf("%d",&v);
    k=fac(v);
    printf("%d\n",k);
    return 0;
}
int fac(int a){
    int s;
    if(a==1)
        return a;
    s=a*fac(a-1);
    return s;
}