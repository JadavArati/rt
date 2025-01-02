8) write pl/sql block to perform nested if else if statement.

 declare
  2  grade char(1):='b';
  3  begin
  4  case grade
  5  when'a' then dbms_output.put_line('excellent');
  6  when'b' then dbms_output.put_line('very good');
  7  when'c' then dbms_output.put_line('good');
  8  when'd' then dbms_output.put_line('average');
  9  when'e' then dbms_output.put_line('passed with grace');
 10  else
 11  dbms_output.put_line('failed');
 12  end case;
 13  end;
 14  /
very good