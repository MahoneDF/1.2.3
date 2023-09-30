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
        T** array_pointer;
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
    array_pointer = &array;
}

template<typename T>
my_vector<T>::my_vector()
    : size(1)
{
    length = 0;
    T *array = new T[size];
    array_pointer = &array;
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
    delete (*array_pointer);
}

template<typename T>
void my_vector<T>::resize(){
    size *= 2; 
    T* new_array = new T[size];
    delete (*array_pointer);
    array_pointer = &new_array;
}

template<typename T>
void my_vector<T>::push_back(T input){

    (*array_pointer)[length] = input;
    length += 1;

    // cout << size << " " << length << endl;
    if(is_full()){
        resize();
    }
}

template<typename T>
void my_vector<T>::print_array(){
    cout << length << "......" << endl;
    for(int i = 0; i < length; i += 1){
        cout << length;
        // cout << (*array_pointer)[i] << " ";
        
    }
    cout << endl;
}
int main(){
    my_vector<int> v(100);
    v.push_back(10);

    v.push_back(200);
    // v.print_array();
    v.push_back(1000);
    v.print_array();

    cout << "salam";

}