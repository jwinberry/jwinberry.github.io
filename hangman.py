 
"""
   Hangman
     Plays a basic game of hangman
    
   Author:  JJ Programmer
   Version: 0.01
   Date:    11/07/2017
"""

import random

def makeArt():
    art = []
    art.append('         +---------+')
    art.append('         |         |')
    art.append('                   |')
    art.append('                   |')
    art.append('                   |')
    art.append('                   |')
    art.append('                   |')
    art.append(' ------------------+')
    return art

def readWords():
    wordList = []
    with open('wordlist.10000.txt') as wordFile:
        count = 0
        for line in wordFile:
            if len(line) > 4 and len(line) < 7:
                wordList.append(line[0:-1])
            
    return wordList

def printArt(art):
    for line in art:
        print(line)

def setParts():
    parts = {
        1 : head,
        2 : body,
        3 : leftArm,
        4 : rightArm,
        5 : leftLeg,
        6 : rightLeg,
        }
    return parts

def head(art):
    art.insert(2, '       +---+       |');
    art.insert(2, '       +   +       |');
    art.insert(2, '       +---+       |');

def body(art):
    art.insert(5, '      +-----+      |');
    art.insert(5, '      +     +      |');
    art.insert(5, '      +     +      |');
    art.insert(5, '      +     +      |');
    art.insert(5, '      +-----+      |');
    art.insert(5, '         +         |');
    #art[5] = '======================='; driect replacement
    
def leftArm(art):
    art[5] = '                   |';
    art.insert(5, '      +-----+      |');
    art.insert(5, '===== +     +      |');
    art.insert(5, '      +     +      |');
    art.insert(5, '      +     +      |');
    art.insert(5, '      +-----+      |');
    art.insert(5, '         +         |');

def rightArm(art):
    art[5] = '                   |';
    art.insert(5, '      +-----+      |');
    art.insert(5, '===== +     +===== |');
    art.insert(5, '      +     +      |');
    art.insert(5, '      +     +      |');
    art.insert(5, '      +-----+      |');
    art.insert(5, '         +         |');
 

def leftLeg(art):
    art.insert(6, '      ||           |');
    art.insert(6, '      ||           |');
    art.insert(6, '      ||           |');
    art.insert(6, '     _||_          |');
    art.insert(6, '     |__|          |');
    
def rightLeg(art):
    art[6] = '                        |';
    art.insert(6, '      ||   ||      |');
    art.insert(6, '      ||   ||      |');
    art.insert(6, '      ||   ||      |');
    art.insert(6, '     _||_ _||_     |');
    art.insert(6, '     |__| |__|     |');

def init():
    bodyParts = setParts()
    art = makeArt()
    words = readWords()
    return bodyParts, art, words

def main():
    bodyParts, art, words = init()
    
    printArt(art)
    
    misses = 1
    bodyParts[1](art)
    
    misses = 2
    bodyParts[2](art)
    
    misses = 3
    bodyParts[3](art)
    
    printArt(art);
    
    for i in range(20):
        print(random.choice(words))

main()
