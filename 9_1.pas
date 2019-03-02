// ToDo: a, b, c - длины сторон треугольника.
// Вывод 0 - треугольника не существует, 1 - треугольник,
// 2 - равнобедренный треугольник, 3 - равносторонний треугольиник
var a, b, c: real;
begin
    readln(a, b, c);
    // треугольника нет, если сумма двух других сторон меньше
    if (a + b < c) or (a + c < b) or (b + c < a) then
        writeln('there is no a triangle with such sides')
    // equilateral triangle
    else if (a = b) and (b = c) then
        writeln('That''s a equilateral triangle')
    // isosceles triangle
    else if (a = b) or (a = c) or (b = c) then
        writeln('That''s a isosceles triangle')
    else
        writeln('That''s just a triangle');
end.