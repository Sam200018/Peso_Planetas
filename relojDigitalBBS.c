#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int hora, mins, seg;
    printf("Que hora es?\n");
    printf("Ingresa la hora (12 hrs)\n");
    scanf("%d",&hora);
    printf("Ingresa los mins(60 mins)\n");
    scanf("%d",&mins);
    printf("Ingresa los segundos(60 seg)\n");
    scanf("%d",&seg);

    if(mins==60 && seg==60 && hora!=12){
        hora=hora+1;
        mins=0;
        seg=0;
    }
    else if(seg==60 && mins!=60)
    {
        mins++;
        seg=0;
    }
    else if(hora==12 && mins==60 && seg==60){
        hora=1;
        seg=0;
        mins=0;    
    }
    
    system("cls");
    for (int seg ; seg<= 60; seg++)
    {
        printf("ss: %d",seg);
        sleep(1000);
        system("cls");
        
    }
    
    
    printf("hh: %d mm: %d ss: %d", hora, mins, seg);
        


    return 0;
}
