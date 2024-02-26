#include <iostream>
#include <vector>

using namespace std;
void display(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] <<  " ";
    }
    cout << endl;
}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void bubble(vector<int> vec){
    // [0, 3, 4, 3, 2, 6, 2, 5]
    for(int i = 0; i < vec.size(); i++){
        for(int j = i+1; j < vec.size(); j++){
            if(vec[i] > vec[j]){
                swap(vec[i], vec[j]);
            }
        }
    }
    display(vec);
}


void insertion(vector<int> v){
    for(int i = 1; i < v.size(); i++){
        int current = v[i];

    }
}

int main(){
    int twod[2][3];
    int a;
    vector<int> v(14);
    for(int i = 0; i < v.size(); i++){
        cin >> a;
        v.push_back(a);
    }
    /*
    cout << endl << v.size() << endl;

    


//Sort an array such that even numbers are first and odd numbers next;
//use two pointers for this

//this is to sort an array/vector of 0s ad 1s
    int n = v.size();
    v.push_back(0);
    v.push_back(1);

    int left =  0;
    int right = n-1;
    while(left <= right){
        if(v[left] == 1 && v[right]==0){
            int temp = v[left];
            v[left] = v[right];
            v[right] = temp;

            left++;
            right--;
        }

        if(v[left] == 0){
            left++;
        }
        if(v[right] == 1){
            right--;
        }

    }
    display(v);
    */

   bubble(v);
   
}