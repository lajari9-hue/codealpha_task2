#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void registration()
{
    string username, password, existinguser, existingpassword;
    cout<<"===================Registration===================\n";
    cout<<"enter username:\n";
    cin>>username;
    cout<<"enter password:\n";
    cin>>password;
    ifstream checkFile("login.txt");
    while( checkFile >> existinguser >> existingpassword)
    {
        if(existingpassword==password)
        {
            cout<<"error";
            checkFile.close();
            return;
        }
    }
    checkFile.close();
    ofstream file("login.txt", ios::app);
    if(file.is_open())
    {
        file << username << "   =" << password << endl;
        file.close();
        cout <<"registration successful";

    }
    else
    {
        cout << "enable to open file.";

    }

    
}
void login()
{
    string username, password, storedusername, storedpassword;
    bool found=false;
    cout << "=================login=====================";
    cout <<"enter username:";
    cin>>username;
    cout<<"enter password:";
    cin>>password;

    ifstream file("login.txt");
    while( file >> storedusername >> storedpassword)
    {
        if(username == storedusername && password == storedpassword)
    {
        found= true;
        break;
    } 
    }
    file.close();
    if(found)
    {
        cout << "login successfully:";
        cout<< "welcomme," << username ;

    }
    else {
        cout <<"enamble to login.";
    }
}
int main()
{
    int choice;
    do{
        cout << "\n ========login ============" <<endl;
        cout << "1. registration\n" <<endl;
        cout << "2. login\n" <<endl;
        cout << "3. exit\n" <<endl;
        cout << "enter your choice:" <<endl;
        cin >> choice;
        switch(choice)
        {
            case 1: 
                registration();
                break;
            case 2:
                login();
                break;
            case 3:
                cout <<"thnak you !";
                break;
            }

    }while (choice!=3);
    
    
    return 0;

}