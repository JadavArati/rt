10) 1 to 10 number using while loop
 declare
    i number:=1;
    begin
    while i<=10 loop
    dbms_output.put_line(i);
    i:=i+1;
    end loop;
    end;
    /