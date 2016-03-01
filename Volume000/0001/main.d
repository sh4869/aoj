import std.array;
import std.stdio;
import std.algorithm;
import std.conv;
import std.string;

void main(){
  string[] input;
  input.length = 10;
  for(int j=0;j<10;++j){
    input[j] = chomp(readln());
  }
  int[] num;
  num.length = 10;
  for(int i=0;i<10;++i){
    num[i] = to!int(input[i]);
  }
  sort(num);
  writeln(num[9]);
  writeln(num[8]);
  writeln(num[7]);
}
