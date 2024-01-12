#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    double z;
    z=x*x+y*y;
    if(z<=10000){
        printf("inside\n");
    }
    else{
        printf("outside\n");
    }
}
