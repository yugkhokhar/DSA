// CPP program to find LCS of two arrays with
// k changes allowed in first array.
#include <bits/stdc++.h>
using namespace std;
#define MAX 10

// Return LCS with at most k changes allowed.
int lcs(int dp[MAX][MAX][MAX], int arr1[], int n,
					int arr2[], int m, int k)
{
	// If at most changes is less than 0.
	if (k < 0)
		return -1e7;

	// If any of two array is over.
	if (n < 0 || m < 0)
		return 0;

	// Making a reference variable to dp[n][m][k]
	int& ans = dp[n][m][k];

	// If value is already calculated, return
	// that value.
	if (ans != -1)
		return ans;

	// calculating LCS with no changes made.
	ans = max(lcs(dp, arr1, n - 1, arr2, m, k),
			lcs(dp, arr1, n, arr2, m - 1, k));

	// calculating LCS when array element are same.
	if (arr1[n-1] == arr2[m-1])
		ans = max(ans, 1 + lcs(dp, arr1, n - 1,
								arr2, m - 1, k));

	// calculating LCS with changes made.
	ans = max(ans, 1 + lcs(dp, arr1, n - 1,
						arr2, m - 1, k - 1));

	return ans;
}

// Driven Program
int main()
{
	int k = 1;
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 5, 3, 1, 4, 2 };
	int n = sizeof(arr1) / sizeof(arr1[0]);
	int m = sizeof(arr2) / sizeof(arr2[0]);

	int dp[MAX][MAX][MAX];
	memset(dp, -1, sizeof(dp));

	cout << lcs(dp, arr1, n, arr2, m, k) << endl;

	return 0;
}
