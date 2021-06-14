#include <iostream>
#include <cstdio>
#include "BFS.h"
#include "File.h"
#include "Graph.h"


int main () {

    // opens file and saves its contents to memory
    File file("graph.txt");

    // creates graph structure from file contents
    Graph graph(file);

    // performs the modified BFS algorithm
    BFS bfs(graph, file);

    // print starting vertex, number of walls to destroy and found path
    bfs.PrintPath();


    // prevents console from closing instantly
    std::getchar();

}
