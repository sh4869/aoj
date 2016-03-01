import std.stdio,
      std.array,
      std.conv,
      std.string,
      std.algorithm;

void main(){
  int num = to!int(chomp(readln()));
  int[] result = new int[num];
  for(int i = 0; i < num; ++i){
    string[] input = split(readln());
    int[] sides = new int[3];
    for(int j = 0; j < 3;j++){
      sides[j] = to!int(input[j]);
    }
    sort(sides);
    if(sides[2]*sides[2] == sides[1]*sides[1] + sides[0]*sides[0]){
      writeln("YES");
    } else{
      writeln("NO");
    }
  }
}
