
#include <iostream>
#define MAX_STACK_SIZE 100

using namespace std;

class stack{
    private:
            int elements[MAX_STACK_SIZE];
            int peak;
    public:
        stack();
        ~stack();
        void push(int element);
        int pop();
        int top();
        bool is_empty();
        bool is_full();

};
