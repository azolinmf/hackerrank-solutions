https://www.hackerrank.com/challenges/mars-exploration/problem
#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
    char msg[4] =  "SOS";
    int n = s.length() / 3;
    int j = 0;
    int count=0;
    for(int i = 0; i < n; i++){
        for(int p = 0; p < 3;p++){
            if(!(s[j] == msg[p])){
                count++;
            }
            j++;
        }
    }
    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

