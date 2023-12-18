# Name: Harry Lu

"""
- game_state: a list store the tokens on each row
"""

def create_game_state(size,token_max):
    """This function takes two parameters, size, and token max. It should return a newly created list of integers representing the number of tokens in each row."""
    li = []
    n = 1
    for i in range(0,size):
        li.append(n)
        if n<token_max:
            n += 1
    return li

def is_valid_move(game_state, row, takes):
    """this function take an list, two strings to test if user input is valid or not"""
    # check if int
    if not row.isdigit():
        return False
    if not takes.isdigit():
        return False
    # to int
    int_row = int(row)
    int_takes = int(takes)
    if int_row<1 or int_row>9:
        return False
    if int_takes<1 or int_takes>3:
        return False
    if int_row>len(game_state):
        return False
    if int_takes>game_state[int_row-1]:
        return False
    return True
    

def update(game_state, row, takes):
    """this function take a list, two integers, return an updated new list"""
    li = []
    for i in range(len(game_state)):
        li.append(game_state[i])
    li[row] -= takes
    return li

def draw_game_state(game_state):
    """this function take a list and print it out"""
    print("====================")
    for i in range(len(game_state)):
        print(str(i+1)+" ",end="")
        for j in range(game_state[i]):
            print("#",end="")
        print()
    print("====================")

def is_over(game_state):
    """this function take a list and return it false if one value isnt 0"""
    for i in range(len(game_state)):
        if game_state[i]!=0:
            return False
    return True

def p(s):
    """take a s and print it, for test purpose"""
    print(s)

# test code
# p(create_game_state(5,3))
# draw_game_state([5,2,3,1])
# p(is_over([0,0,1,0,0]))
# p(update([5,3,4,1],2,3))