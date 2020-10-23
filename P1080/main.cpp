#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int>, pair<int, int>);
int main(void)
{
	int n;
	unsigned long long max = 0, product = 1;
	cin >> n;
	pair <int, int> *data = new pair<int ,int>[++n];
	for (int i = 0; i < n; i++)
	{
		cin >> data[i].first;
		cin >> data[i].second;
	}
	sort(data + 1, data + n, cmp);
	for (int i = 1; i < n; i++)
	{
		product *= data[i - 1].first;
		if (max < product / data[i].second)
			max = product / data[i].second;
	}
	cout << max;
	return 0;
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.first * a.second < b.first * b.second;
}
