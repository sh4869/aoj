import std.stdio,
    std.array,
    std.conv,
    std.string;

void main(){
  string s;
  for(;;){
    s=readln();
    if(stdin.eof()) break;
    for(int i = cast(int)s.length; i > 1; --i ){
      write(s[i-2]);
    }
    if(s.length > 0) write("\n");
  }
}
