#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


vector<int> function1(vector<int> list1,vector<int> list2) {
    vector<int> list3;
    set_intersection(list1.begin(),list1.end(),list2.begin(),list2.end(),back_inserter(list3));
    return list3;
}
bool checkPalindrome(string palindrome) {
    int length=palindrome.length();
    for (int i=0;i<length/2;i++) {
        if (palindrome[i]!=palindrome[length-i-1]) {
            return false;
        }
    }
    return true;
}

vector<string> function2(vector<string> plist) {
    vector<string> newList;
    for (string i:plist) {
        if (checkPalindrome(i)) {
            newList.push_back(i);
        }
    }
    return newList;
}

bool checkPrime(int prime) {
    if (prime<2) {
    return false;
    }
    int length=(sqrt(prime));
    for (int i=2;i<=length;i++) {
        if (prime%i==0) {
        return false;
        }
    }
    return true;
}

vector<int> function3(vector<int> primeList) {
    vector<int> prime;
    for (int i=0;i<primeList.size();i++) {
        if (checkPrime(primeList[i])) {
            prime.push_back(primeList[i]);
        }
    }
    return prime;
}

vector<string> anagrams(string word,vector<string> word_list) {
    vector<string> anagram;
    sort(word.begin(),word.end());
    for (string i:word_list) {
        string tmp=i;
            sort(i.begin(),i.end());
        if (word==i) {
            anagram.push_back(tmp);
        }
    }
    return anagram;
}



int main() {
    vector<int> list1={1,2,3,4};
    vector<int> list2={3,4,5,6};
    vector<int> funcOutput1=function1(list1,list2);
    for (int i=0;i<funcOutput1.size();i++) {
        cout <<funcOutput1[i]<< " ";
    }

    cout <<" "<<endl;
    vector<string> pList={"mom","nun","car","pencil","madam","door"};
    vector<string> funcOutput2=function2(pList);
    for (string i:funcOutput2) {
        cout<<i<<" ";
    }

    cout<<" "<<endl;
    vector<int> primeList = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    vector<int> funcOutput3=function3(primeList);
    for (int i=0;i<funcOutput3.size();i++) {
        cout<<funcOutput3[i]<<" ";
    }

    cout<<" "<<endl;
    string word="cinema";
    vector<string> word_list={"car","iceman","pencil","door","nemaci","macine"};
    vector<string> anagramoutput=anagrams(word,word_list);
    for (string i:anagramoutput) {
        cout<<i<<" ";
    }

}


