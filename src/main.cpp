#include <iostream>
#include <pugixml.hpp>

void show_node(pugi::xml_node const &parent, int const level)
{
		if(parent)
		{
				for(int i = 1; i < level; ++i)
				{
						std::cout << "    ";
				}
				std::cout << parent.name() << std::endl;

				for(pugi::xml_node child = parent.first_child(); child; child = child.next_sibling())
				{
						show_node(child, level + 1);
				}
		}
}

int main()
{
		std::cout << "Convertor started" << std::endl;

		pugi::xml_document doc;

		pugi::xml_parse_result result = doc.load_file("bus_muxer.sch");

		//std::cout << "Load result: " << result.description() << ", mesh name: " << doc.child("mesh").attribute("name").value() << std::endl;
		std::cout << "Load result: " << result.description();

		/*for(pugi::xml_node node = doc.child("drawing").first_child(); node; node = node.next_sibling())
		{
				std::cout << node.name() << std::endl;
		}*/

		//std::cout << "Node.Name=" << doc.first_child().name() << std::endl;

		show_node(doc.first_child(), 1);
		

		return 0;
}
