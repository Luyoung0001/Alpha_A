#include <iostream>
#include <string>
using namespace std;
// 训练1-46： 输入一行字符，统计单词的个数，单词之间以空格隔开。
int countword(string str){
  int len = str.length();
  int num = 1;
  for(int i = 0; i < len; i++){
    if(str[i] == ' '){
      num++;
    }

  }
  return num;
}

int main(){
  string str;
  getline(cin,str);

  cout << countword(str) << endl;
  return 0;
}