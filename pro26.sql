 create table customers
  2  (id number(10),
  3  name varchar2(30),
  4  salary number(10));
insert all
   into customers values(2,'feni',970000)
   into customers values(1,'arti',870000)
   select * from dual;

 declare
    total_rows number(2);
    begin
   update customers set salary=salary + 500;
   if sql%notfound then
   dbms_output.put_line('no customers selected');
    elsif sql%found then 
  total_rows:=sql%rowcount;
  dbms_output.put_line(total_rows||'customers selected');
  end if;
  end;
  /