#include<iostream>

using namespace std;

template<typename T>
class my_vector{
    public:
        my_vector(int size);
        my_vector();
        ~my_vector();
        int get_lentgh(){return length;}
        void push_back(T input);
        void print_array();
        

    private:
        T* array_pointer;
        int size;
        int length;
        void resize();
        bool is_full();
};

template<typename T>
my_vector<T>::my_vector(int _size)
    : size(_size)
{
    length = 0;
    T* array = new T[size];
    array_pointer = array;
}

template<typename T>
my_vector<T>::my_vector()
    : size(1)
{
    length = 0;
    T *array = new T[size];
    array_pointer = array;
    // array_pointer = new T[size];
}

template<typename T>
bool my_vector<T>::is_full(){
    if (length == size){
        return true;
    }
    return false;
}

template<typename T>
my_vector<T>::~my_vector(){
    delete (array_pointer);
}

template<typename T>
void my_vector<T>::resize(){
    size *= 2; 
    T* new_array = new T[size];
    for(int i = 0; i < length; i++){
        new_array[i] = array_pointer[i];
    }
    delete (array_pointer);
    array_pointer = new_array;
}

template<typename T>
void my_vector<T>::push_back(T input){
    array_pointer[length] = input;
    length += 1;
    if(is_full()){
        resize();
    }
}

template<typename T>
void my_vector<T>::print_array(){
    for(int i = 0; i < length; i += 1){
        cout << (array_pointer)[i] << " ";
    }
    cout << endl;
}
int main(){
    my_vector<int> v;
    v.push_back(10);
    v.push_back(200);
    v.push_back(1000);
    v.print_array();


}