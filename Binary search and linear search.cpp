

#include <iostream>
#define maxsize 10
using namespace std;
//linear search
int find(int a, int arr[maxsize]) {
    for (int i = 0;i < maxsize;i++) {
        if (arr[i] == a)
            return i;
    }
    return -1;
}
//binary search 
int binarysearch(int key, int arr[maxsize]) {
    int midlle, bottom = 0, top = maxsize - 1;
    while (bottom <= top) {
        midlle = (top + bottom) / 2;
        if (key == arr[midlle])
            return midlle;
        else if (key > arr[midlle])
            bottom = midlle + 1;
        else top = midlle - 1;
    }
    return -1;
}

int main()
{
    int arr[10];
    for (int i = 0;i < 10;i++)
        cin >> arr[i];
    cout << binarysearch(10, arr);

}

