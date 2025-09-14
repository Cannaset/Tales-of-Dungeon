#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int selected_char[4];
string char_name[4];

struct skill {
    string name;
    int mpcost;
    string effect;
    int effectvalue;
    int skillaggro;
};

struct character {
    int level;
    int exp;
    int maxexp;
    string name;
    string role; //attacker / tank / support /  healer
    string type; // mage / archer / warrior
    skill skill[4];
    int hp;
    int maxhp;
    int attack;
    int maxattack;
    int mp;
    int maxmp;
    int aggro;
    int defense;
    int maxdefense;
    bool alive;
};

struct monster {
    string name;
    int hp;
    int maxhp;
    string trait;
    int defense;
    int attack;
    int exp;
    bool alive;
};

struct stage {
    struct substage{
        monster monster[4];
    }substage[4];
};

//Feli sampe struct stage

void nowrna(string isi, int spsi){
    int kata =  isi.length();
    cout << "|| ";
    int left = (spsi - kata) / 2;
    int right = spsi - kata - left;
    for (int i = 0; i <= left; i++) cout << " ";
    cout << isi;
    for (int i = 0; i <= right; i++) cout << " ";
    cout << "||" << endl;
}

void wrna(string isi, int spsi){
    string katawrna = "\033[94m" + isi + "\033[0m";
    int kata =  isi.length();
    cout << "|| ";
    int left = (spsi - kata) / 2;
    int right = spsi - kata - left;
    for (int i = 0; i <= left; i++) cout << " ";
    cout << katawrna;
    for (int i = 0; i <= right; i++) cout << " ";
    cout << "||" << endl;
}

