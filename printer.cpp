// ADS Praktikum 1.1 Printer
// Name: Max Mustermann
#include <iostream>
#include <queue>
#include "job.hpp"
#include "printer.h"

int Job::count = 0;

/**
 * Konstruktor der Printer-Klasse
 *
 * Dieser Konstruktor initialisiert die maximale Anzahl an Druckaufträgen,
 * die in der Warteschlange gespeichert werden können.
 *
 * @param size Die maximale Anzahl der Druckaufträge, die in die Warteschlange aufgenommen werden können.
 */
Printer::Printer(int size)
{
    queueSize = size;
}

/**
 * Fügt einen neuen Druckauftrag zur Warteschlange hinzu, falls noch Platz vorhanden ist.
 * Überprüft vor dem Hinzufügen, ob die Warteschlange bereits voll ist.
 *
 * @param job Ein Druckauftrag, der zur Warteschlange hinzugefügt werden soll.
 * @return true, wenn der Auftrag erfolgreich hinzugefügt wurde, andernfalls false, wenn die Warteschlange voll ist.
 */
bool Printer::addNewJob(const Job& job)
{

    if (jobs.size() == queueSize)
    {
        return false;
    }


    std::cout << "Added job to the queue: " << job;
    jobs.push(job);
    return true;
}

/**
 * Beginnt mit der Verarbeitung der Druckaufträge in der Warteschlange.
 * Der Auftrag mit der kürzesten Druckzeit wird zuerst verarbeitet.
 * Die Aufträge werden nacheinander ausgegeben und anschließend aus der Warteschlange entfernt.
 */
void Printer::startPrinting()
{
    while (!jobs.empty())
    {
        std::cout << "Processing job: " << jobs.top();
        jobs.pop();
    }
}
