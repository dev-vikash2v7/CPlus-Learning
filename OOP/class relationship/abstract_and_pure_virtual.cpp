#include <iostream>
#include <string.h>

using namespace std;

//this is abstrct base class . because it connect the two derived classes.
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s,float rating){
            this->title = s;
            this->rating = rating ;
        };  
      virtual  void display() = 0 ;  //do nothing function --> pure virtual function . now if derive have not display() then it will show error
//       { 
// cout << "CWH base class display()\n";
//         };
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
