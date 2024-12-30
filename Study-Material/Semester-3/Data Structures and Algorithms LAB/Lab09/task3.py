def print_tic_tac_toe(values):
    print("\n")
    print(" {} | {} | {} ".format(values[0], values[1], values[2]))
    print("---|---|---")
    print(" {} | {} | {} ".format(values[3], values[4], values[5]))
    print("---|---|---")
    print(" {} | {} | {} ".format(values[6], values[7], values[8]))
    print("\n")

def check_win(player_pos, cur_player):
    soln = [[1, 2, 3], [4, 5, 6], [7, 8, 9], 
            [1, 4, 7], [2, 5, 8], [3, 6, 9], 
            [1, 5, 9], [3, 5, 7]]
    for x in soln:
        if all(y in player_pos[cur_player] for y in x):
            return True
    return False

def check_draw(player_pos):
    if len(player_pos['X']) + len(player_pos['O']) == 9:
        return True
    return False

def single_game(cur_player):
    values = [' ' for x in range(9)]  
    player_pos = {'X': [], 'O': []}   
    while True:
        print_tic_tac_toe(values)
        try:
            move = int(input(f"Player {cur_player}, choose your position (1-9): "))
        except ValueError:
            print("Invalid input! Try again.")
            continue

        if move < 1 or move > 9:
            print("Position out of range! Try again.")
            continue
        if values[move - 1] != ' ':
            print("Position already taken! Try again.")
            continue

        values[move - 1] = cur_player
        player_pos[cur_player].append(move)
        
        if check_win(player_pos, cur_player):
            print_tic_tac_toe(values)
            print(f"Player {cur_player} has won the game!\n")
            return cur_player
        if check_draw(player_pos):
            print_tic_tac_toe(values)
            print("Game Drawn!\n")
            return 'D'        
        cur_player = 'O' if cur_player == 'X' else 'X'

def print_scoreboard(score_board):
    print("\nScoreboard:")
    for player, score in score_board.items():
        print(f"{player}: {score}")
    print("\n")

print("Player 1")
player1 = input("Enter your name: ")

print("\nPlayer 2")
player2 = input("Enter your name: ")
cur_player = player1  

player_choice = {'X': "", 'O': ""}
options = ['X', 'O']

score_board = {player1: 0, player2: 0}
print_scoreboard(score_board)

while True:
    print(f"Turn to choose for {cur_player}")
    print("Enter 1 for X")
    print("Enter 2 for O")
    print("Enter 3 to Quit")
    try:
        choice = int(input())
    except ValueError:
        print("Invalid input! Try again.\n")
        continue
    if choice == 1:
        player_choice['X'] = cur_player
        player_choice['O'] = player2 if cur_player == player1 else player1
    elif choice == 2:
        player_choice['O'] = cur_player
        player_choice['X'] = player2 if cur_player == player1 else player1
    elif choice == 3:
        print("Final Scores")
        print_scoreboard(score_board)
        break
    else:
        print("Invalid choice! Try again.\n")
        continue
    
    winner = single_game(options[choice - 1])
    if winner != 'D':
        score_board[player_choice[winner]] += 1
    print_scoreboard(score_board)
    
    cur_player = player2 if cur_player == player1 else player1