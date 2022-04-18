#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//author artifix1 : Yusif Imamverdiyev
int main()
{           FILE *fptr;
        fptr = fopen("chi.csv","r");
            printf("enter input");
            float input;
            scanf("%f", &input);
            int newinput = input * 1000;   //1.995 1995
            int column = newinput % 1000; 
            int row = newinput / 1000;
            float reversecol = column / 1000;
            printf("For line %d, col %f, the result will be\n", row, reversecol);
            char string[1000], *token;
    int p=0, i = -1, j = -1;
    float val;
    while (fgetc(fptr) != EOF) //read file till end
    {
        i = 0;
        fscanf(fptr, "%s", string);
        j++;
        token = strtok(string, ";");
        while (token != NULL)
        {
            if (atof(token)*1000==column && j==0)
            {
                p=i;
            }
            
            token = strtok(NULL, ";");
            i++;
            if (i == p && j == row)
            {
                //val = atof(token);
                 printf("F distribution value is  = %s" , token);
        
            }
        }
    } 
           
         
            return 0;
}