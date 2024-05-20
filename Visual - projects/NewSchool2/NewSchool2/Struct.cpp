#include <iostream>
#include <math.h>
using namespace std;

//struct rectangle {
//
//    int lenA, lenB;
//
//    void set()
//    {
//        cin >> lenA >> lenB;
//    }
//    void get()
//    {
//        cout << lenA * lenA + lenB * lenB;
//    }
//};

struct vector {
    int len = 0;
    int* arr = new int[len];
    vector(int n) {         //default
        len = n;
        arr = new int[len];
        for (int i = 0; i < n; i++)
            arr[i] = 0;
    }
    vector(int n, int val) {        // with val
        len = n;
        arr = new int[len];
        for (int i = 0; i < n; i++)
            arr[i] = val;
    }
    void push_back(int val) {
        int* tArr = arr;
        len += 1;
        arr = new int[len];
        for (int i = 0; i < len - 1; i++)
            arr[i] = tArr[i];

        arr[len - 1] = val;
    }
    void pop_back() {
        int* tArr = arr;
        len -= 1;
        arr = new int[len];
        for (int i = 0; i < len - 1; i++)
            arr = tArr;

    }

    int get(int i) {
        return arr[i];
    }
    int size() {
        return len;
    }

};

void Show(vector a) {
    for (int i = 0; i < a.size(); i++)
        cout << a.arr[i] << endl;
    cout << endl;
}

int main()
{
    vector a(5,121);
    Show(a);
    a.push_back(3);
    a.push_back(3);
    Show(a);
    cout << "->" << a.get(a.size() - 1) << endl;
    a.pop_back();
    Show(a);

}