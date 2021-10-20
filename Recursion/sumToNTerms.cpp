#include<iostream>
using namespace std;



int sum(int n){
    if (n==0)
        return 0;
    return sum(n-1) + n;                        // 1.think that function already solved the subproblem
                                                // Write base case after that..

}




int main(){
    int n;
    cin >> n;
    cout << sum(n) << endl;    
    return 0;

}