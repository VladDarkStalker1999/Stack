#include <iostream>
#include "StackNode.h"
 
/**
@mainStack ����
������� �� ��������� ������:
- @ref Stack ����
*/

int main()
{
        Stack<char> St;
        St.push('a');
        St.push('b');
        St.push('d');
        St.push('c');
        try
        {
                St.print();
                std::cout<<St.top()<<'\n';
                St.pop();
                St.print();
                std::cout<<St.top()<<'\n';
                St.pop();
                St.print();
                std::cout<<St.top()<<'\n';
                St.pop();
                St.print();
                std::cout<<St.top()<<'\n';
                St.pop();
                St.print();
        }
        catch(const std::string& e)
        {
                std::cout<<e<<'\n';
        }
		system("pause");
        return 0;
}