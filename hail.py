import random 

#return the number of values in
#the hailstone sequence given n
# to start

def foo():
    return 3, 67

x, y = foo()

#pass in a maximum value and
#call hailstone(n) for 1..maximum n
#and return the n with the longest 
#hailstone sequence

def maxHailStone(maxNum) :
    nums = []
    
    for n in range(1, maxNum + 1):
        count = hailStone(n)
        nums.append(count)
        
    maxValue = max(nums)
    return [maxValue, nums.index(maxValue)] 
        

#calculate the sequence of numbers
# in the hailstone sequence down to 
#1. do not count the number n itself 

def hailStone(n): 
    return random.randint(1,1000)

    
print (maxHailStone(100))
