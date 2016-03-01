import std.stdio;

void main(){
  for(int i = 1; i < 10; ++i){
    for(int j = 1; j < 10; ++j){
      writeln(i,"x",j,"=",i*j);
    }
  }
}
