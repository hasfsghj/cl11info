#include <bits/stdc++.h>
using namespace std;
typedef vector <int> IntVector;
IntVector A, B, AUB, AnB, A_B, B_A, difsim;
int n, m;
bool gasit;

int main() {
	cout << "n = ";
	cin >> n; 
	cout << "m = ";
	cin >> m;

	cout << "Scriem elementele multimii A: " << "\n";
	for (int i = 0; i < n; i++) { 
		int x;
		cin >> x;
		A.push_back(x);
	}
	cout << "Scriem elementele multimii B: " << "\n";
	for (int i = 0; i < m; i++) { 
		int x;
		cin >> x;
		B.push_back(x);
	}
	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}
	cout << "\n";
	for (int i = 0; i < m; i++) {
		cout << B[i] << " ";
	}


	cout << "\n";
	for (int i = 0; i < A.size(); i++) {
		AUB.push_back(A[i]);
	}
	for (int i = 0; i <= A.size(); i++) {
		gasit = 0;
		for (int j = 0; j < AUB.size(); j++) {
			if (AUB[j] == B[i]) {
				gasit = 1;
			}
		}
		if (gasit == 0) {
			AUB.push_back(B[i]); 
		}
	}
	cout<<"reuniunea multimilor: ";
	for (int i = 0; i < AUB.size(); i++) {
		cout << AUB[i] << " ";
	}


	cout << "\n";
	for (int i = 0; i < A.size(); i++) {
		for (int j = 0; j < B.size(); j++) {
			if (A[i] == B[j]) {
				AnB.push_back(A[i]);
			}
		}
	}

	cout<<"asemanarile multimilor: ";
	for (int i = 0; i < AnB.size(); i++) {
		cout << AnB[i] << " ";
	}
}
