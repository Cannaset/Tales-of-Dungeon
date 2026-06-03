# Tales of Dungeon

## Project Overview

**Tales of Dungeon** is a console-based role-playing game developed in C++. The game allows players to form a party of four characters and explore several dungeon areas while battling different types of monsters. The gameplay is designed around a turn-based battle system, character roles, skill usage, monster traits, experience points, and level progression.

This project demonstrates the implementation of structured programming concepts in C++, including `struct`, arrays, nested structures, pointers, functions, conditional logic, loops, and menu-based interaction.

## Main Features

### 1. Character Selection

Before entering the dungeon, players are required to select four characters from the available character list. Each character has different attributes, roles, and skills. This system encourages players to create a balanced team composition based on battle strategy.

### 2. Dungeon Map

The game provides a dungeon map that allows players to choose which area they want to explore. Each dungeon area contains several stages, including a boss stage.

### 3. Turn-Based Battle System

The battle system uses alternating turns between the player's party and the monsters. During the player's turn, each living character can perform an action. During the monster's turn, each living monster attacks one of the player's characters.

### 4. Skill System

Each character has a set of skills with different effects. Skills require MP to be used, and each skill may have a different cost, effect value, and aggro impact.

### 5. Aggro System

The game includes an aggro system that influences which character will be targeted by monsters. Characters with higher aggro have a greater chance of being attacked.

### 6. Monster Traits and Resistance

Monsters may have specific traits or resistances. These traits affect the effectiveness of certain skills. For example, a monster with resistance to fire will reduce or nullify the effect of fire-based attacks.

### 7. Experience and Level Progression

When a monster is defeated, surviving characters gain experience points. If a character reaches the required amount of experience, the character levels up and receives improved attributes.

## Gameplay Flow

```text
Start Game
    ↓
Main Menu
    ↓
Begin Adventure
    ↓
Select Four Characters
    ↓
Open Dungeon Map
    ↓
Choose Dungeon Area
    ↓
Choose Stage
    ↓
Battle Phase
    ↓
Victory, Defeat, or Escape
    ↓
Return to Dungeon Map or Exit
```

## Controls

| Key     | Function                                |
| ------- | --------------------------------------- |
| W       | Move the selection upward.              |
| S       | Move the selection downward.            |
| Enter   | Confirm the selected option.            |
| Any Key | Continue to the next screen or message. |

## How to Run the Program

This program is designed to run in a Windows console environment because it uses several Windows-oriented functions and libraries, such as `conio.h`, `getch()`, `system("cls")`, and `system("pause")`.

Compile the program:

```bash
g++ TalesofDungeon.cpp -o TalesofDungeon.exe
```

Run the program:

```bash
TalesofDungeon.exe
```

## Conclusion

**Tales of Dungeon** is a C++ console-based RPG project that combines character selection, dungeon exploration, turn-based combat, skill management, monster traits, and character progression. The project is suitable as a programming exercise because it demonstrates how basic and intermediate C++ concepts can be applied to build an interactive game system.
::: 
