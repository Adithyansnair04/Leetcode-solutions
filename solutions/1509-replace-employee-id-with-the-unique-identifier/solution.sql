select name,emp.unique_id
from Employees e
left join EmployeeUNi emp
on e.id=emp.id;

