
#include <stdio.h>
#include "simpio.h"


int main (){

int coffee;
int price ;
int change ;
//exw valei ta resta se int giati me
// float den mporousan gia kapoio logo na ginoun oi prakseis
//moy evgaze oti den ginetai na exw int me double

printf("Dose kafedes ");
coffee=GetInteger();
price = coffee*70;

if (price<500)
{
    change=500-price ;

    printf("Resta \n Kermata 2E %d\n",change/200);
     change %=200;
     printf(" Kermata 1E %d\n",change/100);
      change%=100;
      printf(" Kermata 50L %d\n",change/50);
       change %=50;
       printf(" Kermata 20L %d\n",change/20);
        change %=20;
        printf(" Kermata 10L %d\n",change/10);
  }
   else
    {
        printf("Den ftanoun ta xrhmata gia tous kafedes \n");
    }
    return 0;
}

