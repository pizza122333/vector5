#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> v;
    string str;

    // 문자열 5개 입력
    for (int i = 0; i < 5; i++) {
        cout << "문자열을 입력하세요: ";
        cin >> str;
        v.push_back(str);
    }

    // 사전 순(오름차순) 정렬
    sort(v.begin(), v.end());

    // 출력
    cout << "사전에서 나오는 순서" << endl;
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}
