#include <iostream>
using namespace std;

class Shop
{

    int itemId[10], count = 0;
    
public:
  
    void getItem();
    void showItem();
};

void Shop :: getItem()
{
    cout << "enter item id : ";
    cin >> itemId[count];
    count++;
};

void Shop ::showItem()
{
    cout << "showing item id's : \n";
    for (int i = 0; i < count; i++)
    {
        cout << "item id of " << i + 1 << " : " << itemId[i] << endl;
    };
};

int main()
{
    Shop shop;

    shop.getItem();
    shop.getItem();
    shop.getItem();

    shop.showItem();

    return 0;
}