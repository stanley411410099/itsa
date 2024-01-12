#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int mon,day;
    scanf("%d %d",&mon,&day);
    if(mon==1){
        if(day>=21){
            printf("Aquarius\n");
            return 0;
        }
        else{
            printf("Capricorn\n");
            return 0;
        }
    }
    if(mon==2){
        if(day>=19){
            printf("Pisces\n");
            return 0;
        }
        else{
            printf("Aquarius\n");
            return 0;
        }
    }
    if(mon==3){
        if(day>=21){
            printf("Aries\n");
            return 0;
        }
        else{
            printf("Pisces\n");
            return 0;
        }
    }
    if(mon==4){
        if(day>=21){
            printf("Taurus\n");
            return 0;
        }
        else{
            printf("Aries\n");
            return 0;
        }
    }
    if(mon==5){
        if(day>=22){
            printf("Gemini\n");
            return 0;
        }
        else{
            printf("Taurus\n");
            return 0;
        }
    }
    if(mon==6){
        if(day>=22){
            printf("Cancer\n");
            return 0;
        }
        else{
            printf("Gemini\n");
            return 0;
        }
    }
    if(mon==7){
        if(day>=23){
            printf("Leo\n");
            return 0;
        }
        else{
            printf("Cancer\n");
            return 0;
        }
    }
    if(mon==8){
        if(day>=24){
            printf("Virgo\n");
            return 0;
        }
        else{
            printf("Leo\n");
            return 0;
        }
    }
    if(mon==9){
        if(day>=24){
            printf("Libra\n");
            return 0;
        }
        else{
            printf("Virgo\n");
            return 0;
        }
    }
    if(mon==10){
        if(day>=24){
            printf("Scorpio\n");
            return 0;
        }
        else{
            printf("Libra\n");
            return 0;
        }
    }
    if(mon==11){
        if(day>=23){
            printf("Sagittarius\n");
            return 0;
        }
        else{
            printf("Scorpio\n");
            return 0;
        }
    }
    if(mon==12){
        if(day>=22){
            printf("Capricorn\n");
            return 0;
        }
        else{
            printf("Sagittarius\n");
            return 0;
        }
    }
}
