
#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        cout << "A()" << endl;
    }
    ~A() { cout << "~A()" << endl; }
    void *operator new(size_t size)
    {
        cout << "size: " << size << endl;
        cout << "void *operator new(size_t size)" << endl;
        void *p = malloc(size);
        ((A *)p)->i = 100;
        return p;
    }
    void operator delete(void *p)
    {
        cout << "void operator delete(void* p)" << endl;
        free(p);
    }
    void *operator new[](size_t size)
    {
        cout << "size: " << size << endl;
        cout << "void *operator new[](size_t size)" << endl;
        void *p = malloc(size);
        return p;
    }
    void operator delete[](void *p)
    {
        cout << "void operator delete[](void* p)" << endl;
        free(p);
    }
    int i;
private:

    int j;
};

int main()
{
    int *pi = new int ;
    delete pi;
    cout<<"-------------------"<<endl;
    A *p = new A;
    cout<<p->i<<endl;
    delete p;
    cout<<"-------------------"<<endl;
    A *pa = new A[5];
    delete[] pa;
    return 0;
}