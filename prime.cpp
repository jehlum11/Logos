//
// Created by JP on 2019-03-25.
//

/*You are given an integer N. You need to print the series of all prime numbers till N.

Input Format

The first and only line of the input contains a single integer N denoting the number till where you need to find the series of prime number.

Output Format

Print the desired output in single line separated by spaces.

Constraints

1<=N<=1000*/

#include <iostream>
using namespace std;

int main()
{
    int N, i;
    cout << "Enter the limit : " << endl;
    cin >> N;
    for ( int i ; i <= N ; i++)
    {
        if ( i % 2 != 0)
            cout << i << " ";
    }
    return 0;
}