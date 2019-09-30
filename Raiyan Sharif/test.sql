create or replace procedure getArea
( r IN number,
   a out number)
  IS
  BEGIN
  a := 3.14 * r * r;
  End ;
  /
  
DECLARE
	v_area number;
BEGIN
	getArea(&redius,v_area);
	DBMS_OUTPUT.PUT_LINE('area: '|| v_area);
END;
/

EXECUTE getArea()