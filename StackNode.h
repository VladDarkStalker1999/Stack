#define _STACKNODE_H_
#include <string>
 
/**
@brief ����� ��� ������ �� c�����
@detailed � ��������� ������� ��������, �������� ��������
��������� �������� �������� ��������
*/

template<class T>
class Stack
{
public:
	
/**
@brief �����������
*/

        Stack():tail(0), head(0)
        {
        }
        
        ~Stack()
        {
              while(head)
              {
                  tail=head->next;
                  delete head;
                  head=tail;
              }
        }
 
/**
@brief ����������� � ����
*/

        void push(T val)
        {
                Node* Temp;
                Temp=new Node;
                Temp->elem=val;
                if(tail==0)
                {
                        tail=Temp;
                }
                else
                {
                        Temp->next=tail;
                        tail=Temp;
                }
        }
 
        T top()
        {
                if(tail==0)
                {
                        throw std::string("Stack is empty!");
                }
                return tail->elem;
        }
 
/**
@brief ����������� �� �����
*/

        void pop()
        {
                if(tail==0)
                {
                        throw std::string("Stack is empty!");
                }
                Node* delptr=tail;
                tail=tail->next;
                delete delptr;
        }
 
/**
@brief ������� ������
*/

        void print()
        {
                if(tail==0)
                {
                        throw std::string("Stack is empty!");
                }
                for(Node* ptr=tail; ptr!=0; ptr=ptr->next)
                {
                        std::cout<<ptr->elem<<' ';
                }
                std::cout<<'\n';
        }
private:
        struct Node
        {
                Node():elem(0), next(0)
                {
                }
                Node* next;
                T elem;
        };
        Node* head;
        Node* tail;
};