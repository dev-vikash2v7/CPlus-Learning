
#include <iostream>

using namespace std;

class Shop{
    int id , price ; //data initialse first
    public:
    
    void setData(int a , int b){
        id = a; 
        price = b ;
    };
    void getData(){
        cout <<"id = " << id << "\n" << "price = "<< price <<  endl<<endl ;
    };
    
};

int main()
{
    int size = 2;
    int id , price ;
//   int *ptr = int[size] ;

Shop *ptr= new Shop[size];
Shop *tempPtr = ptr;

for(int i = 0 ; i<size ; i++){
    cout << "enter id and price of item " <<i+1 << " : " ;
    cin >> id >> price;
    
  //  (ptr+i)->setData(id , price); //first method
  
  //second method
//      (*ptr).setData(id,price);
    ptr->setData(id,price);
    ptr++;
};


for(int i = 0 ; i<size ; i++){
      //  (ptr+i)->getData(); //first method
      
      //second method
    // tempPtr->getData();
    // tempPtr++;
};

    return 0;
}