void gambar(int pilihan, int pilihan2){
    if (pilihan == 0){
        if (pilihan2 == 0) {
            cout << "\\==========================================================================/\n";
            nowrna("                  .....                  ", 69);
            nowrna("               ..=@@@@*:..               ", 69);
            nowrna("            ..=@%..=%#%@@#--.            ", 69);
            nowrna("           .=@@@=.-@#***#%@@-.           ", 69);
            nowrna("         :.+@%#%@@@%#####*+*@=.          ", 69);
            nowrna("         .#@++++***####%%=#=@#+:         ", 69);
            nowrna("        .=@@=@@+#####%%*=%@@@#@=.        ", 69);
            nowrna("       .:#%@@@*+###%@%=++=++=+@%::       ", 69);
            nowrna("     ..:.=@++++*####+++*+++++=@@=:.      ", 69);
            nowrna("  ..=%@@@=@########%++==+=+=##%+.++-..   ", 69);
            nowrna("  .@@@##@@@@@@@@####%@@@@@@@%#%@@@@@@@-  ", 69);
            nowrna("  .=+@@@%##=..:@############%@@@+++@*:   ", 69);
            nowrna("     ..=+#@@@@@@###%%@@@%%@@#+##@@@-     ", 69);
            nowrna("         .-=#@@@%%%%++++#++==--:..       ", 69);
            nowrna("             .-=========-.               ", 69);
            cout << "\\==========================================================================/\n";
            nowrna ("Magma Slime ", 69);
            cout << "\\==========================================================================/\n";
        } else if (pilihan2 == 1) {
            cout << "\\==========================================================================/\n";
            nowrna("                                 @@@@                            ", 69);
            nowrna("                              @@@@@@                             ", 69);
            nowrna("                           @@@@@@@@                              ", 69);
            nowrna("                           @@@@@@@@                              ", 69);
            nowrna("                           @@@@@@@@                              ", 69);
            nowrna("                          @@@@@@                                 ", 69);
            nowrna("                       *@@@@@@@              @@@@@@              ", 69);
            nowrna("           @@@@     @@@@@@@@@@           @@@@@@@@@               ", 69);
            nowrna("       @@@@@@@@@@@@@@@#%@@@@@         @@@@@@@@@@@      @@@       ", 69);
            nowrna("     @@@@@@@@@@@@@@@@@@@@@@.        @@@@@@@@@@@@@@@@@ @@@@@      ", 69);
            nowrna("   @@@@@@@@@@@@@@@@@@@@@@@@       @@@@@@@@@@@@@@*@@@@@@@@@@      ", 69);
            nowrna("   @                             @@   @     @@@@=@@@@@@@@@@@     ", 69);
            nowrna("                                              @@@@@@@@@@@@@@     ", 69);
            nowrna("                                               @@  @@@@@@@@@     ", 69);
            nowrna("        @@@@@@@@@@@@                                  @@@@@@     ", 69);
            nowrna("           @@@@@@@@@@@                                @@@@@      ", 69);
            nowrna("            @@@@@@@@@@                 @@@@@@@@@@@@     @@@      ", 69);
            nowrna("            @@@@@@@@@@@               @@@@@@@@@@@@@@@@  @@       ", 69);
            nowrna("                @@@@@@@@@  @@ @@     @@@@@@@@@@@@@               ", 69);
            nowrna("                @@@@@@@@@@@@@@@@  @@@@@@@@@@@@@@                 ", 69);
            nowrna("                    @@@@@@@-@@#@@@@@@@@@@@@@@@@                  ", 69);
            nowrna("                        @@@%*#@@@@@@@@@@@@                       ", 69);
            nowrna("                         @@@@@@@@@@@                             ", 69);
            cout << "\\==========================================================================/\n";
            nowrna ("Blazing Bat ", 69);
            cout << "\\==========================================================================/\n";
        } else if (pilihan2 == 2) {
            cout << "\\==========================================================================/\n";
            nowrna("                         -@                 ", 69);
            nowrna("                 @@--   @#---               ", 69);
            nowrna("                @----###@=@####@            ", 69);
            nowrna("            @-@##=@#-#######--#--..:        ", 69);
            nowrna("          +---###@######@##--#=##@@#        ", 69);
            nowrna("          ######----####%-####=######@      ", 69);
            nowrna("         @###---##+-#--=##==@#######:%@     ", 69);
            nowrna("       @###########--########-##@##%@@      ", 69);
            nowrna("      @-==##%###########@#########@.=-@     ", 69);
            nowrna("     :-@@####-##--#-##--######@===#@#%@     ", 69);
            nowrna("     @=@##########---#####-##@-+@@@##@      ", 69);
            nowrna("      ##@=@#--@#####%-==+###@#%@@@%@=.%     ", 69);
            nowrna("     ..++.-%######+:-@@@=##=-#@==#..@@@     ", 69);
            nowrna("        @@@=+:%#@@+@@@.=@@@%=*@@*@@         ", 69);
            nowrna("                     @@@                    ", 69);
            cout << "\\==========================================================================/\n";
            nowrna ("Lava Crawler ", 69);
            cout << "\\==========================================================================/\n";
        } else if (pilihan2 == 3) {
            cout << "\\==========================================================================/\n";
            nowrna("    @.   @@@@....@@   .@                                             ", 69);
            nowrna("  @@.  @@@.. @@@        @@.                          ..              ", 69);
            nowrna("  ..@@@@@@@@@@@@@@@@...  @@@@                      ..@   ...       . ", 69);
            nowrna("  @@@@@@@.....@.@@@@@@@@@@@@@@@                    .@ ....    ...... ", 69);
            nowrna("@@@@@@@@...@@@@@@@@@@@.@.@@@@@@@@.                ..@..@@@@@@@@@@@@. ", 69);
            nowrna("@@@@@@@@@@@.@.@@@@@@@@@@@.@@...@...@.             ..@@@@@@@@@@@@@@@. ", 69);
            nowrna("@@@@@@.@@@@@@@@@@@..@@@@@@.@@@@@.@@..@           ..@@@@@@@@.@@@..... ", 69);
            nowrna("@@@@@@@.@@@@@.....@@@@@..@@.@@@@@@@@..@        ..@@@@@@.@@@...@@@..  ", 69);
            nowrna("@@@@@@.@@@.@.@@.@@.@@@@@.@@@@....@@@@@.@        ..@@@@...@@@@@....@@ ", 69);
            nowrna("   @.@@@@@@@@.@..@...@@@.@@@.@........@@.     ...@@..@.@@@.@@@@..... ", 69);
            nowrna("     ..@@@@@@@@@@....@.@@....@.@@........    ...@@@.@..........@.... ", 69);
            nowrna("     @@@@@@@@@@@@@@@...@@   @...@.........  ..@@@................@.. ", 69);
            nowrna("       @@@@@@@@...@..@@.@.   @@.@@@...............................@. ", 69);
            nowrna("       @@@@@@@@@@@@..@...@.   @@@..@................................ ", 69);
            nowrna("        .@.@@@.@.@@@@....@..   @.@@@@............@@..@@......@...... ", 69);
            nowrna("          .@@@@@@....@@....@. .@   .. ..............@@@@@@.....@@@.. ", 69);
            nowrna("            .@@@@@.@@..@@..@.          ................@.......@..@. ", 69);
            nowrna("              @@@@.@@@@@....@.          @@@.......................@. ", 69);
            nowrna("               @@@@@@@....@@@@@..@@@    .@@@@.......@............... ", 69);
            nowrna("            @@@.....@@@@@@@.....@@@.@@@  @@@@@@.........@........... ", 69);
            nowrna("          @@@@@...@@@..............@@.....@@.@.@@................... ", 69);
            cout << "\\==========================================================================/\n";
            nowrna ("Inferno Ignarok ", 69);
            cout << "\\==========================================================================/\n";
        }
    } if (pilihan == 1){
        if (pilihan2 == 0) {
            cout << "\\==========================================================================/\n";
            nowrna("                     @@+.        @-= ", 69);
            nowrna("                 @@-----@@-:::::-:.  ", 69);
            nowrna(" @@@@@::::::::@ @-----===.@@@*%@     ", 69);
            nowrna("   @=-=*@@@@@%--==+=@@@=++%:+:@      ", 69);
            nowrna("     @#--=+#@=*+==-=++==#==.@@       ", 69);
            nowrna("       @@=--=+@-==-#@#*+-.@@@@       ", 69);
            nowrna("           #@@-=@@-*@@@===--:        ", 69);
            nowrna("          @-%-=-%------=@@@==        ", 69);
            nowrna("          @:=-=-@-=+====--=*-@       ", 69);
            nowrna("           @@-=--@*=-==++===@.@      ", 69);
            nowrna("             @-@-@@#@@.:=-----@      ", 69);
            nowrna("            .=-@-=--------@@         ", 69);
            nowrna("          #=+=-*@@@@@@@              ", 69);
            nowrna("        @+-*-=#=-=--=:               ", 69);
            nowrna("         @-=-=@=====+:@              ", 69);
            nowrna("           @.--------:@              ", 69);
            nowrna("              @@@@@@#@               ", 69);
            cout << "\\==========================================================================/\n";
            nowrna ("Ice Goblin ", 69);
            cout << "\\==========================================================================/\n";
        } else if (pilihan2 == 1) {
            cout << "\\==========================================================================/\n";
            nowrna("         +.@   @@@                   ", 69);
            nowrna("         ...@  ..@@                  ", 69);
            nowrna("         ...@.%@..@.@                ", 69);
            nowrna("         .....@..%.@.-#@             ", 69);
            nowrna("          :@@@@....:.......@         ", 69);
            nowrna("        @@@@*...%@..........@@       ", 69);
            nowrna("       ...#..*==-.....#.......@@     ", 69);
            nowrna("       ......##+=:#@..:+.......@@    ", 69);
            nowrna("       .@.:@@@.=@#@@@..+.........@   ", 69);
            nowrna("      ..............@@..+........@   ", 69);
            nowrna("   @........:........@....-:......@@ ", 69);
            nowrna("@......................@@..........*@", 69);
            nowrna("@@@@.................@.%.-:-......@  ", 69);
            nowrna(" @.......@...........:=-:+-......@   ", 69);
            nowrna("  @@..@*.-@........=#+-=-........    ", 69);
            nowrna("          @......*+=......:-...      ", 69);
            nowrna("           ....@#+:..:::.:..         ", 69);
            nowrna("           @.@@@%...:..:...          ", 69);
            nowrna("            ...@.....::..            ", 69);
            nowrna("             ..=.......              ", 69);
            nowrna("               .....                 ", 69);
            nowrna("                 .                   ", 69);
            cout << "\\==========================================================================/\n";
            nowrna ("Frost Wolf ", 69);
            cout << "\\==========================================================================/\n";
        } else if (pilihan2 == 2) {
            cout << "\\==========================================================================/\n";
            nowrna("                    ........              ", 69);
            nowrna("                   ....=.....:            ", 69);
            nowrna("                   .#=..@..#.-            ", 69);
            nowrna("                  .-##.......=            ", 69);
            nowrna("                  =%=.@....*=+            ", 69);
            nowrna("               @..-==++++*#=....          ", 69);
            nowrna("             @ ....:..........+@.         ", 69);
            nowrna("           #@ :...@.....-+=......@        ", 69);
            nowrna("           #  .+-.............+--@#%      ", 69);
            nowrna("             .=-*=*=-+....--+=#-.         ", 69);
            nowrna("           .:...::.=%*+###%#*==-.:        ", 69);
            nowrna("           .-.....*..--........=.-        ", 69);
            nowrna("       -:.==#=...@...........-+--*.       ", 69);
            nowrna("    .....=:..+#%#-.:.::-=+%++*+#--+=.     ", 69);
            nowrna(" ....-@..-.........:....................  ", 69);
            nowrna("       .::..:....................:=       ", 69);
            cout << "\\==========================================================================/\n";
            nowrna ("Snow Wraith ", 69);
            cout << "\\==========================================================================/\n";
        } else if (pilihan2 == 3) {
            cout << "\\==========================================================================/\n";
            nowrna("                         ...     .....     .....                 ", 69);
            nowrna("                       ...  ....@@.  . .....@   .....            ", 69);
            nowrna("                      ... ...@@.......@@@@   ..                  ", 69);
            nowrna("                    .... ..@@........@......                     ", 69);
            nowrna("                    .....@@.............@.   ..............      ", 69);
            nowrna("                  .....@@.......@@@@@@@@@@...@@@@                ", 69);
            nowrna("                  ....@..@..@@@@@@..@@@.........                 ", 69);
            nowrna("                 ....@@.....@@@@..@@@@.@@@@@@.... ..             ", 69);
            nowrna("                .@..@@@@@@@@@...@@.....@@@@@.@@@..               ", 69);
            nowrna("                ....@@......@@@@@.....@...@@@@.@@@..     ..      ", 69);
            nowrna("               ...@@@@@@@@@..............@...@@..@@@..    .      ", 69);
            nowrna("               .@@@.....@..@@@@@@.@.@..@..@...@@....      ...    ", 69);
            nowrna("               .@..@@@@@..@@.@@.@@@.@...@.@@..@@@@...    ..@..   ", 69);
            nowrna("               ...@.@@@.@....... .@@@@........@@@..@@......@@....", 69);
            nowrna("             ....@@.....         .@@....@@.@@@...@@....@...@..@@.", 69);
            nowrna("             ..@@@@@.            .......@.@.....@......@...@.@..@", 69);
            nowrna("              @.@...           .......@@..............@@@@..@@...", 69);
            nowrna("                              ......@@..........@.@@@@...........", 69);
            nowrna("                             ......@.....@@.@@....@....@@.@@..@..", 69);
            nowrna(" .........  ..               ....@...@@..@@@@..@@@@@@@@..........", 69);
            nowrna(".....@@@@........    ...    .....@@@@....@@...@..@@@@@....@@@@@@@", 69);
            nowrna("       @@@@@@@@@..........  ...@....@@.@.@@.@@@@@......@@@@@@@@@.", 69);
            nowrna("      .@@@.@..@@@@....@@@....@...@@@.@@@...@@@@@@@..@@@@.........", 69);
            nowrna(".    ....@@@@@@..@@@@.@@@@@...@@...@@@@@@.@.........@@@@@@@@@@@@@", 69);
            nowrna("...................@..............................@@@@@@@@@@@@@@@", 69);
            cout << "\\==========================================================================/\n";
            nowrna ("Glacier Sentinel ", 69);
            cout << "\\==========================================================================/\n";
        }
    } else if (pilihan == 2){
        if (pilihan2 == 0) {
            cout << "\\==========================================================================/\n";
            nowrna("               ....   ..       .           ", 69);
            nowrna("                .@..@@..  .......          ", 69);
            nowrna("                 @@......@...@@.           ", 69);
            nowrna("                  @@@...@.@@@@             ", 69);
            nowrna("                  @@@@@@@@@@@@             ", 69);
            nowrna("        @@         @.@...@@..              ", 69);
            nowrna("       @@         ...@@@....               ", 69);
            nowrna("   ..@@@          ....@  ...               ", 69);
            nowrna("    @.. .      ......@@....@               ", 69);
            nowrna("     @@@........@@@@..@@@...               ", 69);
            nowrna("          @.@      @...@ @@@...            ", 69);
            nowrna("                   .....   .@@@@.          ", 69);
            nowrna("                  ..@.@@.       @@.        ", 69);
            nowrna("                 ..@...@.          @@      ", 69);
            nowrna("               ...@@.@.@.@                 ", 69);
            nowrna("            ......@@.@.@@....              ", 69);
            nowrna("         ..@@@@@@@@..@..@@@@@.@@@@         ", 69);
            nowrna("           ......@@@@@@@...@@@......       ", 69);
            nowrna("         ....@@@  @..@@@@@.....            ", 69);
            nowrna("      @...@@     ....      @@@....@@       ", 69);
            nowrna("  @@@@@@        ...              @@@@@@@   ", 69);
            cout << "\\==========================================================================/\n";
            nowrna ("Thornling ", 69);
            cout << "\\==========================================================================/\n";
        } else if (pilihan2 == 1) {
            cout << "\\==========================================================================/\n";
            nowrna("        ....@@                                            ", 69);
            nowrna("      ...@@@.@@@                                          ", 69);
            nowrna("     ......@@@..@                                         ", 69);
            nowrna("     ...@@..@@@                                           ", 69);
            nowrna("    @@.......@.                                           ", 69);
            nowrna("    @@@@.@.@..@                                           ", 69);
            nowrna("    @@@@@@..                                 @@@          ", 69);
            nowrna("     @@@@@.@@..    @                          @@...@      ", 69);
            nowrna("      @  ......  @..                     . @ ......@      ", 69);
            nowrna("         .@@@.@  @@@@@@@@@.        .....@..@....@@@       ", 69);
            nowrna("       @@@@...@@....     ..@@..@@@.. @@@@@@@@@@@          ", 69);
            nowrna("        .....@@  @@@.@@@@@.......@.@....@ ... @.....      ", 69);
            nowrna("        ..@.     . @..@@@@@@@@@@@@@   .@@@.@@.@@@@.       ", 69);
            nowrna("           .    .  @@ ....    .@     ..   @@@@@@@@@       ", 69);
            nowrna("           .@.. .     ...      ...   ... @@..             ", 69);
            nowrna("             ...      @@        @..@. .. @..              ", 69);
            nowrna("             ..                  ..   .. ..               ", 69);
            nowrna("             ..                 ...@     .                ", 69);
            nowrna("             ..                   ..  ....                ", 69);
            nowrna("               ..                 @@.                     ", 69);
            cout << "\\==========================================================================/\n";
            nowrna ("Living Vines ", 69);
            cout << "\\==========================================================================/\n";
        } else if (pilihan2 == 2) {
            cout << "\\==========================================================================/\n";
            nowrna("                       ..                     ", 69);
            nowrna("     ......@......      ..........            ", 69);
            nowrna("    ....@@@....................@.@......      ", 69);
            nowrna("  ...@....@@@@......@.....@..@.@.@.@.@...     ", 69);
            nowrna(" .@....@...@...@@@@@.......@...............   ", 69);
            nowrna(" ..@@.@@..@@.@@.......@.@......@.@....@@@..   ", 69);
            nowrna("  ....@@@.@............@@...........@@@..@... ", 69);
            nowrna("    .@.@@@@@@@@@@@@......@@@@@@@@@@@@.........", 69);
            nowrna("      ...@@@@@@.@..@@@@.........@@....@@.@....", 69);
            nowrna("        ....@@@..@@@@@@@@@@@@@.....@.@...@.@..", 69);
            nowrna("       .@   ...@@@@..........@@@@@@..@.@...@. ", 69);
            nowrna("       .         @.@@@@@@@@@.    .....@.....  ", 69);
            nowrna("                  .   ..@...      ......@..   ", 69);
            nowrna("                  ...@@...        .@@@....    ", 69);
            nowrna("          .........@@@@@.          @.....     ", 69);
            nowrna("               @..@....          ...  @.      ", 69);
            nowrna("             ..                .              ", 69);
            cout << "\\==========================================================================/\n";
            nowrna ("Poison Toad ", 69);
            cout << "\\==========================================================================/\n";
        } else if (pilihan2 == 3) {
            cout << "\\==========================================================================/\n";
            nowrna("        ..      . .  .                                               ", 69);
            nowrna("         ...   @. ....... .                                          ", 69);
            nowrna("  .      .@....@....@@..@..                                          ", 69);
            nowrna("  ...   ..@..@@@@@@@@@@@@@...     .                                  ", 69);
            nowrna("   .............@...@@@@@@@@.... ..                                  ", 69);
            nowrna("    @@@@@@@.@@@..@........@@......                                   ", 69);
            nowrna("     .@@@.@@@@@@@@@@..@@@@@...@@@                                    ", 69);
            nowrna("     ..@@@@@.@@@@@@.@.@.@...@@@..          .. @ .....                ", 69);
            nowrna("     ..@@.....@@@@@.@@@@@@@@@@@@        . ...@@....@                 ", 69);
            nowrna("     ..@@@....@@@@@@@@@@@@@@@@...       .....@@.@@@@.                ", 69);
            nowrna("      .@@@@@..@@@@@@@@@@@@@@@@@@.     ..@@@..@@@@@@@                 ", 69);
            nowrna("      ..@@.....@@@@@@@@@@@@@@@@@@..    @@@@@@@@@@@@...               ", 69);
            nowrna("        @@@@....@@@@@@@@@@@@@@.@@@..... @@@@@@@@@@@@                 ", 69);
            nowrna("        ..@.@@..@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..                  ", 69);
            nowrna("        @@@@@@@...@@@@@@@@@@....@@@@@@@@@@.@@@..@.                   ", 69);
            nowrna("       .@@@@@@@.@...@@@@@@@@@@@  ..@@@@@.   ..                       ", 69);
            nowrna("      .@@@...@@@.@.@@@@@@@@@@.@@@@@@..@.                             ", 69);
            nowrna("       @@..@@@@@@@@@@@@@@@@@@@@@@....  .                             ", 69);
            nowrna("      .@@..@@@@..@@@@.@@@@@@@@@@@@@@                                 ", 69);
            nowrna("     ....@..@@...@..@.@@@@@@@@@@@.                                   ", 69);
            nowrna("    ..@@@@@@@.     ......@@@@@@@@..                                  ", 69);
            nowrna("    .@@@@@@@@         .@@@@@@@@@@@@                                  ", 69);
            nowrna("  .@@@@@@@@@@@.        .@@@@@@@@@@@.                                 ", 69);
            nowrna("  .@.@@@@@@@@..       ..@@@@@@@@@@                                   ", 69);
            nowrna(" ..@@@@@@@@@@.         @@.....                                       ", 69);
            nowrna(" .@@@@@@@@@@@@@.@. .    @                                            ", 69);
            nowrna("  .@@@@@@@@......                                                    ", 69);
            nowrna("....  .@..                                                           ", 69);
            cout << "\\==========================================================================/\n";
            nowrna ("Forest Beast ", 69);
            cout << "\\==========================================================================/\n";
        }
    }
}

