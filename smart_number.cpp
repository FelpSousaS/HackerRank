#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*Description: 
A number is called a smart number if it has an odd number of factors. 
Given some numbers, find whether they are smart numbers or not.
	-> Input Format: 
		The first line of the input contains n, the number of test cases.
		The next n lines contain one integer each.

	->Output Format:
		The output should consist of n lines. In the i line print YES if the  
		i integer has an odd number of factors, else print NO.*/

bool is_smart_number(int num) {
    int val = (int) sqrt(num);
    if((num % 2 == 1 && (val*val == num) || (val*val) == num))
        return true;
    return false;
}

int main() {
    
    int test_cases;
    cin >> test_cases;
    int num;
    for(int i = 0; i < test_cases; i++) {
        cin >> num;
        bool ans = is_smart_number(num);
        if(ans) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}



