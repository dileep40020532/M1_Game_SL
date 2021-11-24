# Requirements

## Introduction
C Program to create a game called **Snakes and Ladders**. Snakes and ladders is an ancient Indian board game that's regarded today as a worldwide classic. It requires two or more players and takes place on a board with numbered, gridded squares. Throughout the board, there are **snakes** and **ladders** which connect different squares. Players roll a die and navigate the board. The historic version had its roots in morality lessons, on which a player's progression up the board represented a life journey complicated by virtues (ladders) and vices (snakes).

## Research
Snakes and Ladders is a Ancient Game called Moksha Patam. 
Reference: [WIKI](https://en.wikipedia.org/wiki/Snakes_and_ladders)

## Objective
The object of the game is to navigate one's game piece, according to die rolls, from the start (bottom square) to the finish (top square), helped by climbing ladders but hindered by falling down snakes. The game is a simple race based on sheer luck, and it is popular with young children. The idea is to consider the given snake and ladder board as a directed graph with number of vertices equal to the number of cells in the board. The problem reduces to finding the shortest path in a graph. Every vertex of the graph has an edge to next six vertices if next 6 vertices do not have a snake or ladder.

## SWOT ANALYSIS

## Strengths 
-One of the Oldest Favorite Dice Game.
-Very reputed Game to play with friend.
-Well architectual Game.

## Weakness
-Only two players at a time.
-Previous Data will not be stored.

## Opportunities
-Attracts Children.

## Threats
-More competition with other games.

# 4W's and 1'H

## Who:
Dileep Kumar Varadaraju is implementing the game **Snakes and Ladders**.

## What:
Implementation of Offline Game. It can be played two players.

## When:
To what fun and get relived from stress. 

## Where:
To be available in Visual Studio Code.

## How:
Using C programming language.

# Detail requirements
## High Level Requirements:
| ID | Description | Status | 
| ----- | ----- | ------- | ---------|
| HLR1 | User should be able to give name as input  | IMPLEMENTED | 
| HLR2 | User should be able to perform his dice  |  IMPLEMENTED  |
| HLR3 | When checks into snake head, check to the snakes tail | IMPLEMENTED  |
| HLR4 | When checks into start Ladder, check to the end ladder| IMPLEMENTED  |

## Low level Requirements:
| ID | Description | Status | 
| ----- | ----- | ------- | ---------|
| LLR1 | If player reaches to 100, Its win   | IMPLEMENTED | 
| LLR2 | Other player consider as Lost  |  IMPLEMENTED  |
