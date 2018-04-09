#include <iostream>
#include <vector>
using namespace std;

void main() {
	int num;
    vector<int> ivec;
	
	while (cin >> num) {
		ivec.push_back(num);

	}




	
	cout << endl;
	cout << "ordered array" << endl;
	for (int i = 0; i < ivec.size()-1; i++) {
		for (int j = 0; j < ivec.size()-1; j++) {
			if (ivec[j] < ivec[j+1]) {
				int a = ivec[j+1];
				ivec[j+1] = ivec[j];
				ivec[j] = a;
			}
			

		}
		

	}
	for (auto i : ivec) {
		cout << i << " ";

	}
	system("pause");

}