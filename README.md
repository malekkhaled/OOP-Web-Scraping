# OOP-Web-Scraping
 C++ program for extracting the text from a webpage.  

<h1>string readFile(string filename)</h1>
This function opens the file with the given name, reads in the entirety of the file, and returns a string containing the file contents.
It should return the empty string if the file doesn't exist.
string extractParagraphs(string content)
This function should return all of the paragraph contents in the given HTML content, and each paragraph should be followed by two new lines (\n\n).  Paragraphs in HTML start with a paragraph start tag (<p>) and end with a paragraph end tag (</p>), and the contents are between these two tags.  The output should not include any of the start or end tags.
string removeTags(string content)
This function should search the given HTML content and remove all of the HTML tags.  All HTML tags start with a less than sign (<) and end with a greater than sign (>), and anything that begins with a less than sign and ends with a greater than sign is an HTML tag.
int main()
main() should use the other 3 functions to read in the contents of input.html, extract all of the paragraphs in this file, remove the tags from the paragraphs, and print the result to cout.
