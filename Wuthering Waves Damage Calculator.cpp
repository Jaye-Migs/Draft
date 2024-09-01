#include <iostream>
using namespace std;

int main()
{
    int atk;
    float skillMultiplier;
    float skillScaling;

    cout << "Resonator Atk: ";
    cin >> atk;

    cout << "Skill Multiplier: ";
    cin >> skillMultiplier;

    cout << "Skill Scaling: ";
    cin >> skillScaling;

    float skillM = skillMultiplier * .01;
    float scaling = skillScaling * .01 + 1;
    float finalSDmg = skillM * scaling;

    float rawDmg = atk * finalSDmg;

    cout << endl;

    cout << "Raw Skill Damage: " << rawDmg;

    cout << endl << endl;

    //buffed skill damage

    float eDmg;
    float skillBonus;
    float deep;
    float crit;

    cout << "Element Dmg Bonus: ";
    cin >> eDmg;

    cout << "Skill Damage Bonus: ";
    cin >> skillBonus;

    cout << "Damage Deepen Bonus: ";
    cin >> deep;

    cout << "Crit Damage Bonus: ";
    cin >> crit;

    float skillMod = eDmg + skillBonus;     float finalMod = skillMod * .01 + 1;
    float deepen = deep * .01 + 1;
    float ccrit = crit * .01;

    float finalSkillDmg = finalMod * deepen;

    cout << endl;

    float finalSkill = rawDmg * finalSkillDmg;

    cout << "Final Skill Damage: " << finalSkill << endl; 
    cout << "Critical Final Skill Damage: " << finalSkill * ccrit;

    cout << endl;

    return 0;
}
