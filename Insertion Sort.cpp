// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class insertionSort {
    private:
    int arr[10];
    int n;
    public:
    void swap(int i,  int j)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    void arrinput() {
        cout<<"Enter The number of elements in array: "<<endl;
        cin>>n;
        cout<<"Enter the elements: ";
        for (int i=0; i<n; i++)
        {
            cout<<"Element "<<i+1<<"th: "<<endl;
            cin>>arr[i];
        }
    }
    void sort()
    {
        for (int i = 1; i < n; i++)
        {
            int element = arr[i];
            int x = i-1;
            while (x >= 0 and element > arr[x])
            {
                arr[x+1] = arr[x];
                x--;
            }
            arr[x+1] = element;
        }
    }
    
    void print()
    {
        for (int i=0; i<n; i++)
        {
            cout<<arr[i]<<" : ";
        }
        cout<<endl;
    }
};
int main() {
    insertionSort a;
    a.arrinput();
    a.print();
    a.sort();
    a.print();
    return 0;
}