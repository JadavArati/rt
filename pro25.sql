 create or replace trigger tri_store before delete or insert or update on emp for each row
    begin
      if updating then
    insert into emp1 values(:old.id,:old.name,:old.sal);
    elsif deleting then
    insert into emp1 values(:old.id,:old.name,:old.sal);
    end if;
    end;
    /




