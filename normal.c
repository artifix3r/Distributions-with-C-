#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//author artifix1 : Yusif Imamverdiyev
int main()
{
        FILE *fptr;
        fptr = fopen("Loi_Normal.csv","r"); 
        int row = 0, column = 0; 
        int  newinput;
        float prob, input, f;
            printf("enter input ");
            scanf("%f", &input);
            newinput = input * 100;
            printf("new z value = %d\n", newinput);
            column = newinput % 10;
            row = newinput / 10;
            column=column+1;
             printf("For line %d , col %d , the result will be:  ", row, column);
            row=row+2;
              char string[1000], *token; //strting for string line, token for 1 cell 
        int i = 0, j = 0; //i is for our columns and j is for rows 
        
        while (fgetc(fptr) != EOF)//read file till end
    {
        i = 0; //set row 0 
        fscanf(fptr, "%s", string);
        j++; //increase column 
        token = strtok(string, ";");
        while (token != NULL) //if cell is null it means null we will go to next cell
        {
            token = strtok(NULL, ";");
            i++; // increase row number
            if (i == column && j == row) 
            {
                printf("Normal distribution value is  = %s" , token);
            }
        }
    }
           
           
            return 0;
}