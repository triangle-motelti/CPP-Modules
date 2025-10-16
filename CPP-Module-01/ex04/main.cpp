#include "Sed.hpp"

Sed::Sed(const std::string& filename, const std::string& s1, const std::string& s2)
	: _filename(filename), _s1(s1), _s2(s2)
{}

bool Sed::process() {
	std::ifstream infile(_filename.c_str());
	if (!infile) {
		std::cerr << "Error: could not open input file: " << _filename << std::endl;
		return false;
	}
	std::ofstream outfile((_filename + ".replace").c_str());
	if (!outfile) {
		std::cerr << "Error: could not create output file: " << _filename << ".replace" << std::endl;
		return false;
	}

	std::string line;
	while (std::getline(infile, line)) {
		size_t pos = 0;
		while (_s1.length() > 0 && (pos = line.find(_s1, pos)) != std::string::npos) {
			line = line.substr(0, pos) + _s2 + line.substr(pos + _s1.length());
			pos += _s2.length();
		}
		outfile << line << std::endl;
	}
	return true;
}
