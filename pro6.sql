declare
  2  n number:=&n;
  3  begin
  4  if mod(n,2)=0
  5  then
  6  dbms_output.put_line('number is even');
  7  else
  8  dbms_output.put_line('number is odd');
  9  end if;
 10  end;
 11  /