#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, string> dict = { {"student", "студент"} };
    dict["apple"] = "€блоко";
    dict["document"] = "документ";
    dict.insert({ "pear", "груша" });
    cout << dict["animal"];
    if (dict.find("play") == dict.end())
    {
        cout << "—лово play не найдено в словаре!" << endl;
    }
    dict["apple tree"] = "€блон€";

    dict.erase("document");

    dict.insert({ "table", "таблица" });
    dict["table"] = "стол";

    dict["long"] = "длинный";
    dict.insert({ "long", "долго" });

    for (const auto& it : dict) {
        cout << it.first << " -> " << it.second << "\n";
    }

    return 0;
}