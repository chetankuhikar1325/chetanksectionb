#include <stdio.h>
struct Player {
char name[50];
int runs;
int balls;
};
int main() {
struct Player players[11];
int num_players;
printf("Enter number of players (maximum 11): ");
scanf("%d", &num_players);
if (num_players > 11 || num_players < 1) {
printf("Invalid number of players. Exiting...\n");
return 1;
}
for (int i = 0; i < num_players; i++) {
printf("\nEnter name of player %d: ", i + 1);
scanf("%s", players[i].name);
printf("Enter runs scored by %s: ", players[i].name);
scanf("%d", &players[i].runs);
printf("Enter balls faced by %s: ", players[i].name);
scanf("%d", &players[i].balls);
}
printf("\n\nCricket Score Sheet\n");
printf("-----------------------------------------\n");
printf("Player\t\tRuns\tBalls Faced\n");
printf("-----------------------------------------\n");
for (int i = 0; i < num_players; i++) {
printf("%s\t\t%d\t%d\n", players[i].name, players[i].runs, players[i].balls);
}
printf("-----------------------------------------\n");
return 0;
}
