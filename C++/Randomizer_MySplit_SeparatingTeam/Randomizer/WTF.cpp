#include <iostream>
#include <map>
#include <vector>
#include <ctime>
#include <queue>
#include <functional>

using namespace std;

vector <string> MySplit(string sentence) {
  vector<string> list;
  string word;
  bool inWord = false;

  for (char& letter : sentence) {
    //letter = tolower(letter);
    if (letter != ' ') {
      word += letter;
      inWord = true;
    }
    else {
      if (inWord) {
        list.push_back(word);
        word = "";
        inWord = false;
      }
    }
  }

  if (inWord)
    list.push_back(word);
  return list;
}

void PrintRandDistribution(vector <string> members, const int locCount) {
	map <int, queue <string>> dict;
    bool existWithLessMembers = false;
    function<void()> Checker; //это надо, чтобы дальше работала рекурсия в лямбда-функции, сам афигел что такое есть

    srand(time(0)); //делаем начальное семечко для rnad() ещё рандомнее, относительно текущего time()

    for (int loc = locCount - 1; members.size() > 0 and members.size() > 0; loc--) {
        int _rand = rand() % (members.size());
        
        if (members.size() < locCount - 1) {
            int _randLoc = rand() % (locCount);

            
            Checker = [&]() {  //знакомтесь, люмбда-функция
                for (const auto& iter : dict) {
                    if (dict.count(iter.first) < dict.count(dict.find(_randLoc)->first)) {
                        _randLoc = rand() % (locCount);
                        Checker();//рекурсия
                        break;
                    }
                }
            };
            Checker();//вызов самой лямбда-функции с рекурсией, она только здесь вызывается, так если что)

            dict[_randLoc].push(members[_rand]); 
        }
        else
            dict[loc].push(members[_rand]);

        members.erase(members.begin() + _rand);
        if (loc <= 0)
            loc = locCount;
    }

    //cout << "nice!";
    bool flag = true;

    for (const auto& iter : dict) {
        if (!flag)
            cout << "\n";
        else
            flag = false;

        cout << iter.first + 1 << " loc - ";
        queue <string> q = iter.second;
        while (!q.empty()){
            cout << q.front() <<" ";
            q.pop();
        }
        
    }
}

int main() {
	string members = "Dmitriy Daniil Artiom Evgeniy";
	const int ways = 4; // по факту ways и loc   одно и то же

    vector <string> memberList = MySplit(members);
    PrintRandDistribution(memberList, ways);
}

/* Res i want
1 loc - names
2 loc - names
3 loc - names
...
*/