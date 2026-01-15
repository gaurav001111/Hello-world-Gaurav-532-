#include <stdio.h>
int main() {
    printf(" University Student & Event Management System\n");
    return 0;
/*Problem Statement: University Student & Event Management System
The university wants a software system to manage students, their participation in various events, and their performance/results in a single program. The system should be able to:
Register Students
Each student has: roll number, name, age, and contact info (phone, email).
Students can participate in multiple events (cultural, sports, technical).
(Hint: Think about whether to use structs, arrays, or nested structs to store all info.)
Store Event Information
Each event has a name, type, maximum marks, and score obtained by each participant.
(Hint: Should each event have a separate array, or should it be part of the student record? Could enums help for event type?)
Record Performance
For each student, track marks for every event.
Students may only have one type of score per event (either sports score OR cultural score).
(Hint: Consider union to save memory if only one score per event is stored.)
d)  Operations to Perform
Add new students and event details.
Compute total marks, average, and grade for each student.
Rank students by total marks.
Search for a student by roll number.
Print a leaderboard with student names, total marks, and grades.
(Hint: Functions for modularity; arrays for multiple students; loops for traversal.)
e)  String Operations
Names and event names should allow operations like concatenation, reverse, comparison.
(Hint: Use string functions or character arrays.)
f)  Dynamic Decisions
Decide how to organize students and event data efficiently.
Decide which data types to use for marks, scores, and grades.
Decide where to use typedef, enum, or union.*/