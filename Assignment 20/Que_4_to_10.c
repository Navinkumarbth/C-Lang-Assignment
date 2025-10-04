#include <stdio.h>

// Funciton to update the score board
void update_score_board(int p1, int p2, int result, int score_board[][4])
{
    score_board[p1][p2] = result;
    score_board[p2][p1] = 2 - result;
}

// Function to display the score board
void display_score_board(int score_board[][4])
{
    int i, j;
    printf("\nScore Board\n");
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
            printf("%d", score_board[i][j]);

        printf("\n");
    }
}
// Function to calculate the total score of a player
int get_player_score(int player, int score_board[][4])
{
    int j, sum = 0;
    for (j = 0; j <= 3; j++)
        sum = sum + score_board[player][j];
    return sum;
}

// Function to find the winner based on the score
int find_winner(int score_board[][4])
{
    int player, score, winner, s1;
    player = 0;
    winner = player;
    score = get_player_score(player, score_board);
    for (++player; player <= 3; player++)
    {
        s1 = get_player_score(player, score_board);

        if (score < s1)
        {
            winner = player;
            score = s1;
        }
    }
    return winner;
}

// Functio to sort scores in descending order
void sort(int a[], int n, int player_index[])
{
    int r, t, i;
    for (r = 1; r <= n - 1; r++)
    {
        for (i = 0; i <= n - r - 1; i++)
        {
            if (a[i] < a[i + 1])
            {
                // Swap scores
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
                // Swap player indices
                t = player_index[i];
                player_index[i] = player_index[i + 1] = t;
            }
        }
    }
}

// Function to display the rank of players
void show_rank(int score_board[][4])
{
    int player_score[4], scores[4], player_index[4];
    int i;

    // Calculate the score of each player
    for (i = 0; i <= 3; i++)
    {
        player_score[i] = get_player_score(i, score_board);
        scores[i] = player_score[i];
        player_index[i] = i;
    }

    // Sort the scores in descending order
    sort(scores, 4, player_index);
    for (i = 0; i <= 3; i++)
    {
        printf("%d) %d - score %d\n", i + 1, player_index[i], scores[i]);
    }
}

// Main function to demonstrate the functionality
void f4()
{
    int score_board[4][4] = {0};
    int i, j, result;
    printf("\nEnter match results for 4 players (Players are numbered 0 to 3)\n");
    printf("For each match, enter result as: 2 (Player i wins), 1 (Draw), 0 (Player j wins)\n");
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            printf("Enter result for Player %d vs Player %d: ", i, j);
            while (scanf("%d", &result) != 1 || result < 0 || result > 2)
            {
                printf("Invalid input. Enter 2 (Player %d wins), 1 (Draw), 0 (Player %d wins): ", i, j);
                while (getchar() != '\n')
                    ; // clear input buffer
            }
            update_score_board(i, j, result, score_board);
        }
    }

    // Display the score board
    display_score_board(score_board);

    // Show the rank of players
    printf("\nPlayer Rankings:\n");
    show_rank(score_board);

    // Show the winner
    int winner = find_winner(score_board);
    printf("\nWinner is Player %d!\n", winner);
}

int main()
{
    f4();
    printf("\n");
    return 0;
}