// C++ code to implement above approach
#include <bits/stdc++.h>
using namespace std;

// Divide number into 2 even parts
bool divNum(int n)
{
	return (n <= 2 ? false : (n % 2 == 0 ? true : false));
	//if n is smaller than 2 then can't be determined hence bool is false
	//if n is greater than 2 then we will check whether it is a even no. or odd no. since all the even numbers coming after 2 can be divide into two distict even numbers
	//therefore if it is even, bool will be true otherwise false
}

// Driven Program
int main()
{
	int n = 8;
	cout << (divNum(n) ? "YES" : "NO")//if divNum function is true then we will print yes else no
		<< endl;
	return 0;
}
