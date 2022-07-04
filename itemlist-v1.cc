#include<iostream>
#include<fstream>
using namespace std;

class Item{
private:
    static int itemno;
    string name;
    int price;
    int quantity;
    
public:
    Item(string n,int p,int q){
        name=n;
        price=p;
        quantity=q;
        itemno++;
    }
    friend ofstream & operator<<(ofstream &ofs,Item s);
    friend ifstream & operator>>(ifstream &ifs,Item &s);
    friend ostream & operator<<(ostream &os,Item &s);
};

ofstream & operator<<(ofstream &ofs,Item i){
    ofs<<Item::itemno<<endl;
    ofs<<i.name<<endl;
    ofs<<i.price<<endl;
    ofs<<i.quantity<<"\n\n";
    return ofs;
}

ifstream & operator>>(ifstream &ifs,Item &i){
    int no;
    ifs>>no;
    ifs>>i.name;
    ifs>>i.price;
    ifs>>i.quantity;
    return ifs;
}

ostream & operator<<(ostream &os,Item &i){
    // int no;
    // os<<no;
    // os<<"Item no: "<<no<<endl;    //need to implement item number properly
    os<<"Name "<<i.name<<endl;
    os<<"price "<<i.price<<endl;
    os<<"quantity "<<i.quantity<<endl;
    return os;
}

int Item::itemno=0;
int main(){
    
    ofstream ofs("Test.txt");
    Item i1("Ginger",10,1);
    ofs<<i1;
    ofs.close();
    ofstream ofs2("Test.txt",ios_base::app);
    Item i2("Aloo",5,5);
    ofs2<<i2;
    ofs2.close();
    ifstream ifs("Test.txt");
    ifs>>i1;
    ifs>>i2;
    cout<<i1<<endl;
    cout<<i2;
}
