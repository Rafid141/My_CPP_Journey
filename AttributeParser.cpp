#include<iostream>
#include<map>
#include<sstream>
#include<string>
#include<vector>

int main(){

    int n, q;
    std::string line;
    std::vector <std::string> current_path;
    std::map<std::string, std::string> tag;

    std::cin >> n >> q;
    std::cin.ignore();

    for(int i = 0; i < n; i++){

            std::getline(std::cin, line);

            if(line[0] == '<' && line[1] == '/'){

                current_path.pop_back();

            }

        else{

            for(int j = 0; j < line.size(); j++){

                if(line[j] == '<' || line[j] == '>' || line[j] == '=' || line[j] == '/' || line[j] == '\"'){

                    line[j] = ' ';

                }

            }

            std::stringstream ss (line);
            std::string tags;
            ss >> tags;

            current_path.push_back(tags);

            std::string attr_name, attr_value;

            while (ss >> attr_name >> attr_value){

                std::string full_key;

                for(int k = 0; k < current_path.size(); k++){

                    full_key += current_path[k];

                    if (k < current_path.size() -1) {

                        full_key += ".";

                    }

                }

                full_key += "~" + attr_name;

                tag[full_key] = attr_value;

            }


        }

    }

    std::string quiery;

    for(int i = 0; i < q; i++){

        std::cin >> quiery;

        if(tag.find(quiery) != tag.end()){

            std::cout << tag[quiery] << std::endl;

        }

        else{

            std::cout << "Not found!" << std::endl;

        }

    }

    return 0;

}
