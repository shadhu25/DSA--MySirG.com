// recursion
#include<stdio.h>
int sum(int);
int main(){
    int k;
    k=sum(3);
    printf("%d\n",k);
    return 0;
}
int sum(int a){
    int s;
    if(a==0)
        return a;
    s=a+sum(a-1);
    return s;
}