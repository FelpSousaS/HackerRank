#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*Description:
Draw a staircase using the symbols # and space.
Write a program that prints a staircase of size.

Ex : 
	- Input:
		n = 4

	- Output:
		     #
		    ##
		   ###
		  ####

 */

void staircase(int n) {
    
    int i = 0, nvezes = 0, aux = n-1; 
 
    while(nvezes < n){
        while(n > i){
            if(i<aux) cout << " ";
            else cout << "#" ;        
            i++;
        }
        cout << endl;
        nvezes++;
        aux--;
        i=0;
    }
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    staircase(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}



