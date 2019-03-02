begin
    var x, z: real;
    var start := 7;
    
    z := 1;
    
    readln(x);
    
    for var i := 1 to start do
        z := sqrt(i*x + z);
    
    write(z);
end.