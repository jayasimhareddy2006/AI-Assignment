#include <stdio.h>
#include <string.h>

int main()
{
    char question[100];
    char human_response[100];
    char machine_response[100];

    printf("TURING TEST SIMULATION\n");
    printf("----------------------\n");

    printf("Judge: Enter a question:\n");
    fgets(question, sizeof(question), stdin);

    printf("\nHuman participant answer:\n");
    fgets(human_response, sizeof(human_response), stdin);

    printf("\nMachine (AI) answer:\n");
    fgets(machine_response, sizeof(machine_response), stdin);

    printf("\nJudge analyzing responses...\n");

    if(strcmp(human_response, machine_response) == 0)
    {
        printf("Judge cannot distinguish between Human and Machine.\n");
        printf("Machine PASSES the Turing Test.\n");
    }
    else
    {
        printf("Judge detects difference.\n");
        printf("Machine FAILS the Turing Test.\n");
    }

    return 0;
}
