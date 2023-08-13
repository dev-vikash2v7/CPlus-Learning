#include <iostream>

using namespace std;

class Super
{
private:
        int topsecret = 33;
protected:
        int secret = 22;
public:
        int opensecret = 11;
};

class Sub : public Super
{
        public:
                void f(){
                       // topsecret = 1 ; //error: 'int Super::topsecret' is private within this context

                         secret = 2 ; //ok : can access protected member of Super

                          opensecret = 3 ; //ok : can access public member of Super
                          cout << "in Sub :\nopensecret : " <<opensecret << endl << "secret : " <<secret << endl ;
                };
};



int main(){

Super super_obj;
Sub sub_obj;
sub_obj.f();
//super_obj.topsecret = 11; //error: 'int Super::topsecret' is private within this context
//super_obj.secret = 12; //error: 'int Super::secret' is protected within this context can only be access by member fuction 
super_obj.opensecret = 13; //ok : can acess public member

cout << super_obj.opensecret <<endl<<endl;

//cout << sub_obj.topsecret <<endl; ////error: 'int Super::topsecret' is private within this context
//cout << sub_obj.secret <<endl; //// error: 'int Super::secret' is protected within this context
cout << sub_obj.opensecret <<endl;

//changes in base or derived does not chg the other class
//  super_obj.opensecret = 693;
//  cout << sub_obj.opensecret <<endl<< super_obj.opensecret<<endl;
return 0;
}

//protected member : protected data and method only visible to subclass