#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    // taking and storing inputs from users
    int games, cows;
    cin >> games >> cows;
    
    
    vector<vector<int>> result;
    
    for(int i = 0; i < games; i++){
        vector<int> temp;
        for(int j=0;j< cows; j++){
            int standing;
            cin >> standing;
            temp.push_back(standing);
        }
        result.push_back(temp);
    }
    
    /* fragements to test the working of vector
    for(int i=0;i< result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    */
    
    // transforming it into required outputs
    
    vector<pair<int,int>> consistent_pairs;
    
    for(int i=1;i <= cows;i++){
        for(int j=1;j<=cows;j++){
          //  cout << "i=" << i << " j= " << j << endl; 
          
          if (i == j)
            continue;
             
            bool consistent = 1;
            int first = i;
            int second = j;
            
            
            for(int k=0;k<result.size();k++){
                
                int firstIndex = -1;
                int secondIndex = -1;
                
                for(int l=0;l<result[k].size();l++){
                               // cout << "k=" << k << " l= " << l << endl; 
                    if(result[k][l] == first )  
                        firstIndex = l;
                    if(result[k][l] == second)
                        secondIndex = l;
                }
                
                if(firstIndex < secondIndex)
                    continue;
                else{
                    // handle not a pair case
                   // cout << "I am here for i,j,k,l resp" << i << " " << j << " " << firstIndex << " " << secondIndex  << endl;
                    consistent = 0;
                    break;
                }
                
                
            }
            
            if(consistent){
                pair<int,int> foundOne;
                foundOne.first = first;
                foundOne.second = second;
                consistent_pairs.push_back(foundOne);
            }
            
            
        }
    }

  /*
    for(int i=0;i<consistent_pairs.size();i++){
        cout << consistent_pairs[i].first << " " << consistent_pairs[i].second;
        cout << endl;
    }
*/

  cout << consistent_pairs.size();
  

    return 0;
}
