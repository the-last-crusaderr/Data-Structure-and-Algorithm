// Techniques to remember while merge sorting..
/*

    Divides the vector into two halves..
    sort each one
    combine them
*/




// mergeSort(vector) -> vector
// mergeSort
// merging(vector,vector) -> merge vector...


#include <iostream>
#include <vector>
using namespace std;


vector<int> merge(vector<int> left,vector <int> right){
    vector<int> final;
    int i = 0;
    int j = 0;
    while(i < left.size() && j < right.size() ){
        if(left[i] <= right[j] ){
            final.push_back(left[i]);
            i++;
        }
        else{
            final.push_back(right[j]);
            j++;
        }

    }

    
    while(i < left.size()){
        final.push_back(left[i]);
        i++;
    }

    while(j < right.size()){
        final.push_back(right[j]);
        j++;

    }

   
    return final;


}


vector<int> mergeSort(vector<int> v){

    if(v.size() <= 1)
        return v; 
    int middle = v.size() / 2;    
    vector<int> left = {v.begin(),v.begin()+middle};
    vector<int> right = {v.begin()+middle,v.end()};    

    vector<int>leftSorted =  mergeSort(left);
    vector<int>rightSorted  = mergeSort(right);

    return merge(leftSorted,rightSorted);            // need to place in actual vector..
}




int main(){

    int n = 6 ;
    vector<int> v = {6,4,2,3,8,5};

    vector<int> afterSorting = mergeSort( v);


    for(int i=0; i<afterSorting.size(); i++)
        cout << afterSorting[i] << " ";

    return 0;
}