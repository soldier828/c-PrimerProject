//
//  main.cpp
//  C++ test
//
//  Created by 刘楠 on 16/5/3.
//  Copyright © 2016年 刘楠. All rights reserved.
//

#include "main.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <unordered_map>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::pair;
//using std::unordered_map;

//bool SortByM1( const pair<int, int> &v1, const pair<int, int> &v2)//注意：本函数的参数的类型一定要与vector中元素的类型一致
//{
//    return v1.second > v2.second;//升序排列
//}

int main(){
  
    

    
//************************************************************************************************
// 3.2
// String定义方式
//    string s1;
//    string s2 = s1;
//    string s3 = "FUCK";
//    string s4(10,'c');
//    cout << s1 << endl << s2 << endl << s3 << endl << s4 << endl;
//    cout << s3+s4 <<endl;

// cin的以空格为结束
//    string s1,s2;
//    cin >> s1 >> s2;
//    cout << s1 << s2 << endl;
//    return 0;

////读取未知数量的string
//    string word;
//    while (cin >> word)
//        cout << word <<endl;
//    return 0;
  
//读取未知行数的string
//    string line;
//    while (getline(cin,line))
//        if (!line.empty() and line.size()>5)          //!空行输出
//            cout << line << endl;
//    return 0;

// String 的比较、相加
//    string a = "hello";
//    string b = "hello you";
//    string c = "hz";
//    cout << (a<b) << ((a<c) and (b<c)) <<endl;
//    cout << ("a" > "A") << endl;
//    string a = "HELLO";
//    string b = "WORLD";
//    
//    cout << (a + ", " + b + '\n' + '\n') << endl;

//统计标点
//    string test = "HELLO, FUCKING WORLD!!!";
//    decltype(test.size()) punct_cnt = 0;
//    for (auto c : test)
//        if (ispunct(c))
//            punct_cnt++;
//    cout << punct_cnt << endl;
//修改String内容 用引用
//    for (auto &c : test)
//        c = tolower(c);
//    cout << test << endl;
//

//十进制转换十六制进
//    const string hexdigits = "0123456789ABCDEF";   //因为是while（cin>>n）不会自动停止，输完后command+d再回车
//    string result;
//    string::size_type n;
//    while (cin >> n)
//        if (n < hexdigits.size())
//            result += hexdigits[n];
//    cout << result << endl;
//    return 0;
//************************************************************************************************
//3.3
//// 不定义v2长度，使用中push_back
//    vector<int> v2;
//    for (int i = 0; i != 100; ++i)
//        v2.push_back(i);
//    cout << v2[99] << endl;
// 确实不知道长度，直接定义
//    string word;
//    vector<string> text;
//    while (cin >> word)
//        text.push_back(word);
//    for (unsigned int i = 0; i < text.size(); i++)
//        cout << text[i] <<' ';
//    return 0;
// vector列表平方
//    vector<int> v{1,2,3,4,5,6,7,8,9};
//    for (auto &c : v)
//        c *= c;
//    for (auto i : v)
//        cout << i << " ";
//    cout << endl;
//    return 0;
////统计成绩 42 65 95 100 39 67 95 76 88 76 83 92 76 93
//    vector<unsigned int> scores(11,0);
//    unsigned grade;
//    while (cin >> grade){
//        if (grade <= 100)
//            ++scores[grade/10];
//    }
//    for (auto c : scores)
//        cout << c << " ";
//    cout << endl;
//    return 0;
////迭代器修改第一个字母
//    string s("some thing");
//    if (s.begin() != s.end()){
//        auto it = s.begin();
//        *it = toupper(*it);
//    }
//    cout << s <<endl;
////迭代器修改第一个单词
//    string s("some thing");
//    for (auto it = s.begin();it != s.end() && !isspace(*it); it++)
//        *it = toupper(*it);
//    cout << s << endl;
//    return 0;
////输出非空白之前
//    vector<string> text = {"I","LOVE","YOU","","MY","DARE"};
//    cout << endl;
//    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
//        cout << *it <<endl;
////输出中间的迭代器
//    auto mid = text.begin() + text.size()/2;
//    cout << *mid <<endl;
    
//迭代器二分搜索
//    vector<int> order = {1,2,3,4,5,6,7,8,9,10};
//    int sought = 10;
//    auto beg = order.begin(), end = order.end();
//    auto mid = beg + (end - beg)/2;
//    int cnt = 0;
//    while (mid != end && *mid != sought){
//        if (sought < *mid)
//            end = mid;
//        else
//            beg = mid + 1;
//        mid = beg + (end - beg)/2;
//        cnt++;
//    }
//    cout << *mid <<endl;
//    cout << "times: " << cnt <<endl;
//指针迭代器
//    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//    int *e = end(arr);
//    for (int *b = begin(arr); b != e; ++b)
//        cout << *b <<endl;
//    
//    vector<int> A = {1,2,3};
//    auto beg = A.begin();
//    auto end = A.end()-1;
//    auto temp = *end;
//    *end = *beg;
//    *beg = temp;
//    
//    cout << *beg <<" " << *end << endl;
//    
//
    string ONES = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    cout << ONES[0]<<endl;
    
    return 0;
}

