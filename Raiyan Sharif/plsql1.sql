create or replace procedure raise_salary
( p_id IN employees.employee_id%TYPE,
  p_percent in NUMBER)
  IS
  BEGIN
   UPDATE employees
   set salary = salary * (1 + p_percent/100)
   where employee_id = p_id;
  End raise_salary;
  /
  
EXECUTE raise_salary(176, 10);