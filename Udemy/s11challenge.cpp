#include <iostream>
#include <vector>
#include <ctype.h>
using namespace std;

//Prototypes for displaying the menu and getting user selection
void display_menu();
char get_selection();

//Prototypes handling menu functions
void handle_display(const vector<int> &numbers);
void handle_add(vector<int> &numbers);
void handle_mean(const vector<int> &numbers);
void handle_smallest(const vector<int> &numbers);
void handle_largest(const vector<int> &numbers);
void handle_quit();
void handle_unknown();

int main()
{
    vector <int> numbers;   //our list of numbers
    char selection{};

    do {
        display_menu();
        selection = get_selection();
        switch (selection){
            case 'P':
                handle_display(numbers);
                break;
            case 'A':
                handle_add(numbers);
                break;
            case 'M':
                handle_mean(numbers);
                break;
            case 'S':
                handle_smallest(numbers);
                break;
            case 'L':
                handle_largest(numbers);
                break;
            case 'Q':
                handle_quit();
                break;
            default:
                handle_unknown();

        }
    }   while (selection != 'Q');

    return 0;
}

//Function to display the menu to the console
void display_menu()
{
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
}

//This function simply reads a character selection from stdin and returns it as upper case
char get_selection()
{
    char selection{};
    cin >> selection;
    return toupper(selection);
}

//This function displays contents of the list
void handle_display(const vector<int> &numbers)
{
    if (numbers.empty())
            {
                cout << "[] - the list is empty\n\n";
            }
            else 
            {
                cout << "[";
                for (int x : numbers)
                {
                    cout << " " << x << " ";
                }
                cout << "]\n";
            }
}

//This function adds an int to the back of the vector of ints passed to by reference
void handle_add(vector<int> &numbers)
{
    int add{};
    cout << "\nPlease type a number to add: ";
    cin >> add;
    numbers.push_back(add);
    cout << endl << add << " was added.\n";
}

//This function calculates mean and prints it
void handle_mean(const vector<int> &numbers)
{
    double mean{};
    if (numbers.empty())
        {
            cout << "Unable to calculate the mean - no data\n\n";
        }
        else
        {
            for (int x : numbers)
            {
                mean += x;
            }
            mean = mean / numbers.size();
            cout << "The mean is : " << mean << endl;
            }
}

//This function sorts to find the smallest number and prints it
void handle_smallest(const vector<int> &numbers)
{
    int smallest;
    if (numbers.empty())
        {
            cout << "Unable to determine the smallest number - list is empty\n\n";
        }
        else
        {
            smallest = numbers.at(0);
            for (int x : numbers)
            {
                if (smallest > x)
                {
                    smallest = x;
                }
            }
            cout << "The smallest number is " << smallest << endl;
            }
}

//This functions sorts for the largest number and displays it
void handle_largest(const vector<int> &numbers)
{
    int largest;
    if (numbers.empty())
        {
            cout << "Unable to determine the largest number - list is empty\n\n";
        }
        else
        {
            largest = numbers.at(0);
                for (int x : numbers)
                {
                    if (largest < x)
                    {
                        largest = x;
                    }
                }
                cout << "The smallest number is " << largest << endl;
        }
}

//This function handles quits
void handle_quit()
{
    cout << "Goodbye!\n";
}

//This function handles unknown selections
void handle_unknown()
{
    cout << "Unknown selection, please enter a new one: ";
}