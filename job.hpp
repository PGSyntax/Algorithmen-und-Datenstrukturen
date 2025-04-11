# pragma once
#include <iostream>
/**
    * Klasse zur Darstellung eines Druckauftrags
    *
    * @param id eindeutige eines Druckauftrags
    * @param user Benutzername, der den Auftrag gegeben hat
    * @param time Dauer des Druckauftrages
    * @param count statische Z�hlvariable zur Definition der id
    *
    */
class Job
{
    int id;
    std::string user;
    int time;
    static int count;
public:
    Job(const std::string& u, int t) : user(u), time(t), id(++count)
    {
    }
    friend std::ostream& operator<<(std::ostream& os, const Job& j)
    {
        os << "id: " << j.id << ", user: " << j.user << ", time: " << j.time << " seconds" << std::endl;
        return os;
    }
    /**
    * Operator-Funktion zum Vergleichen zweier Druckauftr�ge in der Priority-Queue
    * Der Operator gibt ein invertiertes Ergebnis, damit die Priority-Queue das kleinste Element nach vorne stellt.
    *
    * @param other zweiter Druckauftrag mit dem verglichen wird
    *
    */
    bool operator<(const Job& other) const
    {

        return this->time > other.time;
    }
};