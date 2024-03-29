#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char selection;
    int input, smallest, largest;
    vector<int> vec;
    double mean;
    do{
        cout << "P - Print numbers\n";
        cout << "A - Add a number\n";
        cout << "M - Display a mean of the numbers\n";
        cout << "S - Display the smallest number\n";
        cout << "L - Display the largest number\n";
        cout << "C - Clear the list\n";
        cout << "Q - Quit\n\n";
        cout << "Enter your choice: ";
        cin >> selection;

        if (selection == 'P' || selection == 'p')
        {
            if (vec.empty())
            {
                cout << "[] - the list is empty\n\n";
                continue;
            }
            else 
            {
                cout << "[";
                for (int x : vec)
                {
                    cout << " " << x << " ";
                }
                cout << "]\n";
                continue;
            }
        }

        if (selection == 'A' || selection == 'a')
        {
            cout << "Enter a number to add: ";
            cin >> input;
            vec.push_back(input);
            cout << input << " was added.\n";
            continue;
        }

        if (selection == 'M' || selection == 'm')
        {
            if (vec.empty())
            {
                cout << "Unable to calculate the mean - no data\n\n";
                continue;
            }
            else
            {
                for (int x : vec)
                {
                    mean += x;
                }
                mean = mean / vec.size();
                cout << "The mean is : " << mean << endl;
                continue;
            }
        }

        if (selection == 'S' || selection == 's')
        {
            if (vec.empty())
            {
                cout << "Unable to determine the smallest number - list is empty\n\n";
                continue;
            }
            else
            {
                smallest = vec.at(0);
                for (int x : vec)
                {
                    if (smallest > x)
                    {
                        smallest = x;
                    }
                }
                cout << "The smallest number is " << smallest << endl;
                continue;
            }
        }

        if (selection == 'L' || selection == 'l')
        {
            if (vec.empty())
            {
                cout << "Unable to determine the largest number - list is empty\n\n";
                continue;
            }
            else
            {
                largest = vec.at(0);
                for (int x : vec)
                {
                    if (largest < x)
                    {
                        largest = x;
                    }
                }
                cout << "The smallest number is " << largest << endl;
                continue;
            }
        }

        if (selection == 'C' || selection == 'c')
        {
            if (vec.empty())
            {
                cout << "There is nothing to clear - list is empty\n\n";
                continue;
            }
            else
            {
                vec.clear();
                cout << "List has been cleared\n";
                continue;
            }
        }

        if(selection != 'q' && selection != 'Q')
        {
            cout << "Unkown selection, please try again.\n";
        }

    }while (selection != 'q' && selection != 'Q');

    return 0;
}