#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;

int getInput() {
    int sec;
    cout << "Enter Number of Seconds: ";
    cin >> sec;
    return sec;
}

int main() {
    int ch, sec;
    string command;
    ostringstream secStr;

    cout << "1. Shutdown Computer" << endl;
    cout << "2. Restart Computer" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter Your Choice: ";
    cin >> ch;

    switch (ch) {
        case 1:
            sec = getInput();
            secStr << sec;
            command = "C:\\Windows\\System32\\shutdown /s /t " + secStr.str();
            system(command.c_str());
            break;
        case 2:
            sec = getInput();
            secStr << sec;
            comman…
[5.13 PM, 20/10/2023] UNPAM - Rizki: #include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int ch, sec;
    string command;
    ostringstream secStr;

    cout << "1. Otomatis Shutdown" << endl;
    cout << "2. Otomatis Restart" << endl;
    cout << "3. Set Your Time untuk Shutdown/Restart" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter Your Choice: ";
    cin >> ch;

    switch (ch) {
        case 1:
            // Otomatis Shutdown
            command = "C:\\Windows\\System32\\shutdown /s /f /t 0";
            system(command.c_str());
            break;
        case 2:
            // Otomatis Restart
            command = "C:\\Windows\\System32\\shutdown /r /f /t 0";
            system(command.c_str());
            break;
        case 3:
            // Set Your Time untuk Shutdown/Restart
            sec = 0;
            cout << "Enter Number of Seconds: ";
            cin >> sec;
            secStr << sec;
            cout << "1. Shutdown Computer" << endl;
            cout << "2. Restart Computer" << endl;
            cout << "Enter Your Choice: ";
            cin >> ch;
            switch (ch) {
                case 1:
                    command = "C:\\Windows\\System32\\shutdown /s /t " + secStr.str();
                    system(command.c_str());
                    break;
                case 2:
                    command = "C:\\Windows\\System32\\shutdown /r /t " + secStr.str();
                    system(command.c_str());
                    break;
                default:
                    cout << "Wrong Choice!" << endl;
                    return 1;  // Return an error code
            }
            break;
        case 4:
                command = "C:\\Windows\\System32\\shutdown /s /t " + secStr.str();
                system(command.c_str());
                break;
        case 5:
            return 0;
        default:
            cout << "Wrong Choice!" << endl;
            return 1;  // Return an error code
    }


}