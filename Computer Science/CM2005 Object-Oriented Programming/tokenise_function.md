tokeniseCSV

string scvLine = "thing, thing2, thing3" ## the string we are processing

string vector tokens ## stores the tokens

char separator = "," ## the character that separates the tokens

int start, end ## used to delineate the position of the tokens

start = csvLine.find_first_not_of(setarator)
do
end = next "separator" after start
if start == csvLine.length or start == end ## noting more to find
