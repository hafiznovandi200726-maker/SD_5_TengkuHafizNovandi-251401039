#include <iostream>
using namespace std;

int main(){
    system("cls");
    int var;

    // cout << "Masukkan ukuran array: ";
    // int arr[5];

    // for (int i=0; i<= 7; i++){
    //     cout << "Masukkan nilai array elemen ke-" << i+1 << " : ";
    //     cin >> var;
    //     arr[i] = var;
    // }
    // for (int i=0; i<= 5; i++){
    //     cout << "elemen ke-" << i+1 << " = " << arr[i] << "\n";
    // }


    cout <<"Masukkan ukuran array : ";
    cin >> var;

    int* arr = new int[var];

    cout <<"Masukkan " << var << " angka : \n";
    for (int i =0; i < var; i++){
        cin >> arr[i];
    }

    cout <<"Isi Array : ";
    for (int i = 0; i<var; i++){
        cout << arr[i] << " ";

    }

    delete[]arr;


}