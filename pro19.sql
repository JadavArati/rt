declare
r_emp emps%row type;
n_emp_id emps.empno%type=1;
begin
select*into r_emp from emps where empno=n_empid;
 dbms_output.put_line(r_emp.ename);
end;
/