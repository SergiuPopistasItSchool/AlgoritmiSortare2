#include <iostream>
#include <vector>
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
int* t = new int;
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


//Functie pentru a fuziona doua sub-arrayuri in ordine corecta
void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;//Dimensiunea primului sub array
    int n2 = right - mid; // Dimensunea celui de-al doilea array

    // creem doua array-uri temporare
    std::vector<int> L(n1);
    std::vector<int> R(n2);

    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[mid + 1 + j];
    }

    //Index initial pt ptrimul si al doilea su-array
    int i = 0, j = 0;
    
    //Indexul initial pt array fuzionat
    int k = left;

    //Fuzionam sub-arrayl inapopi in array-ul original
    while (i<n1  && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    //Copiem elementele ramase din L[] daca exista
    while (i<n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    //Copiem elementele ramase din R[] daca exista
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

//Functia principala pentru sortarea arra=ului folosind Merge Sort
void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        //Gasim mijlocul array-ului
        int mid = left + (right - left) / 2;
        //Sortam prima si a doua jumatatte
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        //Fuzionam jumatatile sortate
        merge(arr, left, mid, right);
    }
}


int main()
{
    int test[4] = {9,3,5,4 };
    //bubbleSort(test, 5);
    mergeSort(test, 0, 3);
    printArray(test, 4);

}