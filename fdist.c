#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//author artifix1 : Yusif Imamverdiyev


int main()
{
     
        FILE *fptr;
        fptr = fopen("fdist.csv","r"); 
        int row = 0, column = 0;
        int c, x, n, p, new;
    
            printf("Enter row number ");
            scanf("%d", &row);

            printf("Enter column number ");
            scanf("%d", &column);
            char string[1000], *token;
    int i = -1, j = -1;
    float val;
      printf("For row %d, col %d, the result will be : ", row, column);
    while (fgetc(fptr) != EOF)
    {
        i = 0;
        fscanf(fptr, "%s", string);
        j++;
        token = strtok(string, ";");
        while (token != NULL)
        {
            
            token = strtok(NULL, ";");
            i++;
            if (i == column && j == row)
            {
                 printf("F dist = %s" , token);
            }
        }
    } 
          
          
            return 0;
}