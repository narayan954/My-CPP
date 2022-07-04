#include <iostream>
#include <memory>
using namespace std;

class rectangle{
	int length;
    int breadth;
public:
	rectangle(int l,int b){
		length=l;
	    breadth=b;
	}
     	int area(){
		return length*breadth;
	}
};

int main(){
  //using unique pointer
    unique_ptr<rectangle> ptr1(new rectangle(10,5));
	cout<<ptr1->area()<<endl;
	unique_ptr<rectangle> ptr2;
	ptr2=move(ptr1);
	cout<<ptr2->area();
	cout<<ptr1->area();
    
  //using stared pointer
	shared_ptr<rectangle> ptr3(new rectangle(11,5));
	cout<<ptr3->area()<<endl;
	shared_ptr<rectangle> ptr4;
	ptr4=ptr3;
	cout<<"ptr4 "<<ptr4->area()<<endl;
	cout<<"ptr3 "<<ptr3->area()<<endl;
	cout<<ptr3.use_count()<<endl;
}
