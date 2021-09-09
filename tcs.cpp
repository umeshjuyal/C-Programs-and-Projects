// Program to print the series 2, 1, 4, 3, 6, 5, …. up to N terms
// Given a number N, the task is to print the below pattern upto N terms: 
 // Input
// 2, 1, 4, 3, 6, 5, …. N terms 

// Output: 
// 2 1 4 3 6 5 8 7 10 9


// C++ program to print the series

#include <iostream>
using namespace std;

// Function to print the series
void printPattern(int N)
{
for (int i = 1; i <= N; i++) {
// Find and print the ith term
		cout <<" "<<((i % 2 == 0) ? (i - 1) : (i + 1));
	}
}
// Driver code
int main()
{
// Get the value of N
	int N = 10;

	// Print the Series
	printPattern(N);

	return 0;
}
