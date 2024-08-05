#include <iostream>
using namespace std;
template <class T>class Test
{
	T data;
	public:
		void setData(T data)
		{
			this->data =data;
		}
		void print()
		{
			cout<<"Data"<<"\t"<<data<<endl;
		}
};
int main()
{
	Test<int> obj;
	obj.setData(10);
	obj.print();
	
	Test<string> obj1;
	obj1.setData("hello");
	obj1.print();
	
	Test<double> obj2;
	obj2.setData(3.6);
	obj2.print();
		
}


