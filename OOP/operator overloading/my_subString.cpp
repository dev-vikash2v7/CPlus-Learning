#include <iostream>
#include <string.h>
using namespace std;

class String{
    char *str ;
    int len ;

    public:
        String(char* s ) : str(s) {
            len = strlen(str) + 1;
        } ;

        String operator()(int pos){
            // str[pos] = 
        }

        String& operator=(const String &obj){
                strncpy(  );
        }
};

int main()
{
    int n = 0;
    cin >> n ;
    cout << n << endl;

    return 0;
}