#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//author artifix1 : Yusif Imamverdiyev
int main()
{
   
        FILE *fptr;
        fptr = fopen("studentt.csv","r"); 
        int row = 0, column = 0;
        int c, x, n, newinput;
        float prob, input, f;
        printf("enter input ");
         scanf("%f", &input);
        
    char string[10000], *token;
    int p=0, i = -1, j = -1;
    float val;
   while (fgetc(fptr) != EOF)
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
                printf("student t dist is = ", token);
            }
        }
    }
             newinput = input * 1000;
             column = newinput % 1000;
            row = newinput / 1000;
            f = column / 1000;
           
            printf("For line %d, col %f, the result will be\n", row, f);
        
            return 0;
}