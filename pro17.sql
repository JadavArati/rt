create or replace function added(n1 in number,n2 in number)return number is n3 number(8);
   begin
    n3:=n1+n2;
    return n3;
   end;
    /
declare
    n3 number(2);
    begin
    n3:=added(11,22);
    dbms_output.put_line('added'||n3);
   end;
   /