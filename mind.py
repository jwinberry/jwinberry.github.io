

import random 


# constants 
colors = [ "red" , "blue" , "purple" , "pink" , "orange"]

# generate secret code

secretCode = []

i = 0

while i < 4 : 
    color = random.randint(0,5)
    secretCode.append(colors[color])
    i = i + 1


print " Secret: " , secretCode

fullMatches = 0
guessNum = 1
while (fullMatches<>4):
    
    fullMatches = 0
    partialMatches = 0
    secretCodeCopy = secretCode [:]
    guess = []
    print " Guess: " , guessNum
    
    i = 0
    while i <len(secretCode) : 
        print " Enter a color from: ", 
        print colors,
        color = raw_input()
        guess.append(color)
        i = i +1 
# Full matches
    i = 0
    while i<len(guess) :
        if guess[i] == secretCodeCopy[i]:
            fullMatches = fullMatches + 1 
            secretCodeCopy[i] = "X"
            guess[i] = "Y"
        i = i + 1

# partial matches
        
i = 0 
while i<len(guess) :
    j = 0 
    while j<len(secretCodeCopy) : 
        if guess[i] == secretCodeCopy [j]:
            partialMatches = partialMatches + 1
            secretCodeCopy[j] = "X"
            guess[i] = "Y"
        j = j + 1
    i = i + 1
# print response 

print fullMatches,
print "blacks"
print partialMatches,
print "Whites"
if fullMatches == 4:
    print "Correct!" ,
    print guessNum
guessNum=guessNum + 1 
    
    
        
