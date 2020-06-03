#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'addEtf' function below.
 *
 * The function accepts following parameters:
 *  1. STRING name
 *  2. STRING currency
 *  3. 2D_STRING_ARRAY components
 */

void addEtf(string name, string currency, vector<vector<string>> components) {

}

/*
 * Complete the 'playback' function below.
 *
 * The function accepts 2D_STRING_ARRAY messages as parameter.
 */

void playback(vector<vector<string>> messages) {

}

int main()
{
    string NumberOfETF_temp;
    getline(cin, NumberOfETF_temp);

    int NumberOfETF = stoi(ltrim(rtrim(NumberOfETF_temp)));

    for (int NumberOfETF_itr = 0; NumberOfETF_itr < NumberOfETF; NumberOfETF_itr++) {
        string ETFSymbol;
        getline(cin, ETFSymbol);

        string ETFCurrency;
        getline(cin, ETFCurrency);

        string NumberOfListingInETF_temp;
        getline(cin, NumberOfListingInETF_temp);

        int NumberOfListingInETF = stoi(ltrim(rtrim(NumberOfListingInETF_temp)));

        vector<vector<string>> listings(NumberOfListingInETF);

        for (int i = 0; i < NumberOfListingInETF; i++) {
            listings[i].resize(3);

            string listings_row_temp_temp;
            getline(cin, listings_row_temp_temp);

            vector<string> listings_row_temp = split(rtrim(listings_row_temp_temp));

            for (int j = 0; j < 3; j++) {
                string listings_row_item = listings_row_temp[j];

                listings[i][j] = listings_row_item;
            }
        }

        addEtf(ETFSymbol, ETFCurrency, listings);
    }

    string NumberOfMessages_temp;
    getline(cin, NumberOfMessages_temp);

    int NumberOfMessages = stoi(ltrim(rtrim(NumberOfMessages_temp)));

    vector<vector<string>> messages(NumberOfMessages);

    for (int i = 0; i < NumberOfMessages; i++) {
        messages[i].resize(5);

        string messages_row_temp_temp;
        getline(cin, messages_row_temp_temp);

        vector<string> messages_row_temp = split(rtrim(messages_row_temp_temp));

        for (int j = 0; j < 5; j++) {
            string messages_row_item = messages_row_temp[j];

            messages[i][j] = messages_row_item;
        }
    }

    playback(messages);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
