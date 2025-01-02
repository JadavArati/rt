declare
   c_id cust.id%type:=4;
   c_name cust.name%type;
   c_addr cust.address%type;
   begin
   select name,address into c_name,c_addr from cust where id=c_id;
   dbms_output.put_line ('name:'||c_name);
   dbms_output.put_line ('address:'||c_addr);
   exception  
  when no_data_found then
   dbms_output.put_line('No Such Cust:');
   when too_many_rows then
   dbms_output.put_line('the data_base returns more than one cust');
   when others then
   dbms_output.put_line('error!!');
   end;
   /