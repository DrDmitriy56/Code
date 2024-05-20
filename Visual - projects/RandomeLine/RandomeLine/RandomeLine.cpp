#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <random>
#include <windows.h>
#include <shellapi.h>
#include <cstdlib>

using namespace std;

int RandomInt(int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

//void openPrivateBrowser(const std::wstring& url) {
//    wstring command = L"\"C:\\Program Files\\BraveSoftware\\Brave-Browser\\Application\\brave.exe\" -incognito \"" + url + L"\"";
//    ShellExecute(NULL, L"open", command.c_str(), NULL, NULL, SW_SHOWNORMAL);
//}

int main() {
    ifstream stream;
    string path = "C:/Users/dimad/OneDrive/Рабочий стол/Passwords.txt";

    vector<string> links;
    string line;

    int index = 0;

    stream.open(path);

    if (stream.is_open()) {
        for (int i = 0; getline(stream, line); i++) {
            links.push_back(line);
        }

        index = RandomInt(0, links.size() - 1);
        while (links[index] == "") {
            index = RandomInt(0, links.size() - 1);
        }
        cout << links[index] <<"\n\n\n\n\n\n";
        //wstring wide_url(links[index].begin(), links[index].end());
        //openPrivateBrowser(wide_url);
    }
    stream.close();
    system("pause");
}
