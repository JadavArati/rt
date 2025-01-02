declare
c_id cust.id%type;
c_sal cust.sal%type;
begin
c_id:=&id;
select sal into c_sal from cust where id=c_id;
if c_sal is null then
raise_application_error(-20996,'sal is null');
else
update cust set sal=sal+1000 where id=c_id;
end if;
end;
/