import std.stdio,
      std.array,
      std.conv;

void main(){
  string s;
  int i = 0,j = 0;
  int[] result;
  for(;;){
    s=readln();
    if(stdin.eof()) break;
    result.length += 1;
    string[] input = split(s);
    int a = to!int(input[0]);
    int b = to!int(input[1]);
    int k = 0;
    int keta = 1;
    while(a+b >= keta){
      keta *= 10;
      ++k;
    }
    result[i] = k;
    ++i;
  }
  while(j < result.length){
    writeln(result[j]);
    ++j;
  }
}
