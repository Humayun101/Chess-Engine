#include <iostream>
using namespace std;

int main(){
int ranks;
int files;

string lightCol= "W";
string darkCol= "B";


for (files=0; files<8; files++){
    for (ranks=0; ranks<8; ranks++){
        bool lightbox=(files+ranks)%2 !=0;

        auto boxcolor = (lightbox)? lightCol: darkCol;
        cout<<boxcolor<<" ";



    }
cout<<endl;
}
    return 0;
}