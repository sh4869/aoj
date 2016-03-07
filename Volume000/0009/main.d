import std.stdio,
    std.array,
    std.conv,
    std.string,
    std.algorithm,
    std.math;

void main(){
  string s;
  for(;;){
    s=readln();
    if(stdin.eof()) break;
    int num = to!int(chomp(s));
    int result = 0;
    int[] nums = new int[num];
    for(int i=0;i  < num;++i) nums[i] = 1;
    nums[0] = 0;
    for(int i=1;i < sqrt(cast(double)num);++i){
      if(nums[i] == 1){
        for (int j = (i+1); (i+1) * j <= num; j++) nums[(i+1) * j - 1] = 0;
      }
    }
    for(int i = 0;i < num; ++i){
      if(nums[i] == 1)++result;
    }
    writeln(result);
  }
}
