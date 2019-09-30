create or replace procedure query_emp
( p_id IN employees.employee_id%TYPE,
  p_name out employees.last_name%TYPE,
  p_salary out employees.salary%TYPE)
  IS
  BEGIN
   SELECT last_name, salary into p_name, p_salary
   from employees
   where employee_id = p_id;
  End query_emp;
  /
  
DECLARE
	v_emp_name employees.last_name%TYPE;
	v_emp_sal employees.salary%TYPE;
BEGIN
	query_emp(171, v_emp_name, v_emp_sal);
	DBMS_OUTPUT.PUT_LINE(v_emp_name || ' earns ' || to_char(v_emp_sal, '$999,999.00'));
END;
/