#include <stdio.h>
#include <stdlib.h>

void printArray (int ary [], int size);
void insSort (int ary [], int size);
void selSort (int ary [], int size);
void bubSort (int ary [], int size);

int main()
{
    int a [10] = {1, 3, 4, 3, 2, 1, 5, 6, 7, 9};
    int b [10] = {1, 3, 4, 3, 2, 1, 5, 6, 7, 9};
    int c [10] = {1, 3, 4, 3, 2, 1, 5, 6, 7, 9};
    printf("===insertion sort before sort");
    printArray(a, 10);
    insSort(a, 10);
    printf("===insertion sort after sort");
    printArray(a, 10);
    printf("===Selection sort before sort");
    printArray(b, 10);
    printf("===Selection sort after sort");
    selSort(b, 10);
    printArray(b, 10);
    printf("===Bubble sort before sort");
    printArray(c, 10);
    printf("===Bubble sort after sort");
    bubSort(c, 10);
    printArray(c, 10);
    return 0;
}

void insSort (int ary [], int size)
{
    int i;
    int j;
    for (i = 1; i < size; i++)
    {
        for (j = i; j > 0; j--)
        {
            if (ary[j] < ary[j - 1])
            {
                int temp = ary[j - 1];
                ary[j - 1] = ary[j];
                ary[j] = temp;
            }
        }
    }
}

void selSort (int ary [], int size)
{
    int i;
    int j;
    int minIndex;

    for (i = 0; i < size; i++)
    {
        minIndex = i;
        for (j = i + 1; j < size; j++)
        {
            if (ary[j] < ary[minIndex])
            {
                minIndex = j;
            }
        }
        if  (minIndex != i)
        {
            int temp = ary[minIndex];
            ary[minIndex] = ary[i];
            ary[i] = temp;
        }
    }
}

void bubSort(int ary [], int size)
{
    int i;
    int j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (ary[j] > ary[j + 1])
            {
                int temp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = temp;
            }
        }
    }
}

void printArray (int ary [], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("\nelement: %d\n", ary[i]);
    }
}

