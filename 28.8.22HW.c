#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#pragma warning(disable:4996)

int main_0_0_1() {

    int x;
    int arr[10];

    for (int i = 0; i < 9; i++)
    {
        arr[i] = scanf("%d", &x);
    }

    FILE* f;

    f = fopen("task1.bin", "w");


    if (f == NULL)
    {
        //ERROR
    }
    else
    {
        for (int i = 0; i < 9; i++)
        {
            fwrite(&arr[i], sizeof(int), 1, f);
            i++;
        }


        fclose(f);

    }

	return 0;
}