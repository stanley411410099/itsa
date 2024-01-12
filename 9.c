#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int x,num=0;
    scanf("%d",&x);
    for(int t=1 ; t<=x ; t++){
        if(t%3==0){
            num=num+t;
        }
    }
    printf("%d\n",num);
}
