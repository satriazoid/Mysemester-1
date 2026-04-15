#include <iostream>

#include <string>

using namespace std;

void print();

struct Struktura

{

int rightside;

string rules;

string rs;

};

struct Struktura2

{

int len;

};

int numOfRules,i,j,m,k,counter=0,counter2,numOfFacts,stalker,step=0;

string fakti[100],object,facts,rule,R[100][100],ans;

bool done=false;

Struktura p1[100], Rules[100][100];

Struktura2 gol[100];


int main()

{

//—————————————–

//Entering the facts

cout << “Enter the facts: “;

cin >> facts;

//numOfFacts receives the size of the entered facts

numOfFacts = facts.size();

//fakti[i] receives converted into upper case character “i” from the entered facts

for(i=0;i<=facts.size()-1;i++)

{

fakti[i]=toupper(facts.at(i));

}

//——————————————–

// Objective

//enter the objective

cout << “Enter the objective: “;

cin >> object;

// converts characters from lower case to upper case

for(i=0;i<object.size();i++)

{

object.at(i)=toupper(object.at(i));

}

//——————————————

//Enter the rules

cout << “How many rules do you have?: “;

cin >> numOfRules;

//form 0 to number of the rules do this

for(i=0;i<=numOfRules-1;i++)

{

//enter rule “i”

cout << “Enter rule ” << i+1 << “: “;

cin >> rule;

//gol[i].len receives the size of the rule “i”

gol[i].len = rule.size()-1;

// from 0 to the size of the rule

for(j=0;j<=rule.size()-1;j++)

{

// if j is equal to the size of the rule than p1[i] recives (upper case)

// in fact the last character is consequent

if(j==rule.size()-1)

{

p1[i].rs = toupper(rule.at(j));

}

else// else Array R[i][j] receives character “i” from the “rule” string

{

R[i][j] = toupper(rule.at(j));

}

}

}

print();

//——————————————

//adding new rule

cout << “\nDo you want to add another rule? (y/n): “;

cin >> ans;

if(ans == “Y” || ans == “y”)

{

cout << “\nEnter how many rules do you want to add: “;

cin >> k;

for(i=numOfRules;i<=numOfRules+k-1;i++)

{

cout << “Enter rule ” << i+1 << “: “;

cin >> rule;

gol[i].len = rule.size()-1;

for(j=0;j<=rule.size()-1;j++)

{

if(j==rule.size()-1)

{

p1[i].rs = toupper(rule.at(j));

}

else

{

R[i][j] = toupper(rule.at(j));

}

}

}

numOfRules = numOfRules+k;

print();

}

//——————————————

//remove

ans=”Y”;

while(ans == “Y” || ans == “y”)

{

cout << “\nDo you want to remove a rule?(y/n): “;

cin >> ans;

if(ans != “Y” && ans != “y”)

{

break;

}

cout << “\nEnter the number of the rule: “;

cin >> k;

for(i=k-1;i<=numOfRules-1;i++)

{

gol[i].len=gol[i+1].len;

for(j=0;j<=gol[i].len;j++)

{

if(j == gol[i].len)

{

p1[i].rs = p1[i+1].rs;

}

else

{

R[i][j] = R[i+1][j];

}

}

}

numOfRules = numOfRules-1;

print();

}

//checking

ans=”Y”;

while(ans == “Y” || ans == “y”)

{

cout << “\nDo you want to change something(y/n): “;

cin >> ans;

if(ans != “Y” && ans != “y”)

{

break;

}

cout << “\nEnter the number of the rule: “;

cin >> i;

// replace the existing rule with the added one

cout << “\nEnter new rule ” << i << “: “;

cin >> rule;

gol[i-1].len = rule.size()-1;

for(j=0;j<=rule.size()-1;j++)

{

if(j==rule.size()-1)

{

p1[i-1].rs = toupper(rule.at(j));

}

else

{

R[i-1][j] = toupper(rule.at(j));

}

}

}

print();

//——————————————

cout << endl << endl << endl;

cout << “Solution: ” <<  endl << endl;

//solution logic

stalker = numOfFacts+1;

while (done==false)

{

done=true;

for(i=0;i<=numOfRules-1;i++)

{

counter=0;

counter2=0;

for(j=0;j<=gol[i].len-1;j++)

{

for(k=0;k<=numOfFacts-1;k++)

{

//if fakti[k] is iqual to the element of the rule r[i][j] increase counter for 1

if(fakti[k] == R[i][j])

{

counter++;

}

// if all elements in fakti[] exist in the set of facts

//add the fact from that rule in the sets of facts

if(counter == gol[i].len)

{

// checks if the letter already exists in the fakti[]

// if exist the counter increase for 1 otherways stays 0

for(m=0;m<=numOfFacts-1;m++)

{

if(p1[i].rs == fakti[m])

{

counter2++;

}

}

// if the letter not exist i.e. counter2 is 0 than add the letter

// in fakti[]

if(counter2==0)

{

fakti[numOfFacts]=p1[i].rs;

numOfFacts++;

step ++;

//printing the corresponding rule

cout<< “Rule ” << i+1 << “: “;

for(m=0;m<=gol[i].len-1;m++)

{

cout << R[i][m];

if(m==gol[i].len-1)

{

cout << “”;

}

else

{

cout << ” ^ “;

}

}

cout << ” -> ” << p1[i].rs << endl;

// printing the facts with the newest elements

cout << “Set of facts: { “;

for(m=0;m<=numOfFacts-1;m++)

{

cout << fakti[m];

if(m!=numOfFacts-1)

cout << “,”;

}

cout << ” }”;

cout<<endl;

done=false;

}

}

// if the objective is in the fakti[] than the search is completed so e

for(m=0;m<=numOfFacts-1;m++)

{

if(fakti[m]==object)

{

done = true;

}

}

}

}

}

}

// ———————————————-

counter=0;

// checks if the objective has been found, increase counter for 1

for(m=0;m<=numOfFacts-1;m++)

{

if(fakti[m]==object)

counter++;

}

//if is not found

if(counter==0)

cout << “Sorry, the objective was not found!\n”;

else// if is found

if(step > 1)

{

cout << “\nThe objective was found in ” << step << ” steps!\n\n”;

}

else cout << “\nThe objective was found in ” << step << ” step!\n\n”;

// ———————————————

system(“pause”);

return0;

}

//void function for printing the facts, the objective and the rules

void print()

{

//print

cout << endl << endl << endl;

cout << “Exercise: ” <<  endl << endl;

//print facts

cout << “Set of facts: { “;

for(i=0;i<=numOfFacts-1;i++)

{

cout << fakti[i];

if(i!=numOfFacts-1)

cout << “,”;

}

cout << ” }”;

//print objective

cout << “\nObjective: ” << object << endl;

// print rules

for(i=0;i<=numOfRules-1;i++)

{

cout << “Rule ” << i+1 << “: “;

for(j=0;j<=gol[i].len-1;j++)

{

cout << R[i][j];

if(j!=gol[i].len-1)

cout << ” ^ “;

}

if(gol[i].len != 0)

{

cout << ” -> “;

}

cout << p1[i].rs;

cout << endl;

}

}
