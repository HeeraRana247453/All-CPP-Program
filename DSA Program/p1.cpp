//Implentation of the Queue using the Linked list.
//Enqueue(Insertion) operation on the Queue.
#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;

        node(int val)
        {
            data=val;
            next=NULL;
        }
};
class queue{
    node *front;
    node *back;

    public:
        queue()
        {
            front=NULL;
            back=NULL;
        }
        void push(int x)
        {
            node *n = new node(x);
            if(front==NULL)
            {
                front=n;
                back=n;
                return;
            }
            back->next=n; //back is pointing to the "last node(i.e a object)" and by using back ptr assign the value to the next of the "last node(i.e a object basicly)"
            back=n;  //and now update the value of the back ptr to the new node  
        }
        void pop()
        {
            if(front==NULL)
            {
                cout<<"Queue underflow"<<endl;
                return;
            }
            node *todelete=front;
            front=front->next;  //It updates the front pointer to points to the next node in the queue.

            delete todelete;  //deallocate the memory of the node which is pointed by front.
        }
        
        int peek(){
            if(front==NULL)
            {
                cout<<"No element in queue"<<endl;
                return 0;
            }
            return front->data;
        }

        bool empty(){
            if(front==NULL){
                return true;
            }
            return false;
        }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();

    cout<<"==>"<<q.empty()<<endl;

    return 0;
}

/* 
    Ques-1: What is the use of back->next=n; 
                             back=n;       in this code ?
    Answer: The code you provided is an implementation of a queue data structure using linked lists. The back->next=n; statement is used to add a new node to
            the back of the queue. The back pointer initially points to the last node in the queue. When a new node is added, it is assigned to the next pointer
            of the current last node, and then back is updated to point to the new node, which is now the last node in the queue. This ensures that the back pointer
            always points to the last node in the queue, and the front pointer always points to the first node in the queue.

    Ques-2: What is the use of the  front=front->next; in this code ?
    Answer: Front is a pointer to the first node in the queue. The statement front=front->next; is used to remove the first node from the
            queue. It updates the front pointer to point to the next node in the queue, which becomes the new first node. This ensures that the front pointer always
             points to the first node in the queue, and the back pointer always points to the last node in the queue.
    
    Ques-3: What is the use of the delete keyword ?
    Answer: The delete keyword in C++ is used to deallocate memory that was previously allocated by the new operator. It is important to use delete to avoid memory
            leaks and free up resources. There are two forms of delete: delete and delete[]. The delete operator is used to delete a single object, while the delete[]
            operator is used to delete an array of objects. 
*/