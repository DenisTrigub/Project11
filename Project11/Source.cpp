#include <iostream>
using namespace std;

template <typename T1>
void print_arr(T1* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr_ptr + i) = rand() % 10;
        cout << "arr[" << i << "] = " << *(arr + i) << endl; 
    }
}

template <typename T1>
T1 sum_arr(T1* arr, int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);

    }
    return sum;
}
void main()
{
    const int size = 10;
    int arr[size];
    int* arr_ptr = arr;

    print_arr(arr_ptr, size);

    cout << "Sum = " << sum_arr(arr_ptr, size) << "\n";

}