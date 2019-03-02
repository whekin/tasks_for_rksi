// ToDo a, b, c в порядке возрастания
var a, b, c: real;

procedure swap<T>(var a, b: T);
begin
  var v := a;
  a := b;
  b := v;
end;

begin
    readln(a, b, c);
    
    if a > b then swap(a, b);
    if a > c then swap(a, c);
    if b > c then swap(b, c);
    
    write(a, b, c);
end.