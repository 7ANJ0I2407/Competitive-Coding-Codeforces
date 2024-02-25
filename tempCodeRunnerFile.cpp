#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Set {
private:
    int size; 
    int * store; 
   

public:
  int index;
    Set(int *arr, int size) {
        this->size = size; 
        store = new int[this->size];
        index = 0;
        for (int i = 0; i < size; ++i) {
            store[index++] = arr[i];
        }
    }

    ~Set() {
        delete [] store; 
    }
      
    void take_element() {
        int ele; 
        cin >> ele; 
        store[index++] = ele;
    }    

    void unionSet(Set *obj1, int n1, Set *obj2, int n2) {
        for (int i = 0; i < n1; i++) {
            store[index++] = obj1->store[i]; 
        }
        for (int i = 0; i < n2; i++) {
            store[index++] = obj2->store[i];        
        }
    }

    void intersection(Set *obj1, int n1, Set *obj2, int n2) {
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                if (obj1->store[i] == obj2->store[j]) {
                    store[index++] = obj1->store[i];
                }
            }
        }
    }

    int set_Difference(Set *obj1, Set *obj2) {
        if (obj1->index > obj2->index) {
            cout << "The 1st set is bigger "; 
            return obj1->index - obj2->index;
        } else if (obj1->index < obj2->index) {
            cout << "The 2nd set is bigger "; 
            return obj2->index - obj1->index;
        } else {
            cout << "These two are equal size sets "; 
            return 0; 
        }
    }

    void test_Equal_set(Set *obj1, Set *obj2) {
        for (int i = 0; i < obj1->index; i++) {
            for (int j = 0; j < obj2->index; j++) {
                if (obj1->store[i] != obj2->store[j]) {
                    cout << "The sets are not equal sets "; 
                    return; 
                }
            }
        } 
        cout << "These two are equal sets ";   
    }   

    void cartesian_Product(Set *obj1, Set *obj2) {
        for (int i = 0; i < obj1->index; i++) {
            for (int j = 0; j < obj2->index; j++) {
                cout << "(" << obj1->store[i] << "," << obj2->store[j] << "),";
            }
        }
        cout << endl;
    }

    void printSubsets(const vector<int>* setPtr) {
        if (setPtr == nullptr)
            return;

        const vector<int>& set = *setPtr;
        int n = set.size();
        int totalSubsets = pow(2, n);

        for (int i = 0; i < totalSubsets; ++i) {
            cout << "{ ";
            for (int j = 0; j < n; ++j) {
                if (i & (1 << j))
                    cout << set[j] << " ";
            }
            cout << "}\n";
        }
    }

    void distinct_Or_Not(Set *obj) {
        for (int i = 0; i < obj->index; i++) {
            for (int j = 0; j < obj->index; j++) {
                if (obj->store[i] == obj->store[j]) {
                    cout << "The sets are not distinct sets "; 
                    return;
                }
            }
        }
        cout << "Yes, the set is distinct "; 
    }

    void value(Set *obj) {
        int sum = 0;
        for (int i = 0; i < obj->index; i++) {
            sum += obj->store[i];
        } 
        double mean = sum / obj->index;
        cout << "The value of mean is " << mean << endl; 
        double variance = 0; 
        for (int i = 0; i < obj->index; i++) {
            variance += pow(obj->store[i] - mean, 2);
        }
        variance /= obj->index; 
        cout << "The variance is " << variance << endl;
        double standard_deviation = sqrt(variance); 
        cout << "The standard deviation is " << standard_deviation << endl; 
        if (obj->index % 2 == 0) {
            int middleIndex = obj->index / 2;
            double median = (obj->store[middleIndex - 1] + obj->store[middleIndex]) / 2.0; 
            cout << "The median is " << median << endl; 
        } else {
            double median = obj->store[obj->index / 2];
            cout << "The median is " << median << endl; 
        } 
    }
    void printSet() {
        cout << "{ ";
        for (int i = 0; i < index; i++) {
            cout << store[i] << " ";
        }
        cout << "}" << endl;
    }
};

int main() {
    // Take input for Set 1
    int size1;
    cout << "Enter the size of Set 1: ";
    cin >> size1;
    int* elements1 = new int[size1];
    cout << "Enter the elements of Set 1: ";
    for (int i = 0; i < size1; ++i) {
        cin >> elements1[i];
    }
    Set obj1(elements1, size1);

    // Take input for Set 2
    int size2;
    cout << "Enter the size of Set 2: ";
    cin >> size2;
    int* elements2 = new int[size2];
    cout << "Enter the elements of Set 2: ";
    for (int i = 0; i < size2; ++i) {
        cin >> elements2[i];
    }
    Set obj2(elements2, size2);

    // Calculate Union and Intersection using obj3
    Set obj3(nullptr, size1 + size2);
    obj3.unionSet(&obj1, size1, &obj2, size2);
    cout << "Union of Set 1 and Set 2: ";
    obj3.printSet();

    obj3.index = 0; // Reset index for next operation
    obj3.intersection(&obj1, size1, &obj2, size2);
    cout << "Intersection of Set 1 and Set 2: ";
    obj3.printSet();

    // Calculate Cartesian Product
    cout << "Cartesian Product of Set 1 and Set 2: ";
    obj3.cartesian_Product(&obj1, &obj2);

    // Check if the sets are distinct
    obj3.distinct_Or_Not(&obj1);
    obj3.distinct_Or_Not(&obj2);

    // Value operations
    cout << "Value operations for Set 1:" << endl;
    obj3.value(&obj1);
    cout << "Value operations for Set 2:" << endl;
    obj3.value(&obj2);

    // Deallocate memory
    delete[] elements1;
    delete[] elements2;

    return 0;
}