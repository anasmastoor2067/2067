//#include <iostream>
//using namespace std;
//int main() {
//	int s;
//	cout << "Enter size:";
//	cin >> s;
//	int** a = new int* [s];
//	for (int i = 0; i < s; i++) {
//		a[i] = new int;
//	}
//	cout << "Input:" << endl;
//	for (int i = 0; i < s; i++) {
//		for (int j = 0; j < s; j++) {
//			cin >> a[i][j];
//		}
//	}
//	cout << "Output:" << endl;
//	for (int i = 0; i < s; i++) {
//		cout << endl;
//		for (int j = 0; j < s; j++) {
//			cout << a[i][j];
//		}
//	}
//	int sm = 0;
//	cout << "Sum:" << endl;
//	for (int i = 0; i < s; i++) {
//		for (int j = 0; j < s; j++) {
//			sm += a[i][j];
//		}
//	}
//	cout << sm << endl;
//	cout << "Row Output:" << endl;
//	for (int i = 0; i < s; i++) {
//		cout << endl;
//		for (int j = 0; j < s; j++) {
//			cout << a[i][j];
//		}
//	}
//	cout << "Column Output:" << endl;
//	for (int i = 0; i < s; i++) {
//		cout << endl;
//		for (int j = 0; j < s; j++) {
//			cout << a[j][i];
//		}
//	}
//	int** t = new int* [s];
//	for (int i = 0; i < s; i++) {
//		t[i] = new int;
//	}
//	for (int i = 0; i < s; i++) {
//		for (int j = 0; j < s; j++) {
//			t[j][i] = a[i][j];
//		}
//	}
//	cout << "Transpose Output:" << endl;
//	for (int i = 0; i < s; i++) {
//		cout << endl;
//		for (int j = 0; j < s; j++) {
//			cout << t[i][j];
//		}
//	}
//}