#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int k;
	cin >> k;

	string s;
	cin >> s;

	const auto& l = s.length();

	for (auto i = 0; i < l; ++i) {
		if (0 == i % k) {
			cout << s[i];
		}
	}

	return 0;
}