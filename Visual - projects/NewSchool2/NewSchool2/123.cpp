#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, string> dict = { {"student", "�������"} };
    dict["apple"] = "������";
    dict["document"] = "��������";
    dict.insert({ "pear", "�����" });
    cout << dict["animal"];
    if (dict.find("play") == dict.end())
    {
        cout << "����� play �� ������� � �������!" << endl;
    }
    dict["apple tree"] = "������";

    dict.erase("document");

    dict.insert({ "table", "�������" });
    dict["table"] = "����";

    dict["long"] = "�������";
    dict.insert({ "long", "�����" });

    for (const auto& it : dict) {
        cout << it.first << " -> " << it.second << "\n";
    }

    return 0;
}