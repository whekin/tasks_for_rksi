begin
    var z, x, a: real;
    
    readln(x, a);
    
    z := x + power(a, 3);
    
    for var i := 1 to 6 do
        z /= power(2, i) * x - (i * 2 - 1);
    
    write(z);
end.