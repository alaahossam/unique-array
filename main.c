#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size, array1[1000], array2[1000], count = 0, i, j,sum=0;

    printf("Enter number of elements in array: ");
    scanf("%d", &size);

    printf("Enter %d numbers\n", size);

    for (i = 0; i < size; i++)
        scanf("%d", &array1[i]);

    for (i = 0; i< size; i++)
    {
        for (j = 0; j < count; j++)
        {
            if(array1[i] == array2[j])
                break;
        }
        if (j == count)
        {
            array2[count] = array1[i];
            count++;
        }
    }

    printf("The array without duplicated numbers: \t");

    for (i = 0; i < count; i++)
    {
        sum=sum+array2[i];
        printf("%d\t", array2[i]);
    }
  printf("\nThe sum of non duplicated numbers= %d",sum);
    return 0;
}
/*int i;
int sum(int array2[i])
{
    int size;
    for (i=0; i<size; i++)
    {
        printf("The summation of the non duplicated elements: %d",sum);
    }
    return sum;
}*/
