#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, movie, day;
    string id;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin, name);

    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;

    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << name << ": ";
    getline(cin, id);

    // ดึง 2 ตัวแรกของรหัสนักศึกษา แล้วแปลงเป็น int
    int year = stoi(id.substr(0, 2));
    int gear = year - 12;

    cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you." << endl;

    cout << "Fahsai: Let's go to the cinema together!!!" << endl;

    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << name << ": ";
    getline(cin, movie);

    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << name << ": ";
    getline(cin, day);

    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching "
         << movie << " with you." << endl;

    cout << name << ":"<<" Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/" << endl;

    return 0;
}
