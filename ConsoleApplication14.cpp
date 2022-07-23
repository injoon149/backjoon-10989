#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);

	cout.tie(NULL);

	ios::sync_with_stdio(false);
	int a = 0;
	cin >> a;
	int num = 0;
	int array[10001] = { 0, };
	for (int i = 0; i < a; i++)
	{
		cin >> num;
		array[num]++;
	}
	for (int i = 0; i < 10001;)
	{
		if (array[i] == 0)
		{
			i++;
			continue;
		}
		else {
			cout << i << '\n';
			array[i]--;
		}
	}

	return 0;



}