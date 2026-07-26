#include <bits/stdc++.h>

using namespace std;

void printSubsets(vector<int> arr) {
    int n = arr.size();
    
  
    int totalSubsets = (1 << n); 

  
    for (int i = 0; i < totalSubsets; i++) {
        cout << "{ ";
        
      
        for (int j = 0; j < n; j++) {
            
            if ((i & (1 << j)) != 0) {
                cout << arr[j] << " ";
            }
        }
        
        cout << "}" << endl;
    }
}

