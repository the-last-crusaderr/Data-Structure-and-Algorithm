/* damn easy...
    find the pivot
    partition along the pivot 
    sort the partition by quickSort
    inPlace Sorting
    Avg -> O(nlogn)
    Worst -> O(n2)

    Due for free time..
 */   



#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>v,int startIndex,int endIndex){
    int pivot = v[(startIndex+endIndex)/2];
    int leftIndex = startIndex;
    int rightIndex = endIndex;








}



void quickSort(vector<int> v,int startIndex,int endIndex){
    if (startIndex >= endIndex)
        return ;
    else{
    int pivot = partition(v,startIndex,endIndex);

    }    




}



int main(){

    vector<int> v{3,5,2,7,1};

    quickSort(v);

    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";




    return 0;
}
