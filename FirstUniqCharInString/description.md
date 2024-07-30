# First Unique Character in a String

### Description

Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

### Solution

A non-repeating character is a character that is unique in the string. To filter out repeating characters, we can use a set. First, we loop through each characters in the string, and adding it to the set. If a character is already in the set, we remove it from the set so that the set will always contain non-repeating characters. Then, we loop through the string a second time, only this time the first charcter that we encountered that is already in the set will be the answer.
