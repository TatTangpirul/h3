#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,song;
    cin>>n;
    deque<int> dq;
    for (int i=0;i<n;i++){
        cin>>song;
        dq.push_back(song);
    }
    cin>>n;
    for (int i=0;i<n;i++){
        char c;
        cin>>c>>song;
        if (c=='B') dq.push_back(song);
        else dq.push_front(song);
    }
    while (!(dq.empty())){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
}
