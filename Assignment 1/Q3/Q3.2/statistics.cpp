#include <iostream>

using namespace std; 

//Calculate mean, mainimum and maximum 
int main() {  

    int N;   

    cin >> N; 
 
    int maxNum, minNum = N;  
    int totalSum = 0; 

    
    for (int i = 0; i < N; i++) {

        int otherNum; 
        cin >> otherNum;   

        totalSum += otherNum;  

        if(otherNum < minNum) {
            minNum = otherNum; 
        } else { 
            maxNum = otherNum; 
        }
    }  

      cout << "Range: " << maxNum - minNum << endl; 
      cout << "Min Value: " << minNum << endl; 
      cout << "Max Value: " << maxNum << endl; 
      cout << "Mean: " << (double) totalSum/ N << endl;  

    return 0; 
}