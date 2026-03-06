#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    unsigned short a,b,c,d;
    a &= 0x7F; // 7 in hex, gotten through: [0000|0000|0000|0000|0000|0000|0000|0111]
    b &= 0x0F;
    c &= 0x0F;
    d &= 0x01;

    //adding elements into the machine word:
    unsigned short word = (a << 9) | (b << 5) | (c << 1) | d;

    //clearing b:
    unsigned int numHex = 0x06;
    word &= ~(0xFF << 5);
    word |= (numHex << 5);
    cout<<"a in Hex;"<<hex<<((word>>9) & 0xFF)<<uppercase<<"\n";

    int num = 67;
    std::cout<<"Hex representation of 67: "<<std::hex<<num<<std::uppercase<<"\n";

    return 0;
}