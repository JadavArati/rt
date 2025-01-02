 TABLE SPACE:

select tablespace_name from user_tablespaces;


select tablespace_name,file_name,bytes from dba_data_files;

create tablespace testt datafile 'C:\app\PC_25\oradata\orahome\user100.dbf' size 10m;

create table emp01(no number(4))
    tablespace test;