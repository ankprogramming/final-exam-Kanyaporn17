#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

     int cmd;
     string name;
     string line;
     ofstream WriteFile;
     ifstream ReadFile;

     do {
        cout << "Menu" << endl;
        cout << "1.add student" << endl;
        cout << "2.list student" << endl;
        cout << "3.Xname" << endl;
        cout << "4.search" << endl;
        cout << "Please enter menu : ";
        cin >> cmd;

        if (cmd == 1){
            cout << "Enter std name : ";
            cin >> name;
            WriteFile.open("std.txt", fstream::app);
            if (WriteFile.is_open()){
                WriteFile << name << endl;
                WriteFile.close();
            } else {
            cout << "Unable to open file";
            }
        } else if (cmd == 2){
            ReadFile.open("std.txt");
            if (ReadFile.is_open()){
                while (getline(ReadFile, line)){
                    cout << line << endl;
                }
                ReadFile.close();
            }
        } else if (cmd == 3){
            ReadFile.open("std.txt");
            if (ReadFile.is_open()){
                while (getline(ReadFile, line)){
                    cout << line << endl;
                }
                ReadFile.close();
            }
        } else if (cmd == 4){
            ReadFile.open("std.txt");
            if (ReadFile.is_open()){
                while (getline(ReadFile, line)){
                    cout << "search name : ";
                    cin >> cmd;
                    cout << name[cmd] << "Found" << endl;
                    cout << name[cmd] << "Not Found" << endl;
                }
                ReadFile.close();
            }
       } else {
            break;
        }
        }while(1);

        return 0;
}
