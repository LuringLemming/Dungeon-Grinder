#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<time.h>

//Ellenfelek struktúrája//

typedef struct{
    char *name;
    int hp;
    int attack;
}enemy;

//Fegyverek struktúrája//

typedef struct{
    char *name;
    int min_dmg;
    int max_dmg;
}weapon;

//Szöveg színek//

void red(){
  printf("\033[1;31m");
}

void yellow(){
  printf("\033[1;33m");
}

void thick(){
  printf("\033[1m");
}

//a reset függvény visszaállítja az eredeti betűstílust//

void reset(){
  printf("\033[0m");
}

//új oldal, hogy a régebbi szövegek ne zavarjanak be. Jobb átláthatóság miatt//

void newpage(){
    int i=0;
    while(i<30){
        printf("\n");
        i+=1;
    }
}

//Random szám generátor. A következő ellenfél, a loot és a sebzés kisorsolásához//

int Random(int lower, int upper){
    
    srand(time(0));
    int k;
    for (k = 0; k < 1; k++){
        int num = (rand() % (upper - lower + 1)) + lower;
        return num;
    }
}

//Bevezető szöveg.//

void start(){
    reset();

    printf("Hello there.\n");
    Sleep(2000);
    printf("You must be the new recruit.\n");
    Sleep(2000);
    printf("I will be your fellow guide throughout this adventure\n");
    Sleep(2500);
    printf("Can you see that dungeon?\n");
    Sleep(1500);
    printf("It is stuffed with loot. So lets grab what we can.\n");
    Sleep(2500);
    printf("Let me tell you the basics about dungeon hunting.\n");
    Sleep(2000);
    printf("Monsters are going to come at us one after another, and the deeper we go the stronger the enemies become.\n");
    Sleep(3000);
    printf("If we dont die from the countless floors of enemies.\n");
    Sleep(2500);
    printf("On the deepest level there is the leader of this cursed place.\n");
    Sleep(2500);
    printf("They just call him "); thick(); printf("ApplePieLord"); reset(); printf(".\n");
    Sleep(5000);
    newpage();
}

void Apple_in(){

    printf("We finaly meet.\n");
    Sleep(1000);
    printf("I have heard the endless waves of screaming echoing far down into my chamber...\n");
    Sleep(2500);
    printf("I suppose you are responsible for that\n");
    Sleep(2000);
    printf("Look around you weakling, the room is wretched with blood, skulls of your fellow adventurers scattered everywhere\n");
    Sleep(4000);
    printf("Are you sure you want this?\n");
    Sleep(1000);
    thick();
    printf("I'll make your skull the most precious one in my collection...\n");
    reset();
    Sleep(4000);
    newpage();
}

void Apple_out(){

    printf("AAAAAAARRRGGGHH\n");
    Sleep(1000);
    printf("Y-YOU LITTLE-a-arggh\n");
    Sleep(1000);
    printf("Well..\n");
    Sleep(2000);
    printf("I suppose that is the end then..\n");
    Sleep(1500);
    printf("This dungeon will be free from my wrath\n");
    Sleep(2000);
    printf("Thanks to you, scum\n");
    Sleep(1500);
    printf("BUT I WILL BE BACK!!\n");
    Sleep(1500);
    printf("I'LL BE BACK AND I'LL TORMENT YOUR WORLD ONCE AGAIN\n");
    Sleep(2000);
    thick();
    printf("AND YOUR KIND WILL BOW BEFORE ME!!\n");
    Sleep(1000);
    printf("MWUHAHAHAHAHAHA-\n");
    reset();
    Sleep(3000);
    printf("*dies*\n");
    Sleep(5000);
}

