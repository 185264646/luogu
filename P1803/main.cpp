#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector<pair<int, int> > time;
	for(int i=0; i<n; i++)
	{
		pair<int, int> temp;
		cin >> temp.second;
		cin >> temp.first;
		time.push_back(temp);
	}
	sort(time.begin(), time.end());
	n = 1;
	for(vector<pair<int, int> >::iterator it = time.begin(); it != time.end(); it++)
	{
		static int right = it -> first;
		if(right <= it->second)
		{
			n++;
			right = it->first;
		}
	}
	cout << n;
	return 0;
}
