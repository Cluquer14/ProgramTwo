//
//  main.cpp
//  cs250_ProgramTwo
//
//  Created by Charlotte Luquer on 10/14/24.
//
//  Description: Uses 3 classes to help manage data on athletes at a University.
//

#include <iostream>
#include <string>
using namespace std;

class Athlete {
protected:
    int m_height;
    int m_weight;
    char m_gender;

public:
    // Default constructor
    Athlete() : m_height(0), m_weight(0), m_gender('U') {}

    // Parameterized constructor
    Athlete(int height, int weight, char gender) : m_height(height), m_weight(weight), m_gender(gender) {}

    // Getters and Setters
    int getHeight() {
        return m_height;
    }

    void setHeight(int height) {
        m_height = height;
    }

    int getWeight() {
        return m_weight;
    }

    void setWeight(int weight) {
        m_weight = weight;
    }

    char getGender() {
        return m_gender;
    }

    void setGender(char gender) {
        m_gender = gender;
    }
};

class Volleyball : public Athlete {
private:
    string m_position;
    float m_reactionTime;

public:
    Volleyball() : m_position("Unknown"), m_reactionTime(0.0f) {}
    Volleyball(string position, float reactionTime) : m_position(position), m_reactionTime(reactionTime) {}

    string getPosition() {
        return m_position;
    }
    void setPosition(string position) {
        m_position = position;
    }
    float getReactionTime() {
        return m_reactionTime;
    }
    void setReactionTime(float reactionTime) {
        m_reactionTime = reactionTime;
    }
};

class Tennis : public Athlete {
private:
    int m_serveSpeed;
    bool m_serveAndVolley;

public:
    Tennis() : m_serveSpeed(0), m_serveAndVolley(false) {}
    Tennis(int serveSpeed, bool serveAndVolley) : m_serveSpeed(serveSpeed), m_serveAndVolley(serveAndVolley) {}

    int getServeSpeed() {
        return m_serveSpeed;
    }
    void setServeSpeed(int serveSpeed) {
        m_serveSpeed = serveSpeed;
    }
    bool getServeAndVolley() {
        return m_serveAndVolley;
    }
    void setServeAndVolley(bool serveAndVolley) {
        m_serveAndVolley = serveAndVolley;
    }
};

int main() {
    Athlete sport(72, 140, 'M');
    cout << "Athlete: " << sport.getHeight() << " "
         << sport.getWeight() << " "
         << sport.getGender() << endl;

    Tennis martina;
    martina.setServeSpeed(100);
    martina.setGender('F');
    Tennis bjorn(150, false);
    bjorn.setGender('M');
    if (martina.getGender() == 'F') {
        cout << "Martina serve speed: " << martina.getServeSpeed() << endl;
    }

    Volleyball kerri;
    kerri.setGender('F');
    kerri.setPosition("Opposite Hitter");
    Volleyball giba("Outside Hitter", 23.2f);
    giba.setGender('M');
    if (kerri.getGender() == 'F') {
        cout << "Kerri is an " << kerri.getPosition() << endl;
    }

    return 0;
}
