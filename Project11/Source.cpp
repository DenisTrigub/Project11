#include <iostream>
using namespace std;


void print_arr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 10;
        cout << "arr[" << i << "] = " << *(arr + i) << endl; 
    }
}


int sum_arr(int* arr, int size)
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
    srand(time(0));
    const int size = 10;
    int arr[size];
    int* arr_ptr = arr;

    print_arr(arr_ptr, size);

    cout << "Sum = " << sum_arr(arr_ptr, size) << "\n";


}