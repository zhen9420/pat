#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int tt;
	std::cin >> tt;
	int i;
	std::string str;
	std::unordered_set<std::string> data;
	for (int t = 0; t < tt; ++t) {
		std::cin >> i;
		if (i == 1) {
			std::cin >> str;
			continue;
		}

		for (int x = 0; x < i; ++x) {
			std::cin >> str;
			data.emplace(std::move(str));
		}
	}

	decltype(data) qd;
	std::vector<std::string> res;
	std::cin >> tt;
	for (int t = 0; t < tt; ++t) {
		std::cin >> str;
		auto iterA = data.find(str);
		auto iterB = qd.find(str);
		if (iterA == data.end() && iterB == qd.end()) {
			qd.emplace(str);
			res.emplace_back(std::move(str));
		}
	}

	if (res.empty()) {
		std::cout << "No one is handsome";
		return 0;
	}

	for (int t = 0; t < res.size(); ++t) {
		std::cout << res[t];
		if (t != res.size() - 1)
			std::cout << ' ';
	}

	return 0;
}

