#include <stdio.h>
#include <stdlib.h>

#include <math.h>
//Calcolare il determinante
float calcolaDelta (float a, float b, float c)
     {
            
      float pluto;
      float pippo;
      float determinante;
      
      pluto = b*b;
      pippo = 4*a*c;
      determinante = pluto - pippo; 
       
      return determinante;
      
     }
//Verificare esistenza soluzione reali
int esistonoRadici(float a, float b, float c)
    {
         if (calcolaDelta(a,b,c)<0) //0=falso qualsiasi numero = vero se si vuole dichiare che è falso o vero basta utilizzare il commando if e di conseguenza senza usare le parentesi graffe basta utilizzare return
               return 0;                  
          else 
               return 1;          
              
    }
//Calcolare soluzione reali
float calcolaSoluzione1(float a, float b, float c)
          {
                              
            float determinante = calcolaDelta (a,b,c);
            float risultato;
            float ciccio;
            float topolino;
            float paperino;
                    
    
    ciccio = -b;
    risultato = ciccio + sqrt(determinante);
    topolino = 2 * a;
    paperino = risultato / topolino;
    
    return paperino;
          }

float calcolaSoluzione2(float a, float b, float c)
          {
                              
            float determinante = calcolaDelta (a,b,c);
            float risultato;
            float ciccio;
            float topolino;
            float paperino;
            
    
    ciccio = -b;
    risultato = ciccio - sqrt(determinante);
    topolino = 2 * a;
    paperino = risultato / topolino;
    
    return paperino;
          } 
          
void stampaRisultati(float x1, float x2)
{
     
     printf("I risultati dell'equazione di secondo grado sono:\n%f;\n%f.", x1, x2);
                                                
//Programma principale
int main() 
{
    
 float a,b,c,x1,x2;
 int uscita;

    printf("Benvenuti: questo programma, realizzato dalla associazione di due alunni, risolve l'equazione di secondo grado cioe' ax^2+bx+c=0. (P.S. Mi ha aiutato Amedeo Di Gaetano.)");
    printf("\nPrego, inserire un numero (a): ");
    scanf("%f", &a);
    printf("\nPrego inserire un altro numero (b): ");
    scanf("%f",&b);
    printf("\nPrego inserire l'ultimo numero (c): ");
    scanf("%f",&c);
    //collegamenti con altre funzioni
    if (esistonoRadici(a,b,c))
    {  
                              x1=calcolaSoluzione1(a,b,c);
                              x2=calcolaSoluzione2(a,b,c);
                              stampaRisultati(x1,x2);
                              
                              }
     else 
     printf("\nNon esistono soluzioni reali.");
    
    
    printf("\nDigitare un numero per uscire...");
    scanf("%d", &uscita);
}
