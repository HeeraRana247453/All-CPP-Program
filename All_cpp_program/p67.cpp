//Demonstrate the Read & Write Operation in the file.
//(Using the newline character)
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //Writing into File
    string str;
    int n;
    ofstream output_in_file("p67-textfile.txt");

    cout<<"How many lines, you want to write: ";
    cin>>n;
    cin.ignore();//Ignore the newline char.
    for (int i = 0; i < n; i++){
        getline(cin,str);
        output_in_file<<str + "\n";}
    output_in_file.close();
    

    //Reading from File
    cout<<endl;
    string str1;
    int count;
    ifstream input_from_file("p67-textfile.txt");

    cout<<"How many lines, you want to read: ";
    cin>>count;
    for (int i = 0; i < count; i++){
        getline(input_from_file,str1);
        cout<<str1 + "\n";}
    input_from_file.close();

    return 0;
}