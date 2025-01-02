create a function to calculate simple interest

create or replace function culcutate_simple (p in number,r in number,n in number)return number is simple number(10);
begin
simple:=p*r*n/100;
return simple;
end;
/


declare
          simple number(4);
begin
     simple:=culcutate_simple(50000,2,4);
    dbms_output.put_line('culcutate_simple'||simple);
end;
/

write a pl/sql block to create procedure for update and delete record from the table
table name student ,grno,name,city
update query:city update
delete query:name

create table  student 
(grno number(4),
name varchar2(10),
city varchar2(10));
 
insert all
into student values(2418,'arati', 'kalavad')
into student values(2413,'tr', 'rajkot')
into student values(2431,'rt', 'vadodra')
select * from dual;
  
 create or replace procedure student_record (n_grno in number ) is
   begin
     update student set city='rajkot' where grno=n_grno;
   dbms_output.put_line('record  updated');
   end;
    /

create or replace procedure delete_record (a_grno in number) is
begin
 delete from student where  grno=a_grno;
 dbms_output.put_line('record  deleted');
end;
/




 


 