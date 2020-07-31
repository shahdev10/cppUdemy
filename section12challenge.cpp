#include<iostream>

using namespace std;

//enter prototypes here

void print(int arr[], int);
int *apply_all(int array1[], int size1, int array2 [], int size2);

int main ()
{
    int array1 [5] =  {1, 2, 3, 4, 5};
    int array2 [3] =  {10, 20, 30};

    cout << "Array 1: " << endl;
    print(array1, 5);
    cout << "Array 2: " << endl;
    print(array2, 3);

    int *results = apply_all(array1, 5, array2, 3);
    cout << "Results: " << endl;
    print(results, 15);
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int *apply_all(int array1[], int size1, int array2[], int size2)
{
    int *results = {nullptr};
    results = new int [size1 * size2];
    int count = 0;

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            results[count] = array1[i] * array2[j];
            count++;
        }
    }
    return results;
}

