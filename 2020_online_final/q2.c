#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N_MOVIES 10
#define MAX_TITLE 100

//add your functions and struct definition here.

typedef struct movie_s
{
    char title[MAX_TITLE];
    int purchases;
    double rating;
}Movie;

int movie_count = 2;


int get_purchases(Movie movies[N_MOVIES], char movie_title[MAX_TITLE])
{
    int result = -1;
    for (int i = 0; i < N_MOVIES; ++i)
    {
        int cmp = strcmp(movies[i].title, movie_title);
        if (cmp == 0)
        {
            result = movies[i].purchases;
            break;
        }
    }

    return result;
}


int compute_rating(Movie movies[N_MOVIES], char movie_title[MAX_TITLE], int movie_rating)
{
    int result = 0;
    int i_count = 0;

    // find movie
    for (int i = 0; i < N_MOVIES; ++i)
    {
        int cmp = strcmp(movies[i].title, movie_title);
        if (cmp == 0)
        {
            double total = movies[i].rating * (double)movies[i].purchases;
            total = total + (double)movie_rating;
            movies[i].purchases ++;
            double res = total / (double)movies[i].purchases;
            movies[i].rating = res;
            result = (int) res;

            i_count = i;

            break;
        }
    }

    // calc new rating

    // update rqating

    // increment purchases 1
    printf("The movie %s is updated. The number of purchases is %d. The rating is updated to %.2f.\n", movies[i_count].title, movies[i_count].purchases, movies[i_count].rating);


    return result;
}


int add_movie(Movie movies[N_MOVIES], char movie_title[MAX_TITLE], int movie_rating)
{
    int result = 1;

    //add movie

    strcat(movies[movie_count].title, movie_title);
    movies[movie_count].purchases = 1;
    movies[movie_count].purchases = movie_rating;

    //set purchase 1

    printf("The movie %s is added to the database with a rating of %.2f.\n", movies[movie_count].title, movies[movie_count].rating);

    movie_count ++;

    return result;
}


int main()
{
	//there are initially two elements in the array.
    Movie movies[N_MOVIES] = { {"Spartacus", 9, 4.0}, {"Ben Hur", 5, 1.8}};

	char movie_title[MAX_TITLE];
    int movie_rating, menu_selection, result;
    char input;

    for (int i = 2; i < N_MOVIES; i++)
        movies[i].purchases = -1;

    printf("Welcome to the movie database.\n");
    do {
        printf("Enter your request (1 for getting the purchases of a movie, 2 for updating the rating of a movie, 3 for exit):");
        scanf("%d", &menu_selection);

        if (menu_selection == 1) {
            printf("Enter the movie title:");
            scanf(" %[^\n]s", movie_title);

            result = get_purchases(movies, movie_title);
            if (result != -1) {
                printf("The movie %s has been purchased %d times.\n", movie_title, result);
            } else {
                printf("The movie %s could not be found in the database.\n", movie_title);
            }
        }

        else if (menu_selection == 2) {
            printf("Enter the movie title:");
            scanf(" %[^\n]s", movie_title);

            printf("Enter the movie rating (out of 5):");
            scanf("%d", &movie_rating);

            while (movie_rating < 0 || movie_rating > 5) {
                printf("Enter the movie rating (out of 5):");
                scanf("%d", &movie_rating);
            }

            result = compute_rating(movies, movie_title, movie_rating);
            if (result == 0) {
                printf("The movie %s could not be found in the database. Would you like to add this movie (Y/N):", movie_title);
                scanf(" %c", &input);

                while (input != 'Y' && input != 'N') {
                    printf("Please enter a valid input (Y/N):");
                    scanf(" %c", &input);
                }

                if (input == 'Y') {
                    result = add_movie(movies, movie_title, movie_rating);
                    if (result == 1) {
                        printf("The movie %s is added to the database with a rating of %d.\n", movie_title, movie_rating);
                    } else {
                        printf("The movie %s could not be added to the database.\n", movie_title);
                    }
                }
            }
        }
    } while (menu_selection != 3);

    return EXIT_SUCCESS;
}
