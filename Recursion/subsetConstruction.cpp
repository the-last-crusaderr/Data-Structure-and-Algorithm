#include <iostream>
#include <vector>
#include <set>
using namespace std;


vector <int> subset;
int n = 6 ;

void search(int k){
    //processing subset...
    if (k==n){
        for(int i=0;i<subset.size();i++) {
            cout << subset[i] << " ";
        } 
        cout << endl;
    }
    else{
    search(k+1);
    subset.push_back(k);
    search(k+1);
    subset.pop_back();
    }
}

int main(){

    search(2);

/*
    for(int i=0; i < subset.size(); i++){
        cout << subset[i] << endl;
    }
*/

    return 0;
}