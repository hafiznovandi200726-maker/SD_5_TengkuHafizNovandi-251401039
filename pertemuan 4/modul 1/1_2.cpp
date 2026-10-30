#include <iostream>
using namespace std;

void addData(){
    int* newArr = new int[n + 1];
    for (int i = 0; i < n; i++) {
        newArr[i] = arr[i];
    }
    newArr[n] = nilai;
    delete[] arr;
    arr = newArr;
    n++;
}

void deleteData(int* &arr, int& n, int index){
    if (n == 0 ){
        cout << "array kosong wak";
        return;
    }

    if (n == 1)
    {
        /* code */
        delete[] arr;
        arr = nullptr
        n = 0;
        cout << "Array sudah dikosongkan wak."
        return;
    }
    
    int* newArr = new int[n - 1];
    int j = 0;
    for (int i=0; i < n; i++){
        if(i != index){
            newArr[j] = arr[i];
            j++;
        }
    }
    delete [] arr;
    arr = newArr;
    n--;
    cout << " Data pada index"<< index << "Sudah diapus brayy "<< endl;

}

int searchData(int* arr, int n, int nilai) {
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i]==nilai){
            if 
        }
    }
    
}


int main(){
    system("cls");
    int n;
    int* arr = nullptr;

    addData(arr, n, 2);
    addData(arr, n, 4);
    addData(arr, n, 6);
    addData(arr, n, 8);
    addData(arr, n, 10);
    addData(arr, n,);
    
    int cari = 6;
    int pos = 
}