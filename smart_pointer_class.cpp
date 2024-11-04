#include <iostream>
#include <memory>


using namespace std;


class MyClass
{
        
    private:    
        
        int *ptr;

    public:  


        MyClass() : ptr(nullptr){}

        ~MyClass()
        {
            delete ptr;
        }

        void create_ptr()
        {
            if(ptr == nullptr)
            {
                ptr = new int;
            }
        }
        void set_value(int num)
        {
            if(ptr != nullptr)
            {
                *ptr = num;
            }
        }
        
        void delete_ptr()
        {
            if(ptr != nullptr)
            {
                delete ptr;
                ptr = nullptr;
            }
        }    

        void display_value()
        {
            if(ptr != nullptr)
                cout << *ptr;
        }

};







int main(int argc, char const *argv[])
{
    
    MyClass my_ptr;
    my_ptr.create_ptr();
    my_ptr.set_value(5);
    my_ptr.display_value();
    my_ptr.delete_ptr();




    return 0;
}
