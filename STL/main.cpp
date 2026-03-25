#include <iostream>
#include <map>
#include <list>
#include <vector>
#include <string>
#include "Class.hpp"

int main(void)
{
    std::list<int> lst1; 
    std::map<std::string, MyClass*> map1; 
    std::vector<int> v1;            
    std::vector<int> v2(42, 100);
/*
    Ces trois conteneurs font partie de la STL:

    - std::list<int>
    Liste doublement chainee. Insertion/suppression efficaces au milieu
    si on a deja un iterateur sur la position.

    - std::map<std::string, MyClass*>
    Associe une cle unique (std::string) a une valeur (pointeur MyClass*).
    Les elements sont tries par cle. Recherche/insertion/suppression en O(log n).

    - std::vector<int>
    Tableau dynamique contigu en memoire.
    Tres rapide en acces indexe (O(1)) et ideal pour iterer.
    Ici, v2(42, 100) cree 42 elements initialises a 100.
*/

    lst1.push_back(1);
    lst1.push_back(17);
    lst1.push_back(42);

    map1["opA"] = new Child1;
    map1["opB"] = new Child2;

    std::list<int>::const_iterator it;
    std::list<int>::const_iterator end = lst1.end(); 
    for (it = lst1.begin(); it != end; ++it)
        std::cout << *it << std::endl;

    std::map<std::string, MyClass*>::iterator mapIt;
    for (mapIt = map1.begin(); mapIt != map1.end(); ++mapIt)
        delete mapIt->second;

    return 0;
}

/*
    STL (Standard Template Library) = ensemble generique de:
    - conteneurs (vector, list, map, ...)
    - iterateurs (pour parcourir les conteneurs)
    - algorithmes (sort, find, count, ...)

    Dans ce fichier, on illustre surtout:
    - la creation de conteneurs STL
    - l'insertion d'elements (push_back, operator[] de map)
    - le parcours avec iterateurs
*/