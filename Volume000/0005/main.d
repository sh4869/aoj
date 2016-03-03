import std.stdio,
    std.array,
    std.conv,
    std.string,
    std.algorithm;

void main(){
  string s;
  for(;;){
    s=readln();
    if(stdin.eof()) break;
    string[] input = split(s);
    int a,b;
    a = to!int(input[0]);
    b = to!int(input[1]);
    int g = getgcd(a,b);
    int lcm = cast(int)getlcm(a,b,g);
    writefln("%d %d",g,lcm);
  }

}

int getgcd(int a,int b){
  int g,l;
  if(a > b){
    g = a;
    l = b;
  } else {
    l = a;
    g = b;
  }
  int r = g % l;
  while(r > 0){
    g = l;
    l = r;
    r = g % l;
  }
  return l;
}

double getlcm(int a,int b,int g){
  return (a / g) * b;
}
