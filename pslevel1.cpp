#include <iostream>
int main () {
    int s;
    int N;

    std::string letter;

    std::cout<<"enter your desired message : ";
    std::getline(std::cin,letter);
    std::cout<<"enter your desired shift: ";
    std::cin>>s;
    std::cout<<"For encryption Press 1"<<'\n';
    std::cout<<"For decryption Press 2"<<'\n';
    std::cout<<"Enter Your Desired choice: ";
    std::cin>>N;
    int i;
    int remainder= s%26;
if (N==1) {
    for ( int i=0;i<letter.length();i++) {
        if ( int(letter.at(i))>=97 && int(letter.at(i))<=122) {
            if (int(letter.at(i)+remainder>122)) {
                letter.at(i)=letter.at(i)+remainder-26;
            }
            else {
                letter.at(i)=letter.at(i)+remainder;
            }



        }
        else if ( int(letter.at(i))>=65 && int(letter.at(i))<=90) {
            if (int(letter.at(i)+remainder>90)) {
                letter.at(i)=letter.at(i)+remainder-26;
            }


            else {
                letter.at(i)=letter.at(i)+remainder;
            }




        }

        else if ((int(letter.at(i))<65&&int(letter.at(i))>90)&&(int(letter.at(i))<97&&int(letter.at(i))>122)) {
            std::cout<<letter.at(i);
        }
    }
}
else if (N==2){
    for ( int i=0;i<letter.length();i++) {
    if ( int(letter.at(i))>=97 && int(letter.at(i))<=122) {
        if (int(letter.at(i)-remainder<97)) {
            letter.at(i)=letter.at(i)-remainder+26;
        }
        else {
            letter.at(i)=letter.at(i)-remainder;
        }



    }
    else if ( int(letter.at(i))>=65 && int(letter.at(i))<=90) {
        if (int(letter.at(i)-remainder<65)) {
            letter.at(i)=letter.at(i)-remainder+26;
        }


        else {
            letter.at(i)=letter.at(i)-remainder;
        }




    }

    else if ((int(letter.at(i))<65&&int(letter.at(i))>90)&&(int(letter.at(i))<97&&int(letter.at(i))>122)) {
        std::cout<<letter.at(i);
    }




}








}


















    std::cout<<letter ;

    return 0;
}

