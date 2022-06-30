#include <stdio.h>
void insert(int a[], int n)
{
    int temp, i, j;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}
void main()
{
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    insert(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

// or
// #include <stdio.h>
// void insert(int a[], int n)
// {
//     int temp, i, j;
//     for (i = 1; i < n; i++)
//     {
//         temp = a[i];
//         for (j = i - 1; j >= 0 && a[j] > temp; j--)
//         {

//             a[j + 1] = a[j];
//         }
//         a[j + 1] = temp;
//     }
// }
// void main()
// {
//     int n;
//     printf("Enter no. of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements: ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     insert(arr, n);
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
// }