void logo_charselector(){
    cout << "/===========================================================================================\\\n";
    nowrna("   ____ _                          _              ____       _           _              ", 84);
    nowrna("  / ___| |__   __ _ _ __ __ _  ___| |_ ___ _ __  / ___|  ___| | ___  ___| |_ ___  _ __  ", 84);
    nowrna(" | |   | '_ \\ / _` | '__/ _` |/ __| __/ _ \\ '__| \\___ \\ / _ \\ |/ _ \\/ __| __/ _ \\| '__| ", 84);
    nowrna(" | |___| | | | (_| | | | (_| | (__| ||  __/ |     ___) |  __/ |  __/ (__| || (_) | |    ", 84);
    nowrna("  \\____|_| |_|\\__,_|_|  \\__,_|\\___|\\__\\___|_|    |____/ \\___|_|\\___|\\___|\\__\\___/|_|    ", 84);
    nowrna("                                                                                        ", 84);
    cout << "\\===========================================================================================/\n";
}

// Revan sampe fungsi logo_charselector

bool checkVictory(monster monsters[4]) {
    for (int i = 0; i < 4; i++) {
        if (monsters[i].alive) return false;
    }
    return true;
}

void charstat (character* charArr, int pilih) {
    system ("cls");
    cout << "=======================================" << endl;
    cout << "    " << charArr[pilih].name << " ("<< charArr[pilih].role << ") " << "[Level " << charArr[pilih].level <<"]\n";
    cout << "=======================================" << endl;
    cout <<"\nHP: " << charArr[pilih].hp << "/" << charArr[pilih].maxhp
        << "\nMP: " << charArr[pilih].mp << "/" << charArr[pilih].maxmp
        << "\nAttack: " << charArr[pilih].attack
        << "\nType: " << charArr[pilih].type
        << "\nDefense: " << charArr[pilih].defense
        << "\nAggro: " << charArr[pilih].aggro << "\n"
        << "\nSkill: ";
    for (int j = 0; j < 4; j++) {
        cout << "\n" << j + 1 << ". ";
        cout << charArr[pilih].skill[j].name << "\n";
        cout << "MP cost: " << charArr[pilih].skill[j].mpcost << "\n";
        cout << "Effect: " << charArr[pilih].skill[j].effect << "\n";
        cout << "Damage: " << charArr[pilih].skill[j].effectvalue << "\n";
        cout << "Increased aggro: " << charArr[pilih].skill[j].skillaggro << "\n";
    }
}

