#ifdef _WIN32
#include <direct.h>
#else
#include <unistd.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int hora, mins, seg;
    int h_Alarma, m_alarma, s_Alarma;

    printf("Que hora es?\n");

    printf("Ingresa la hora (12 hrs)\n");
    scanf("%d",&hora);        
    printf("Ingresa los mins(60 mins)\n");
    scanf("%d",&mins);
    printf("Ingresa los segundos(60 seg)\n");
    scanf("%d",&seg);


    system ("cls");

    printf("Ingresa hora de Alarma \n");
    printf("Ingresa la hora de alarma (12 hrs)\n");
    scanf("%d",&h_Alarma);
    printf("Ingresa los mins de alarma(60 mins)\n");
    scanf("%d",&m_alarma);
    printf("Ingresa los segundos de alarma(60 seg)\n");
    scanf("%d",&s_Alarma);        
    




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

    
    for (hora; hora >= 12; hora++)
    {
        if(mins==60){
            mins==0;
        }
        else if (mins==60 && seg==60 && hora==12)
        {
            hora=0;
            mins=0;
            seg=0;
        }
        
        for (mins; mins < 60; mins++)
        {
            if(seg==60){
                seg=0;
            }
            for (seg ; seg < 60; seg++)
            {
                printf("hh::%d mm::%d ss::%d \n",hora,mins,seg);
                
                sleep(1);
                
                
                if (hora== h_Alarma && mins==m_alarma && seg== s_Alarma){
                    system("cls");
                    printf("¡¡ALARMA!!");
                    sleep(10);
                    seg=seg+10;
                }
                
                    



                system("cls");


            }
            
            
        }
        
    }
    hora=0;
    
    
    
        


    return 0;
}
