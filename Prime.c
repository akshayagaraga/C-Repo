#include<stdio.h>
int main(){
    int i,n,cnt = 0;
    scanf("%d",&n);
    for(i = 1; i < n+1;i++){
        if(n % i == 0){
            cnt ++;
        }
    }
    if (cnt == 2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;

}