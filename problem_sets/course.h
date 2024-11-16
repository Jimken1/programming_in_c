#include<iostream>
#include "student.h"
#include "teacher.h"

class Course{

	private:
	string CourseName;
	Student arr[3];

	Teacher obj;
	
	public:
	
	void setcoursename(string v){
	
		CourseName = v;
	}
	string getCourseName(){
	
		return CourseName;
	}
	void set_stu_arr(Student obj1, Student obj2, Student obj3){
		
		//arr[3]= {obj1, obj2, obj3};
		arr[0] = obj1;
		arr[1] = obj2;
		arr[2] = obj3;
		
	}
	
	void set_teach_obj(Teacher obj1){
		
		obj = obj1;
	}
	
	Course (string name){
		
			setcoursename(name);	
		}

	
};

