#include <iostream>
using namespace std;

// �����˷������ĺ��� 
int production(int num1, int num2);

int main() {
	int a = 0, b = 0;
	cout << "please input two number:" << endl;
	cin >> a >> b ;
	cout << "the result of two number is:" << production(a, b) << endl;
	return 0;
}

// ������֮�� 
int production(int elem1, int elem2) {
	return elem1 * elem2;
}

