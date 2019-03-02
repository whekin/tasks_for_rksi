// Todo: find the minimum of three numbers
var a, b, c, min: real;
begin
    readln(a, b, c);
    
    min := a;
    
    if (a + b) < (a + c) then
    begin
        if b < a then
            min := b
    end else
        if c < a then
            min := c;
    
    write(min);
end.