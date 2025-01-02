--write Pl/SQL block to display college name by getting text value
declare
			text varchar(20);
begin
			text:=&text;
			dbms_output.put_line(text);
end;
/