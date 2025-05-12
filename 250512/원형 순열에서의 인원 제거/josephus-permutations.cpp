#include <iostream>
#include <queue>
using namespace std;

int N, K;

int main() {
    cin >> N >> K;

    queue<int> q;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    vector<int> result;

    while (!q.empty()) {
        for (int i = 0; i < K - 1; i++) {
            int temp = q.front();
            q.pop();
            q.push(temp);
        }

        result.push_back(q.front());
        q.pop();
    }

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
