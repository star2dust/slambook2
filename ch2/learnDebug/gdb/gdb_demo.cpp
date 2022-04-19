#include <iostream>
using namespace std;

int main(){
	int n = 100;
	int sum = 0;

	for (int i=0; i<n; i++){
		sum += i;
	}

	cout << "Sum = " << sum << endl;
	cout << "The program is over." << endl;

	return 0;
}
