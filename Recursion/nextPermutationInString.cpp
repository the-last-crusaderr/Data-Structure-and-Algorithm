/* next_permutation checks the lexicographical order,if the current value is greater than the last order ....then it returns 1.
    Otherwise....1
*/


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    string s = "sumit";
    sort(s.begin(),s.end());
    do{
        cout << s <<  " " << next_permutation(s.begin(),s.end()) << endl;

    }while( next_permutation(s.begin(),s.end()) );

    return 0;

}