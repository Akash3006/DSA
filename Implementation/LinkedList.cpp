#include<iostream>
using namespace std;

//Node
class Node{

    public:
    int data;
    Node* next;

    public:
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


//Linked List
class Linkedlist{

    Node* head;
    Node* temp;
    
    public:
    Linkedlist(){
        this->head = NULL;        
    }
    
    //Incase list empty then it's an insertion at head else it will be treated as Insertion at Tail.
    public:
    void AddNode(Node* node){

        //If list is empty then make head as starting node;
        if(head==NULL)
            head = node;            
        else
        {
            temp = head;

            while(temp->next!=NULL)
                temp = temp->next;

            temp->next = node;
        }
    }

    public:
    void AddNodeAtHead(Node* node){

        if(head == NULL)
            AddNode(node);
        else{
        node->next = head;
        head = node;
        }
    }    

    //Incase if Head is the only node 
    public:
    void DeleteHeadNode(){

        temp = head;

        //If Head node is the only node
        if(temp->next==NULL)
            head = NULL;
        else
            head = temp->next;
        
    }

    public:
    void DeleteTailNode(){

        temp = head;
        //If head is tail or head is the only Node
        if(temp->next == NULL)
            head = NULL;
        else
        {
            while (temp->next->next!=NULL)
                temp = temp->next;
            temp->next=NULL;
        }
        

    }
    public:
    void ShowList(){
        if(head == NULL)
            cout<<"List Empty"<<endl;
        else{
            temp = head;
        while(temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp = temp->next;
            }
        cout<<"NULL"<<endl;
        }        
    }   

};

int main(){
    Linkedlist list;
    list.ShowList();
    list.AddNode(new Node(1));
    list.ShowList();
    list.AddNode(new Node(2));
    list.ShowList();
    list.AddNode(new Node(3));
    list.ShowList();
    list.AddNodeAtHead(new Node(0));
    list.ShowList();
    list.DeleteHeadNode();
    list.ShowList();
    list.DeleteTailNode();
    list.ShowList();
    return 0;
}
