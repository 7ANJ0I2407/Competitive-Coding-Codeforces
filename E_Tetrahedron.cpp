#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
const int SIZE = 4;

// vector<vector<long long>> multiply(const vector<vector<long long>> &A, const vector<vector<long long>> &B)
// {
//     vector<vector<long long>> C(SIZE, vector<long long>(SIZE, 0));
//     for (int i = 0; i < SIZE; i++)
//     {
//         for (int j = 0; j < SIZE; j++)
//         {
//             for (int k = 0; k < SIZE; k++)
//             {
//                 C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
//             }
//         }
//     }
//     return C;
// }

// vector<vector<long long>> matrixExpo(vector<vector<long long>> A, int n)
// {
//     vector<vector<long long>> res(SIZE, vector<long long>(SIZE, 0));
//     for (int i = 0; i < SIZE; i++)
//         res[i][i] = 1; // Identity matrix

//     while (n > 0)
//     {
//         if (n % 2)
//             res = multiply(res, A);
//         A = multiply(A, A);
//         n /= 2;
//     }
//     return res;
// }

//lets define a state like dp[i][j] = number of ways to reach j th node from 0 to ith step
//so we can define a transition like dp[i][j] = dp[i-1][0] + dp[i-1][1] + dp[i-1][2] + dp[i-1][3] - dp[i-1][j]

void f() {
    int n;
    cin >> n;

    long long d0 = 1, d1 = 0, d2 = 0, d3 = 0;

    for (int i = 1; i <= n; i++) {
        long long sum = (d0 + d1 + d2 + d3) % MOD;
        long long new_d0 = (sum - d0 + MOD) % MOD;
        long long new_d1 = (sum - d1 + MOD) % MOD;
        long long new_d2 = (sum - d2 + MOD) % MOD;
        long long new_d3 = (sum - d3 + MOD) % MOD;

        d0 = new_d0;
        d1 = new_d1;
        d2 = new_d2;
        d3 = new_d3;
    }

    cout << d0 << endl;
}

// n can be upto 1e7
// so we can we use dp ?
//


int main()
{
    // int n;
    // cin >> n;

    // vector<vector<long long>> A = {
    //     {0, 1, 1, 1},
    //     {1, 0, 1, 1},
    //     {1, 1, 0, 1},
    //     {1, 1, 1, 0}};

    // vector<vector<long long>> An = matrixExpo(A, n);

    // cout << An[3][3] << endl;
    f();

    return 0;
}
