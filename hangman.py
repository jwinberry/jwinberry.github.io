 
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
    del art[5:-1]
    art.insert(5, '      +-----+      |');
    art.insert(5, '      +     +      |');
    art.insert(5, '      +     +      |');
    art.insert(5, '      +-----+      |');
    art.insert(5, '===== +     +      |');
    art.insert(5, '         +         |');

def rightArm(art):
    del art[5:-1]
    art.insert(5, '      +-----+      |');
    art.insert(5, '      +     +      |');
    art.insert(5, '      +     +      |');
    art.insert(5, '===== +     +===== |');
    art.insert(5, '      +-----+      |');
    art.insert(5, '         +         |');
 

def leftLeg(art):
    art.insert(11, '     |__|          |');
    art.insert(11, '     _||_          |');
    art.insert(11, '      ||           |');
    art.insert(11, '      ||           |');
    art.insert(11, '      ||           |');

    
def rightLeg(art):
    del art[11:-1]
    art.insert(11, '     |__| |__|     |');
    art.insert(11, '     _||_ _||_     |');
    art.insert(11, '      ||   ||      |');
    art.insert(11, '      ||   ||      |');
    art.insert(11, '      ||   ||      |');
    
    

def init():
    bodyParts = setParts()
    art = makeArt()
    words = readWords()
    return bodyParts, art, words

def setHangman(misses, bodyParts, art):
    if (misses == 1):
        bodyParts[1](art)
    
    elif(misses == 2):
        bodyParts[2](art)
    
    elif(misses == 3):
        bodyParts[3](art)

    elif(misses == 4):
        bodyParts[4](art)

    elif(misses == 5):
        bodyParts[5](art)

    elif(misses == 6):
        bodyParts[6](art)

def getPlayerChoice():
    return str(raw_input("Choose a letter: "))
    
def main():
    bodyParts, art, words = init()

    misses  = 0;

    word = []
    for letter in random.choice(words):
        word.append(letter)

    wordStatus = [];

    for letter in word:
        wordStatus.append("_")

    while(misses < 6 and wordStatus != word):
        printArt(art)
        print "Current Letters: " + str(wordStatus)
        playerChoice = getPlayerChoice();

        if(playerChoice in word):
            x = 0
            for letter in word :
                if(letter == playerChoice):
                    wordStatus[x] = playerChoice
                x += 1
        else:
            misses += 1
            setHangman(misses,bodyParts, art)

        
    
    if(misses >= 6):
        setHangman(misses,bodyParts,art)
        printArt(art)
        print "You lose, the word is: " + str(word)
    else:
        print "You Win, the word is: " + str(word)
    playAgain = str(raw_input("Play again? (y or n): "))
    
    if (playAgain == "y" ):
        main();



    

main()
