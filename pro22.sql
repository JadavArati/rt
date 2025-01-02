create table student
    (rollno number(6),
    sname varchar2(10),
    age number(5),
    course varchar2(9));

		
create or replace package pkg_student is
	procedure updaterecord(sno student.rollno%type);
	function deleterecord (snm student.sname%type) return boolean;
end pkg_student;
/	

create or replace package body pkg_student is
	procedure updaterecord(sno student.rollno%type) is
	begin
	update student set age=23 where rollno=sno;
	if sql%found then
	dbms_output.put_line('record update');
	else
	dbms_output.put_line('record not found');
	end if;
	end updaterecord;
	function deleterecord (snm student.sname%type)return boolean is
	begin
    delete from student where sname=snm;
	return sql%found;
	end deleterecord;
	end pkg_student;
	/
	

declare
	sno student.rollno%type;
	s_age student.age%type;
	snm student.sname%type;
begin
	sno:=2;
	snm:='FENI';
	pkg_student.updaterecord(sno);
	if pkg_student.deleterecord(snm)then 
	dbms_output.put_line('record deleted');
	else
	dbms_output.put_line('record not found');
	end if;
	end;
	/
	