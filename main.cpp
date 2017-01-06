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
        vector<string> v; // should be slower, due to resize vector when push_back
        for(int i=1; i<=n; ++i){
            if(i%15==0) v.push_back("FizzBuzz");
            else if(i%5==0) v.push_back("Buzz");
            else if(i%3==0) v.push_back("Fizz");
            else v.push_back(to_string(i));
        }
        return v;
    }
    vector<string> fizzBuzz_v2(int n) {
        vector<string> v(n);
        for(int i=1; i<=n; ++i){
            if(i%15==0) v[i-1]="FizzBuzz";
            else if(i%5==0) v[i-1]="Buzz";
            else if(i%3==0) v[i-1]="Fizz";
            else v[i-1]=to_string(i);
        }
        return v;
    }
    
    
    
    // E 344. Reverse String
    string reverseString(string s) {
        return string(s.rbegin(), s.rend());
    }
    string reverseStringv2(string s) {
        int i=0, j=s.size()-1;
        while(i<j){
            swap(s[i++], s[j--]);
        }
        return s;
    }
};