void battle(character* charArr, stage* stage, int* char_selected, int pilihan, int pilihan2){
    int turn = 1;
    bool battleover = false;

    character team[4];
    for (int i = 0; i < 4; i++) {
        team[i] = charArr[char_selected[i]];
        team[i].alive = (team[i].hp > 0);
    }
    monster* monsters = stage[pilihan].substage[pilihan2].monster;
    for (int i = 0; i < 4; i++) {
        monsters[i].alive = (monsters[i].hp > 0);
    }

    while (!battleover) {
        bool all_monsters_dead = true;
        bool all_players_dead = true;

        gambar(pilihan, pilihan2);
        cout << "\\==========================================================================/\n";
        nowrna ("TURN " + to_string(turn), 69);
        cout << "\\==========================================================================/\n";
        nowrna ("[YOUR TEAM]", 69);
        for (int i = 0; i < 4; i++){
            string status = team[i].alive ? "ALIVE" : "DEAD";
            string display = "[" + team[i].name + "] " + " Level: " + to_string(team[i].level) + " HP: " + to_string(team[i].hp) + "/" + to_string(team[i].maxhp) + " MP: " + to_string(team[i].mp) + "/" + to_string(team[i].maxmp) + " ATK: " + to_string(team[i].attack) + " [" + status + "]";
            nowrna(display, 69);
        }
        nowrna("", 69);
        nowrna ("[ENEMIES]", 69);
        for (int i = 0; i < 4; i++) {
            if (monsters[i].alive) {
                string display = "[" + monsters[i].name + "] " + " HP: " + to_string(monsters[i].hp) + " ATK: " + to_string(monsters[i].attack) + " DEF: " + to_string(monsters[i].defense) + " (" + monsters[i].trait + ")";
                nowrna(display, 69);
            }
        }
        cout << "\\==========================================================================/\n";
        nowrna ("PRESS ANY KEY TO CONTINUE", 69);
        cout << "\\==========================================================================/\n";
        system ("pause");
        if (turn % 2 == 1) {
            system ("cls");
            gambar(pilihan, pilihan2);
            for (int i = 0; i < 4; i++) {
                if (!team[i].alive) continue;
                int inputs = 0;
                bool action = false;
                while (true){
                    system ("cls");
                    char key;
                    cout << "\\==========================================================================/\n";
                    nowrna ("[YOUR TEAM]", 69);
                    for (int i = 0; i < 4; i++){
                        string status = team[i].alive ? "ALIVE" : "DEAD";
                        string display = "[" + team[i].name + "] " + " Level: " + to_string(team[i].level) + " HP: " + to_string(team[i].hp) + "/" + to_string(team[i].maxhp) + " MP: " + to_string(team[i].mp) + "/" + to_string(team[i].maxmp) + " ATK: " + to_string(team[i].attack) + " [" + status + "]";
                        nowrna(display, 69);
                    }
                    cout << "\\==========================================================================/\n";
                    nowrna ("[ENEMIES]", 69);
                    for (int i = 0; i < 4; i++) {
                        if (monsters[i].alive) {
                            string display = "[" + monsters[i].name + "] " + " HP: " + to_string(monsters[i].hp) + " ATK: " + to_string(monsters[i].attack) + " DEF: " + to_string(monsters[i].defense) + " (" + monsters[i].trait + ")";
                            nowrna(display, 69);
                        }
                    }
                    cout << "\\==========================================================================/\n";
                    nowrna ( team[i].name + "'s Turn", 69);
                    cout << "\\==========================================================================/\n";
                    nowrna("=======================================",69);
                    (inputs == 0) ? wrna("ATTACK", 69) : nowrna("ATTACK", 69);
                    nowrna("=======================================", 69);
                    nowrna("=======================================",69);
                    (inputs == 1) ? wrna("SKILL DESCRIPTION", 69) : nowrna("SKILL DESCRIPTION", 69);
                    nowrna("=======================================", 69);
                    nowrna("=======================================",69);
                    (inputs == 2) ? wrna("ESCAPE", 69) : nowrna("ESCAPE", 69);
                    nowrna("=======================================", 69);
                    cout << "\\==========================================================================/\n";
                    
                    key = getch();
                    if (key == 'w') {
                        (inputs == 0) ? inputs = 2  : inputs--; 
                    } else if (key == 's') {
                        (inputs == 2) ? inputs = 0 : inputs++;
                    } else if (key == 13) {
                        system("cls");
                        if (inputs == 0) {
                            char key2;
                            int skill_choice = 0;
                            while (true){
                                system ("cls");
                                cout << "\\==========================================================================/\n";
                                nowrna(team[i].name + "'s turn. Choose action: ",69);
                                cout << "\\==========================================================================/\n";
                                for (int j = 0; j < 4; j++){
                                    nowrna("=======================================",69);
                                    (skill_choice == j) ? wrna(team[i].skill[j].name + " (" + to_string(team[i].skill[j].mpcost) + " MP)", 69) : nowrna(team[i].skill[j].name + " (" + to_string(team[i].skill[j].mpcost) + " MP)", 69);
                                    nowrna("=======================================",69);
                                }
                                cout << "\\==========================================================================/\n";
                                key2 = getch();
                                if (key2 == 'w') {
                                    (skill_choice == 0) ? skill_choice = 3  : skill_choice--; 
                                } else if (key2 == 's') {
                                    (skill_choice == 3) ? skill_choice = 0 : skill_choice++;
                                } else if (key2 == 13) {
                                    system("cls");
                                    if (skill_choice <= 3) {
                                        int target = 0;
                                        int player = 0;
                                        while (true) {
                                            system ("cls");
                                            char key3;
                                            if (team[i].mp >= team[i].skill[skill_choice].mpcost){
                                                int sumexp = 0;
                                                if (team[i].skill[skill_choice].effect.find("all enemy") != string::npos || team[i].skill[skill_choice].effect.find("all enemies") != string::npos) {
                                                    cout << "\\==========================================================================/\n";
                                                    for (int j = 0; j < 4; j++) {
                                                        if (!monsters[j].alive) continue;
                                                        int temp = team[i].skill[skill_choice].effectvalue;
                                                            if (monsters[j].trait == "resist to fire") {
                                                                if (team[i].skill[skill_choice].effect.find("fire") != string::npos) {
                                                                    team[i].skill[skill_choice].effectvalue = 0;
                                                                }
                                                            } else if (monsters[j].trait == "resist to ice") {
                                                                if (team[i].skill[skill_choice].effect.find("ice") != string::npos) {
                                                                    team[i].skill[skill_choice].effectvalue = 0;
                                                                }
                                                            } else if (monsters[j].trait == "resist to lightning") {
                                                                if (team[i].skill[skill_choice].effect.find("electro") != string::npos) {
                                                                    team[i].skill[skill_choice].effectvalue = 0;
                                                                }
                                                            } else if (monsters[j].trait == "resist to physical") {
                                                                if (team[i].skill[skill_choice].effect.find("physical") != string::npos) {
                                                                    team[i].skill[skill_choice].effectvalue = 0;
                                                                }
                                                            } else if (monsters[j].trait == "resist to melee") {
                                                                if (team[i].skill[skill_choice].effect.find("melee") != string::npos) {
                                                                    team[i].skill[skill_choice].effectvalue = 0;
                                                                }
                                                            } else if (monsters[j].trait == "resist to ranged") {
                                                                if (team[i].skill[skill_choice].effect.find("ranged") != string::npos) {
                                                                    team[i].skill[skill_choice].effectvalue = 0;
                                                                }
                                                            } else if (monsters[j].trait == "resist to magic") {
                                                                if (team[i].skill[skill_choice].effect.find("magic") != string::npos) {
                                                                    team[i].skill[skill_choice].effectvalue = 0;
                                                                }
                                                            }
                                                        int damage = 0;
                                                        if (team[i].skill[skill_choice].effectvalue == 0) {
                                                            damage = 0;
                                                        } else {
                                                            damage = max(1, team[i].skill[skill_choice].effectvalue - (int)(monsters[j].defense*0.3));
                                                            monsters[j].hp -= damage;
                                                        }
                                                        cout << "\\==========================================================================/\n";
                                                        nowrna (team[i].name + " dealed " + to_string(damage) + " damage to " + monsters[j].name + "!", 69);
                                                        cout << "\\==========================================================================/\n";
                                                        team[i].skill[skill_choice].effectvalue = temp;
                                                        if (monsters[j].alive) {
                                                            if (monsters[j].hp <= 0) {
                                                                monsters[j].alive = false;
                                                                int expgain = monsters[j].exp;
                                                                cout << "\\==========================================================================/\n";
                                                                nowrna ("You defeated " + monsters[j].name + "!", 69);
                                                                nowrna ("You gained " + to_string(expgain) + " exp!", 69);
                                                                cout << "\\==========================================================================/\n";
                                                                for (int k = 0; k < 4; k++){
                                                                    if (team[k].alive) {
                                                                        team[k].exp += expgain;
                                                                        if (team[k].exp >= team[k].maxexp) {
                                                                            team[k].level++;
                                                                            team[k].exp -= team[k].maxexp; team[k].maxexp += team[k].maxexp;
                                                                            team[k].maxattack += (int)(team[k].maxattack*0.6); team[k].attack = team[k].maxattack;
                                                                            team[k].maxhp += (int)(team[k].maxhp*0.6); team[k].hp = team[k].maxhp;
                                                                            team[k].maxmp += (int)(team[k].maxmp*0.6); team[k].mp = team[k].maxmp;
                                                                            team[k].maxdefense += (int)(team[k].maxdefense*0.6); team[k].defense = team[k].maxdefense;
                                                                            nowrna (team[k].name + " Leveled up to level " + to_string(team[k].level) + "!", 69);
                                                                        }
                                                                    }
                                                                }
                                                                cout << "\\==========================================================================/\n";
                                                            }
                                                        }
                                                    }
                                                    sumexp = 0;
                                                    system ("pause");
                                                    if (checkVictory(monsters)) {
                                                        cout << "\\==========================================================================/\n";
                                                        nowrna("VICTORY! All enemies defeated!", 69);
                                                        cout << "\\==========================================================================/\n";
                                                        system("pause");
                                                        for (int i = 0; i < 4; i++) {
                                                            charArr[char_selected[i]].maxattack = team[i].maxattack; charArr[char_selected[i]].attack = team[i].maxattack;
                                                            charArr[char_selected[i]].maxhp = team[i].maxhp; charArr[char_selected[i]].hp = team[i].maxhp;
                                                            charArr[char_selected[i]].maxmp = team[i].maxmp; charArr[char_selected[i]].mp = team[i].maxmp;
                                                            charArr[char_selected[i]].maxdefense = team[i].maxdefense; charArr[char_selected[i]].defense = team[i].maxdefense;
                                                            charArr[char_selected[i]].maxexp = team[i].maxexp; charArr[char_selected[i]].exp = team[i].exp;
                                                            charArr[char_selected[i]].level = team[i].level;
                                                            stage[pilihan].substage[pilihan2].monster[i].alive = true; 
                                                            stage[pilihan].substage[pilihan2].monster[i].hp = stage[pilihan].substage[pilihan2].monster[i].maxhp;
                                                        }
                                                        return;
                                                    }
                                                    action = true;
                                                    team[i].aggro += team[i].skill[skill_choice].skillaggro;
                                                    team[i].mp -= team[i].skill[skill_choice].mpcost;
                                                    break;
                                                } else if (team[i].skill[skill_choice].effect.find("healed all allies") != string::npos || team[i].skill[skill_choice].effect.find("healed all ally") != string::npos) {
                                                    cout << "\\==========================================================================/\n";
                                                    for (int j = 0; j < 4; j++) {
                                                        int damage = team[i].skill[skill_choice].effectvalue + team[j].hp;
                                                        team[j].hp = damage;
                                                        if (team[j].hp > team[j].maxhp) {
                                                            team[j].hp = team[j].maxhp;
                                                        }
                                                        nowrna (team[i].name + " healed " + to_string(team[i].skill[skill_choice].effectvalue) + " to " + team[j].name + "!", 69);
                                                    }
                                                    cout << "\\==========================================================================/\n";
                                                    system ("pause");
                                                    action = true;
                                                    team[i].aggro += team[i].skill[skill_choice].skillaggro;
                                                    team[i].mp -= team[i].skill[skill_choice].mpcost;
                                                    break;
                                                } else if (team[i].skill[skill_choice].effect.find("shield") != string::npos || team[i].skill[skill_choice].effect.find("shield") != string::npos) {
                                                    cout << "\\==========================================================================/\n";
                                                    for (int j = 0; j < 4; j++) {
                                                        int damage = team[i].skill[skill_choice].effectvalue + team[j].defense;
                                                        team[j].defense = damage;
                                                        nowrna (team[i].name + " increasing " + to_string(team[i].skill[skill_choice].effectvalue) + " defense to " + team[j].name + "!", 69);
                                                    }
                                                    cout << "\\==========================================================================/\n";
                                                    system ("pause");
                                                    action = true;
                                                    team[i].aggro += team[i].skill[skill_choice].skillaggro;
                                                    team[i].mp -= team[i].skill[skill_choice].mpcost;
                                                    break;
                                                } else if (team[i].skill[skill_choice].effect.find("increasing attack") != string::npos || team[i].skill[skill_choice].effect.find("Increasing attack") != string::npos) {
                                                    cout << "\\==========================================================================/\n";
                                                    for (int j = 0; j < 4; j++) {
                                                        int damage = team[i].skill[skill_choice].effectvalue + team[j].attack;
                                                        team[j].attack = damage;
                                                        nowrna (team[i].name + " increasing " + to_string(team[i].skill[skill_choice].effectvalue) + " atttack to " + team[j].name + "!", 69);
                                                    }
                                                    cout << "\\==========================================================================/\n";
                                                    system ("pause");
                                                    action = true;
                                                    team[i].aggro += team[i].skill[skill_choice].skillaggro;
                                                    team[i].mp -= team[i].skill[skill_choice].mpcost;
                                                    break;
                                                }
                                            }
                                            if (team[i].mp >= team[i].skill[skill_choice].mpcost) {
                                                if (team[i].skill[skill_choice].effect.find("dealing") != string::npos || team[i].skill[skill_choice].effect.find("Dealing") != string::npos) {
                                                    cout << "\\==========================================================================/\n";
                                                    nowrna(team[i].name + "'s turn. Choose action: ",69);
                                                    cout << "\\==========================================================================/\n";
                                                    for (int j = 0; j < 4; j++) {
                                                        if (monsters[j].alive == true){
                                                            nowrna("=======================================",69);
                                                            (target == j) ? wrna(monsters[j].name, 69) : nowrna(monsters[j].name, 69);
                                                            nowrna("=======================================",69);
                                                        } else {
                                                            nowrna("=======================================",69);
                                                            (target == j) ? wrna(monsters[j].name + " [DEAD]" , 69) : nowrna(monsters[j].name + " [DEAD]", 69);
                                                            nowrna("=======================================",69);
                                                        }
                                                    }
                                                    cout << "\\==========================================================================/\n";
                                                    
                                                    key3 = getch();
                                                    if (key3 == 'w') {
                                                        (target == 0) ? target = 3  : target--; 
                                                    } else if (key3 == 's') {
                                                        (target == 3) ? target = 0 : target++;
                                                    } else if (key3 == 13) {
                                                        if (!monsters[target].alive){
                                                            int damage = 0;
                                                            cout << "\\==========================================================================/\n";
                                                            nowrna("You've choosed dead creature, the damage will be back to yourself!",69);
                                                            cout << "\\==========================================================================/\n";  
                                                            damage = max (1, team[i].skill[skill_choice].effectvalue - (int)(team[i].defense*0.8));
                                                            team[i].hp -= damage;
                                                            cout << "\\==========================================================================/\n";
                                                            nowrna ("You've dealed " + to_string(damage) + " damage to yourself!", 69);
                                                            cout << "\\==========================================================================/\n";
                                                            break;
                                                        } else {
                                                            if (target <= 3) {
                                                                int temp = team[i].skill[skill_choice].effectvalue;
                                                                if (monsters[target].trait == "resist to fire") {
                                                                    if (team[i].skill[skill_choice].effect.find("fire") != string::npos) {
                                                                        team[i].skill[skill_choice].effectvalue = 0;
                                                                    }
                                                                } else if (monsters[target].trait == "resist to ice") {
                                                                    if (team[i].skill[skill_choice].effect.find("ice") != string::npos) {
                                                                        team[i].skill[skill_choice].effectvalue = 0;
                                                                    }
                                                                } else if (monsters[target].trait == "resist to lightning") {
                                                                    if (team[i].skill[skill_choice].effect.find("electro") != string::npos) {
                                                                        team[i].skill[skill_choice].effectvalue = 0;
                                                                    }
                                                                } else if (monsters[target].trait == "resist to physical") {
                                                                    if (team[i].skill[skill_choice].effect.find("physical") != string::npos) {
                                                                        team[i].skill[skill_choice].effectvalue = 0;
                                                                    }
                                                                } else if (monsters[target].trait == "resist to melee") {
                                                                    if (team[i].skill[skill_choice].effect.find("melee") != string::npos) {
                                                                        team[i].skill[skill_choice].effectvalue = 0;
                                                                    }
                                                                } else if (monsters[target].trait == "resist to ranged") {
                                                                    if (team[i].skill[skill_choice].effect.find("ranged") != string::npos) {
                                                                        team[i].skill[skill_choice].effectvalue = 0;
                                                                    }
                                                                } else if (monsters[target].trait == "resist to magic") {
                                                                    if (team[i].skill[skill_choice].effect.find("magic") != string::npos) {
                                                                        team[i].skill[skill_choice].effectvalue = 0;
                                                                    }
                                                                }
                                                                int damage = 0;
                                                                if (team[i].skill[skill_choice].effectvalue == 0) {
                                                                    damage = 0;
                                                                } else {
                                                                    damage = max (1, team[i].skill[skill_choice].effectvalue - (int)(monsters[target].defense*0.3));
                                                                    monsters[target].hp -= damage;
                                                                }
                                                                cout << "\\==========================================================================/\n";
                                                                nowrna (team[i].name + " dealed " + to_string(damage) + " damage to " + monsters[target].name + "!", 69);
                                                                cout << "\\==========================================================================/\n";
                                                                team[i].skill[skill_choice].effectvalue = temp;
                                                                if (monsters[target].alive){
                                                                    if (monsters[target].hp <= 0) {
                                                                        monsters[target].alive = false;
                                                                        int expgain = monsters[target].exp;
                                                                        cout << "\\==========================================================================/\n";
                                                                        nowrna ("You defeated " + monsters[target].name + "!", 69);
                                                                        nowrna ("You gained " + to_string(expgain) + " exp!", 69);
                                                                        cout << "\\==========================================================================/\n";
                                                                        for (int k = 0; k < 4; k++){
                                                                            if (team[k].alive) {
                                                                                team[k].exp += expgain;
                                                                                if (team[k].exp >= team[k].maxexp) {
                                                                                    team[k].level++;
                                                                                    team[k].exp -= team[k].maxexp;
                                                                                    team[k].maxexp += team[k].maxexp;
                                                                                    team[k].maxattack += (int)(team[k].maxattack*0.6); team[k].attack = team[k].maxattack;
                                                                                    team[k].maxhp += (int)(team[k].maxhp*0.6); team[k].hp = team[k].maxhp;
                                                                                    team[k].maxmp += (int)(team[k].maxmp*0.6); team[k].mp = team[k].maxmp;
                                                                                    team[k].maxdefense += (int)(team[k].maxdefense*0.6); team[k].defense = team[k].maxdefense;
                                                                                    nowrna (team[k].name + "Leveled up to level " + to_string(team[k].level) + "!", 69);
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                system ("pause");
                                                                if (checkVictory(monsters)) {
                                                                    cout << "\\==========================================================================/\n";
                                                                    nowrna("VICTORY! All enemies defeated!", 69);
                                                                    cout << "\\==========================================================================/\n";
                                                                    system("pause");
                                                                    for (int i = 0; i < 4; i++) {
                                                                        charArr[char_selected[i]].maxattack = team[i].maxattack; charArr[char_selected[i]].attack = team[i].maxattack;
                                                                        charArr[char_selected[i]].maxhp = team[i].maxhp; charArr[char_selected[i]].hp = team[i].maxhp;
                                                                        charArr[char_selected[i]].maxmp = team[i].maxmp; charArr[char_selected[i]].mp = team[i].maxmp;
                                                                        charArr[char_selected[i]].maxdefense = team[i].maxdefense; charArr[char_selected[i]].defense = team[i].maxdefense;
                                                                        charArr[char_selected[i]].maxexp = team[i].maxexp; charArr[char_selected[i]].exp = team[i].exp;
                                                                        charArr[char_selected[i]].level = team[i].level;
                                                                        stage[pilihan].substage[pilihan2].monster[i].alive = true; 
                                                                        stage[pilihan].substage[pilihan2].monster[i].hp = stage[pilihan].substage[pilihan2].monster[i].maxhp;
                                                                    }
                                                                    return;
                                                                }
                                                                action = true;
                                                                team[i].aggro += team[i].skill[skill_choice].skillaggro;
                                                                team[i].mp -= team[i].skill[skill_choice].mpcost;
                                                                break;
                                                            }
                                                        }
                                                    }
                                                } else if (team[i].skill[skill_choice].effect.find("Increasing aggro") != string::npos || team[i].skill[skill_choice].effect.find("Decreasing aggro") != string::npos) {
                                                    int damage = team[i].skill[skill_choice].skillaggro + team[i].aggro;
                                                    team[i].aggro = damage;
                                                    cout << "\\==========================================================================/\n";
                                                    nowrna (team[i].name + " have " + to_string(team[i].aggro) + " aggro", 69);
                                                    cout << "\\==========================================================================/\n";
                                                    system ("pause");
                                                    action = true;
                                                    team[i].mp -= team[i].skill[skill_choice].mpcost;
                                                    break;
                                                } else if (team[i].skill[skill_choice].effect.find("healed one ally") != string::npos || team[i].skill[skill_choice].effect.find("Healed one ally") != string::npos) {
                                                    cout << "\\==========================================================================/\n";
                                                    nowrna(team[i].name + "'s turn. Choose action: ",69);
                                                    cout << "\\==========================================================================/\n";
                                                    for (int j = 0; j < 4; j++) {
                                                        nowrna("=======================================",69);
                                                        (player == j) ? wrna(team[j].name, 69) : nowrna(team[j].name, 69);
                                                        nowrna("=======================================",69);
                                                    }
                                                    cout << "\\==========================================================================/\n";
                                                    
                                                    char key4 = getch();
                                                    if (key4 == 'w') {
                                                        (player == 0) ? player = 3  : player--; 
                                                    } else if (key4 == 's') {
                                                        (player == 3) ? player = 0 : player++;
                                                    } else if (key4 == 13) {
                                                        if (player <= 3) {
                                                            int damage = team[i].skill[skill_choice].effectvalue + team[player].hp;
                                                            team[player].hp = damage;
                                                            if (team[player].hp > team[player].maxhp) {
                                                                team[player].hp = team[player].maxhp;
                                                            }
                                                            cout << "\\==========================================================================/\n";
                                                            nowrna (team[i].name + " healed " + to_string(team[i].skill[skill_choice].effectvalue) + " HP to " + team[player].name + "!", 69);
                                                            cout << "\\==========================================================================/\n";
                                                            system ("pause");
                                                            action = true;
                                                            team[i].aggro += team[i].skill[skill_choice].skillaggro;
                                                            team[i].mp -= team[i].skill[skill_choice].mpcost;
                                                            player = 0;
                                                            break;
                                                        }
                                                    }
                                                } else if (team[i].skill[skill_choice].effect.find("healing mp") != string::npos || team[i].skill[skill_choice].effect.find("Healing mp") != string::npos) {
                                                    cout << "\\==========================================================================/\n";
                                                    nowrna(team[i].name + "'s turn. Choose action: ",69);
                                                    cout << "\\==========================================================================/\n";
                                                    for (int j = 0; j < 4; j++) {
                                                        nowrna("=======================================",69);
                                                        (player == j) ? wrna(team[j].name, 69) : nowrna(team[j].name, 69);
                                                        nowrna("=======================================",69);
                                                    }
                                                    cout << "\\==========================================================================/\n";
                                                    
                                                    char key4 = getch();
                                                    if (key4 == 'w') {
                                                        (player == 0) ? player = 3  : player--; 
                                                    } else if (key4 == 's') {
                                                        (player == 3) ? player = 0 : player++;
                                                    } else if (key4 == 13) {
                                                        if (player <= 3) {
                                                            int damage = team[i].skill[skill_choice].effectvalue + team[player].mp;
                                                            team[player].mp = damage;
                                                            if (team[player].mp > team[player].maxmp) {
                                                                team[player].mp = team[player].maxmp;
                                                            }
                                                            cout << "\\==========================================================================/\n";
                                                            nowrna (team[i].name + " healed " + to_string(team[i].skill[skill_choice].effectvalue) + " MP to " + team[player].name + "!", 69);
                                                            cout << "\\==========================================================================/\n";
                                                            system ("pause");
                                                            action = true;
                                                            team[i].aggro += team[i].skill[skill_choice].skillaggro;
                                                            team[i].mp -= team[i].skill[skill_choice].mpcost;
                                                            player = 0;
                                                            break;
                                                        }
                                                    }
                                                } else if (team[i].skill[skill_choice].effect.find("reviving ally") != string::npos || team[i].skill[skill_choice].effect.find("Reviving ally") != string::npos) {
                                                    bool all_alive = true;
                                                    cout << "\\==========================================================================/\n";
                                                    nowrna(team[i].name + "'s turn. Choose action: ",69);
                                                    cout << "\\==========================================================================/\n";
                                                    for (int j = 0; j < 4; j++) {
                                                        if (team[j].alive == false) {
                                                            nowrna("=======================================",69);
                                                            (player == j) ? wrna(team[j].name, 69) : nowrna(team[j].name, 69);
                                                            nowrna("=======================================",69);
                                                            all_alive = false;
                                                        }
                                                    }
                                                    cout << "\\==========================================================================/\n";
                                                    if (all_alive) {
                                                        nowrna("No Character die! " ,69);
                                                        cout << "\\==========================================================================/\n";
                                                        system ("pause");
                                                        break;
                                                    } else {
                                                        char key4 = getch();
                                                        if (key4 == 'w') {
                                                            (player == 0) ? player = 3  : player--; 
                                                        } else if (key4 == 's') {
                                                            (player == 3) ? player = 0 : player++;
                                                        } else if (key4 == 13) {
                                                            if (player <= 3) {
                                                                int damage = (float)(team[i].skill[skill_choice].effectvalue*0.01)*team[player].maxhp;
                                                                team[player].hp += (int)damage;
                                                                team[player].alive = true;
                                                                cout << "\\==========================================================================/\n";
                                                                nowrna (team[i].name + " revived " + team[player].name + "!", 69);
                                                                cout << "\\==========================================================================/\n";
                                                                system ("pause");
                                                                action = true;
                                                                team[i].aggro += team[i].skill[skill_choice].skillaggro;
                                                                team[i].mp -= team[i].skill[skill_choice].mpcost;
                                                                player = 0;
                                                                break;
                                                            }
                                                        }
                                                    }
                                                } else if (team[i].skill[skill_choice].effect.find("Increasing own attack") != string::npos || team[i].skill[skill_choice].effect.find("increasing own attack") != string::npos) {
                                                    int damage = team[i].skill[skill_choice].effectvalue + team[i].attack;
                                                    team[i].attack = damage;
                                                    cout << "\\==========================================================================/\n";
                                                    nowrna (team[i].name + " Increasing their own attack to " + to_string(team[i].attack) + "!", 69);
                                                    cout << "\\==========================================================================/\n";
                                                    system ("pause");
                                                    action = true;
                                                    team[i].aggro += team[i].skill[skill_choice].skillaggro;
                                                    team[i].mp -= team[i].skill[skill_choice].mpcost;
                                                    break;
                                                }
                                            } else {
                                                nowrna("You don't have enough MP!", 69);
                                                break;
                                            }
                                        }
                                        system("pause");
                                        system ("cls");
                                        break;
                                    }
                                }
                            }
                            break;

                            // Naya sampe fungsi battle yang ini

                        } else if (inputs == 1) {
                            int choose = 0;
                            while (true) {
                                system ("cls");
                                cout << "\\==========================================================================/\n";
                                nowrna ("SKILL DESCRIPTION", 69);
                                cout << "\\==========================================================================/\n";
                                for (int i = 0; i < 4; i++) {
                                    nowrna("=======================================",69);
                                    (choose == i) ? wrna(team[i].name, 69) : nowrna(team[i].name, 69);
                                    nowrna("=======================================", 69);
                                }
                                nowrna("=======================================",69);
                                (choose == 4) ? wrna("BACK", 69) : nowrna("BACK", 69);
                                nowrna("=======================================", 69);
                                cout << "\\==========================================================================/\n";
                                char key5 = getch();
                                if (key5 == 'w') {
                                    (choose == 0) ? choose = 4  : choose--; 
                                } else if (key5 == 's') {
                                    (choose == 4) ? choose = 0 : choose++;
                                } else if (key5 == 13) {
                                    if (choose <= 3) {
                                        for (int j = 0; j < 4; j++) {
                                            nowrna (team[choose].skill[j].name, 69);
                                            nowrna ("MP Cost: " + to_string(team[choose].skill[j].mpcost), 69);
                                            nowrna ("Effect: " + team[choose].skill[j].effect, 69);
                                            nowrna ("Effect Value: " + to_string(team[choose].skill[j].effectvalue), 69);
                                            nowrna ("Increasing Aggro: " + to_string(team[choose].skill[j].skillaggro), 69);
                                            cout << "\\==========================================================================/\n";
                                        }
                                        system ("pause");
                                    } else if (choose == 4) {
                                        break;
                                    }
                                    system ("cls");
                                }
                            }
                        }  else if (inputs == 2) {
                            cout << "You escaped from the battle...\n";
                            system ("pause");
                            return;
                        }
                    } 
                if (action) break;
                }
            }
        } else {
            for (int i = 0; i< 4; i++){
                if (!monsters[i].alive) continue;

                int total_aggro = 0;
                int alive_count = 0;
                int alive_index[4];
                for (int j = 0; j< 4; j++) {
                    if (team[j].alive) {
                        total_aggro += team[j].aggro;
                        alive_index[alive_count] = j;
                        alive_count++;
                    }
                }

                if (alive_count > 0) {
                    int target = 0;
                    if (total_aggro > 0) {
                        int random_aggro = rand() % total_aggro;
                        int current_aggro = 0;
                        
                        for (int j = 0; j < 4; j++) {
                            if (team[j].alive) {
                                current_aggro += team[j].aggro;
                                if (random_aggro < current_aggro) {
                                    target = j;
                                    break;
                                }
                            }
                        }
                    }
                    int damage = max(1, monsters[i].attack - (int)(team[target].defense*0.3));
                    team[target].hp -= damage;
                    cout << "\\==========================================================================/\n";
                    nowrna (monsters[i].name + " attacks " + team[target].name + " for " + to_string(damage) + " damage!", 69);
                    if (team[target].hp <= 0) {
                        team[target].alive = false;
                        nowrna (team[target].name + " has been defeated...", 69);
                    }
                    cout << "\\==========================================================================/\n";
                    bool all_players_dead = true;
                    for (int p = 0; p < 4; p++) {
                        if (team[p].alive) {
                            all_players_dead = false;
                            break;
                        }
                    }
                    if (all_players_dead) {
                        cout << "\\==========================================================================/\n";
                        nowrna("DEFEAT! Your team has been wiped out!\n", 69);
                        cout << "\\==========================================================================/\n";
                        system("pause");
                        return;
                    }
                }
            }
            system ("pause");
            system ("cls");
        }
        turn++;
    }
}

// Feli sampe sini

void map(character charArr[], stage stage[]) {
    int opsi = 0, opsi2 = 0;
    char key;
    while (true) {
        system ("cls");
	    cout << "/====================================================================\\\n";
	    cout << "||  ____                                       __  __               ||\n";
	    cout << "|| |  _ \\ _   _ _ __   __ _  ___  ___  _ __   |  \\/  | __ _ _ __    ||\n";
	    cout << "|| | | | | | | | '_ \\ / _` |/ _ \\/ _ \\| '_ \\  | |\\/| |/ _` | '_ \\   ||\n";
	    cout << "|| | |_| | |_| | | | | (_| |  __/ (_) | | | | | |  | | (_| | |_) |  ||\n";
	    cout << "|| |____/ \\__,_|_| |_|\\__, |\\___|\\___/|_| |_| |_|  |_|\\__,_| .__/   ||\n";
	    cout << "||                    |___/                                |_|      ||\n";
	    cout << "\\====================================================================/\n";
        nowrna("", 63);
        (opsi2 == 0) ? wrna ("======================= ", 63) : nowrna ("======================= ", 63);
        (opsi2 == 0) ? wrna ("Inferno Depths", 63) : nowrna ("Inferno Depths", 63);
        (opsi2 == 0) ? wrna ("======================= ", 63) : nowrna ("======================= ", 63);
        (opsi2 == 1) ? wrna ("======================= ", 63) : nowrna ("======================= ", 63);
        (opsi2 == 1) ? wrna ("Glacier Depths", 63) : nowrna ("Glacier Depths", 63);
        (opsi2 == 1) ? wrna ("======================= ", 63) : nowrna ("======================= ", 63);
        (opsi2 == 2) ? wrna ("======================= ", 63) : nowrna ("======================= ", 63);
        (opsi2 == 2) ? wrna ("Forest Depths", 63) : nowrna ("Forest Depths ", 63);
        (opsi2 == 2) ? wrna ("======================= ", 63) : nowrna ("======================= ", 63);
        (opsi2 == 3) ? wrna ("======================= ", 63) : nowrna ("======================= ", 63);
        (opsi2 == 3) ? wrna ("EXIT", 63) : nowrna ("EXIT", 63);
        (opsi2 == 3) ? wrna ("======================= ", 63) : nowrna ("======================= ", 63);
        nowrna("", 63);
        cout << "\\====================================================================/\n";
        key = getch();

        if (key == 'w') {
            (opsi2 == 0) ? opsi2 = 3  : opsi2--; 
        } else if (key == 's') {
            (opsi2 == 3) ? opsi2 = 0 : opsi2++;
        } else if (key == 13) {
            system("cls");
            if (opsi2 == 0) {
                while (true) {
                    system ("cls");
                    cout << "/==========================================================================\\\n";
                    cout << "||  ___        __                         ____             _   _          ||\n";
                    cout << "|| |_ _|_ __  / _| ___ _ __ _ __   ___   |  _ \\  ___ _ __ | |_| |__  ___  ||\n";
                    cout << "||  | || '_ \\| |_ / _ \\ '__| '_ \\ / _ \\  | | | |/ _ \\ '_ \\| __| '_ \\/ __| ||\n";
                    cout << "||  | || | | |  _|  __/ |  | | | | (_) | | |_| |  __/ |_) | |_| | | \\__ \\ ||\n";
                    cout << "|| |___|_| |_|_|  \\___|_|  |_| |_|\\___/  |____/ \\___| .__/ \\__|_| |_|___/ ||\n";
                    cout << "||                                                  |_|                   ||\n";
                    cout << "\\==========================================================================/\n";
                    nowrna("", 69);
                    (opsi == 0) ? wrna ("======================= ", 69) : nowrna ("======================= ", 69);
                    (opsi == 0) ? wrna ("Slime", 69) : nowrna ("Stage 1", 69);
                    (opsi == 0) ? wrna ("======================= ", 69) : nowrna ("======================= ", 69);
                    (opsi == 1) ? wrna ("======================= ", 69) : nowrna ("======================= ", 69);
                    (opsi == 1) ? wrna ("Bat", 69) : nowrna ("Stage 2", 69);
                    (opsi == 1) ? wrna ("======================= ", 69) : nowrna ("======================= ", 69);
                    (opsi == 2) ? wrna ("======================= ", 69) : nowrna ("======================= ", 69);
                    (opsi == 2) ? wrna ("Crawler", 69) : nowrna ("Stage 3", 69);
                    (opsi == 2) ? wrna ("======================= ", 69) : nowrna ("======================= ", 69);
                    (opsi == 3) ? wrna ("======================= ", 69) : nowrna ("======================= ", 69);
                    (opsi == 3) ? wrna ("Inferno Ignarok", 69) : nowrna ("Boss Stage", 69);
                    (opsi == 3) ? wrna ("======================= ", 69) : nowrna ("======================= ", 69);
                    (opsi == 4) ? wrna ("======================= ", 69) : nowrna ("======================= ", 69);
                    (opsi == 4) ? wrna ("EXIT", 69) : nowrna ("EXIT", 69);
                    (opsi == 4) ? wrna ("======================= ", 69) : nowrna ("======================= ", 69);
                    nowrna("", 69);
                    cout << "\\==========================================================================/\n";
                    key = getch();

                    if (key == 'w') {
                        (opsi == 0) ? opsi = 4  : opsi--; 
                    } else if (key == 's') {
                        (opsi == 4) ? opsi = 0 : opsi++;
                    } else if (key == 13) {
                        system("cls");
                        if (opsi <= 3) {
                            battle(charArr, stage, selected_char, opsi2, opsi);
                        } else if (opsi == 4) {
                            break;
                        }
                    }
                }
            }else if (opsi2 == 1){
            	while (true) {
                    system ("cls");
                    cout << "/======================================================================\\\n";
                    cout << "||   ____ _            _             ____             _   _           ||\n";
                    cout << "||  / ___| | __ _  ___(_) ___ _ __  |  _ \\  ___ _ __ | |_| |__  ___   ||\n";
                    cout << "|| | |  _| |/ _` |/ __| |/ _ \\ '__| | | | |/ _ \\ '_ \\| __| '_ \\/ __|  ||\n";
                    cout << "|| | |_| | | (_| | (__| |  __/ |    | |_| |  __/ |_) | |_| | | \\__ \\  ||\n";
                    cout << "||  \\____|_|\\__,_|\\___|_|\\___|_|    |____/ \\___| .__/ \\__|_| |_|___/  ||\n";
                    cout << "||                                             |_|                    ||\n";
                    cout << "\\======================================================================/\n";
                    nowrna("", 65);
                    (opsi == 0) ? wrna ("======================= ", 65) : nowrna ("======================= ", 65);
                    (opsi == 0) ? wrna ("Goblin", 65) : nowrna ("Stage 1", 64);
                    (opsi == 0) ? wrna ("======================= ", 65) : nowrna ("======================= ", 65);
                    (opsi == 1) ? wrna ("======================= ", 65) : nowrna ("======================= ", 65);
                    (opsi == 1) ? wrna ("Wolf", 65) : nowrna ("Stage 2", 64);
                    (opsi == 1) ? wrna ("======================= ", 65) : nowrna ("======================= ", 65);
                    (opsi == 2) ? wrna ("======================= ", 65) : nowrna ("======================= ", 65);
                    (opsi == 2) ? wrna ("Wraith", 65) : nowrna ("Stage 3", 65);
                    (opsi == 2) ? wrna ("======================= ", 65) : nowrna ("======================= ", 65);
                    (opsi == 3) ? wrna ("======================= ", 65) : nowrna ("======================= ", 65);
                    (opsi == 3) ? wrna ("Glacier Sentinel", 65) : nowrna ("Boss Stage", 65);
                    (opsi == 3) ? wrna ("======================= ", 65) : nowrna ("======================= ", 65);
                    (opsi == 4) ? wrna ("======================= ", 65) : nowrna ("======================= ", 65);
                    (opsi == 4) ? wrna ("EXIT", 65) : nowrna ("EXIT", 65);
                    (opsi == 4) ? wrna ("======================= ", 65) : nowrna ("======================= ", 65);
                    nowrna("", 65);
                    cout << "\\======================================================================/\n";
                    key = getch();

                    if (key == 'w') {
                        (opsi == 0) ? opsi = 4  : opsi--; 
                    } else if (key == 's') {
                        (opsi == 4) ? opsi = 0 : opsi++;
                    } else if (key == 13) {
                        system("cls");
                        if (opsi <= 3) {
                            battle(charArr, stage, selected_char, opsi2, opsi);
                        } else if (opsi == 4) {
                            break;
                        }
                    }
                }
			}else if (opsi2 == 2){
				while (true) {
                    system ("cls");
                    cout << "/==================================================================\\\n";
                    cout << "||  _____                   _     ____             _   _          ||\n";
                    cout << "|| |  ___|__  _ __ ___  ___| |_  |  _ \\  ___ _ __ | |_| |__  ___  ||\n";
                    cout << "|| | |_ / _ \\| '__/ _ \\/ __| __| | | | |/ _ \\ '_ \\| __| '_ \\/ __| ||\n";
                    cout << "|| |  _| (_) | | |  __/\\__ \\ |_  | |_| |  __/ |_) | |_| | | \\__ \\ ||\n";
                    cout << "|| |_|  \\___/|_|  \\___||___/\\__| |____/ \\___| .__/ \\__|_| |_|___/ ||\n";
                    cout << "||                                          |_|                   ||\n";
                    cout << "\\==================================================================/\n";
                    nowrna("", 61);
                    (opsi == 0) ? wrna ("======================= ", 61) : nowrna ("======================= ", 61);
                    (opsi == 0) ? wrna ("Thornling", 61) : nowrna ("Stage 1", 61);
                    (opsi == 0) ? wrna ("======================= ", 61) : nowrna ("======================= ", 61);
                    (opsi == 1) ? wrna ("======================= ", 61) : nowrna ("======================= ", 61);
                    (opsi == 1) ? wrna ("Living Vines", 61) : nowrna ("Stage 2", 61);
                    (opsi == 1) ? wrna ("======================= ", 61) : nowrna ("======================= ", 61);
                    (opsi == 2) ? wrna ("======================= ", 61) : nowrna ("======================= ", 61);
                    (opsi == 2) ? wrna ("Poison Toad", 61) : nowrna ("Stage 3", 61);
                    (opsi == 2) ? wrna ("======================= ", 61) : nowrna ("======================= ", 61);
                    (opsi == 3) ? wrna ("======================= ", 61) : nowrna ("======================= ", 61);
                    (opsi == 3) ? wrna ("Forest Beast", 61) : nowrna ("Boss Stage", 61);
                    (opsi == 3) ? wrna ("======================= ", 61) : nowrna ("======================= ", 61);
                    (opsi == 4) ? wrna ("======================= ", 61) : nowrna ("======================= ", 61);
                    (opsi == 4) ? wrna ("EXIT", 61) : nowrna ("EXIT", 61);
                    (opsi == 4) ? wrna ("======================= ", 61) : nowrna ("======================= ", 61);
                    nowrna("", 61);
                    cout << "\\==================================================================/\n";
                    key = getch();

                    if (key == 'w') {
                        (opsi == 0) ? opsi = 4  : opsi--; 
                    } else if (key == 's') {
                        (opsi == 4) ? opsi = 0 : opsi++;
                    } else if (key == 13) {
                        system("cls");
                        if (opsi <= 3) {
                            battle(charArr, stage, selected_char, opsi2, opsi);
                        } else if (opsi == 4) {
                            break;
                        }
                    }
                }
			} else if (opsi2 == 3) {
                return;
            }
        }
    }
}

void chardisplay (character charArr[], stage stage[]){
    int pilih_char;
    int opsi = 0;
    bool taken = false;
    int opsi2 = 1;
    char key;
    int index = 0;
    while (true){
        system ("cls");
        logo_charselector();
        nowrna ("Choose 4 character to continue!", 86);
        nowrna("Char selected: " + char_name[0] + ", " + char_name[1] + ", " + char_name[2] + ", " + char_name[3], 86);
        for (int i = 0; i < 10; i++) {
            nowrna("=======================================",86);
            (opsi == 0 + i) ? wrna(charArr[i].name + " (" + charArr[i].role + ")", 86) : nowrna(charArr[i].name + " (" + charArr[i].role + ")", 86);
            nowrna("=======================================",86);
        }
        nowrna ("=======================================", 86);
        (opsi == 10) ? wrna (" EXIT", 86) : nowrna (" EXIT", 86);
        nowrna ("=======================================", 86);
        cout << "\\===========================================================================================/\n";
        key = getch();

        if (key == 'w') {
            (opsi == 0) ? opsi = 10  : opsi--; 
        } else if (key == 's') {
            (opsi == 10) ? opsi = 0 : opsi++;
        } else if (key == 13) {
            system("cls");
            if (opsi <= 9) {
                for (int i = 0; i < 4; i ++){
                    if (charArr[opsi].name == char_name[i]){
                        taken = true;
                    }
                }

                if (!taken){
                    while (true) {
                        charstat(charArr, opsi);
                        cout << "Do you want to choose this character?\n";
                        cout << "==================="<< endl;
                        (opsi2 == 1) ? wrna (" YES ", 12) : nowrna (" YES ", 12);
                        cout << "==================="<<endl;
                        (opsi2 == 2) ? wrna (" NO  ", 12) : nowrna (" NO  ", 12);
                        cout << "==================="<<endl;
                        key = getch();
        
                        if (key == 'w') {
                            (opsi2 == 1) ? opsi2 = 2  : opsi2--; 
                        } else if (key == 's') {
                            (opsi2 == 2) ? opsi2 = 1 : opsi2++;
                        } else if (key == 13) {
                            if (opsi2 == 1) {
                                cout << "You've choosen " << charArr[opsi].name << "! They will help you along the journey!\n";
                                selected_char[index] = opsi;
                                char_name[index] = charArr[opsi].name;
                                index++;
                                system("pause");
                                break;
                            } else if (opsi2 == 2) {
                                cout << "Another character? Umm... okay...\n";
                                system ("pause");
                                break;
                            }
                        }
                    }
                } else {
                    cout << "Character is already taken!\n";
                    taken = false;
                    system ("pause");
                    system ("cls");
                }
                
                if (index > 3) {
                    map(charArr, stage);
                    for (int i = 0; i < 4; i++){
                        selected_char[i] = -1;
                    }
                    for (int i = 0; i < 4; i++){
                        char_name[i] = "";
                    }
                    index = 0;
                }
            } else if (opsi == 10) {
                for (int i = 0; i < 4; i++){
                    selected_char[i] = -1;
                }
                for (int i = 0; i < 4; i++){
                    char_name[i] = "";
                }
                index = 0;
                break;
            }
        }
    }
}

void menu(character charArr[], stage stage[]){
    int opsi = 1;
    char key;
    while (true) {
        system ("cls");
        cout << "/===================================================================================\\\n";
        nowrna("  _____     _                    __   ____                                      ", 76);
        nowrna(" |_   _|_ _| | ___  ___    ___  / _| |  _ \\ _   _ _ __   __ _  ___  ___  _ __   ", 76);
        nowrna("   | |/ _` | |/ _ \\/ __|  / _ \\| |_  | | | | | | | '_ \\ / _` |/ _ \\/ _ \\| '_ \\  ", 76);
        nowrna("   | | (_| | |  __/\\__ \\ | (_) |  _| | |_| | |_| | | | | (_| |  __/ (_) | | | | ", 76);
        nowrna("   |_|\\__,_|_|\\___||___/  \\___/|_|   |____/ \\__,_|_| |_|\\__, |\\___|\\___/|_| |_| ", 76);
        nowrna("                                                        |___/                   ", 76);
        cout << "\\===================================================================================/\n";
        nowrna(" ", 78);
        (opsi == 1) ? wrna (" ======================= ", 78) : nowrna (" ======================= ", 78);
        (opsi == 1) ? wrna (" Begin Your Adventure! ", 78) : nowrna (" Begin Your Adventure! ", 78);
        (opsi == 1) ? wrna (" ======================= ", 78) : nowrna (" ======================= ", 78);
        (opsi == 2) ? wrna (" ======================= ", 78) : nowrna (" ======================= ", 78);
        (opsi == 2) ? wrna (" Exit  ", 78) : nowrna (" Exit  ", 78);
        (opsi == 2) ? wrna (" ======================= ", 78) : nowrna (" ======================= ", 78);
        nowrna(" ", 78);
        cout << "\\===================================================================================/\n";
        key = getch();

        if (key == 'w') {
            (opsi == 1) ? opsi = 2  : opsi--; 
        } else if (key == 's') {
            (opsi == 2) ? opsi = 1 : opsi++;
        } else if (key == 13) {
            system("cls");
            if (opsi == 1) {
                chardisplay(charArr, stage);
            } else {
                cout << "/===================================================================================\\\n";
                nowrna("  _____     _                    __   ____                                      ", 76);
                nowrna(" |_   _|_ _| | ___  ___    ___  / _| |  _ \\ _   _ _ __   __ _  ___  ___  _ __   ", 76);
                nowrna("   | |/ _` | |/ _ \\/ __|  / _ \\| |_  | | | | | | | '_ \\ / _` |/ _ \\/ _ \\| '_ \\  ", 76);
                nowrna("   | | (_| | |  __/\\__ \\ | (_) |  _| | |_| | |_| | | | | (_| |  __/ (_) | | | | ", 76);
                nowrna("   |_|\\__,_|_|\\___||___/  \\___/|_|   |____/ \\__,_|_| |_|\\__, |\\___|\\___/|_| |_| ", 76);
                nowrna("                                                        |___/                   ", 76);
                cout << "\\===================================================================================/\n";
                nowrna("Thank You for Playing!", 78);
                cout << "\\===================================================================================/\n";
                break;
            }
        }
    }
}
// Revan sampe sini

int main(){ //Naya
    character charArr[10] = {1, 0, 15, "Kanrei", "Attacker", "Archer", {{"Rakunda", 15, "Dealing electro (magic) damage to one enemy", (int)charArr[0].attack*1.2, 25}, 
                            {"Arrow Rain", 15, "Dealing ranged physical damage to all enemy", (int)charArr[0].attack*0.8, 15}, 
                            {"Sneaky Movements", 15, "Decreasing aggro significantly", 0, -25},
                            {"Basic Attack", 0, "Dealing ranged physical damage to one enemy", (int)charArr[0].attack*0.4, 10}},  150, 150, 54, 54, 60, 60, 40, 30, 30, true,

                            1, 0, 15, "Reinee", "Attacker", "Mage", {{"Maragadyne", 20, "Dealing fire (magic) damage to all enemy", (int)charArr[1].attack*1.2, 25}, 
                            {"Mabufula", 15, "Dealing ice (magic) damage to all enemy", (int)charArr[1].attack*0.8, 20}, 
                            {"Sneaky Movements", 15, "Decreasing aggro significantly", 0, -25}, 
                            {"Basic Attack", 0, "Dealing magic damage to one enemy", (int)charArr[1].attack*0.4, 10}},  120, 120, 40, 40, 70, 70, 45, 30, 30, true,
                        
                            1, 0, 15, "Aida", "Tanker", "Warrior", {{"Body Steel", 20, "Grants a shield that reduce damage to all allies", 15, 25}, 
                            {"Taunt", 15, "Slightly increasing attack for all ally for this stage", 10, 25}, 
                            {"Decoy", 15, "Increasing aggro significantly", 0, 45}, 
                            {"Basic Attack", 0, "Dealing magic damage to one enemy", (int)charArr[2].attack*0.4, 10}},  200, 200, 20, 20, 70, 70, 100, 60, 60, true,
                        
                            1, 0, 15, "Eirin", "Support", "Mage", {{"Diarama", 25, "healed one ally", 10, 15}, 
                            {"Matarukaja",15, "Slightly increasing attack for all ally for this stage", 10, 20}, 
                            {"Mana Healing", 15, "Healing mp for one ally", 10, 20}, 
                            {"Basic Attack", 0, "Dealing magic damage to one enemy", (int)charArr[3].attack*0.4, 10}},  100, 100, 30, 30, 70, 70, 15, 15, 15, true,
                            
                            1, 0, 15, "Jonghyuk", "Attacker", "Warrior", {{"Splitting the Sky Energy", 10, "Moderately increasing own attack for this stage", 20, 20}, 
                            {"Breaking the Sky Swordsmanship", 15, "Dealing melee physical attack to one enemy", (int)charArr[4].attack*1.2, 25}, 
                            {"Furious Flame God Blade", 20, "Dealing melee fire (magic) damage to all enemy", charArr[4].attack, 30}, 
                            {"Basic Attack", 0, "Dealing magic damage to one enemy", (int)charArr[4].attack*0.4, 10}},  160, 160, 65, 65, 65, 65, 45, 50, 50, true,
                        
                            1, 0, 15, "Lucian", "Healer", "Mage", {{"Mediarama", 20, "Moderately healed all allies", 25, 15}, 
                            {"Recarm", 40, "Reviving ally with 50% hp healed", 50, 30}, 
                            {"Mana Healing", 15, "Healing mp for one ally", 10, 20}, 
                            {"Basic Attack", 0, "Dealing magic damage to one enemy", (int)charArr[5].attack*0.4, 10}},  100, 100, 30, 30, 70, 70, 45, 15, 15, true,
                        
                            1, 0, 15, "Gorundar", "Tanker", "Warrior", {{"Iron Wall", 10, "Increasing shield for this stage for all allies", 20, 20},
                            {"Shield Bash", 15, "Dealing physical damage and stuns one enemy", 30, 10},
                            {"Roar of War", 20, "Increasing aggro significantly", 0, 40},
                            {"Basic Attack", 0, "Dealing physical damage to one enemy", (int)(charArr[6].attack * 0.4), 10}},  230, 230, 30, 30, 50, 50, 120, 65, 65, true,
                        
                            1, 0, 15, "Lunethiya", "Support", "Mage", {{"Matarukaja", 15, "Slightly increasing attack for all ally for this stage", 10, 20},
                            {"Mana Gift", 20, "Healing mp for one ally", 25, 5},
                            {"Magic Shield", 10, "Grants a shield that reduce damage to all", 30, 15},
                            {"Basic Attack", 0, "Dealing magic damage to one enemy", (int)(charArr[7].attack * 0.4), 5}},  140, 140, 25, 25, 75, 75, 30, 20, 20, true,
                        
                            1, 0, 15, "Lyssia", "Healer", "Mage", {{"Healing Light", 15, "Moderately healed one ally", 30, 5},
                            {"Mana Transfer", 25, "Healing mp for one ally", 30, 5},
                            {"Barrier", 20, "Grants a shield that reduce damage to all allies", 40, 10},
                            {"Basic Attack", 0, "Dealing magic damage to one enemy", (int)(charArr[8].attack * 0.4), 5}},  120, 120, 30, 30, 80, 80, 10, 20, 20, true,
                        
                            1, 0, 15, "Thealric", "Attacker", "Warrior", {{"Shadow Strike", 20, "Dealing high damage to one enemy", (int)charArr[9].attack*1.2, 20},
                            {"Poison Blade", 15, "Dealing melee physical damage to all enemy", (int)charArr[9].attack*0.8, 30},
                            {"Evade", 10, "Decreasing aggro significantly", 0, -20},
                            {"Basic Attack", 0, "Dealing melee physical damage to one enemy", (int)(charArr[9].attack * 0.4), 10}},  130, 130, 60, 60, 50, 50, 30, 20, 20, true};
    stage stage[3] = {{{{"Hazardous Slime", 120, 120, "No Traits", 20, 40, 5, true, "Wumbo Slime", 120, 120, "No Traits", 20, 40, 5, true, "Fire Slime", 120, 120, "No Traits", 20, 40, 5, true, "Zevorus Slime", 120, 120, "No Traits", 20, 40, 5, true},
                      {"Scorchbat", 160, 160, "No Traits", 10, 60, 10, true, "Pyro Bat", 100, 100, "No Traits", 10, 60, 10, true, "Hellbat", 200, 200, "No Traits", 10, 60, 10, true, "Cinderwing", 180, 180, "No Traits", 10, 60, 10, true},
                      {"Blister Crawler", 250, 250, "No Traits", 25, 30, 15, true, "Ash Crawler", 250, 250, "No Traits", 25, 30, 15, true, "Hell Crawler", 250, 250, "No Traits", 25, 30, 15, true, "Ember Crawler", 250, 250, "No Traits", 25, 30, 15, true}, 
                      {"Inferno Ignarok", 800, 800, "resist to fire", 50, 100, 40, true, "Hazardous Slime", 120, 120, "resist to lightning", 20, 40, 5, true,"Pyro Bat", 100, 100, "No Traits", 10, 60, 10, true, "Hell Crawler", 250, 250, "No Traits", 25, 30, 15, true}}}, 
                      {{{"Frostgob", 300, 300, "No Traits", 40, 60, 20, true, "Glacier Imp", 250, 250, "No Traits", 70, 20, 20, true, "Chillfang Goblin", 300, 300, "No Traits", 40, 60, 20, true, "Frostbite Gremlin", 400, 400, "No Traits", 20, 60, 25, true},
                        {"Frostfang", 350, 350, "No Traits", 40, 60, 25, true, "Rimewolf", 350, 350, "No Traits", 40, 60, 25, true, "Cryowulf", 350, 350, "No Traits", 40, 60, 25, true, "Hailhowl", 350, 350, "No Traits", 40, 60, 25, true},
                        {"Chillshade", 450, 450, "No Traits", 40, 60, 35, true, "Rime Geist", 400, 400, "No Traits", 50, 60, 35, true, "Snowveil", 400, 400, "No Traits", 50, 60, 35, true, "Cryoshade", 500, 500, "No Traits", 30, 60, 35, true},
                        {"Glacier Sentinel", 1650, 1650, "resist to ice", 80, 200, 70, true, "Rime Geist", 400, 400, "resist to ice", 50, 60, 35, true, "Rimewolf", 350, 350, "resist to physical", 40, 60, 25, true, "Glacier Imp", 250, 250, "No Traits", 70, 20, 20, true}}}, 
                      {{{"Briarborn", 450, 450, "No Traits", 40, 60, 40, true, "Spineroot", 420, 420, "No Traits", 50, 20, 40, true, "Bramblescourge", 480, 480, "No Traits", 80, 20, 40, true, "Thistlekin", 420, 420, "No Traits", 50, 20, 40, true},
                        {"Creeping Snare", 500, 500, "No Traits", 40, 60, 50, true, "Grasping Tangle", 400, 400, "resist to magic", 40, 40, 55, true, "Rootwretch", 450, 450, "No Traits", 70, 60, 50, true, "Twistvine", 450, 450, "No Traits", 40, 60, 50, true}, 
                        {"Venomtoad", 500, 500, "resist to melee", 40, 60, 65, true, "Blighttongue", 650, 650, "No Traits", 40, 60, 60, true, "Toxicribbit", 700, 700, "No Traits", 40, 60, 60, true, "Sludgejumper", 500, 500, "resist to fire", 40, 60, 50, true},
                        {"Forest Beast", 2300, 2300, "resist to ranged", 40, 400, 65, true, "Venomtoad", 500, 500, "resist to melee", 40, 60, 65, true, "Grasping Tangle", 400, 400, "resist to magic", 40, 40, 55, true, "Thistlekin", 420, 420, "No Traits", 50, 20, 40, true}}}};
    menu(charArr, stage);
    return 0; 
}