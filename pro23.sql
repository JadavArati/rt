 create or replace trigger rt before insert or update or delete osn emp for each row
   begin
    case
   when inserting then
    dbms_output.put_line('Record inserted');
   when updating then
    dbms_output.put_line('Record inserted');
   when deleting then
    dbms_output.put_line('Record inserted');
  end case;
  end;
  /


update emp set name='Trisha' where id='3';