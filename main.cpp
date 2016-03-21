#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int T, temp;
    cin >> T;
    vector <int> v;
    priority_queue <int> pq;
    for (int i = 0; i < T; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    cout << "-1" << endl << "-1" << endl;
    for (int i = 0; i < 3; i++)
    {
        pq.push(v[i]);
    }
    for (int i = 3; i < T; i++)
    {
        long long int a = pq.top();
        pq.pop();
        long long int b = pq.top();
        pq.pop();
        long long int c = pq.top();
        cout << a*b*c << endl;
        if ( c < v[i] )
        {
            pq.pop();
            pq.push(v[i]);
        }
        pq.push(b);
        pq.push(a);
    }
    long long int a = pq.top();
    pq.pop();
    long long int b = pq.top();
    pq.pop();
    cout << a*b*pq.top() << endl;
    system ("pause");
    return 0;
}
