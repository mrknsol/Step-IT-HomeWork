#include <iostream>
#include <regex>

using namespace std;

class Registration {
public:
    Registration(string& login, string& email, string& password) {
        this->login = login;
        this->email = email;
        this->password = password;

        regex emailRegex(R"(([a-zA-Z0-9](\.|_)?)+([a-zA-Z0-9])+@([a-zA-Z0-9])+((\.)[a-zA-Z]{2,})+)");
        regex loginRegex("^([a-zA-Z0-9])+([\.-_]?)+([a-zA-Z0-9])+?$");
        regex passwordRegex("^([a-zA-Z0-9])+([\.-_]?)+([a-zA-Z0-9])?$");

        if (!regex_match(email, emailRegex)) {
            throw invalid_argument("Invalid email");
        }
        if (!regex_match(login, loginRegex)) {
            throw invalid_argument("Login may contain a-z,A-Z,0-9,.-_!");
        }
        if (!regex_match(password, passwordRegex)) {
            throw invalid_argument("Password may contain a-z,A-Z,0-9,.-_");
        }

    }
    string getLogin() {
        return login;
    }
    string getEmail() {
        return email;
    }
    string getPassword() {
        return password;
    }
private:
    string login;
    string email;
    string password;
};


int main() {

    string login, email, password;
    bool confirm = true;




    while (confirm)
    {
        try {
            cout << "enter email: ";
            cin >> email;

            cout << "enter login: ";
            cin >> login;

            cout << "Enter password: ";
            cin >> password;

            Registration registration(login, email, password);
            cout << registration.getLogin() << endl;
            cout << registration.getEmail() << endl;
            cout << registration.getPassword() << endl;
            confirm = false;
        }
        catch (exception& e) {
            cout << e.what() << endl;

        }
    }

    return 0;
}