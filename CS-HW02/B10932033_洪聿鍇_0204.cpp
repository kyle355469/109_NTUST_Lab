#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	int n;
	while (cin >> n) {
		string* name = new string[n];
		string* salary = new string[n];
		string* award = new string[n];
		for (int i = 0; i < n; i++) {
			cin >> name[i] >> salary[i] >> award[i];
		}
		int nameMax = name[0].size();
		int salaryMax = salary[0].size();
		int awardMax = award[0].size();
		for (int i = 1; i < n; i++) {
			if (name[i].size() > nameMax) {
				nameMax = name[i].size();
			}
			if (salary[i].size() > salaryMax) {
				salaryMax = salary[i].size();
			}
			if (award[i].size() > awardMax) {
				awardMax = award[i].size();
			}
		}
		for (int i = 0; i < n; i++) {
			cout << setw(nameMax) << name[i]  << "|" << setw(salaryMax + 2) << salary[i] << "|" << setw(awardMax + 2) << award[i] << endl;
		}

	}
	
}
