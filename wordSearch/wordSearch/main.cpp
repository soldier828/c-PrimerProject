//
//  main.cpp
//  wordSearch
//
//  Created by 刘楠 on 2016/12/20.
//  Copyright © 2016年 刘楠. All rights reserved.
//
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <sstream>
using namespace std;

class QueryResult;
class TextQuery{
public:
    using line_no = std::vector<std::string>::size_type;
    TextQuery(std::ifstream&);
    QueryResult query(const std::string&) const;
private:
    std::shared_ptr<std::vector<std::string>> file_;
    std::map<std::string, std::shared_ptr<std::set<line_no>>> wm_;
};

TextQuery::TextQuery(ifstream &is):file_(new vector<string>){
    string text;
    while(getline(is, text)){
        file_->push_back(text);
        int n = file_->size() - 1;
        istringstream line(text);
        string word;
        while(line >> word){
            auto &lines = wm_[word];
            if (!lines)
                lines.reset(new set<line_no>);
            lines->insert(n);
        }
    }
}

class QueryResult{
    friend std::ostream& print(std::ostream&, const QueryResult&);
public:
    using line_no = std::vector<std::string>::size_type;
    QueryResult(std::string s, std::shared_ptr<std::set<line_no>> p, std::shared_ptr<std::vector<std::string>> f) :sought_(s), lines_(p), file_(f) { }
private:
    std::string sought_;
    std::shared_ptr<std::set<line_no>> lines_;
    std::shared_ptr<std::vector<std::string>> file_;
    
};


QueryResult TextQuery::query(const std::string &sought) const{
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    auto loc = wm_.find(sought);
    if (loc == wm_.end())
        return QueryResult(sought, nodata, file_);
    else
        return QueryResult(sought, loc->second, file_);

}

string make_plural(size_t ctr,const string &word, const string &ending)
{
    return (ctr==1) ? word : word+ending;//make_plural(wc, "word ", "s ")当输入中文本中
    //word数大于一是在word后加s，为words为word的复数！
}

ostream &print(ostream &os, const QueryResult &qr){
    os << qr.sought_ << " occurs " << qr.lines_->size() << " " << make_plural(qr.lines_->size(), "time", "s") << endl;
    for (auto num : *qr.lines_)
        os << "\t(line: " << num+1 << ") " << *(qr.file_->begin()+num) << endl;
    return os;
}

void runQueries(std::ifstream &infile){
    TextQuery tq(infile);
    while(true){
        cout << "Enter the word to look up: " << endl;
        string s;
        if (!(cin >> s) || s == "q") break;
        print(cout, tq.query(s)) << endl;
    }
}

int main(){
    ifstream in("/Users/liunan/workspace/workspace_main/code/cPlusPlusPrimerProject/wordSearch/wordSearch/test.txt");
    runQueries(in);
    in.close();
    return 0;
}
