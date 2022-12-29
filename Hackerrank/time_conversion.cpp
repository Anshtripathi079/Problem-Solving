#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    char h1 = s.at(0), h2 = s.at(1);
    string str = "";
    
    if(s.at(8) == 65){
        if(h1 == '1' && h2 == '2'){
            str = "00";
            for(int i=2; i<8; i++)
                str += s.at(i);
        }
        else{
            for(int i=0; i<8; i++){
                str += s.at(i);
            }
        }
    }
    else if(s.at(8) == 80){
        string s1(1, h1), s2(1, h2);
        str = s1 + s2;
        
        stringstream obj;
        int h;
        
        obj << str;
        obj >> h;
        
        if(h != 12) h += 12;
                
        str = to_string(h);
        
        for(int i=2; i<8; i++)
            str += s.at(i);
    }
    
    return str;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
