#include <stdio.h>

int main()
{
    // initialize variables
    char input;
    int ans1, ans2, ans3, ans4, ans5;
    int points = 0;
   
    
    // show title
       // function: printf
    printf("+++++++++++++++++++++++++++++++\n");
    printf("Guess the Childhood TV Show\n");
    printf("+++++++++++++++++++++++++++++++\n");
    
    
    // get user input
       // functions: printf, scanf
    printf("Press 's' to start\n");
    printf("Press 'q' to quit\n\n");    
    
    scanf("%c", &input);
    
    // process data
       // if user inputs s 
       // start game
    if( input == 's' || input == 'S' )
    {
        printf("The game has started.\n");
    }
    else if( input == 'q' || input == 'Q' )
    {
        // print if user has quit the game
        printf("Game Over.\n\n");
    }
    else
    {
        printf("Invalid\n\n");
    }
     
    if( input == 's' || input == 'S' )
    {
        printf("Which TV show is this theme song lyric from?\n");
        printf("'Somehow the world will change for me.'\n");
        
        printf("1. Yo Gabba Gabba\n");
        printf("2. Full House\n");
        printf("3. ICarly\n");
        
        printf("Enter an answer: ");
        scanf("%d", &ans1);
        
        if( ans1 == 3 )
        {
            // print correct answer
            printf("Correct!\n");
            points+=5;
            printf("Your score is %d points\n\n", points);
        }
        else
        {
            printf("Wrong answer!\n");
            printf("Your score is %d points\n\n", points);
        }
        
        // question 2
        printf("Which TV show is this theme song lyric from?\n");
        printf("'Well I never thought that it'd be so simple but\n");
        printf("I found a way, I found a way.'\n");
        
        printf("1. Drake and Josh\n");
        printf("2. Jessie\n");
        printf("3. Pair of Kings\n");
        
        printf("Enter an answer: ");
        scanf("%d", &ans2);
        
        if( ans2 == 1 )
        {
            // print correct answer
            printf("Correct!\n");
            points+=5;
            printf("Your score is %d points\n\n", points);
        }
        else
        {
            printf("Wrong answer!\n");
            printf("Your score is %d points\n\n", points);
        }
        
        // question 3
        printf("Which TV show is this theme song lyric from?\n");
        printf("'You take the moon and you take the sun.'\n");
        
        printf("1. The Suite Life on Deck\n");
        printf("2. Chowder\n");
        printf("3. Backyardigans\n");
        
        printf("Enter an answer: ");
        scanf("%d", &ans3);
        
        if( ans3 == 2 )
        {
            // print correct answer
            printf("Correct!\n\n");
            points+=5;
            printf("Your score is %d points\n\n", points);
        }
        else
        {
            printf("Wrong answer!\n");
            printf("Your score is %d points\n\n", points);
        }
        
        // question 4
        printf("Which TV show is this theme song lyric from?\n");
        printf("'Obtuse,rubber goose, green moose, guava juice,Giant snake,\n");
        printf("birthday cake, large fries, chocolate shake!'\n");
        printf("1. Hey Arnold\n");
        printf("2. Dora\n");
        printf("3. Fairly Odd Parents\n");
        
        printf("Enter an answer: ");
        scanf("%d", &ans4);
        
        if( ans4 == 3 )
        {
            // print correct answer
            printf("Correct!\n");
            points+=5;
            printf("Your score is %d points\n\n", points);
        }
        else
        {
            printf("Wrong answer!\n");
            printf("Your score is %d points\n\n", points);
        }
        
        // question 5
        printf("Which TV show is this theme opening from?\n");
        printf("'Water. Earth. Fire. Air.'\n");
        printf("1. Avatar\n");
        printf("2. Clifford\n");
        printf("3. Ducktales\n");
        
        printf("Enter an answer: ");
        scanf("%d", &ans5);
        
        if( ans5 == 1 )
        {
            // print correct answer
            printf("Correct!\n");
            points+=5;
            printf("Your score is %d points\n\n", points);
        }
        else
        {
            printf("Wrong answer!\n");
            printf("Your score %d points\n\n", points);
        }
        
        // display data 
         // how many points did you score
       if( points <= 5 )
       {
           printf("Your childhood was disappointing.");
       }
       else if( points <= 6 || points == 10 )
       {
           printf("Your childhood was alright.");
       }
       else if( points <=11 || points == 20 )
       {
           printf("You're a real millenial!");
       }
       else 
       {
           printf("Impossible...");
       }
        
    }
    // return success
    return 0;
}