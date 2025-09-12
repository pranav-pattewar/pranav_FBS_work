// mini project - Player Management System
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store player details
struct Player {
    int jerseyNo;
    char name[50];
    int runs;
    int wickets;
    int matches;
};

struct Player *players; // dynamic array of players
int count;              // number of players

// Function declarations
void showAll();
void addPlayer();
void removePlayer();
void searchPlayer();
void updatePlayer();
void sortByRuns();
void sortByWickets();
void top3Runs();
void top3Wickets();

int main()
{
    // allocate memory for 5 players initially
    count = 5;
    players = calloc(count, sizeof(struct Player));
    if (players == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initial players data
    players[0] = (struct Player){7, "MS Dhoni", 10500, 1, 350};
    players[1] = (struct Player){18, "Virat Kohli", 13000, 4, 280};
    players[2] = (struct Player){45, "Rohit Sharma", 9800, 8, 250};
    players[3] = (struct Player){12, "Yuvraj Singh", 8700, 111, 300};
    players[4] = (struct Player){33, "Hardik Pandya", 3000, 63, 120};

    printf("Initial Players:\n");
    showAll();

    int ch;
    while (1) {
        // Menu with all options
        printf("\n1.Add  2.Remove  3.Search  4.Update  5.Show All  6.Sort by Runs  7.Sort by Wickets  8.Top 3 Runs  9.Top 3 Wickets  0.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        if (ch == 1) addPlayer();
        else if (ch == 2) removePlayer();
        else if (ch == 3) searchPlayer();
        else if (ch == 4) updatePlayer();
        else if (ch == 5) showAll();
        else if (ch == 6) sortByRuns();
        else if (ch == 7) sortByWickets();
        else if (ch == 8) top3Runs();
        else if (ch == 9) top3Wickets();
        else if (ch == 0) break;
        else printf("Wrong choice\n");
    }

    free(players); // free memory before exit
    return 0;
}

// Show all players
void showAll()
{
    if (count == 0) {
        printf("No players found\n");
        return;
    }
    printf("\nTotal Players: %d\n", count);
    for (int i = 0; i < count; i++) {
        printf("Jersey No: %d, Name: %s, Runs: %d, Wickets: %d, Matches: %d\n",
               players[i].jerseyNo, players[i].name,
               players[i].runs, players[i].wickets, players[i].matches);
    }
}

// Add a new player at the end of array
void addPlayer()
{
    players = realloc(players, (count + 1) * sizeof(struct Player));
    if (players == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    printf("Enter Jersey No: ");
    scanf("%d", &players[count].jerseyNo);
    printf("Enter Name: ");
    getchar(); // clear newline
    fgets(players[count].name, sizeof(players[count].name), stdin);
    players[count].name[strcspn(players[count].name, "\n")] = 0; // remove newline
    printf("Enter Runs: ");
    scanf("%d", &players[count].runs);
    printf("Enter Wickets: ");
    scanf("%d", &players[count].wickets);
    printf("Enter Matches: ");
    scanf("%d", &players[count].matches);
    count++;
    printf("Player added successfully!\n");
}

// Remove a player by jersey number
void removePlayer()
{
    int jno, i, j, found = 0;
    printf("Enter Jersey No to remove: ");
    scanf("%d", &jno);
    for (i = 0; i < count; i++) {
        if (players[i].jerseyNo == jno) {
            // shift all next players one step back
            for (j = i; j < count - 1; j++) {
                players[j] = players[j + 1];
            }
            count--;
            players = realloc(players, count * sizeof(struct Player));
            if (players == NULL && count > 0) {
                printf("Memory reallocation failed\n");
                exit(1);
            }
            found = 1;
            printf("Player removed successfully!\n");
            break;
        }
    }
    if (!found) printf("Player not found\n");
}

// Search player by jersey or name
void searchPlayer()
{
    int opt;
    printf("Search by 1.Jersey  2.Name: ");
    scanf("%d", &opt);
    if (opt == 1) {
        int jno;
        printf("Enter Jersey: ");
        scanf("%d", &jno);
        for (int i = 0; i < count; i++) {
            if (players[i].jerseyNo == jno) {
                printf("Jersey No: %d, Name: %s, Runs: %d, Wickets: %d, Matches: %d\n",
                       players[i].jerseyNo, players[i].name,
                       players[i].runs, players[i].wickets, players[i].matches);
                return;
            }
        }
        printf("Player not found\n");
    } 
    else if (opt == 2) {
        char key[50];
        int f = 0;
        printf("Enter Name part: ");
        getchar(); // clear newline
        fgets(key, sizeof(key), stdin);
        key[strcspn(key, "\n")] = 0; // remove newline
        for (int i = 0; i < count; i++) {
            if (strstr(players[i].name, key) != NULL) {
                printf("Jersey No: %d, Name: %s, Runs: %d, Wickets: %d, Matches: %d\n",
                       players[i].jerseyNo, players[i].name,
                       players[i].runs, players[i].wickets, players[i].matches);
                f = 1;
            }
        }
        if (!f) printf("No match found\n");
    }
}

// Update player stats (runs, wickets, matches)
void updatePlayer()
{
    int jno;
    printf("Enter Jersey to update: ");
    scanf("%d", &jno);
    for (int i = 0; i < count; i++) {
        if (players[i].jerseyNo == jno) {
            printf("Enter new Runs: ");
            scanf("%d", &players[i].runs);
            printf("Enter new Wickets: ");
            scanf("%d", &players[i].wickets);
            printf("Enter new Matches: ");
            scanf("%d", &players[i].matches);
            printf("Player updated successfully!\n");
            return;
        }
    }
    printf("Player not found\n");
}

// Sort players by runs in ascending order (bubble sort)
void sortByRuns() {
    int i, j;
    struct Player temp;

    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - i - 1; j++) {
            if (players[j].runs > players[j + 1].runs) { // swap if bigger
                temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }

    printf("\nPlayers sorted by Runs (ascending):\n");
    showAll();
}

// Sort players by wickets in ascending order (bubble sort)
void sortByWickets() {
    int i, j;
    struct Player temp;

    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - i - 1; j++) {
            if (players[j].wickets > players[j + 1].wickets) { // swap if bigger
                temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }

    printf("\nPlayers sorted by Wickets (ascending):\n");
    showAll();
}

// Show top 3 players by runs (after sorting in descending order)
void top3Runs() {
    int i, j;
    struct Player temp;

    // bubble sort by runs (descending)
    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - i - 1; j++) {
            if (players[j].runs < players[j + 1].runs) {
                temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }

    printf("\nTop 3 Players by Runs:\n");
    for (i = 0; i < count && i < 3; i++) {
        printf("%s - %d Runs\n", players[i].name, players[i].runs);
    }
}

// Show top 3 players by wickets (after sorting in descending order)
void top3Wickets() {
    int i, j;
    struct Player temp;

    // bubble sort by wickets (descending)
    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - i - 1; j++) {
            if (players[j].wickets < players[j + 1].wickets) {
                temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }

    printf("\nTop 3 Players by Wickets:\n");
    for (i = 0; i < count && i < 3; i++) {
        printf("%s - %d Wickets\n", players[i].name, players[i].wickets);
    }
}
