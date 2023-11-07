#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void spa(deque<int>& deqma, int noe, int san);

int main() {
    int num_of_query;
    cin >> num_of_query;

    for (int q = 0; q < num_of_query; q++) {
        int num_of_element, sub_arr_n;
        cin >> num_of_element >> sub_arr_n;
        deque<int> dq;

        for (int i = 0; i < num_of_element; i++) {
            int m;
            cin >> m;
            dq.push_back(m);
        }
        spa(dq, num_of_element, sub_arr_n);
        for (int i = 0; i < num_of_element; i++) {
            //int m;
            //cin >> m;
            dq.pop_back();
        }

        //spa(dq, num_of_element, sub_arr_n);
    }
}

void spa(deque<int>& deqma, int noe, int san) {
    int m = noe - san + 1;
    for (int i = 0; i < m; i++) {
        auto it = deqma.begin();
        cout << *max_element(it + i, it + i + san) << ' ';
    }
    cout << endl;
}
    
