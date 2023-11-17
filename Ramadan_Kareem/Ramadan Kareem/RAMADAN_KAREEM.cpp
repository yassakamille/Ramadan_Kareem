#include <iostream> 
#include <windows.h> 
#include <string>
#include<cmath>

using namespace std;
void fun(int n) {
	for (int i = 0; i < 2 * n; i++) {

		cout << "_";

	}

	cout << endl<<"\n";
	for (int i = 1; i <= n; i++) {
		for (int j = n; j >= 1 + i; j--) {
			cout << " ";
		}
		for (int z = 1; z <= i; z++) {
			cout << " *";

		}
		cout << "\n";

	}

	for (int i = n; i >= 1; i--) {
		for (int j = n; j >= 1 + i; j--) {
			cout << " ";
		}
		for (int z = i; z >= 1; z--) {
			cout << " *";

		}
		cout << "\n";

	}
	for (int i = 1; i <= n / 2; i++) {
		for (int j = n; j >= 1 + i; j--) {
			cout << " ";
		}
		for (int z = 1; z <= i; z++) {
			cout << " *";
		}
		cout << "\n";
	}
	for (int i = 0; i < 2 * n; i++) {

		cout << "_";
	}
	cout << endl;
	for (int t = 0; t < 0.5 * n; t++) {
		cout << " ";
	}
	cout << "|RAMADAN_KAREEM|\n" << endl;;
	cin.get();
}
int check(int a) {
	//int x;
	char q;
		//a = rand();
	cout << a << endl;
			while (a <= 15 && a >= 5) {
		if (a <= 15 && a >= 5)

			fun(a);
		break;
	}

	if (a > 15 || a < 5) {

		cout << " invalid number\n" << " try again :  ";
		cin >> a;
		check(a);
		//cout << "\n";
		
	};
	return 0;
}
void con(char q, int v) {


	while (q == 'y' || q == 'n') {

		if (q == 'y') {
			cout << "Enter the number of stars in range ( 5 to 15 ):\n";
			cin >> v;
			check(v);

		}
		if (q == 'n') {

			break;
		}
		break;
	}
	cout << " To Exit press 'n' :\n";
	cout << " To continue press 'y' :\n";
	cin >> q;
	while (q != 'n') {
		{con(q, v); }
		break;
	}
	
}
int main() {
	system("title Ramadan_Kareem");
	int n;
	char q;
	cout << " Enter the number of stars in range ( 5 to 15 ):\n";
	cin >> n;
	check(n);
	cout << " Do you want to continue :  (for yes type 'y' for no type 'n')\n";
	cin >> q;
	con(q,n);
	system("pause");
	return 0;
}
