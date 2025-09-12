#include<iostream>
using namespace std;

class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char ch){
            data=ch;
            for(int i=0;i<26;i++){
                children[i]=NULL;
            }
            isTerminal=false;
        }
};

class Trie{
    public:
        Trie(){
            root=new TrieNode('\0');
        }
        TrieNode* root;
        void insertUtil(TrieNode* root,string word){
            if(word.length()==0){
                root->isTerminal=true;
                return;
            }
            // word is Capiatal letter
            int index=word[0]-'A';
            TrieNode* child;

            if(root->children[index]!=NULL){
                child=root->children[index];
            }
            else{
                child=new TrieNode(word[0]);
                root->children[index]=child;
            }

            insertUtil(child,word.substr(1));
        }

        void InsertWord(string word){
            insertUtil(root,word);
        }
        

        bool searchUtil(TrieNode* root,string word){
              
            if(word.length()==0){
                return root->isTerminal;
            }
            int index=word[0]-'A';
            TrieNode* child;
            
            if(root->children[index]!=NULL){
                child=root->children[index];
            }
            else{
                return false;
            }
            return searchUtil(child,word.substr(1));
        }
        bool search(string word){
            return searchUtil(root,word);
        }
};

int main(){
    Trie *t=new Trie();
    t->InsertWord("ABCD");
    cout << t->search("ABC") <<" ";
}