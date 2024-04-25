#include <iostream>
#include <string>
#include <numeric>
#include <utility>

static auto testcase(std::string s) {
	auto color_balance = std::accumulate(s.begin(), s.end(), 0, [](int b, char c) {
			return b + (c == 'R' ? 1 : -1);
		});
	if(color_balance != 0)
		return false;
	int adjacent_identical_color_count = 0;
	s += s[0];
	auto p = s.begin();
	auto q = p + 1;
	while(q != s.end())
		adjacent_identical_color_count += *p++ == *q++;
	return adjacent_identical_color_count < 3;
}

static void testcase() {
	std::string s;
	std::cin >> s;
	std::cout << (testcase(std::move(s)) ? "yes\n" : "no\n");
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int T;
	std::cin >> T;
	while(T--)
		testcase();
}
