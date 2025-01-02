 create table emps
    (empno number(6),
    ename varchar2(10));
declare
   empid emps.empno%type;
    empname emps.ename%type;
    begin
    empid:=1002;
    empname:='rt';
    dbms_output.put_line('employee id:'||empid);
    dbms_output.put_line('employee name:'||empname);
    end;
   /