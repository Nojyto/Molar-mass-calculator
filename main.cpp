#include <iostream>
#include <map>

std::map<std::string, double> data;

void getData()
{
    data.insert(std::pair<std::string, double>("H", 1.008));
    data.insert(std::pair<std::string, double>("He", 4.0026));
    data.insert(std::pair<std::string, double>("Li", 6.94));
    data.insert(std::pair<std::string, double>("Be", 9.0122));
    data.insert(std::pair<std::string, double>("B", 10.81));
    data.insert(std::pair<std::string, double>("C", 12.011));
    data.insert(std::pair<std::string, double>("N", 14.007));
    data.insert(std::pair<std::string, double>("O", 15.999));
    data.insert(std::pair<std::string, double>("F", 18.998));
    data.insert(std::pair<std::string, double>("Ne", 20.18));
    data.insert(std::pair<std::string, double>("Na", 22.99));
    data.insert(std::pair<std::string, double>("Mg", 24.305));
    data.insert(std::pair<std::string, double>("Al", 26.982));
    data.insert(std::pair<std::string, double>("Si", 28.085));
    data.insert(std::pair<std::string, double>("P", 30.974));
    data.insert(std::pair<std::string, double>("S", 32.06));
    data.insert(std::pair<std::string, double>("Cl", 35.45));
    data.insert(std::pair<std::string, double>("Ar", 39.948));
    data.insert(std::pair<std::string, double>("K", 39.098));
    data.insert(std::pair<std::string, double>("Ca", 40.078));
    data.insert(std::pair<std::string, double>("Sc", 44.956));
    data.insert(std::pair<std::string, double>("Ti", 47.867));
    data.insert(std::pair<std::string, double>("V", 50.942));
    data.insert(std::pair<std::string, double>("Cr", 51.996));
    data.insert(std::pair<std::string, double>("Mn", 54.938));
    data.insert(std::pair<std::string, double>("Fe", 55.845));
    data.insert(std::pair<std::string, double>("Co", 58.933));
    data.insert(std::pair<std::string, double>("Ni", 58.693));
    data.insert(std::pair<std::string, double>("Cu", 63.546));
    data.insert(std::pair<std::string, double>("Zn", 65.38));
    data.insert(std::pair<std::string, double>("Ga", 69.723));
    data.insert(std::pair<std::string, double>("Ge", 72.63));
    data.insert(std::pair<std::string, double>("As", 74.922));
    data.insert(std::pair<std::string, double>("Se", 78.96));
    data.insert(std::pair<std::string, double>("Br", 79.904));
    data.insert(std::pair<std::string, double>("Kr", 83.798));
    data.insert(std::pair<std::string, double>("Rb", 85.468));
    data.insert(std::pair<std::string, double>("Sr", 87.62));
    data.insert(std::pair<std::string, double>("Y", 88.906));
    data.insert(std::pair<std::string, double>("Zr", 91.224));
    data.insert(std::pair<std::string, double>("Nb", 92.906));
    data.insert(std::pair<std::string, double>("Mo", 95.96));
    data.insert(std::pair<std::string, double>("Tc", 97.91));
    data.insert(std::pair<std::string, double>("Ru", 101.07));
    data.insert(std::pair<std::string, double>("Rh", 102.91));
    data.insert(std::pair<std::string, double>("Pd", 106.42));
    data.insert(std::pair<std::string, double>("Ag", 107.87));
    data.insert(std::pair<std::string, double>("Cd", 112.41));
    data.insert(std::pair<std::string, double>("In", 114.82));
    data.insert(std::pair<std::string, double>("Sn", 118.71));
    data.insert(std::pair<std::string, double>("Sb", 121.76));
    data.insert(std::pair<std::string, double>("Te", 127.6));
    data.insert(std::pair<std::string, double>("I", 126.9));
    data.insert(std::pair<std::string, double>("Xe", 131.29));
    data.insert(std::pair<std::string, double>("Cs", 132.91));
    data.insert(std::pair<std::string, double>("Ba", 137.33));
    data.insert(std::pair<std::string, double>("La", 138.91));
    data.insert(std::pair<std::string, double>("Ce", 140.12));
    data.insert(std::pair<std::string, double>("Pr", 140.91));
    data.insert(std::pair<std::string, double>("Nd", 144.24));
    data.insert(std::pair<std::string, double>("Pm", 144.91));
    data.insert(std::pair<std::string, double>("Sm", 150.36));
    data.insert(std::pair<std::string, double>("Eu", 151.96));
    data.insert(std::pair<std::string, double>("Gd", 157.25));
    data.insert(std::pair<std::string, double>("Tb", 158.92));
    data.insert(std::pair<std::string, double>("Dy", 162.5));
    data.insert(std::pair<std::string, double>("Ho", 164.93));
    data.insert(std::pair<std::string, double>("Er", 167.26));
    data.insert(std::pair<std::string, double>("Tm", 168.93));
    data.insert(std::pair<std::string, double>("Yb", 173.05));
    data.insert(std::pair<std::string, double>("Lu", 174.97));
    data.insert(std::pair<std::string, double>("Hf", 178.49));
    data.insert(std::pair<std::string, double>("Ta", 180.95));
    data.insert(std::pair<std::string, double>("W", 183.84));
    data.insert(std::pair<std::string, double>("Re", 186.21));
    data.insert(std::pair<std::string, double>("Os", 190.23));
    data.insert(std::pair<std::string, double>("Ir", 192.22));
    data.insert(std::pair<std::string, double>("Pt", 195.08));
    data.insert(std::pair<std::string, double>("Au", 196.97));
    data.insert(std::pair<std::string, double>("Hg", 200.59));
    data.insert(std::pair<std::string, double>("Tl", 204.38));
    data.insert(std::pair<std::string, double>("Pb", 207.2));
    data.insert(std::pair<std::string, double>("Bi", 208.98));
    data.insert(std::pair<std::string, double>("Po", 208.98));
    data.insert(std::pair<std::string, double>("At", 209.99));
    data.insert(std::pair<std::string, double>("Rn", 222.02));
    data.insert(std::pair<std::string, double>("Fr", 223.02));
    data.insert(std::pair<std::string, double>("Ra", 226.03));
    data.insert(std::pair<std::string, double>("Ac", 22.03));
    data.insert(std::pair<std::string, double>("Th", 232.04));
    data.insert(std::pair<std::string, double>("Pa", 231.04));
    data.insert(std::pair<std::string, double>("U", 238.03));
    data.insert(std::pair<std::string, double>("Np", 237.05));
    data.insert(std::pair<std::string, double>("Pu", 244.06));
    data.insert(std::pair<std::string, double>("Am", 243.06));
    data.insert(std::pair<std::string, double>("Cm", 247.07));
    data.insert(std::pair<std::string, double>("Bk", 247.07));
    data.insert(std::pair<std::string, double>("Cf", 251.08));
    data.insert(std::pair<std::string, double>("Es", 252.08));
    data.insert(std::pair<std::string, double>("Fm", 257.1));
    data.insert(std::pair<std::string, double>("Md", 258.1));
    data.insert(std::pair<std::string, double>("No", 259.1));
    data.insert(std::pair<std::string, double>("Lr", 262.11));
    data.insert(std::pair<std::string, double>("Rf", 265.12));
    data.insert(std::pair<std::string, double>("Db", 268.13));
    data.insert(std::pair<std::string, double>("Sg", 271.13));
    data.insert(std::pair<std::string, double>("Bh", 270));
    data.insert(std::pair<std::string, double>("Hs", 277.15));
    data.insert(std::pair<std::string, double>("Mt", 276.15));
    data.insert(std::pair<std::string, double>("Ds", 281.16));
    data.insert(std::pair<std::string, double>("Rg", 280.16));
    data.insert(std::pair<std::string, double>("Cn", 285.17));
    data.insert(std::pair<std::string, double>("Fl", 289.19));
    data.insert(std::pair<std::string, double>("Lv", 293));
}

