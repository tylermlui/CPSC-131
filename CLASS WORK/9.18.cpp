#include <iostream>
#include <memory>

template <typename T> class Node{
    public:
        T data;
        std::shared_ptr<Node<T>>next;


};
template <typename T> class LinkedList{
    public:
        std::shared_ptr<Node<T>> head;
        std::shared_ptr<Node<T>> tail;
        

        void PushFront(T d){
            auto new_node = std::make_shared<Node<T>>();
            if(head==nullptr){
                new_node->data = d;
                new_node->next = nullptr;
                head = new_node;
                tail = new_node;

            }
            else{
                new_node->data = d;
                new_node->next = head;
                head = new_node;

            }
        }               //time complexity O(1)
        void PushBack(T d){
            auto new_node = std::make_shared<Node<T>>();
            if(head==nullptr){
                new_node->data =d;
                new_node->next =nullptr;
                head = new_node;
                tail = new_node;

            }
            else{
                new_node-> data = d;
                new_node-> next = nullptr;
                tail->next = new_node;
                tail = new_node;

            }
        }
        void PopFront(){
            if(head==nullptr){
                throw "Linked list is empty";
            }
            else{
                std::shared_ptr<Node<T>> temp;
                temp = head;
                head = head->next;
                std::cout<<"Deleted element is = "<<temp->data<<std::endl;
            }
        }
        void display(){
           std::shared_ptr<Node<T>> curr = head;
           while(curr!=nullptr){
            std::cout<<curr->data<<"->";
            curr = curr->next;

           }
           std::cout<<"Null";
           std::cout<<std::endl;
        }
        //time complexity O(n)

};
int main(){
    LinkedList<int> l1;
    l1.PushFront(23);
    l1.display();
    l1.PushFront(24);
    l1.display();
    l1.PushFront(25);
    l1.display();
    l1.PushBack(12);
    l1.display();
    l1.PushBack(13);
    l1.display();
    l1.PopFront();
    l1.display();
    l1.PopFront();
    l1.display();
    l1.PopFront();
    l1.display();
    l1.PopFront();
    l1.display();
    l1.PopFront();
    l1.display();
    try{
        l1.PopFront();
    }
    catch(const char* msg){
        
    }
    return 0;
}
