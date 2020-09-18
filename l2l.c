#include <stdio.h>

#define RESET "\e[39;m"
#define GREEN "\e[38;32m"
#define CYAN "\e[38;96m"
#define RED "\e[38;31m"

void print_attendees(int*);
void add_person(const char*, int*);

int main(void) {
    printf("%sAttendees%s\n", GREEN, RESET);
    int number_of_people = 0;   
    // Add a person

    add_person("Josh", &number_of_people);

    // Print the number of attendees
    print_attendees(&number_of_people);
}

void add_person(const char* name, int* num_people) {
    // Add to the number of people
    (*num_people)++;
    printf("%i: %s%s%s\n",(int)*num_people, CYAN, name, RESET);
}

void print_attendees(int* maybe_number) {
    // Print the number of people as a whole number
    printf("\nTotal: %s%i%s People\n", RED, (int)*maybe_number, RESET);
}
