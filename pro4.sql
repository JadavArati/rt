--write pl/sql block to perform basic calculation using operator....
declare
  2  a  integer:=30;
  3  b  integer:=40;
  4  c integer;
  5  f real;
  6  begin
  7  c:=a+b;
  8  dbms_output.put_line('value of c:'||c);
  9  f:=100.0/3.0;
 10   dbms_output.put_line('value of f:'||f);
 11  end;
 12  /
value of c:70
value of f:33.33333333333333333333333333333333333333