#include "BitcoinExchange.hpp"

// • Votre programme doit prendre un fichier en argument.
// • Chaque ligne de ce fichier doit utiliser le format suivant: "date | valeur".
//

// Votre programme doit affichier sur la sortie standard le résultat de la valeur multipliée par le taux de change en fonction de la date indiquée dans votre base de données.

/*
Si la date utilisée en entrée n’existe pas dans votre BD, alors vous
devez utiliser la date la plus proche contenue dans votre BD. Soyez
attentifs à utilser la date précédente la plus proche, et non la
suivante.
*/

// attention aux permissions sur les fichiers

/* parser le input file
 vérifier le format de la date
 verifier le format de la valeur entre 0 et 1000
 print stdout */

// un fonction qui parse

enum e_value_type
{
    EXCHANGE_RATE,
    VALUE
};

int main(int argc, char **argv)
{
    try
    {
        if (argc != 2)
        {
            std::string error = "\e[0;31m Wrong arguments ! \nUsage: ./btc data.csv [input.txt] \e[0m";
            throw std::invalid_argument("Wrong arguments: " + error);
        }
        BitcoinExchange btc(argv[1]);
        btc.bitcoinConverter(argv[1]);
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << "Error: " << e.what() << NC << std::endl;
    }
    return 0;

    // std::ifstream data_file(argv[1]);
    // std::ifstream input_file(argv[2]);

    // if (!data_file || !input_file)
    // {
    //     std::cerr << RED << "Error: Cannot open file !" << NC << std::endl;
    //     return 1;
    // }

    // if (data_file.is_open())
    // {
    //     std::string line;
    //     std::istringstream ss(line);
    //     try
    //     {

    //         while (std::getline(data_file, line))
    //         {
    //             split(line, ',', _data);
    //         }

    //         for (std::map<std::string, float>::const_iterator it = _data.begin(); it != _data.end(); ++it)
    //         {
    //             std::cout << "{" << (*it).first << ": " << (*it).second << "}\n";
    //         }
    //         // std::cout << _data.begin()->first << std::endl;

    //         data_file.close();
    //     }
    //     catch (const std::exception &e)
    //     {
    //         std::cerr << RED << "Error: " << e.what() << NC << std::endl;
    //     }
    // }
}
