/*
Implement Trie
https://www.codingninjas.com/codestudio/problems/implement-trie_631356?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_tries_videos&leftPanelTab=0
*/

struct Node{
    Node* links[26];
    bool flag=false;
    bool containsKey(char ch){
        return links[ch-'a']!=NULL;
    }
    Node* get(char ch){
        return links[ch-'a'];
    }
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }
    void setEnd(){
        flag=true;
    }
    bool isEnd(){
        return flag;
    }
};
class Trie {
private: Node* root;
public:

    /** Initialize your data structure here. */
    Trie() {
        root=new Node();
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        Node *node=root;
        for(char c:word){
            if(!node->containsKey(c)){
                node->put(c,new Node());
            }
            //move to the referrence trie
            node=node->get(c);
        }
        node->setEnd();
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        Node *node=root;
        for(char c:word){
            if(!node->containsKey(c)){
                return false;
            }
            node=node->get(c);
        }
        if(node->isEnd())return true;
        return false;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string word) {
        Node *node=root;
        for(char c:word){
            if(!node->containsKey(c)){
                return false;
            }
            node=node->get(c);
        }
        return true;
    }
};
