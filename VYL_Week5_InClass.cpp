#include <iostream>
#include <vector>
using namespace std;

void Vector_Implement();
void Loop_Forward(vector<int>);
void Loop_Back(vector<int>);
void Sort_Implement();
void Bubble_Sort(vector<int>);
void Insertion_Sort(vector<int>);

int main()
{
    Vector_Implement();
    Sort_Implement();
}

void Vector_Implement() {
    vector<int> arr{ 0, 1, 2, 3, 4 };
    cout << "Size of vector is: " << arr.size() << endl;
    cout << "Vector elements are given below : " << endl;
    Loop_Forward(arr);
    cout << endl;
//----------------------------------------------------------------
    arr.insert(arr.begin(), 20);
    cout << "Size of vector is: " << arr.size() << endl;
    cout << "Updated Vector elements are given below : " << endl;
    Loop_Forward(arr);
    cout << endl;
//----------------------------------------------------------------
    cout << "Output of reverse array: ";
    Loop_Back(arr);
    cout << endl;
//----------------------------------------------------------------
    arr.pop_back();
    cout << "Output of after remove last array element: ";
    Loop_Forward(arr);
    cout << "---------------------------------------------------------\n" << endl;
}

void Sort_Implement() {
    int _number;
    bool checked = false;
    vector<int> arr{ 20, 15, 5, 10, 1 };
    cout << "Size of vector is: " << arr.size() << endl;
    cout << "Vector elements are given below : " << endl;
    Loop_Forward(arr);
    cout << endl;
//----------------------------------------------------------------
    cout << "Enter the value of insertion: ";
    cin >> _number;
    arr.insert(arr.begin(), _number);
    cout << "Added to begin of the array \n";
    Loop_Forward(arr);
    cout << endl;
//----------------------------------------------------------------
    cout << "Enter the value of insertion: ";
    cin >> _number;
    arr.insert(arr.end(), _number);
    cout << "Added to end of the array \n";
    Loop_Forward(arr);
    cout << endl;
    do {
        cout << "Please Select any Sorting Algorithm" << endl;
        cout << "(0) Bubble Sort\n(1) Insertion Sort\nEnter: ";
        cin >> _number;
        cout << endl;
        switch (_number)
        {
        default:
            cout << "ERROR: Invalid Value..." << endl;
            break;
        case 0:
            //----------------------------------------------------------------
            cout << "Bubble Sort ...\n"; cout << "Sorted Element List ...\n";
            Bubble_Sort(arr);
            cout << endl;
            checked = true;
            break;
        case 1:
            //----------------------------------------------------------------
            cout << "Insertion Sort ...\n"; cout << "Sorted Element List ...\n";
            Insertion_Sort(arr);
            checked = true;
            break;
        }

    } while (!checked);
    cout << "---------------------------------------------------------\n" << endl;
}

void Loop_Forward(vector<int> n) {

    for (int i = 0; i < n.size(); i++)
        cout << n.at(i) << " ";
    cout << endl;

}

void Loop_Back(vector<int> n) {

    for (int i = n.size() - 1; i >= 0; i--)
        cout << n.at(i) << " ";

}

void Bubble_Sort(vector<int> a)
{
    bool swapp = true;
    while (swapp) {
        swapp = false;
        for (int i = 0; i < a.size() - 1; i++) {
            if (a[i] > a[i + 1]) {
                a[i] += a[i + 1];
                a[i + 1] = a[i] - a[i + 1];
                a[i] -= a[i + 1];
                swapp = true;
            }
        }
    }
    Loop_Forward(a);
}

void Insertion_Sort(vector<int> a)
{
    for (int j = 1; j < a.size(); j++)
    {
        int key = a[j];
        int i = j - 1;

        while (i >= 0 && a[i] > key)
        {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;
    }
    Loop_Back(a);
    cout << endl;
}