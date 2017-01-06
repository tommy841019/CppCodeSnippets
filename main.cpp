#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
    
    

    return 0;
}



class Solution {
public:
    
    // E 461. Hamming Distance
    int hammingDistance(int x, int y) {
        int z=x^y, count=0;
        while(z>0){
            if(z%2==1) count++; // z%2 to get last digit
            z/=2;
        }
        return count;

        // or return __builtin_popcount(x^y);
    }
    
    // E 412. Fizz Buzz
    vector<string> fizzBuzz(int n) {
        
    }
};

