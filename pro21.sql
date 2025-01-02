create table students
  2  (id number(4),
  3  name varchar2(10),
  4  age number(5));

create or replace procedure insert_record (id in number,name in varchar2,age in number) is
begin
insert into students values(id,name,age);
end;
/

begin
insert_record(101,'arati',19);
dbms_output.put_line('record inserted');
end;
/