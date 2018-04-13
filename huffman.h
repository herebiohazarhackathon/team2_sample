#ifndef HUFFMAN_H
#define HUFFMAN_H

#include <string>
#include <unordered_map>
#include <map>
#include <memory>

struct Node{
    Node() {}
    Node(char l, int w) : letter(l), weight(w), leaf(true) {}
    Node(int w) : weight(w) {}

    char letter = '*';
    int weight;
    bool leaf = false;
    std::shared_ptr<Node> left;
    std::shared_ptr<Node> right;
    std::shared_ptr<Node> prev;
};

std::string HuffmanCode(const std::string& input){
    std::string result;
    std::unordered_map<char, int> frequency;
    for (const char& ch : input){
        frequency[ch]++;
    }

    std::map<int, std::shared_ptr<Node>> tree;
    for (auto it = frequency.begin(); it != frequency.end(); ++it){
        //tree[it->second] =
    }



    return result;
}

#endif // HUFFMAN_H
