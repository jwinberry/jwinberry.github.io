# Rock , Paper, Scissors 
import random;

print("Lets play rock, paper, scissors!")
print("Type your choice below: 'Rock', 'Paper', 'Scissors'")
userinput = input("Choose your weapon :")

while(userinput != "Rock" and userinput !="Paper" and userinput != "Scissors"):
    print(userinput);
    userinput = input("Choose your weapon : ")
    input("Invalid Entry. Please select weapon:");

computerInt = random.randint(1,3);

if (computerInt == 1):
    computer = "Rock";
elif (computerInt == 2):
    computer = "Paper";
else:
    computer = "Scissors";

if (userinput == computer):
    print("Tie!");
elif (userinput == "Rock"):
    if (computer == "Scissors"):
        print(" You Win!")
    else:
        print("Computer Wins!")
elif (userinput == "Scissors"):
    if (computer == "Rock"):
        print("Computer Wins!")
    else:
        print("You Win!")
elif (userinput == "Paper"):
    if (computer == "Rock"):
        print("You Win!")
    else:
        print("Computer Wins!")

            
print("Your choice: "+ userinput + "\nComputer choice: " + computer + "\n Thanks for Playing!");
input("Press Enter to continue");
