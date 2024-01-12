#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int x,test=0;
    scanf("%d",&x);
    for(int t=2;t<x;t++){
        if(x%t == 0){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
}
