// ADS Praktikum 1.1 Printer
// Name: Max Mustermann
#include "job.hpp"
#include "printer.h"

int main() {
    Printer printer(10);

    Job john("John", 10);  // 10 Seiten
    Job jerry("Jerry", 4);  // 4 Seiten
    Job jimmy("Jimmy", 5);  // 5 Seiten
    Job george("George", 2); // 2 Seiten
    Job bill("Bill", 11);   // 11 Seiten
    Job kenny("Kenny", 10); // 10 Seiten

    printer.addNewJob(john);
    printer.addNewJob(jerry);
    printer.addNewJob(jimmy);
    printer.addNewJob(george);
    printer.addNewJob(bill);
    printer.addNewJob(kenny);

    printer.startPrinting();

    return 0;
}