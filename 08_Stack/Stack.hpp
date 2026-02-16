#ifndef STACK_H
#define STACK_H

namespace StackArray{
    template <typename T, int size = 10>
    class Stack{
        public:
        Stack();

        void        push(const T& val);
        void        empty() const;
        void        full() const;
        void        print() const;
        T           pop();
        const T&    top() const;



        private:
        T data[size]; // Array of stack elements
        int top_idx; // Index of the top of the stack

    };
}

namespace StackList{
    template <typename T>
    class Stack{
        public:
        Stack();
        ~Stack();

        void        push(const T& val);
        void        empty() const;
        void        print() const;
        T           pop();
        const T&    top() const;



        private:
        class Node{
            public:
                T data;
                Node<T>* next;
                Node<T>* prev;
                Node(const T& val = T()): data(value), prev(nullptr), next(nullptr)
        };
        Node<T>* bottom;
        Node<T>* top;


    };
}

#endif