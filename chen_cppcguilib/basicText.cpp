#include"basicText.h"
#include <regex>
using namespace std;

basicText::basicText(std::string_view str)
	: text(str)
{}

int basicText::getWidth() const
{
	return text.length();
}

int basicText::getHeight() const
{
	return 1;
}

std::vector<cgui::string> basicText::getData() const
{
	return { text };
}

void basicText::setText(std::string_view str)
{
	text = str;
}
