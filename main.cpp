#include<iostream>

using namespace std;

void selection_sort(int arr[], const int size)
{

    for (int i = 0; i < size - 1; i++)
    {

        int min_index = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            swap(arr[i], arr[min_index]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;

}


int main(){

    int array[]{2,3,5,9,1,4,6,8,7,0};
    const int n = 10;

    selection_sort(array, n);

    return 0;
}
