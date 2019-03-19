//Autor: Cristina C Ribeiro
//Algoritmo: Concatenação Istring Invertida

#include <stdio.h>
#include <stdlib.h>

void invertConcatena (char *p1, char *p3, char *p2, char *p4, char *p5, char c, int max, int maxSeg)
{
    int i=0, j=0, x=0, l=0, m=0, z=0;
    int aux, totalLetra=0;
    int total;
    
     //contando o tamanho da string p1
    for(i=0; i<max; i++)
    {
        if (p1[i] != '\0')
        {
            x++;
        }
        else
        {
            break;
        }
    }
    
    //zerando o espaço que estiver depois da string p1
    for (i=x+2; i<max; i++)
    {
        p1[i] = NULL;
    }
    
    
    //invertendo a string p1
    for(i=x-1; i>=0; i--)
    {
        p3[j] = p1[i];
        j++;
    }
    
    //contando o tamanho da string p2
    for(l=0; l<maxSeg; l++)
    {
        if (p2[l] != '\0')
        {
            z++;
        }
        else
        {
            break;
        }
    }
    
    //zerando o espaço que estiver depois da string p2
    for (l=x+2; l<maxSeg; l++)
    {
        p2[l] = NULL;
    }
    
    
    //invertendo a string p2
    for(l=z-1; l>=0; l--)
    {
        p4[m] = p2[l];
        m++;
    }
    
    total = x+z;
    
    //concatenando as strings
    i=0;
    j=0;
    for (aux=0; aux<80; aux++)
    {
        if (aux<=x)
        {
            
            if(p4[i] != '\0')
            {
                p5[aux] = p4[i]; 
                i++;
            }
            else
            {
                continue;
            }   
            
        }
        else if(aux < 80 && aux >= x)
        {
            if(p3[j] != '\0')
            {
                p5[aux-1] = p3[j];    
                printf("%c", p3[j]);
                j++;
            }
            else
            {
                p5[aux] = p3[j];
                p5[aux+1] = '\0';
                break;
            }    
        }
    }
    
 for (i=0; i<aux; i++)
 {
     if (p5[i] == c)
     {
        totalLetra++;
     }
 }
 
 
 
 printf("\n%s\n", p5);
 printf("%d\n", total);
 printf("%d\n", totalLetra);
 
 
 
 
   
}
    


int main()
{
    int max = 0, maxSeg = 0, tamTotal;
    int i=0;
    char *p1, *p2, *p3, *p4, *p5;
    char c, aux1, aux2;
    char string1, string2;
    
    
    //printf("digite o tamanho primeira string, tamanho segunda, digite um char\n");
    scanf ("%d %d %c", &max, &maxSeg, &c);
    
    //tamTotal = maxSeg+max;
    
    //alocando espaço na memoria - dinamicamente
    p1 = malloc(sizeof(char)*80);
    p2 = malloc(sizeof(char)*80);
    p3 = malloc(sizeof(char)*80);
    p4 = malloc(sizeof(char)*80);
    p5 = malloc(sizeof(char)*80);
    
    //armazenando nas strings
    scanf("%s", p1);
    scanf("%s", p2);
   
    
    
    invertConcatena(p1, p3, p2, p4, p5, c, max, maxSeg);
    
 
return 0;
    
} 
