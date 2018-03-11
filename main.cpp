#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    // FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Rot13
// Last Modification Date: 1/3/2017
// Author: sameh serag eldine  



string msg;
char Arry1[]="ABCDEFGHIJKLM",Arry2[]="NOPQRSTUVWXYZ",arry1[]="abcdefghijklm",arry2[]="nopqrstuvwxyz";
int num,num2;



while (true)
{
cout << "What do you like to do today? \n" << "1- Cipher a message \n"<< "2- Decipher a message \n" <<"3- End \n";
cin >> num;

if (num==1)
    cout << "Please enter the message to cipher: \n";
else if (num==2)
    cout << "Please enter the message to decipher: \n";
else if (num==3)
    break;


else if (num!=1||num!=2||num!=3){



while(num!=1||num!=2||num!=3){

  cout << "please check what you want \n" << "1- Cipher a message \n"<< "2- Decipher a message \n" <<"3- End \n";
  cin >> num;

if (num ==1){
 cout << "Please enter the message to cipher: \n";
 break;
}


else if (num ==2){
    cout << "Please enter the message to decipher: \n";
    break;

}
else if (num ==3)
    break;
}

if (num ==3)
break;
}


    cin.ignore();    //to ignore the space
    getline(cin,msg);




    for(int n=0;n<=msg.length();n++) //because size of thing bigan with 0
        {
        for(int i=0;i<=13;i++){

            if (msg[n]==Arry1[i])
                    msg[n]=Arry2[i];

            else if(msg[n]==Arry2[i])
                    msg[n]=Arry1[i];

            else if (msg[n]==arry1[i])
                    msg[n]=arry2[i];

            else if (msg[n]==arry2[i])
                msg[n]=arry1[i];


        }

    }



cout << msg<<"\n"<<"\n";

cout << "if u want to start the program again please enter 0 \n";
cin >> num2;

if(num2==0)
    true;
else
break;



}

    return 0;
}

