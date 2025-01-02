declare
c_id cust.id%type:=&c_id;
c_name cust.name%type;
c_addr cust.address%type;
--user defined exception
ex_invalid_id exception;
begin
if c_id<=0 then
raise ex_invalid_id;
else
select name,address into c_name,c_addr from cust where id=c_id; 
 dbms_output.put_line ('name:'||c_name);
  dbms_output.put_line ('address:'||c_addr);
end if;
   exception  
  when ex_invalid_id then
   dbms_output.put_line('id must be greater then zero!');
   when no_data_found then
   dbms_output.put_line('no such cust!');
   when others then
   dbms_output.put_line('error!!');
   end;
   /
