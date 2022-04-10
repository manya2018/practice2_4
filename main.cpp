#include<iostream>

using namespace std;
// TASK 1

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

// TASK 2
void bubble_sort(int arr[], const int size){
	
	for (int i = 1; i < size; i++){
		for (int j = 0; j < size - 1; j++){
			if (arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);	
			}
		}
	}
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}
// TASK 3

void insertion_sort(int arr[], const int size){
	
	int t;
	
	for (int i = 1; i < size; i++){
		t = arr[i];
		for (int j = i; j > 0 && arr[j-1] > arr[j]; j--){
			swap(arr[j-1], arr[j]);
		}
	}
    for (int i = 0; i < size; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}
// TASK 4


int main(){
	
	int array[]{2,3,5,9,1,4,6,8,7,0};
	const int n = 10;

	selection_sort(array, n);
	bubble_sort(array, n);
    insertion_sort(array, n);

	
	return 0;
