
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>

using namespace std;

class Person {
    string name;
    int age;
    
public:
    Person() : name(""), age(0) {
    }
    
    Person(string name, int age) : name(name), age(age) {
        
    }
    
    Person(const Person& person) {
        cout << "Copy ctor called " << endl;
        name = person.name;
        age = person.age;
    }
    
    void print() const {
        cout << name << " " << age << endl;
    }
    
    bool operator<(const Person& other) const {
        return name < other.name;
    }
};

void TryQueue() {
    queue<Person> persons;
    
    persons.push(Person("Ali", 32));
    persons.push(Person("Ali1", 321));
    persons.push(Person("Ali2", 322));
    
    persons.front().print();
    persons.back().print();
    
}

void TryStack() {
    stack<Person> persons;
    persons.push(Person("Ali", 32));
    persons.push(Person("Ali1", 321));
    persons.push(Person("Ali2", 322));
    
    Person top = persons.top();
    top.print();
    
    persons.pop();
    persons.top().print();
}

void TrySets() {
    set<int> numbers;
    
    numbers.insert(34);
    numbers.insert(4);
    numbers.insert(4);
    numbers.insert(4);
    numbers.insert(4);
    numbers.insert(4);
    numbers.insert(34);

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << endl;
    }

    cout << numbers.count(4) << endl;
    
    set<Person> people;
    
    people.insert(Person("Ali", 32));
    people.insert(Person("Ali1", 321));
    people.insert(Person("Ali", 322));
    
    for (auto it = people.begin(); it != people.end(); ++it) {
        it->print();
    }
}

void TryMultimap() {
    multimap<int, string> lookup;
    
    lookup.insert(make_pair(38, "Ali"));
    lookup.insert(make_pair(36, "Wendy"));
    lookup.insert(make_pair(3, "Jiaan"));
    lookup.insert(make_pair(60, "Papa"));
    lookup.insert(make_pair(60, "James"));
    
    for (multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
    
    cout << endl;
//    pair< multimap<int, string>::iterator, multimap<int, string>::iterator > its = lookup.equal_range(60);
    auto its = lookup.equal_range(60);
    for (multimap<int, string>::iterator it = its.first; it != its.second; ++it) {
        cout << it->first << " " << it->second << endl;
    }
}

void TryMap2() {
    map<Person, int> ages;
    
    ages[Person("Mike", 40)] = 40;

    for (map<Person, int>::iterator it = ages.begin(); it != ages.end(); ++it) {
        it->first.print();
    }
}

void TryMap() {
    map<string, int> ages;
    ages["Mike"] = 40;
    ages["James"] = 50;
    ages["Raj"] = 60;
    
    cout << "Raj's Age " << ages["Raj"] << endl;
    
    cout << ages["blah blah"] << endl;
    
    if (ages.find("SecondBlah") != ages.end()) {
        cout << "Found User" << endl;
    }
    
    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
    
    pair<string, int> newVal("Ali", 100);
    ages.insert(newVal);
    
    ages.insert(make_pair("Wendy", 20));
    
    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); ++it) {
        pair<string, int> age = *it;
        cout << age.first << " " << age.second << endl;
    }
    
    map<int, Person> people;
    people[0] = Person("Raj", 20);
    
    people.insert(make_pair(23, Person("Ham", 23)));
    for (map<int, Person>::iterator it = people.begin(); it != people.end(); ++it) {
//        Person p = it->second;
//        p.print();
        it->second.print();
    }
}

void TryList() {
    list<int> lst;
    
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_front(4);
    
    list<int>::iterator it = lst.begin();
    it++;
    lst.insert(it, 34);
    
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        cout << *it << endl;
    }
    
    cout << "**************" << endl;
    
    list<int>::iterator erase = lst.begin();
    erase++;
    lst.erase(erase);
    
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        cout << *it << endl;
    }
    
}

void TryVectors() {
    vector<string> strings;
    strings.push_back("One");
    strings.push_back("Two");
    strings.push_back("Three");
    
//    cout << strings[1] << endl;
//    cout << strings.size() << endl;
    
//    for (int i = 0; i < strings.size(); ++i) {
//        cout << strings[i] << endl;
//    }
    
    for (vector<string>::iterator it = strings.begin(); it != strings.end(); ++it) {
        cout << *it << endl;
    }

    cout << endl;
    
    sort(strings.begin(), strings.end());
    for (vector<string>::iterator it = strings.begin(); it != strings.end(); ++it) {
        cout << *it << endl;
    }
    
    
//    cout << strings.capacity() << endl;
//    cout << strings.max_size() << endl;
//    cout << strings.size() << endl;
//    
//    // 2-Dim Vector
//    vector< vector<int> > grid(3, vector<int>(4, 7));
//    
//    cout << grid.size() << endl;
//    
//    for (int row = 0; row < grid.size(); ++row) {
//        for (int col = 0; col < grid[row].size(); ++col) {
//            cout << grid[row][col] << flush;
//        }
//        
//        cout << endl;
//    }
//    
//    cout << endl;
}

int main(int argc, const char * argv[]) {
    cout << "Hello, STL!\n";

    TryVectors();
    // TryList();
//    TryMap2();
//    TryMultimap();
//    TrySets();
//    TryStack();
//    TryQueue();
    
    return 0;
}
