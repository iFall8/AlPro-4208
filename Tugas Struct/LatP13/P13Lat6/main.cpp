#include <iostream>

using namespace std;

enum minuman{Teh=3000, Kopi=4000, Sirup=4500, Susu=5000};
minuman y;

int main()
{
    y = minuman::Kopi;
    printf("%d",y);
    return 0;
}
