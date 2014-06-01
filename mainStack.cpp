#include <iostream>
#include "StackNode.h"
 
/**
@mainStack Стек
Состоит из следующих частей:
- @ref Stack стек
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