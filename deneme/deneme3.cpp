#include <iostream> 

using namespace std;


void takeDamage(int *hp, int damage){
    if ((*hp-damage) < 0)
    {
        cout << "\nHATA, Hasar HP'den buyuk olamaz\n";
        return;
    }
    *hp -= damage;
    cout << damage << "Kadar Hasar Aldi";
}

void levelUp(int &hp, int &attack, int &armor, double c){
    hp *= c;
    attack *= c;
    armor *= c;
}

void swapInventory(int &attack1, int &armor1, int &attack2, int &armor2){
    int prevAttack, prevArmor;
    prevAttack = attack1;
    prevArmor = armor1;

    attack1 = attack2;
    armor1 = armor2;
    armor2 = prevArmor;
    attack2 = prevAttack;
}

int randomDamage(int hp){
    int random = 0;
    while (1)
    {
        random = (rand() % 10)+1;
        if (hp > random)
        {
            break;
        }
    }
    return random;
}

int* theLowestHp(int *hp1, int *hp2, int *hp3){
    if (*hp1 <= *hp2 && *hp1 <= *hp3)
    {
        return hp1;
    } else if (*hp2 <= *hp1 && *hp2 <= *hp3)
    {
        return hp2;
    }
    return hp3;
}

void printCharacter(string name, int hp, int armor){
    cout << "\n" << "Adi: "<<name << " Hp: " << hp << " Armor: " << armor << "\n";
}

int main(){
    srand(time(0));
    string name1 = "Savasci", name2 = "Buyucu", name3 = "Koruyucu";
    int hp1 = 150, atk1 = 80, arm1 = 60;//savasci
    int hp2 = 90, atk2 = 120, arm2 = 30;//buyucu
    int hp3 = 100, atk3 = 40, arm3 = 90;//koruyucu

    cout << "------------------------Karakterler hazirlandi---------------------------" << endl;
    cout << "[Savas gerceklesti!]"<<endl;
    takeDamage(&hp1, 50);
    takeDamage(&hp2, 100);
    cout << "\n[Koruyucu seviye atladi!]" << endl;
    levelUp(hp3, atk3, arm3, 1.5);
    cout << "\n[Ekipman takasi yapildi!]" << endl;
    swapInventory(atk1, arm1, atk2, arm2);
    cout << "\n[Kritik iyilestirme Uygulaniyor...]" << endl;
    int *p = theLowestHp(&hp1, &hp2, &hp3);
    *p += 50;
    cout << "\n=== OYUN SONU ISTATISTIKLERI ===" << endl;

    printCharacter(name1, hp1, arm1);
    printCharacter(name2, hp2, arm2);
    printCharacter(name3, hp3, arm3);

    delete p;
    return 0;
}