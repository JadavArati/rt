  create or replace function totalemp return number is
    total number(2):=0;
    begin
   select count(*) into total from emp;
    return total;
    end;
   /
declare
    c number(2);
    begin
    c:=total emp();
   dbms_output.put_line('total no of emp:'||c);
    end;
   /