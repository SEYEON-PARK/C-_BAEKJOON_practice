/*
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.

1부터 n까지 합을 출력한다.
*/

#include <iostream>
using namespace std;

int main(void)
{
    int n, sum=0;
    cin >> n;
    
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    
    cout << sum;
    
    return 0;
}
