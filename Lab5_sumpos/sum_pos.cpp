
#include <iostream>
using namespace std;

void fill_up(int arr[], int size);
void sum_positive(int arr[] , int size);

int main(){
    const int array_size = 5;
    int a[array_size];
    
    fill_up(a, array_size);
    sum_positive(a, array_size);
}

void fill_up(int x[], int size){
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; ++i)
       cin >> x[i];
}

void sum_positive(int x[] , int size){
    int sum = 0;
    for (int i = 0; i < size; ++i)
        if (x[i])
        sum += x[i];
    cout << sum;
}
