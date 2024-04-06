#include <iostream>
#include <vector>

using namespace std;

bool sorting(vector<int>& v) {
    if (v.size() == 1)
        return true;
    
    vector<int> temp(v.begin() + 1, v.end());
    return (v[0] <= v[1] && sorting(temp));
}

int main() {
    int n;
    vector<int> nums;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) {
        int ni;
        cin >> ni;
        nums.push_back(ni);
    }

    bool r = sorting(nums);
    if (r)
        cout << "The array is sorted." << endl;
    else
        cout << "The array is not sorted." << endl;

    return 0;
}


    
    
  














