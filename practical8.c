#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp, *fodd, *feven;
    int num;

    
    fp = fopen("data.txt", "r");
    fodd = fopen("odd.txt", "w");
    feven = fopen("even.txt", "w");

    
    if (fp == NULL)
    {
        printf("Error opening file 'data.txt'\n");
        return 1;
    }


    while (fscanf(fp, "%d", &num) != EOF)
    {
        if (num % 2 == 0)
        {
            fprintf(feven, "%d ", num);
        }
        else
        {
            fprintf(fodd, "%d ", num);
        }
    }

    
    fclose(fp);
    fclose(fodd);
    fclose(feven);

    
    fodd = fopen("odd.txt", "r");
    feven = fopen("even.txt", "r");

    
    printf("\nODD NUMBERS:\n");
    while (fscanf(fodd, "%d", &num) != EOF)
    {
        printf("%d ", num);
    }

    
    printf("\nEVEN NUMBERS:\n");
    while (fscanf(feven, "%d", &num) != EOF)
    {
        printf("%d ", num);
    }


    fclose(fodd);
    fclose(feven);

    return 0;
}
  
  
