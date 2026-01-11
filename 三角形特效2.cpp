#include <iostream>

using namespace std;
int main() {
	int n;
	string s1, s2;
	cout << "please enter the size: ";
	cin >> n;
	cout << endl << "Prompt: the output SPACE will auto appended in the program.";
	cout << endl << "please enter output layout top: ";
	cin >> s1;
	cout << endl << "please enter output layout bottom: ";
	cin >> s2;
	cout << endl;
	system("cls");
	if (cin.fail()) {
		cout << "Error: Input error!";
		system("pause");
	} else {
		for (int i = 0; i < n; i++) {
			for (int x = 0; x < i; x++) {
				cout << s2 << " ";
			}
			for (int y = 0; y < n - i; y++) {
				cout << s1 << " ";
			}
			cout << endl;
		}
		// 修正：s2后添加缺失的<<运算符，同时修正拼写错误sucsessful->successful
		cout << "generated successful! with data output outlay bottom: " << s1 << " layout top: " << s2 << " shape size: " << n << endl;
		system("pause");
	}
	return 0;
}