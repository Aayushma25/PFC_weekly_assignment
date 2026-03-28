#include <stdio.h>

int main() {
    const int SECONDS_PER_YEAR = 365 * 24 * 60 * 60;
    const int CURRENT_POPULATION = 312032486;

    const int BIRTH_INTERVAL = 7;
    const int DEATH_INTERVAL = 13;
    const int IMMIGRANT_INTERVAL = 45;

    double birthsPerYear = SECONDS_PER_YEAR / (double)BIRTH_INTERVAL;
    double deathsPerYear = SECONDS_PER_YEAR / (double)DEATH_INTERVAL;
    double immigrantsPerYear = SECONDS_PER_YEAR / (double)IMMIGRANT_INTERVAL;

    int population = CURRENT_POPULATION;

    printf("Current Population: %d\n\n", population);

    for (int year = 1; year <= 5; year++) {
        population = population + birthsPerYear - deathsPerYear + immigrantsPerYear;
        printf("Population after %d year(s): %d\n", year, population);
    }

    return 0;
}