int main(){
    reset();
    //Ellenfelek nevei és statjai//

    // Slime //
    
    enemy slime1;
    slime1.name = "Blue Slime"; slime1.hp = 5; slime1.attack = 1;
    enemy slime2;
    slime2.name = "Yellow Slime"; slime2.hp = 6; slime2.attack = 1;
    enemy slime3;
    slime3.name = "Purple Slime"; slime3.hp = 6; slime3.attack = 2;
    enemy slime4;
    slime4.name = "Green Slime"; slime4.hp = 7; slime4.attack = 2;
    enemy slime5;
    slime5.name = "Red Slime"; slime5.hp = 7; slime5.attack = 3;
    enemy slime6;
    slime6.name = "Black Slime"; slime6.hp = 9; slime6.attack = 3;
    enemy slime7;
    slime7.name = "Bioluminescent Slime"; slime7.hp = 10; slime7.attack = 4;
    enemy slimeboss1;
    slimeboss1.name = "Mutated Slime"; slimeboss1.hp = 15; slimeboss1.attack = 5;
    
    // Elf //

    enemy elf1;
    elf1.name = "Elven Scout"; elf1.hp = 5; elf1.attack = 2;
    enemy elf2;
    elf2.name = "Elven Ranger"; elf2.hp = 5; elf2.attack = 3;
    enemy elf3;
    elf3.name = "Elven Mage"; elf3.hp = 7; elf3.attack = 1;
    enemy elf4;
    elf4.name = "Elven Warrior"; elf4.hp = 10; elf4.attack = 2;
    enemy elf5;
    elf5.name = "Elven Beastmaster"; elf5.hp = 5; elf5.attack = 5;
    enemy elf6;
    elf6.name = "Elven Enchantress"; elf6.hp =8; elf6.attack = 3;
    enemy elf7;
    elf7.name = "Elven Brute"; elf7.hp = 15; elf7.attack = 4;
    enemy elfboss1;
    elfboss1.name = "Elven Dragonrider"; elfboss1.hp = 20; elfboss1.attack = 5;

    // Orc //

    enemy orc1;
    orc1.name = "Orc Ballista"; orc1.hp = 6; orc1.attack = 3;
    enemy orc2;
    orc2.name = "Orc Warrior"; orc2.hp = 10; orc2.attack = 5;
    enemy orc3;
    orc3.name = "Orc Cannibal"; orc3.hp = 12; orc3.attack = 4;
    enemy orc4;
    orc4.name = "Orc Spellbrewer"; orc4.hp = 8; orc4.attack = 8;
    enemy orc5;
    orc5.name = "Orc Beastmaster"; orc5.hp = 6; orc5.attack = 10;
    enemy orcboss1;
    orcboss1.name = "The Skullcrusher"; orcboss1.hp = 15; orcboss1.attack = 7;

    // Undead //

    enemy undead1;
    undead1.name = "Flesh Skeleton"; undead1.hp = 3; undead1.attack = 7;
    enemy undead2;
    undead2.name = "Undead Spawn"; undead2.hp = 8; undead2.attack = 6;
    enemy undead3;
    undead3.name = "Undead Shrieker"; undead3.hp = 10; undead3.attack = 7;
    enemy undead4;
    undead4.name = "Undead Mindbreaker"; undead4.hp = 14; undead4.attack = 7;
    enemy undead5;
    undead5.name = "Zombified Hound"; undead5.hp = 6; undead5.attack = 10;
    enemy undead6;
    undead6.name = "Undead Hannibal"; undead6.hp = 15; undead6.attack = 8;
    enemy undeadboss1;
    undeadboss1.name = "Undead Giant"; undeadboss1.hp = 20; undeadboss1.attack = 7;

    // Demon //

    enemy demon1;
    demon1.name = "Imp"; demon1.hp = 7; demon1.attack = 5;
    enemy demon2;
    demon2.name = "Demon"; demon2.hp = 12; demon2.attack = 8;
    enemy demon3;
    demon3.name = "Demon Torturer"; demon3.hp = 15; demon3.attack = 8;
    enemy demon4;
    demon4.name = "Hellhound"; demon4.hp = 15; demon4.attack = 10;
    enemy demon5;
    demon5.name = "Succubus"; demon5.hp = 18; demon5.attack = 10;
    enemy demonboss1;
    demonboss1.name = "Elder Hellhound"; demonboss1.hp = 20; demonboss1.attack = 10;

    // Dark Elf //

    enemy dark1;
    dark1.name = "Turned Elf"; dark1.hp = 10; dark1.attack = 6;
    enemy dark2;
    dark2.name = "Brainwashed Slave"; dark2.hp = 14; dark2.attack = 8;
    enemy dark3;
    dark3.name = "Turned Brute"; dark3.hp = 18; dark3.attack = 10;
    enemy dark4;
    dark4.name = "Turned Corruptor"; dark4.hp = 20; dark4.attack = 12;
    enemy dark5;
    dark5.name = "Turned Saber"; dark5.hp = 22; dark5.attack = 12;
    enemy dark6;
    dark6.name = "Turned Enchantress"; dark6.hp = 25; dark6.attack = 14;
    enemy darkboss1;
    darkboss1.name = "World Corruptor"; darkboss1.hp = 30; darkboss1.attack = 15;

    //ApplePieLord (Leader)//

    enemy ApplePieLord;
    ApplePieLord.name = "ApplePieLord"; ApplePieLord.hp = 60; ApplePieLord.attack = 20;


    //0-8 easy, 9-24 normal, 25-35 hard, 36-39 boss, 40 ApplePieLord//

    enemy easy[41] = {slime1,slime2,slime3,elf1,elf2,elf3,elf4,slime4,slime5,slime6,slime7,elf5,elf6,elf7,orc1,orc2,orc3,orc4,orc5,
    undead1,undead2,undead3,undead4,undead5,undead6, demon1,demon2,demon3,demon4,demon5,dark1,dark2,dark3,dark4,dark5,dark6,
    slimeboss1,elfboss1,orcboss1,undeadboss1,ApplePieLord};

    //fegyverek//

    weapon sword1;
    sword1.name = "Dagger"; sword1.min_dmg = 1; sword1.max_dmg = 5;
    weapon sword2;
    sword2.name = "Sword"; sword2.min_dmg = 2; sword2.max_dmg = 6;
    weapon sword3;
    sword3.name = "Long Sword", sword3.min_dmg = 2; sword3.max_dmg = 8;
    weapon sword4;
    sword4.name = "Falchion"; sword4.min_dmg = 3; sword4.max_dmg = 6;
    weapon sword5;
    sword5.name = "Bastard Sword"; sword5.min_dmg = 3; sword5.max_dmg = 8;
    weapon sword6;
    sword6.name = "Sabre"; sword6.min_dmg = 4; sword6.max_dmg = 8;
    weapon sword7;
    sword7.name = "War Cleaver"; sword7.min_dmg = 4; sword7.max_dmg = 10;
    weapon sword8;
    sword8.name = "Sword of War"; sword8.min_dmg = 5; sword8.max_dmg = 10;

    weapon pole1;
    pole1.name = "Spear"; pole1.min_dmg = 2; pole1.max_dmg = 4;
    weapon pole2;
    pole2.name = "Lance"; pole2.min_dmg = 2; pole2.max_dmg = 6;
    weapon pole3;
    pole3.name = "Double Sided Lance"; pole3.min_dmg = 3; pole3.max_dmg = 6;
    weapon pole4;
    pole4.name = "Pike"; pole4.min_dmg = 3; pole4.max_dmg = 8;
    weapon pole5;
    pole5.name = "Military Scythe"; pole5.min_dmg = 5; pole5.max_dmg = 8;
    weapon pole6;
    pole6.name = "War Spear"; pole6.min_dmg = 5; pole6.max_dmg = 10;

    weapon weapons[14] = {sword1,sword2,sword3,pole1,pole2,pole3,sword4,sword5,pole4,pole5,sword6,sword7,pole6,sword8};
    
    int hp = 30;
    int xp = 0;
    int min_attack = 0;
    int max_attack = 5;
    int potion = 3;
    int answer;
    int damage;
    int income;
    int current = -1;
    int inv = 0;
    int level = 0;
    int attack_level = 0;
    int protection_level = 0;
    int r;
    int floor = 1;

    //Ha van elmentett előző játék, akkor megkérdezi szeretnénk-e azt folytatni. Ez esetben betölti az akkor elmentett értékeket//
    //Ha a nemet választjuk vagy nincs mentett fájl, akkor az alap értékek maradnak//

    FILE *fptr;

    fptr = fopen("savefile.txt","r");
    if(fptr != NULL){
        printf("Do you wish to continue your last game?\n");
        printf("1: Yes\n");
        printf("2: No\n");
        scanf("%d", &answer);
        if(answer == 1);{
            while(fscanf(fptr,"%d %d %d %d %d %d %d %d %d %d", &hp, &xp, &min_attack, &max_attack, &potion, &current, &level, &attack_level, &protection_level, &floor)==1);
            newpage();
        }
    }

    if(answer == 2 || fptr == NULL){
        hp = 30;
        xp = 0;
        min_attack = 0;
        max_attack = 5;
        potion = 3;
        current = -1;
        inv = 0;
        level = 0;
        attack_level = 0;
        protection_level = 0;
        floor = 1;
        newpage();
        start();
    }

    fclose(fptr);


    //Addig megy a játék amég a karakterünk élete nullára csökken vagy legyőzzük a végső ellenfelet//
    //Sorsol egy véletlen ellenfelet, majd a guide elmondja a nevét és statjait//
    //Utána a saját statjainkat láthatjuk//
    //Kiválaszthatjuk mit szeretnénk csináni ezután//
    //Harc rendszer//
    //Minél mélyebbre megyünk a dungeon-ban, annál erősebbek lesznek az ellenfelek//
    //Ha elértük a 25. szintet akkor a vezetővel fogunk találkozni, aki egy dialógussal kezdi a csatát és ha legyőztük azzal is fejezi be.//


    while(hp>0){

        if(floor<=5){
            r = Random(0,8);
        }
        if(floor>5&&floor<15){
            r = Random(9,24);
        }
        if(floor>15){
            r = Random(25,35);
        }
        if(floor == 10 || floor == 15 || floor == 20){
            r = Random(36,40);
        }
        if(floor == 25){
            r = 41;
            Apple_in();
        }
        if(floor == 26){ 
            Apple_out();
            remove("savefile.txt");
            return 0;
        }
        printf("We are on ");thick();printf("Floor %d\n", floor);reset();
        printf("Our next enemy is a "); red(); printf("%s",easy[r].name);reset(); printf(". It has ");thick(); printf("%d health ",easy[r].hp); reset(); printf("and "); thick(); printf("%d attack",easy[r].attack); reset(); printf(".\n");
        while(easy[r].hp>0){
            if(hp<=0){
                break;
            }
            printf("You have ");thick();printf("%d health ",hp); reset(); printf("and ");yellow(); printf("%d xp",xp); reset(); printf(".\n");
            printf("What will you do?\n");
            printf("1: Attack (damage: %d-%d)\n",min_attack + attack_level,max_attack + attack_level);
            printf("2: Heal (you have %d potion)\n",potion);
            printf("3: Inventory\n");
            printf("4: Save and Exit\n\n");
            scanf("%d", &answer);
            switch (answer){
            case 1:
                damage = Random(min_attack, max_attack);
                easy[r].hp = easy[r].hp-damage-attack_level;
                inv = 0;
                break;

            case 2:
                if(potion == 0 || hp > 20){
                    printf("\n\nYou have max health or you dont have any potions.\n\n");
                    inv = 1;
                    Sleep(1500);
                }
                if(potion > 0 && hp < 20){
                    hp+=10;
                    potion-=1;
                    damage = 0;
                    inv = 1;
                }
                break; 

            case 3:
                newpage();
                if(current == -1){
                    printf("Level: %d\n", level);
                    printf("+%d attack\n", attack_level);
                    printf("+%d protection\n", protection_level);
                    printf("Weapon: Bare hands\n");
                    printf("Potions: %d\n\n\n", potion);
                    inv = 1;
                    Sleep(3000);
                    break;
                }
                else{
                    printf("Level: %d\n", level);
                    printf("+%d attack\n", attack_level);
                    printf("+%d protection\n", protection_level);                    
                    printf("Weapon: %s\n", weapons[current].name);
                    printf("Potions: %d\n\n\n", potion);
                    inv = 1;
                    Sleep(3000);
                }
                break;

            case 4:
                fptr = fopen("savefile.txt","w");
                fprintf(fptr,"%d %d %d %d %d %d %d %d %d %d", hp, xp, min_attack, max_attack, potion, current, level, attack_level, protection_level, floor);
                fclose(fptr);
                return 0;

            default:
                break;         
            }

            //Ha az ellenfél nem halt bele a támadásba, akkor kiírja mennyit sebeztünk ellenfelünkbe//
            //Majd az ellenfél támad és kiírja ő mennyit sebzett belénk//
            
            if(inv == 0){
                Sleep(1000);
                if(easy[r].hp>0){
                    printf("\nYou did ");thick(); printf("%d damage",damage + attack_level); reset(); printf(". The "); red(); printf("%s ",easy[r].name); reset(); printf("has ");thick(); printf("%d health ",easy[r].hp); reset(); printf("remaining.\n\n");
                    Sleep(2000);
                    printf("The "); red(); printf("%s ",easy[r].name);reset(); printf("is preparing to attack.\n");
                    Sleep(1500);
                    damage = Random(1, easy[r].attack-protection_level);
                    printf("It did ");thick(); printf("%d damage.\n\n",damage); reset();
                    Sleep(1000);
                    hp-=damage;
                }

                //Ha ellenfelünk belehalt a támadásba//
                //Kiírja mennyi xp-t szereztünk//
                //Ha elértünk 10-et szintet lépünk és kiválaszthatjuk milyen fejlesztést szeretnénk//
                //Szintlépéskor gyógyulunk is egy kicsit//

                else{
                    income = Random(1,5);
                    xp+=income;
                    printf("\nYou killed it and earned ");yellow(); printf("%d xp",income);reset(); printf(".\n");
                    Sleep(2000);
                    if (xp>=10){
                        level+=1;
                        xp-=10;
                        hp+=5;
                        printf("You advanced to level %d\n",level);
                        Sleep(1000);
                        printf("What do you choose?\n\n");
                        printf("1: +1 Attack\n");
                        printf("2: +1 Protection\n");
                        scanf("%d", &answer);
                        
                        switch (answer){
                            case 1:
                                attack_level += 1;
                                break;

                            case 2:
                                protection_level += 1;
                                break;
                        }
                        newpage();
                    }

                    //Kisorsolja találtunk-e fegyvert az ellenfelünknél//
                    //Ha igen eldönthetjük, hogy lecseréljük-e a jelenlegit az újra//
                    
                    floor+=1;
                    int w = Random(1,100);
                    if(w > 50){
                        w = Random(0,13);
                        printf("You found a "); thick(); printf("%s", weapons[w].name); reset(); printf(". "); printf("damage (%d-%d)\n", weapons[w].min_dmg, weapons[w].max_dmg);
                        printf("Do you want to switch your current weapon with it?\n");
                        printf("1: yes\n");
                        printf("2: no\n");
                        scanf("%d", &answer);
                        if(answer == 1){
                            current = w;
                            min_attack = weapons[current].min_dmg;
                            max_attack = weapons[current].max_dmg;
                        }
                        if(answer == 2){
                            break;
                        }
                    }
                    int h = Random(1,100);
                    if(h > 80){
                        potion+=1;
                        printf("You found a potion\n");
                        Sleep(2000);
                    }

                    newpage();
                }
            }       
        }
    }

    //Ha meghaltunk vége a ciklusnak//
    //Kiírja, hogy meghaltunk és törli a mentésünket//

    Sleep(1000);
    printf("You died...");
    remove("savefile.txt");
    Sleep(3000);
    return 0;
}