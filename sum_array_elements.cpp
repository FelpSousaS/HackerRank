#include <iostream>
#include <vector>

/*Description:
	Receive an array and return the sum of all elements
	in the array.
*/

int sum_array(vector<int> arr){
	int cont = 0;
	
	for(int i = 0; i < arr.size(); i++){
		cont += arr[i];
	}
	
	return cont;
}


int main(){
	vector<int> arr;	
	int number_elements, value;
	cin >> number_elements;
	
	
	for(int i = 0; i < number_elements; i++){
		cin >> value;
		arr.push_back(value);
	}

	cout << sum_array(arr) << endl;

	return 0;

}