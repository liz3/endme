#ifndef LANGUAGES_H
#define LANGUAGES_H

#include "highlighting.h"
#include "la.h"
const Language CPP = {
  "C++",
  {"for", "while", "if", "int", "float", "return", "double", "true", "false", "else", "void", "delete", "struct", "class", "case", "break", "const", "nullptr", "auto", "bool", "new", "auto*", "switch", "case"},
  {"#include", "std::", "#ifdef", "#define", "#endif", "#ifndef"},
  "//",
  {"/*", "*/"},
  "\"'",
  '\\',
  vec4f(0.2, 0.6, 0.4, 1.0),
  vec4fs(0.95),
  vec4f(0.6, 0.1, 0.2, 1.0),
  vec4f(0.2, 0.2, 0.8, 1.0),
  vec4fs(0.5),
  {"cc", "h", "cpp", "hpp"}
};
const Language JavaScript = {
  "JS",
  {"null", "undefined", "as", "from", "abstract","arguments","await","boolean","break","byte","case","catch","char","class","const","continue","debugger","default", "let","delete","do","double","else","enum","eval","export","extends","false","final","finally","float","for","function","goto","if","implements","import","in","instanceof","int","interfacelet","long","native","new","null","package","private","protected","public","return","short","static","super","switch","synchronized","this","throw","throws","transient","true","try","typeof","var","void","volatile","while","with","yield"},
  {"process", "requestAnimationFrame", "window", "console", "Object", "Array", "Number", "String", "JSON"},
  "//",
  {"/*", "*/"},
  "\"'`",
  '\\',
  vec4f(0.2, 0.6, 0.4, 1.0),
  vec4fs(0.95),
  vec4f(0.6, 0.1, 0.2, 1.0),
  vec4f(0.2, 0.2, 0.8, 1.0),
  vec4fs(0.5),
  {"js"}
};
const Language Python = {
  "Python",
  { "and", "as", "assert", "break", "class", "continue", "def", "del", "elif", "else", "except", "False", "finally", "for", "from", "global", "if", "import", "in", "is", "lambda", "None", "nonlocal", "not", "or", "pass", "raise", "return", "True", "try", "while", "with", "yield"},
  {"print", "dict", "range", "open"},
  "#",
  {"\"\"\"", "\"\"\""},
  "\"'",
  '\\',
  vec4f(0.2, 0.6, 0.4, 1.0),
  vec4fs(0.95),
  vec4f(0.6, 0.1, 0.2, 1.0),
  vec4f(0.2, 0.2, 0.8, 1.0),
  vec4fs(0.5),
  {"py"}
};

const Language* has_language(std::string ext) {
  if(std::find(CPP.fileExtensions.begin(), CPP.fileExtensions.end(), ext)!=  CPP.fileExtensions.end())
    return &CPP;
  if(std::find(JavaScript.fileExtensions.begin(), JavaScript.fileExtensions.end(), ext) != JavaScript.fileExtensions.end())
    return &JavaScript;
  if(std::find(Python.fileExtensions.begin(), Python.fileExtensions.end(), ext) != Python.fileExtensions.end())
    return &Python;
  return nullptr;
}
#endif
