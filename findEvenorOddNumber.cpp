// Find Even or Odd number

#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter a number\n";   // Taking a number as input
	cin>>num;
	cout<< (num%2==0 ? "It's an even number\n" : "It's an odd number\n");  // Checking whether the number is odd or even

	return 0;
}