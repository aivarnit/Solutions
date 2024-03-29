#include <iostream>
#include <string>
using namespace std;

int main()
{
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
    string message;

    cout << "Please enter a message to encrypt: ";
    getline(cin,message);
    cout << message << endl;
    cout << "\nEncrypting message ... \n";
    string encrypted_message{};

    for (int x = 0; x < message.size();x++)
    {
        if (isalpha(message[x]))
        {
        for (int i = 0; i < alphabet.size();i++)
        {
            if (message[x] == alphabet[i])
            {
                encrypted_message += key[i];
                continue;
            }
        }
        } else
        {
            encrypted_message += message[x];
        }
    }

    cout << "Encrypted message is : " << encrypted_message;

    string decrpyted_message {};
    for (int x = 0; x < encrypted_message.size();x++)
    {
        if (isalpha(encrypted_message[x]))
        {
        for (int i = 0; i < alphabet.size();i++)
        {
            if (encrypted_message[x] == alphabet[i])
            {
                decrpyted_message += key[i];
                continue;
            }
        }
        } else
        {
            decrpyted_message += message[x];
        }
    }

    cout << "\nDecrypting message ...\n";
    cout << decrpyted_message << endl;

    return 0;
}