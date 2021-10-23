// most beautiful algorithm
// once pointer go forward to n
// another go backward from i to n
// compare at every stages



#include <iostream>
using namespace std;


void insertionSort(int arr[],int n){


    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j] < arr[j-1]  ){
                cout << "Swapping done-> " << arr[j] << "->"  << arr[j-1] << endl;
                swap(arr[j],arr[j-1]);    
                }
            else 
                break;    
        }
    }
}





int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];

    insertionSort(arr,n);

    for(int i=0;i<n;i++)
        cout <<  arr[i] << " ";



    return 0;    
}