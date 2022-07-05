#include <iostream>
#include <pugixml.hpp>

int main()
{
		std::cout << "Convertor started" << std::endl;

		pugi::xml_document doc;

		pugi::xml_parse_result result = doc.load_file("tree.xml");

		std::cout << "Load result: " << result.description() << ", mesh name: " << doc.child("mesh").attribute("name").value() << std::endl;

		return 0;
}
