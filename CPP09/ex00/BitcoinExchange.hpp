#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

// • Votre programme doit prendre un fichier en argument.
// • Chaque ligne de ce fichier doit utiliser le format suivant: "date | valeur".
// • Une date valide sera toujours au format "Année-Mois-Jour" (YYYY-MM-DD).
// • Une valeur valide doit être soit un nombre à virgule flottante (float),
// ou un entier positif, compris entre 0 et 1000.
// Votre programme doit affichier sur la sortie standard le résultat de la valeur multipliée par le taux de change en fonction de la date indiquée dans votre base de données.

/*
Si la date utilisée en entrée n’existe pas dans votre BD, alors vous
devez utiliser la date la plus proche contenue dans votre BD. Soyez
attentifs à utilser la date précédente la plus proche, et non la
suivante.
*/

// attention aux permissions sur les fichiers

#include <iostream>
#include <string>
#include <map>

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <regex>
#include <exception>

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define REDB "\e[41m"
#define BLUP "\e[94m"
#define CYNP "\e[96m"
#define NC "\e[0m"

class BitcoinExchange
{
public:
    BitcoinExchange(std::string filename);
    ~BitcoinExchange(void);

    BitcoinExchange &operator=(BitcoinExchange const &rhs);
    BitcoinExchange(const BitcoinExchange &other);

    void bitcoinConverter(std::string inputFile);

private:
    BitcoinExchange(void);

    /* parser le input file
    vérifier le format de la date
    verifier le format de la valeur entre 0 et 1000
    print stdout

    le conteneur MAP
    */
    std::string _filename;
    std::map<int, float> _data;

    // utils
    bool isValidHeaders(std::string validHeader, std::string fileHeader);
    bool isValidDate(std::string &date);
    bool isValidValue(std::string &value);

    void dataFileParser(void);
    void checkForHeaderLine(std::ifstream &data_file, std::string validHeader);
    void checkForDataFile(std::ifstream &data_file);
    void saveDataToMap(std::string date, std::string exchange_rate);
    int dateToInt(std::string date);
    bool isLeapYear(int year);

    void inputFileParser(std::string input);
    void checkForInputFile(std::ifstream &input_file);
    void convertValue(std::string date, std::string value);
};

#endif
