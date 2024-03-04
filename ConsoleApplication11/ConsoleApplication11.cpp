#include <iostream>
using namespace std;
int main()
{
	int a = 1, b = 1,soluong, tong;
	cout << "Nhap so luong dau day Fibonacci: ";
	cin >> soluong;
	cout << "1 1";
	for (int i = 1; i <= soluong - 2; i++) {
		tong = a + b;
		cout << tong << " ";
		a = b;
		b = tong;

	}
	return 0;
}