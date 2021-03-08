#include <iostream>
#include <cstring>
using namespace std;
struct BigInt {
	string num;
};
BigInt Add(BigInt &lhs, BigInt& rhs);
int main() {
	int n;
	cin >> n;
	BigInt a, b;
	while (n--) {
		cin >> a.num >> b.num;
		BigInt result = Add(a, b);
		cout << result.num << endl;
	}
	
}
BigInt Add(BigInt& lhs, BigInt& rhs) {
	BigInt ans;
	for (int i = 0; i < lhs.num.size(); i++) {
		if (lhs.num[i] < '0' || lhs.num[i] > '9') {
			ans.num = "Not a valid number, please try again.";
			return ans;
		}
	}
	for (int i = 0; i < rhs.num.size(); i++) {
		if (rhs.num[i] < '0' || rhs.num[i] > '9') {
			ans.num = "Not a valid number, please try again.";
			return ans;
		}
	}
	if (lhs.num.size() > 1) {
		for (int i = 0; i < lhs.num.size() / 2; i++) {
			swap(lhs.num[i], lhs.num[lhs.num.size() - 1 - i]);
		}
	}
	if (rhs.num.size() > 1) {
		for (int i = 0; i < rhs.num.size() / 2; i++) {
			swap(rhs.num[i], rhs.num[rhs.num.size() - 1 - i]);
		}
	}
		
	if (lhs.num.size() > rhs.num.size()) {
		ans.num = lhs.num;
		for (int i = 0; i < ans.num.size(); i++) {
			if (i < rhs.num.size()) {
				ans.num[i] += rhs.num[i] - '0';
			}
			if (ans.num[i] > '9' && i != ans.num.size() - 1) {
				ans.num[i] -= 10;
				ans.num[i + 1] += 1;
			}
			else if (ans.num[i] > '9' && i == ans.num.size() - 1) {
				ans.num[i] -= 10;
				ans.num.append("1");
			}
		}
	}
	else if (rhs.num.size() > lhs.num.size()) {
		ans.num = rhs.num;
		for (int i = 0; i < ans.num.size(); i++) {
			if (i < lhs.num.size()) {
				ans.num[i] += lhs.num[i] - '0';
			}
			if (ans.num[i] > '9' && i != ans.num.size() - 1) {
				ans.num[i] -= 10;
				ans.num[i + 1] += 1;
			}
			else if (ans.num[i] > '9' && i == ans.num.size() - 1) {
				ans.num[i] -= 10;
				ans.num.append("1");
			}
		}
	}
	else {
		ans.num = rhs.num;
		for (int i = 0; i < ans.num.size(); i++) {
			if (i < lhs.num.size()) {
				ans.num[i] += lhs.num[i] - '0';
			}
			if (ans.num[i] > '9' && i != ans.num.size() - 1) {
				ans.num[i] -= 10;
				ans.num[i + 1] += 1;
			}
			else if(ans.num[i] > '9' && i == ans.num.size() - 1){
				ans.num[i] -= 10;
				ans.num.append("1");
			}
		}
	}
	for (int i = 0; i < ans.num.size() / 2; i++) {
		swap(ans.num[i], ans.num[ans.num.size() - 1 - i]);
	}
	return ans;
}