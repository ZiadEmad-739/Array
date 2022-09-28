#include <bits/stdc++.h>
using namespace std;

class Array{

    int size = 0;
    int length = -1;
    int* arr = new int[size];

    bool empty(){
        return (length == -1);
    }

    bool full(){
        return (length == size-1);
    }

    bool found(int item){
        bool item_find = false;
        if(!empty()){
            for (int i = 0 ; i <= length ; ++i) {
                if (arr[i] == item){
                    item_find = true;
                    break;
                }
            }
        }
        return item_find;
    }

public:

    Array(int array_size){
        size = array_size;
    }

    void append(int item){
        if(full()){
            cout << "Can't append, Array is full" << endl;
        }else{
            length++;
            arr[length] = item;
        }
    }

    void insert(int item){
        if (empty()){
            append(item);
        } else if(full()){
            cout << "Can't insert, Array is full" << endl;
        } else{
            for(int i = length+1 ; i > 0 ; i--){
                arr[i] = arr[i-1];
            }
            arr[0] = item;
            length++;
        }
    }

    void insert(int item_before,int item){
        if (empty()){
            append(item);
        }else if(full()) {
            cout << "Can't insert, Array is full" << endl;
        }else if (found(item_before)){
            for (int i = length+1 ; i > 0 ; i--) {
                if (arr[i-1] == item_before){
                    arr[i] = item;
                    break;
                }
                arr[i] = arr[i-1];
            }
            length++;
        }else{
            cout << "Can't insert, item not found" << endl;
        }
    }

    void create(int n){
        if (n <= size){
            for (int i = 0; i < n; ++i) {
                int item;
                cout << "Enter item " << i+1 << " : ";
                cin >> item;
                append(item);
            }
        }else{
            cout << "The size of array isn't enough" << endl;
        }
    }

    void pop_front(){
        if (!empty()){
            for (int i = 0 ; i <= length ; ++i) {
                arr[i] = arr[i+1];
            }
            length--;
        }else{
            cout << "Can't delete this item, Array is empty" << endl;
        }
    }

    void pop_back(){
        if (!empty()){
            length--;
        }else{
            cout << "Can't delete this item, Array is empty" << endl;
        }
    }

    void pop_this(int item){
        if (empty()){
            cout << "Can't delete this item, Array is empty" << endl;
        }else {
            bool check = false;
            for (int i = 0; i <= length; ++i) {
                if (arr[i] == item){
                    check = true;
                    for (int j = i; j <= length; ++j) {
                        arr[j] = arr[j+1];
                    }
                    length--;
                    break;
                }
            }
            if(!check){
                cout << "Can't delete this item, item not found" << endl;
            }
        }
    }

    void is_empty(){
        string s = empty() ? "Array is empty" : "Array isn't empty";
        cout << s << endl;
    }

    void is_full(){
        string s = full() ? "Array is full" : "Array isn't full";
        cout << s << endl;
    }

    void get_size() const{
        cout << "The size of the array is ==> " << size << endl;
    }

    void get_length() const{
        cout << "The length of the array is ==> " << length + 1 << endl;
    }

    void search(int item){
        string s = found(item) ? "Yes, item found" : "No, item not found or array is empty";
        cout << s << endl;
    }

    void replace(int curr_item,int new_item){
        if (empty()){
            cout << "Can't replace, array is empty." << endl;
        }else {
            bool check = false;
            for (int i = 0 ; i <= length ; ++i) {
                if (arr[i] == curr_item){
                    check = true;
                    arr[i] = new_item;
                    break;
                }
            }
            if (!check){
                cout << "Can't replace, item not found." << endl;
            }
        }
    }

    void enlargement(int num){
        if (num > size){
            int* old_array = arr;
            size = num;
            arr = new int[num];
            for (int i = 0; i <= length; ++i) {
                arr[i] = old_array[i];
            }
            delete[] old_array;
        }else{
            cout << "Can't enlargement, The size of array is larger or equal" << endl;
        }
    }

    void join(Array new_array){
        size += new_array.size;
        enlargement(size);
        for (int i = 0; i <= new_array.length; ++i) {
            append(new_array.arr[i]);
        }
    }

    void reverse(){
        int* old_arr = arr;
        int* new_arr = new int[size];
        int n = length;
        for (int i = 0; i <= length; ++i) {
            new_arr[i] = arr[n];
            n--;
        }
        delete[] old_arr;
        arr = new_arr;
    }

    void clear(){
        if (!empty()){
            while (!empty()){
                pop_back();
            }
        }else{
            cout << "Can't clear, Array is empty" << endl;
        }
    }

    void display(){
        if (empty()){
            cout << "Can't display, Array is empty" << endl;
        }else{
            cout << "The array is ==> ";
            for (int i = 0; i < length; ++i) {
                cout << arr[i] << " ";
            }
            cout << arr[length];
            cout << endl;
        }
    }
};