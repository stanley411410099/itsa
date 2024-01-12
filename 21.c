#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    float a[10];
    float max,min;
    scanf("%f %f %f %f %f %f %f %f %f %f",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
    max=a[0];
    min=a[0];
    for(int i=0;i<9;i++){
        if(max<a[i+1]){
            max=a[i+1];
        }
        if(min>a[i+1]){
            min=a[i+1];
        }
    }
    printf("maximum:%.2f\n",max);
    printf("minimum:%.2f\n",min);
}
