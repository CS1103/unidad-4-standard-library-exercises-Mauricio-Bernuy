#include<iostream>
#include<iterator>
#include<vector>

int main() {
	
	std::vector<int> x;
	std::vector<float> newx;
	//std::istream_iterator<float> eos;
	std::istream_iterator<int> iit{ std::cin};

	int cases = *iit;
	std::cout << "number of cases= " << *iit << std::endl;
	std::istream_iterator<char> i2{ std::cin >> std::noskipws };
	++i2;
	if (*i2 == '\n') {
		std::cout << "read newline"<<std::endl;

		for (int i = 0; i < cases; i++) {
				std::istream_iterator<int> xin{ std::cin };
				++xin;
				
				
				std::istream_iterator<char> chk{ std::cin >> std::noskipws };
				while (*chk != '\n'){
					
					if (*chk == '\n') {
						x.push_back(*xin);
						std::cout << "lmaoxd" << *xin;
						std::cout << "lmao arrived at enter"<<std::endl;
						

						int p = 1;
						std::istream_iterator<float> newxin{ std::cin };
						++chk;
						while (p != x.size()) {
							
							if (*chk == '\n') {
								newx.push_back(*newxin);
								std::cout << "lmaoxd2" << *newxin;
								std::cout << "success xd";
								p++;
								break;
							}
							else {
								newx.push_back(*newxin);
								std::cout << "lmaoxd2" << *newxin;
								++newxin;
								++chk;
								p++;

							}

							
						}

					}

					else {
						
						x.push_back(*xin);
						std::cout << "lmaoxd" << *xin;
						++xin;
						++chk;
					}
				} 
				
				
			std::cout << "success so far lmao";
		}

	}
	else { std::cout << "error"; }

}

int main(int arc, char** arv) {
	std::vector<float> num;
	std::cout << "Please, input even number of floats: ";
	for (std::istream_iterator<float> iit(std::cin);
		iit != std::istream_iterator<float>(); iit++) {
		num.push_back((*iit));
	}
}


