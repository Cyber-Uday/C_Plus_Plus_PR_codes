#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int element , size;
    vector<int> vec_obj;
    cout<<"Enter the size of an Vector: ";
    cin>>size;

    for(int i=0;i<size;i++)
    {
        cout<<"Enter An "<<i<<" element which want tor store: ";
        cin>>element;
        vec_obj.push_back(element);
    }

    for(int j=0;j<vec_obj.size();j++)
    {

        if(vec_obj[j]<10)
        {
            vec_obj.pop_back();
        }
        else
        {
            cout<<" "<<vec_obj[j]<<" ";
        }
    }

}

//here are corrected code if your question is why one less than 10 element or last element will del

/*
    The issue with your code lies in the way you're using the pop_back()
    function within the loop. When you remove an element using pop_back(),
    the size of the vector decreases. However, 
    your loop continues to iterate based on the original size, 
    which can lead to unexpected behavior.

Here's a corrected version of the code that addresses this issue:
*/

/*
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size, element;
    vector<int> vec_obj;

    cout << "Enter the size of the vector: ";
    cin >> size;

    for (int i = 0; i < size; i++) {
        cout << "Enter an element: ";
        cin >> element;
        vec_obj.push_back(element);
    }

    // Iterate through the vector in reverse order to avoid index issues
    for (int i = vec_obj.size() - 1; i >= 0; i--) {
        if (vec_obj[i] < 10) {
            vec_obj.pop_back();
        }
    }

    // Print the remaining elements
    for (int i = 0; i < vec_obj.size(); i++) {
        cout << vec_obj[i] << " ";
    }

    return 0;
}*/