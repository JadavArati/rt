create or replace trigger display_salary_changes before delete or insert or update on emp for each row
    when (new.id>0)
declare
    sal_diff number;
begin
   sal_diff:=:new.sal-:old.sal;
  dbms_output.put_line('old sal:'||:old.sal);
  dbms_output.put_line('new sal:'||:new.sal);
  dbms_output.put_line('sal difference:'||sal_diff);
end;
/


 
 