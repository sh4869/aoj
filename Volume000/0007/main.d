import std.stdio,
    std.array,
    std.conv,
    std.string,
    std.algorithm;

void main(){
  int kane = 100000;
  string s;
  for(;;){
    s=readln();
    if(stdin.eof()) break;
    int weeks = to!int(chomp(s));
    for(int i = 0;i < weeks; ++i){
      kane = kane + cast(int)(kane/100)*5;
      if(kane > cast(int)(kane/1000)*1000){
        kane = cast(int)(kane/1000)*1000 + 1000;
      }
    }
    writeln(kane);
  }
}
