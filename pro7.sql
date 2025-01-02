7) perform nested if else if statement....
 declare
    a number(3);
    begin
    a:=&a;
    if(a=10)then
    dbms_output.put_line('value of a is 10');
    elsif(a=20)then
    dbms_output.put_line('value of a is 20');
    elsif(a=30)then
   dbms_output.put_line('value of a is 30');
   else
   dbms_output.put_line('none of the values is matching');
   end if;
  end;
   /