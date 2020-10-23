#include <iostream>
#include <vector>

int main(void)
{
	int n, cnt = 0;
	cin >> n;
	int arr[] = new int[n];
	for(int i=0; i<n; i++)
		cout >> arr[i];
	for(int i=0, j=0; i<n;)
	{
		while(*(j++)--);
		cnt++;
		while(!*i)
			i++;
	}
	cout << cnt;
	return 0;
}


