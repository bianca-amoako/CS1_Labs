//  si_array_prac
//  Bianca Amoako
// 2/17/23.
//

#include <iostream>
using namespace std;

int main() {
    cout << "Enter array size ";
    int arr_size;
    cin >> arr_size;
    int array[arr_size];
    for (int i = 0; i < arr_size; ++i) {
        cout << "Enter index number ";
        int indx_num;
        cin >> indx_num;
        array[i] = indx_num;
    }
    cout << "The index is: ";
    for (int i = 0; i < arr_size; ++i){
        cout << array[i] << " ";
        
    }cout << endl;

}
