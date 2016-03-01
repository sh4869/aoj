import std.stdio,
      std.array,
      std.conv,
      std.string,
      std.algorithm;

/// ax + by = c 3x + 2y =
/// dx + ey = f x + 3y =
/// 0:a 1:b 2:c 3:d 4:e 5:f
void main(){
  string s;
  for(;;){
    s=readln();
    if(stdin.eof()) break;
    string[] input = split(s);
    double[] params = new double[6];
    for(int j = 0; j < 6;j++){
      params[j] = to!double(input[j]);
    }
    double y =  (params[2]*params[3] - params[5]*params[0]) / (params[1]*params[3] - params[4]*params[0]);
    double x = (params[2] - params[1]*y) / params[0];
    writef("%.3f %.3f\n",x,y);
  }
}
