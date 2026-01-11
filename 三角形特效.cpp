#include<iostream>
using namespace std;
int main() {
	int n;
	string s;
	cout << "please set size" << endl;
	cin >> n;
	cout << "please set output" << endl;
	cin >> s;
	cout << "Prompt:the programs output is auto appended space" << endl;
	if (cin.fail()) {
		cout << "Waring:the program cannot server string as int";
	} else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				cout << s << " ";
			}
			cout << endl;
		}
		cout << "shape generated sucsessful as size " << n << " output " << s << endl;
	}
	// 暂停程序，等待用户按任意键继续（窗口不会自动关闭）
	system("pause");
	return 0;
}