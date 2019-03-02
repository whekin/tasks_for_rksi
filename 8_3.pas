// ToDo: find the maximum of three numbers;
// Способ 1: реализация функции нахождения максимума в массиве
// Способ 2: условные выражения
var a, b, c, max: real;

function max_1(a, b, c: real): real;
begin
    var max := a;
    
    if (a + b) > (a + c) then
    begin
        if b > a then
            max := b
    end else
        if c > a then
            max := c;
    
    result := max;       
end;

function max_2(a, b, c: real): real;
begin
    var max := a;
    
    if a > b then
    begin
        if c > a then
            max := c
    end else if c > b then
        max := c
    else
        max := b;
    
    result := max;
end;

function max_3(params nums: array of real): real;
begin
    var max := nums[0];
    
    for var i := 1 to nums.Length - 1 do
        if nums[i] > max then
            max := nums[i];
    
    result := max;
end;

procedure test_1();
begin
    
    var a, b, c: real;
    var max := a;
    var common_time := 0;
    
    for var i := 0 to 99 do
    begin
        var start_t := milliseconds;
        
        for var j := 0 to 100000 do
        begin
            a := random(0, 10000) / 100;
            b := random(0, 10000) / 100;
            c := random(0, 10000) / 100;
            
            max := max_1(a, b, c);
        end;
        
        common_time += milliseconds - start_t;
    end;
    
    var average_time := common_time / 100;
    
    writeln('test 1: ', average_time);
end;

procedure test_2();
begin
    var a, b, c: real;
    var max := a;
    var common_time := 0;
    
    for var i := 0 to 99 do
    begin
        var start_t := milliseconds;
        
        for var j := 0 to 100000 do
        begin
            a := random(0, 10000) / 100;
            b := random(0, 10000) / 100;
            c := random(0, 10000) / 100;
            
            max := max_2(a, b, c);
        end;
        
        common_time += milliseconds - start_t;
    end;
    
    var average_time := common_time / 100;
    
    writeln('test 2: ', average_time);
end;

procedure test_3();
begin
    
    var a, b, c: real;
    var max := a;
    var common_time := 0;
    
    for var i := 0 to 99 do
    begin
        var start_t := milliseconds;
        
        for var j := 0 to 100000 do
        begin
            a := random(0, 10000) / 100;
            b := random(0, 10000) / 100;
            c := random(0, 10000) / 100;
            
            max := max_3(a, b, c);
        end;
        
        common_time += milliseconds - start_t;
    end;
    
    var average_time := common_time / 100;
    
    writeln('test 3: ', average_time);
end;

begin
    
//    readln(a, b, c);
//    
//    max := max_3(a, b, c);
//    
//    writeln(max);
    
    test_1();
    test_2();
    test_3();
    
    // Результаты производительности показывают,
    // что программа №1 работает быстрее. И объяснение простое:
    // условный оператор нарушает работу конвейра процессора,
    // что вызывает небольшое замедление.
end.