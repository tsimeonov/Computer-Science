tokeniseCSV

string scvLine = "thing, thing2, thing3" ## the string we are processing

string vector tokens ## stores the tokens

char separator = "," ## the character that separates the tokens

int start, end ## used to delineate the position of the tokens

```c++
start = csvLine.find_first_not_of(setarator)
do
end = next "separator" after start
  if start == csvLine.length or start == end ## noting more to find
    break
  if end >= 0 # we found the separator
    token  csvLine.substr(start, end - start) ## start, substring length
  else
    token = scvLine.substr(start, csvLine.length - start) ## end is invalid

  token.push_back(token) ## save the token
```
