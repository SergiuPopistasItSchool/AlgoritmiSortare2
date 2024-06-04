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
//Functia care implementeaza bubbkeSort
void bubbleSort(int arr[], int dimens)
{
    //Parcurem tot array-ul
    for (int i = 0; i < dimens - 1; i++)
    {
        for (int j = 0; j < dimens - i - 1; j++)
        {
            std::cout << "Indexul maxim pentru swap: " << dimens - i - 1 << std::endl;
            //verificam daca elementul current este mai mare decat urmatorul
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main()
{
    int test[5] = { 9,3,5,4,6 };
    bubbleSort(test, 5);
    printArray(test, 5);

}