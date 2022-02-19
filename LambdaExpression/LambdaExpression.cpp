#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class print
{
public:
	void operator() (int element)
	{
		cout << element << endl;
	}
};

int main()
{
	vector<int> v = {1,2,3,4,5};
	for_each(v.begin(), v.end(), print());
	system("pause");
	return 0;
}
