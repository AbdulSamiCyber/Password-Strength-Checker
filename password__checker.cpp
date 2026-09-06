#include<iostream>
#include<string>
using namespace std;
bool uppercase(string password){
    for(int i=0;i<password.length();i++){
        if(password[i]>='A' && password[i]<='Z')
        return true;
    }
    return false;
}
bool lowercase(string password){
    for(int i=0;i<password.length();i++){
        if(password[i]>='a' && password[i]<='z')
        return true;
    }
    return false;
}
bool digits(string password){
    for(int i=0;i<password.length();i++){
        if(password[i]>='0' && password[i]<='9')
        return true;
    }
    return false;
}
bool specialone(string password){
    for(int i=0;i<password.length();i++){
        if(!(password[i]>='a' && password[i]<='z') 
            && !(password[i]>='0' && password[i]<='9') 
            && !(password[i]>='A' && password[i]<='Z'))
        return true;
    }
    return false;
}
int main(){
    string password;
    int score=0;
    cout<<"Enter password: ";
    getline(cin,password);
    if(password.length()>=8)
    score++;
    cout<<"========================"<<endl;
    cout<<"    Password Report     "<<endl;
    cout<<"========================"<<endl;
    if(uppercase(password)){
        cout<<"Uppercase : Yes"<<endl;
        score++;

        cout<<"-----------------------"<<endl;

    }
    else{
        cout<<"Uppercase : NO "<<endl;

        cout<<"-----------------------"<<endl;

    }
    if(lowercase(password)){
        cout<<"Lowercase : Yes"<<endl;
        score++;

        cout<<"-----------------------"<<endl;

    }
    else{
        cout<<"Lowercase : NO "<<endl;

        cout<<"-----------------------"<<endl;

    }
    if(digits(password)){
        cout<<"Digits : Yes"<<endl;
        score++;

        cout<<"-----------------------"<<endl;

    }
    else{
        cout<<"Digits  NO :"<<endl;

        cout<<"-----------------------"<<endl;

    }
    if(specialone(password)){
        cout<<"Special character : Yes"<<endl;
        score++;

        cout<<"-----------------------"<<endl;

    }
    else{
        cout<<"Special character : NO "<<endl;

        cout<<"-----------------------"<<endl;

    }
 

    if(score<=2){
        cout<<"Weak Password"<<endl;
        cout<<endl;
    }else if(score==3 || score==4){
        cout<<"Medium Password"<<endl;
        cout<<endl;
    }
    else{
        cout<<"Strong Password"<<endl;
        cout<<endl;
    }
    return 0;
}