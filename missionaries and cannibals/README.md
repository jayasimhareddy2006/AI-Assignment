# AI Assignment – Missionaries and Cannibals Search Algorithms

## Student Information

Name: Jayasimha
Course: Artificial Intelligence
Assignment: Search Algorithms Implementation
Problem: Missionaries and Cannibals

---

# 1. Problem Description

The **Missionaries and Cannibals problem** is a classic Artificial Intelligence search problem.

There are:

* 3 Missionaries
* 3 Cannibals
* 1 Boat

All start on the **left side of a river**.

### Constraints

1. The boat can carry **at most 2 people**.
2. At any location, **Cannibals cannot outnumber Missionaries**, otherwise the missionaries will be eaten.
3. The boat must carry **at least one person** when crossing.

### Goal State

Move all missionaries and cannibals safely to the **right side of the river**.

### State Representation

A state is represented as:

(m, c, b)

Where:

* m = number of missionaries on left side
* c = number of cannibals on left side
* b = boat position

Boat values:

1 = left side
0 = right side

Example:

(3,3,1)

means all missionaries and cannibals are on the left side and the boat is also on the left.

---

# 2. Algorithms Implemented

The following search algorithms were implemented:

1. Breadth First Search (BFS)
2. Depth First Search (DFS)
3. Uniform Cost Search (UCS)
4. Depth Limited Search (DLS)
5. Iterative Deepening Depth First Search (IDDFS)

These algorithms are used to explore the state space of the problem.

---


