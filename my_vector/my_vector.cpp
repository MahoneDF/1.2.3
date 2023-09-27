#include<iostream>

using namespace std;

template<typename T>
class my_vector{
    public:
        my_vector(int size);
        my_vector();
        ~my_vector();
        bool is_full();

    private:
        T[] array;
};

template<typename T>
my_vector<T>::my_vector(int size){
    array = new T[size]
}