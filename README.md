General Instructions for GitHub Classroom Assignment
1. Assignment Type
o This is an individual assignment.
o Each student must work independently.
o Any form of code sharing or plagiarism will be treated as malpractice.
2. Submission Platform
o The assignment must be submitted only through GitHub Classroom.
o Students must accept the assignment using the GitHub Classroom invite link
provided.
o All coding work must be committed and pushed to the assigned GitHub
repository.
3. Programming and File Naming
o Use the specified programming language as mentioned in the assignment.
o File name must be exactly as instructed (e.g., priority.c).
o Do not add extra files unless explicitly asked.
4. Autograding
o The assignment will be evaluated using an autograder.
o There are 5 test cases:
▪ Some test cases are visible
▪ Some test cases are hidden
o To receive full marks, your program must pass all 5 test cases.
o Output format must match exactly asspecified (spacing, capitalization,
decimals).
5. Coding Guidelines
o Do not include unnecessary printstatements(e.g., promptslike “Enter
number of processes”).
o Follow the exact input and output format given.
o Ensure the program compiles without errors or warnings.
6. Commit and Push
o Commit your code with meaningful commit messages.
o Push the final version before the deadline.
o Late submissions may not be evaluated by the autograder.
7. Report Submission
o In addition to GitHub submission, a hardcopy report must be submitted in
person.
o The report should include:
▪ Problem statement
▪ Algorithm
▪ Source code
▪ Sample input and output
▪ Screenshot of GitHub submission (optional)
8. Evaluation Criteria
o Autograder score (based on 5 test cases)
o Code correctness and efficiency
o Adherence to instructions and format
o Report completeness
9. Academic Integrity
o The use of copied code from peers, seniors, or online sources without
understanding is strictly prohibited.
o Similarsubmissions will be penalized as per institutional policy.
Assignment Questions

Write a C program preemptivepriority.c that implements preemptive priority CPU scheduling
(low value has higher priority).

Requirements
Read the number of processes.
Read for each process:
● Process ID (PID)
● Arrival Time
● Burst Time
● Priority (lower value ⇒ higher priority)
Implement Preemptive Priority CPU Scheduling.
Schedule processes based on lowest priority among arrived processes.
Compute:
● Waiting Time (WT)
● Turnaround Time (TAT)
● Average Waiting Time
● Average Turnaround Time
Display the output in the exact specified format.
Waiting Time: P1 WT P2 WT ...
Turnaround Time: P1 TAT P2 TAT ...
Average Waiting Time: X.XX
Average Turnaround Time: Y.YY

Autograding Levels (5 Tests)
Leve
l
Description
Point
s
Visible?
1 Basic 10 Yes
2 Standard 15 Yes
3
Sorting
needed
20 Yes
4 Large input 25 Hidden
5 Edge cases 30 Hidden
Total: 100 points
Input Format
n
PID Arrival_Time Burst_Time Priority

Sample Input

5
P1 0 5 2
P2 0 4 5
P3 1 3 1
P4 2 3 4
P5 3 3 3

Output Format (EXACT)
Waiting Time:
P1 WT1
P2 WT2
P3 WT3
P4 WT4
P5 WT5
Turnaround Time:
P1 TAT1
P2 TAT2
P3 TAT3
P4 TAT4
P5 TAT5
Average Waiting Time: X.XX
Average Turnaround Time: Y.YY

Sample Output:
Waiting Time:
P1 3
P2 14
P3 0
P4 9
P5 5
Turnaround Time:
P1 8
P2 18
P3 3
P4 12
P5 8
Average Waiting Time: 6.20
Average Turnaround Time: 9.80
