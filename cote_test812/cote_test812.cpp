#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    string a;
    vector<string> temp;
    for (int i = 0; i < X.size(); i++)
    {
        for (int j = 0; j < Y.size(); j++)
        {
            if (X[i] == Y[j])
            {
                a = Y[j];
                temp.push_back(a);
                Y[j] = 'a';
                break;
            }
        }
    }
    if (temp.empty())
    {
        return "-1";
    }
    // 내림차순 정렬
    sort(temp.rbegin(), temp.rend());

    if (temp.front() == "0")
    {
        return "0";
    }
    
    for (int i = 0; i < temp.size(); i++)
    {
        answer += temp[i];
    }

    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}