void extractDataTdist(FILE *fp, int n, int m)
{
    char str[1000], *token;
    int i = -1, j = -1;
    float val;
    do
    {
        i = 0;
        fscanf(fp, "%s", str);
        j++;
        token = strtok(str, ";");
        while (token != NULL)
        {
            
            token = strtok(NULL, ";");
            i++;
            if (i == n && j == m)
            {
                printf("RESULT IS:%s\n\n\n", token);
            }
        }
    } while (fgetc(fp) != EOF);
}