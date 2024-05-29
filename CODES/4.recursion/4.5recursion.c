// all permutation of a string
#include<stdio.h>
void swap(char *x,char *y){
    char ch;
    ch=*x;
    *x=*y;
    *y=ch;
}
void permutation(char *s, int i, int n){
    static int count;
    int j;
    if(i==n){
        count++;
        printf("%s\t",s);
    }
    else{
        for(j=i;j<=n;j++){
            swap((s+i),(s+j));
            permutation(s,i+1,n);
            swap((s+i),(s+j));
        }
    }
}
int main(){
    char *str;
    printf("Enter a string: ");
    gets(str);
    permutation(str,0,strlen(str)-1);
    return 0;
}