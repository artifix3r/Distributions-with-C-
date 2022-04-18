#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{ 
 

          FILE *fptr;
        fptr = fopen("Binomial.csv","r"); 
          printf("Enter number of trials: ");
          int trials;
            scanf("%d", &trials);
            printf("Enter Number of Success: ");
            int x;
            scanf("%d", &x);
            printf("Enter one trial prob: ");
            float p,sgp;
            scanf("%f", &sgp);

            p = sgp * 100;
              if(p==25)
        {p= 2;}
    else if(p>=75)
    {p= (p+=25)/10;}
    else if(p>=25)
    {p= (p+=15)/10;}
    else{p= p/10;}
    p=p+2;
            char str[1000], *token;
            int i = 0, j = 0;
              int c=3;
             int n=5;
            int y=trials/5;
         
             for( i = 1;i<y;i++)
             {
             c = c + (n + 1);
             n+=5;
                }
    
            x = c+x; 
             while (fgetc(fptr) != EOF)
            {
             fscanf(fptr, "%s", str);
                j++;
                i = 0;
                token = strtok(str, ";");
                while (token!=NULL)
                {
                        token = strtok(NULL, ";");
                
                    if (j == x && i == p-3)
                    {
                        printf("Binomial dist = %s" , token);
                            break;
                            break;
                    }
                       i++;
               
        }
    } 
           
            return 0;
}
