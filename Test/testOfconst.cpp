#include <iostream>
#include <cstring>
#include <string>
using namespace std;


struct inflatable
{
    string name;
    float volume;
    double price;
};
struct torgle_register{
    unsigned int SN : 4;
    bool goodIn : 1;
    bool goodTorgle : 1;
};
struct widget{
    char brand[20];
    int type;
    union id{
        long id_num;
        char id_char[20];
    }id_var;
};
int main(){
#if 0
    const int Months = 12;
    char dog[8]={'b','e','a','u','x',' ','i','i'};//一直按地址顺序输出内容，直到遇到空('\0')
    char cat[8]={'f','a','t','e','s','s','a','\0'};
    char bird[11]="Mr, Cheeps";
    char fish[]="Bubbles";
    
    cout << "Months is :"<<Months<<endl;
    cout << dog<<endl;
    cout << cat<<endl;  
    cout << bird<<endl; 
    cout << fish<<endl;   
    cout <<"I am a" "master"<<endl;

const int Size = 15;
char name1[Size];
char name2[Size]="C++owby";

cout <<"Howdy! I'm "<<name2;
cout <<"! What's your name?\n";
cin >> name1;
cout <<strlen(name1) << " letters and is stroed\n";
cout <<"in an array of "<<sizeof(name1)<<" bytes.\n";
cout <<"Your initial is "<<name1[0] <<".\n";
name2[3]='\0';
cout << "Here are the first 3 characters of my name: ";
cout <<name2<<endl;



const int ArSize = 20;
char name[ArSize];
char dessert[ArSize];

cout << " Enter your name:\n";
cin.get(name,ArSize).get();
cout <<" Enter your favourite dessert:\n";
cin.get(dessert,ArSize);
cout << "I have some delicious "<<dessert;
cout <<" for you, "<<name<<".\n";
return 0;

char charr1[20];
char charr2[20] = "jaguar";
string str1;
string str2="panther";
cout <<" Enter a kind of feline: ";
cin >> charr1;
cout <<"charr1 is equal with str2 "<<(charr1==str2)<<endl;
cout <<" Enter another kind of feline: ";
cin >> str1;
cout <<" Here are some felines:\n";
cout << charr1 << " " << charr2 << " "
     << str1<<" "<<str2<<endl;
     cout <<" The third letter in "<< charr2 <<" is "
     <<charr2[2]<<endl;
cout <<" The third letter in "<< str2 <<" is "
     <<str2[2]<<endl;


char first_date[]={"Le Chapon Dodu"};
char second_date[] {"The Elegant Plate"};
string third_date = {"The Bread Bowl"};
string fourth_date ={"Hank's Fine Eats"};
string fifth_date = first_date+third_date+fourth_date+second_date;
cout << first_date <<"\n"
     << second_date <<"\n"
     << third_date <<"\n"
     << fourth_date <<"\n"
     << fifth_date<<endl;

inflatable guest ={
    "James",
    40.0,
    5000
};
torgle_register tr {15,true,false};
if(tr.goodIn)
    cout<<tr.SN<<endl;

cout << guest.name<<"\n"
    <<guest.volume<<"\n"
    <<guest.price<<endl;

widget prize = {"lining",1};
if(prize.type == 1)
    cin >> prize.id_var.id_num;
else
    cin >> prize.id_var.id_char;
cout<<prize.id_var.id_num<<endl;
string str = "James";
str = "Mical";
cout << "str is:" << str <<endl;
#endif


return 0;
}
