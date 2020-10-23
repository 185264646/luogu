#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
struct data{
	int index;
	int time;
};

bool cmp(data a, data b)
{
	return a.time - b.time < 0 ? 1 : 0;
}
void print_ans(vector<data>);
int main(void)
{
	int i;
	cin >> i;
	vector<data> input;
	for(int j=0; j<i; j++)
	{
		data temp;
		temp.index = j + 1;
		cin >> temp.time;
		input.push_back(temp);
	}
	sort(input.begin(), input.end(), cmp);
	print_ans(input);
	return 0;
}


void print_ans(vector<data> ans)
{
	float average=0.0;
	for(vector<data>::iterator it = ans.begin(); it != ans.end(); it++)
	{
		cout << it->index <<" ";
		average += it->time * distance(it, ans.end() - 1);
	}
	printf("\n%.2f\n", average / ans.size());
	return;
}
