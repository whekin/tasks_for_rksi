var
    n: integer := 5;
    x: array of real := (1, 2, 3, 5, 4);
    M, D: real;

function Sum(var x: array of real; f: (integer, real) -> real): real;
begin
    var res: real;
    
    for var i := 0 to x.Length - 1 do
    begin
        res += f(i, x[i]);
    end;
    
    result := res;
end;

begin   
    M := Sum(x, (i, x) -> x * i) / n;
    D := sqrt(Sum(x, (i, x) -> sqr(x * i - M)) / (n - 1));
    
    writeln('M: ', M);
    writeln('D: ', D);
end.