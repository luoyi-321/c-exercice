#include <iostream>
#include <string>    
#include <algorithm>
#include <iterator>
using namespace std;
template<class T>
void ShowArray(string name, T* arr, int n)
{
	cout << name;
	copy(arr, arr + n, ostream_iterator<T>(cout, " "));
}
int main()
{
	const int N = 3;     int count = 0;
	int a[N] = { 1,2,3 };   int b[N] = { 3,2,1 };
	for (; ; )
	{
		count++;
		
		if (!next_permutation(a, a + N) |
			!prev_permutation(b, b + N))  break;
	}
	cout << "????: " << count << endl;
	ShowArray("a[]: ", a, N);		cout << endl;
	ShowArray("b[]: ", b, N);		cout << endl;
	prev_permutation(a, a + N);
	next_permutation(b, b + N);
	ShowArray("a[]: ", a, N);		cout << endl;
	ShowArray("b[]: ", b, N);		cout << endl;
	system("pause");
}

