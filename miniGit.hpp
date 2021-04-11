#pragma once
#include<iostream>
using namespace std;

class RepoHash {

};


struct BranchNode {
    BranchNode* parent;
    
};

struct repoNode {
   string repoName;   
   string url;
   RepoHash* repo;
   BranchNode* curr;
};

class MiniGit {
private:    
    repoNode* head;

public:
    MiniGit();
    ~MiniGit();

    void init(string repoName, string url);
    void add(string repoName, )
 ;

