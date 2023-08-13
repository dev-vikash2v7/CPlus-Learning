#include <iostream>
#include <string.h>

using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s,float rating){
            this->title = s;
            this->rating = rating ;
        };  
      virtual  void display(){
cout << "CWH base class display()\n";
        };
};

class Video  : public CWH{
    float length ;
  public:
  
  Video(string s , float r , float vl) : CWH(s , r) {
      length = vl;
      
  };
  void display(){
      cout << "in Video Class\n";
      cout << "title = " << title << endl ;
            cout << "rating = " << rating << endl ;
                  cout << "length = " << length << endl<<endl ;
  };
 
};

class TEXT  : public CWH{
    int words;
  public:
  
  TEXT(string s , float r , float vl) : CWH(s , r) {
      words = vl;
      
  };
  void display(){
      cout << "\nin TEXT Class\n";
      cout << "title = " << title << endl ;
            cout << "rating = " << rating << endl ;
                  cout << "words = " << words << endl<<endl ;
  };
 
};

int main()
{
    string title ;
    float rating,length ;
    int words;
    
    
    title = "django videos";
    rating = 4.9;
    length = 4.8 ; 

    Video djvideo(  title , rating , length ) ;
    djvideo.display();

       title = "django videos textual";
    words = 499;
    length = 4.12 ;
    TEXT djText(title, rating ,words);
    djText.display(); 

    CWH *tuts[2];

    tuts[0] = &djvideo ;
    tuts[1] = &djText;
    cout <<"via pointer called\n";
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

//rules for virtual functio

//1,the cannot be static
//2.they are accessd by object pointers
//3. virtual function bcan be a friend of another class
//4. a virtual function in base class might not be used.
//5. if a  virtual func is defined in the base class there is no necessity of rendering it in the derived class.