double getMass(const std::string &elementName)
{
    std::map<std::string, double>::iterator itr;
    for(auto it = data.begin(); it != data.end(); ++it)
        if(it->first == elementName)
            return it->second;
    return 0;
}

double calculateMass(std::string formula)
{
    double mass = 0;
    short coefficiant = 1;
    std::string currentElement;

    if(isdigit(formula[0]) && isdigit(formula[1])){
        coefficiant = (formula[0] - 48) * 10 + (formula[1] - 48);
        formula = formula.substr(2, formula.size());
    }else if(isdigit(formula[0])){
        coefficiant = formula[0] - 48;
        formula = formula.substr(1, formula.size());
    }

    for(unsigned short i = 0; i < formula.size(); i++){
        if(formula[i] == ')'){
            i++;
            continue;
        }
        else if(formula[i] == '('){
            size_t bracketEnd = formula.find(')');
            mass += calculateMass(formula.substr(i + 1, bracketEnd - 1 - i)) * (formula[bracketEnd + 1] - 48);
            //std::cout << calculateMass(formula.substr(i + 1, bracketEnd - 1 - i)) << " * " << formula[bracketEnd + 1] - 48 << "\n";
            i = bracketEnd + 1;
        }
        else if(isupper(formula[i]) && islower(formula[i + 1])){
            currentElement = formula.substr(i, 2);
            //currentElement = {formula[i]};
            //currentElement += formula[i + 1];
            //std::cout << currentElement << " " << i << " " << i + 2 << "\n";
            mass += getMass(currentElement);
            i++;
        }
        else if(isupper(formula[i])){
            currentElement = formula.substr(i, 1);
            //currentElement = formula[i];
            //std::cout << currentElement << "\n";
            mass += getMass(currentElement);
        }
        else if(isdigit(formula[i]) && isdigit(formula[i + 1])){
            mass = mass - getMass(currentElement) + getMass(currentElement) * ((formula[i] - 48)*10 + (formula[i + 1] - 48));
            i++;
        }
        else if(isdigit(formula[i]))
            mass = mass - getMass(currentElement) + getMass(currentElement) * (formula[i] - 48);
        else
            return 0;
    }
    return mass * coefficiant;
}

int main()
{
    std::string formula;
    double molarMass;

    getData();
    printf("Input a chemical formula: ");
    getline(std::cin, formula);
    molarMass = calculateMass(formula);
    molarMass > 0 ? printf("The molar mass is: %g;\n\n", molarMass) : printf("Invalid input.\n\n");
    main();
}
