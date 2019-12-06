#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void splash_screen() {
    printf("                                                           \n                             @@@@@                         \n                          @@@*   @@@@                      \n                       @@@@         @@@@                   \n                    @@@@               @@@@                \n                 @@@@                     @@               \n                @@            @@          @@               \n                @@         @@@@.@@@@      @@               \n                @@      @@@@       @@@@   @@               \n                @@   @@@@             @@@@@@               \n                @@@@@@                   @@@@              \n               /@@@                       @@@@@@           \n             @@@@@                        @@   @@@         \n          @@@(  @@                        @@     @@        \n        @@@     @@                        @@     @@        \n        @@      @@                        @@     @@        \n        @@      @@                        @@   #@@&        \n        @@      @@@                       @@@@@@           \n        @@        @@@@                   @@@@              \n         @@@         @@@@             @@@@@@               \n           @@@@         @@@@       @@@@   @@               \n              @@@@         @@@@@@@@       @@               \n                 @@@@                     @@               \n                    @@@@               @@@@                \n                       @@@@         @@@@                   \n                          @@@.   @@@@                      \n                             @@@@@                         \n                                                           \n");
    Sleep(2000);
    system("cls");
}

void goodbye() {
    system("cls");
    printf("\n\nThank you for playing, see you next time!\n\n");
    Sleep(2000);
}

int main()
{
    int user_choice = 4, computer_choice, user_score = 0, computer_score = 0, rounds = 0;
    splash_screen();
    srand(time(NULL));
    printf("Select your weapon or exit by entering a correct number:\n[0] Exit\n[1] Rock\n[2] Paper\n[3] Scissors\n");
    fflush("stdin");
    scanf("%d", &user_choice);
    while (user_choice != 0) {
        rounds++;
        system("cls");
        computer_choice = rand() % 3 + 1;
        switch(user_choice) {
            case 1:
                printf("You: ROCK");
                break;
            case 2:
                printf("You: PAPER");
                break;
            case 3:
                printf("You: SCISSORS");
                break;
        }
        switch (computer_choice) {
            case 1:
                printf("\nComputer: ROCK");
                break;
            case 2:
                printf("\nComputer: PAPER");
                break;
            case 3:
                printf("\nComputer: SCISSORS");
                break;
        }
        if (user_choice - 1 == computer_choice || (user_choice - 1 == 0 && computer_choice == 3)) {
            user_score++;
            printf("\n\n            You win!");
        }
        else if (computer_choice - 1 == user_choice || (computer_choice - 1 == 0 && user_choice == 3)) {
            computer_score++;
            printf("\n\n            You loose!");
        }
        else {
            printf("\n\n            Draw!");
        }
        printf("\n\nRounds: %d                  Score (you : computer): %d : %d\n\n", rounds, user_score, computer_score);
        printf("\n\nSelect your weapon or exit by entering a correct number:\n[0] Exit\n[1] Rock\n[2] Paper\n[3] Scissors\n");
        fflush("stdin");
        scanf("%d", &user_choice);
    }
    goodbye();
}
