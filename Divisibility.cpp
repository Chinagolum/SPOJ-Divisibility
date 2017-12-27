#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int t=0, n=0, x = 0, y=0;
	cin >> t;
	cin.ignore();
	for (int i1 = 0;i1 < t;i1++)
	{
		cin >> n;
		cin.ignore();
		cin >> x;
		cin.ignore();
		cin >> y;
		cin.ignore();
		
		for (int i2 = 2; i2 < n; i2++)
		{
			
			if(i2%x==0)
			{
				if (i2%y != 0) 
				{
					cout << i2 << " ";
				}		
			}
		}
		cout << endl;
	}
	return 0;
}
