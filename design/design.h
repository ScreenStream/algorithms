#pragma once

#include <vector>
#include <string>
#include <list>
#include <unordered_map>

using std::list;
using std::pair;
using std::vector;
using std::string;
using std::unordered_map;

class LRUCache {
    unordered_map<int, pair<int, list<int>::iterator>> map;
    list<int> q;
    int cap_;
public:
    explicit LRUCache(int capacity);
    int get(int key);
    void put(int key, int value);
};

class MinStack {
public:
    MinStack() = default;
    void push(int x);
    void pop();
    int top();
    int getMin();
private:
    struct Node {
        Node(int val, int min, Node* next)
                : val_{val}
                , min_{min}
                , next_{next}
        {}

        int val_;
        int min_;
        Node* next_;
    };

    Node* head_ = nullptr;
};

class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue();

    /** Push element x to the back of queue. */
    void push(int x);

    /** Removes the element from in front of queue and returns that element. */
    int pop();

    /** Get the front element. */
    int peek();

    /** Returns whether the queue is empty. */
    bool empty();
};

class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack();

    /** Push element x onto stack. */
    void push(int x);

    /** Removes the element on top of the stack and returns that element. */
    int pop();

    /** Get the top element. */
    int top();

    /** Returns whether the stack is empty. */
    bool empty();
};

class RandomizedSet {
public:
    /** Initialize your data structure here. */
    RandomizedSet();

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val);

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val);

    /** Get a random element from the set. */
    int getRandom();
};

class Trie {
public:
    /** Initialize your data structure here. */
    Trie();

    /** Inserts a word into the trie. */
    void insert(string word);

    /** Returns if the word is in the trie. */
    bool search(string word);

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix);
};

class SnapshotArray {
public:
    SnapshotArray(int length);
    void set(int index, int val);
    int snap();
    int get(int index, int snap_id);
};

class TinyURL {
public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl);

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl);
};

class MyCircularQueue {
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k);

    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value);

    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue();

    /** Get the front item from the queue. */
    int Front();

    /** Get the last item from the queue. */
    int Rear();

    /** Checks whether the circular queue is empty or not. */
    bool isEmpty();

    /** Checks whether the circular queue is full or not. */
    bool isFull();
};

class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet();

    void add(int key);

    void remove(int key);

    /** Returns true if this set contains the specified element */
    bool contains(int key);
};

class MaxStack {
public:
    MaxStack();
    void push(int x);
    int pop();
    int top();
    int peekMax();
    int popMax();
};

class Twitter {
public:
    /** Initialize your data structure here. */
    Twitter();

    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId);

    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int userId);

    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId);

    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId);
};

class LFUCache {
public:
    explicit LFUCache(int capacity);

    int get(int key);

    void put(int key, int value);
};

class FreqStack {
public:
    FreqStack();

    void push(int x);

    int pop();
};

class MyCalendar {
public:
    MyCalendar();

    bool book(int start, int end);
};

class TicTacToe {
    /** Initialize your data structure here. */
    explicit TicTacToe(int n);

    /** Player {player} makes a move at ({row}, {col}).
        @param row The row of the board.
        @param col The column of the board.
        @param player The player, can be either 1 or 2.
        @return The current winning condition, can be either:
                0: No one wins.
                1: Player 1 wins.
                2: Player 2 wins. */
    int move(int row, int col, int player);
};