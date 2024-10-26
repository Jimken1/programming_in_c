#include<iostream>

class Course{
	public:
	Course (string name){
	
		setcoursename(name);	
	}
	
	void setcoursename(string v){
	
		CourseName = v;
	}
	string getCourseName(){
	
		return CourseName;
	}
	void set_stu_arr(Student obj1, Student obj2, Student obj3){
		
		arr[3]= {obj1, obj2, obj3}
		
	}
	
	void set_teach_obj(Teacher obj1){
		
		obj = obj1;
	}
	
	
	private:
	string CourseName;
	Student arr[3];

	Teacher obj;
};

