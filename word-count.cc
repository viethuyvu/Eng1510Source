/**
 *   @file: word-count.cc
 * @author: Viet Huy Vu
 *   @date: Feb 11th 2023
 *  @brief: This code take in text as input and counts the number of words, sentences and calculates the number of words per sentence.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;


int main(int argc, char const *argv[]) {
    bool done = false; ///Helps to know when to stop input
    string text; /// This variable will contain string input
    string paragraph = ""; ///Store the paragraph
    double word_count =0; /// number of words
    cout << "Enter a paragraph..." << endl;
    while (!done){
        cin >> text;
        if (text == "@@@"){
            done = true; /// Break the loop or terminate the program when @@@ is seen.
        }
        else{
            paragraph = paragraph + text; /// add all the input text in a paragraph
            word_count ++; /// word counts increase every time a space is used.
        }
    }
    int len = paragraph.length(); /// Length of the text
    ///double space = 0; /// Count number of space in the text
    double notation = 0; /// Count the number of "?","!", "."
    for (int i=0; i < len; i++){
        if (paragraph.substr(i,1)== "?" || paragraph.substr(i,1)== "!" || paragraph.substr(i,1)== "." ){ /// Detect a notation in paragraph.
            notation++;
        }
    }
    if (paragraph == ""){ ///when there is no text enter
        cout << "Word count: 0" << endl;
        cout << "Sentence count: 0" << endl;
        cout << "You did not enter any text!" << endl;
    }
    else{
        if (notation == 0){ ///no notation enter
            cout << "Word count: " << word_count << endl;
            cout << "Sentence count: 0" << endl;
            cout << "You did not enter any sentences!" << endl;
        }
        else{
            cout << "Word count: " << word_count << endl;
            cout << "Sentence count: " << notation << endl;
            cout << "Average words per sentence: " << fixed << setprecision(1) << word_count/notation << endl; /// one decimal place in words per sentence
        }
    }
    return 0;
} /// main