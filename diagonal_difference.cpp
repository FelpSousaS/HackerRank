#include <bits/stdc++.h>
#include <math.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*Description:
Given a square matrix, calculate the absolute difference between 
the sums of its diagonals.

Return -> int: the absolute diagonal difference.  

EX:

	Input -> |1 2 3|
		 |4 5 6|
		 |9 8 9| 

	Output -> 2
 
 */

int diagonalDifference(vector<vector<int>> arr) {
    int diag1 = 0, diag2 = 0, result;
    
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr.size(); j++){
           if(i == j) diag1 += arr[i][j];
           if(i+j == (arr.size()-1)) diag2 += arr[i][j];
        }
    }
    
    result = diag1 - diag2;
    
    if((result) < 0) return abs(result);
    else return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<vector<int>> arr(n);

    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < n; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }

    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
