#include <iostream>
#include <vector>
using namespace std;

int n = 5;

int sum_arr(vector<int>& vec)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += vec[i];
	}

	return sum;
}

int main()
{
	vector<int> vec;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		vec.push_back(x);
	}

	cout << sum_arr(vec);
}