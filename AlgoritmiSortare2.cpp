#include <iostream>
//printeze un array de tip int
void printArray(int my_arr[], int dimens)
{
    for (int i = 0; i < dimens; i++)
    {
        std::cout << my_arr[i];
    }
    std::cout << std::endl;
}

//swap intre 2 elemente de tip int
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
//O(n2)
void bubbleSort(int arr[], int dimens)
{
    //diver principal->parcurge elementle din arr
    for (int i = 0; i < dimens; i++)
    {
        for (int j = 0; j < dimens - i -1; j++)
        {
            std::cout << "Comparam j = " << arr[j] << " j+1 = " << arr[j+1] << std::endl;
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}
int main()
{
    int test[5] = { 9,3,5,4,6, };
    bubbleSort(test, 5);
    printArray(test, 5);



}