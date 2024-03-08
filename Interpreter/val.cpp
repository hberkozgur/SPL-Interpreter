#include <iostream>
#include <string>
#include <vector> 
#include "val.h"
using namespace std; 

Value Value::operator*(const Value& op) const{
    if (IsReal() && op.IsReal()) {
        double left = GetReal();
        double right = op.GetReal();
        return Value(left * right);
    }
    else if(IsString() && op.IsReal()) {
        double left;
        try {
            stod(GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        left = stod(GetString());
        double right = op.GetReal();
        return Value(left * right); 
    } 
    else if(op.IsString() && IsReal()) {
        double left = GetReal();
        double right;
        try {
            stod(op.GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        right = stod(op.GetString());
        return Value(left * right); 
    }
    else if(IsString() && op.IsString()) {
        double left;
        try {
            stod(GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        left = stod(GetString());
        double right;
        try {
            stod(op.GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        right = stod(op.GetString());
        return Value(left * right); 
    }
    else {
        return Value();
    }
}

Value Value::operator==(const Value& op) const{
    if (IsReal() && op.IsReal()) {
        double left = GetReal();
        double right = op.GetReal();
        return Value(left == right);
    }
    else if(IsString() && op.IsReal()) {
        double left;
        try {
            left = stod(GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        double right = op.GetReal();
        return Value(left == right); 
    } 
    else if(op.IsString() && IsReal()) {
        double left = GetReal();
        double right;
        try {
            right = stod(op.GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        return Value(left == right); 
    }
    else if(IsString() && op.IsString()) {
        double left;
        try {
            left = stod(GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        double right;
        try {
            right = stod(op.GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        return Value(left == right); 
    }
    else {
        return Value();
    }
}

Value Value::operator^(const Value& op) const{
    if (IsReal() && op.IsReal()) {
        double left = GetReal();
        double right = op.GetReal();
        return Value(pow(left, right));
    } else {
        return Value();
    }
}
  // numeric overloaded subtract op from this
Value Value::operator-(const Value& op) const{
    if (IsReal() && op.IsReal()) {
        double left = GetReal();
        double right = op.GetReal();
        return Value(left - right);
    }
    else if(IsString() && op.IsReal()) {
        double left;
        try {
            stod(GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        left = stod(GetString());
        double right = op.GetReal();
        return Value(left - right); 
    } 
    else if(op.IsString() && IsReal()) {
        double left = GetReal();
        double right;
        try {
            stod(op.GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        right = stod(op.GetString());
        return Value(left - right); 
    }
    else if(IsString() && op.IsString()) {
        double left;
        try {
            stod(GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        left = stod(GetString());
        double right;
        try {
            stod(op.GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        right = stod(op.GetString());
        return Value(left - right); 
    }
    else {
        return Value();
    }
}
     
    // numeric overloaded divide this by op
Value Value::operator/(const Value& op) const{
    if (IsReal() && op.IsReal()) {
        double left = GetReal();
        double right = op.GetReal();
        return Value(left / right);
    }
    else if(IsString() && op.IsReal()) {
        double left;
        try {
            stod(GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        left = stod(GetString());
        double right = op.GetReal();
        return Value(left / right); 
    } 
    else if(op.IsString() && IsReal()) {
        double left = GetReal();
        double right;
        try {
            stod(op.GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        right = stod(op.GetString());
        return Value(left / right); 
    }
    else if(IsString() && op.IsString()) {
        double left;
        try {
            stod(GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        left = stod(GetString());
        double right;
        try {
            stod(op.GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        right = stod(op.GetString());
        return Value(left / right); 
    }
    else {
        return Value();
    }
}

	//numeric overloaded greater than operator of this with op
Value Value::operator>(const Value& op) const{
    if (IsReal() && op.IsReal()) {
        double left = GetReal();
        double right = op.GetReal();
        return Value(left > right);
    }
    else if(IsString() && op.IsReal()) {
        double left;
        try {
            left = stod(GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        double right = op.GetReal();
        return Value(left > right); 
    } 
    else if(op.IsString() && IsReal()) {
        double left = GetReal();
        double right;
        try {
            right = stod(op.GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        return Value(left > right); 
    }
    else if(IsString() && op.IsString()) {
        double left;
        try {
            left = stod(GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        double right;
        try {
            right = stod(op.GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        return Value(left > right); 
    }
    else {
        return Value();
    }

}
	
	//numeric overloaded greater than operator of this with op
Value Value::operator<(const Value& op) const{
    if (IsReal() && op.IsReal()) {
        double left = GetReal();
        double right = op.GetReal();
        return Value(left < right);
    }
    else if(IsString() && op.IsReal()) {
        double left;
        try {
            left = stod(GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        double right = op.GetReal();
        return Value(left < right); 
    } 
    else if(op.IsString() && IsReal()) {
        double left = GetReal();
        double right;
        try {
            right = stod(op.GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        return Value(left < right); 
    }
    else if(IsString() && op.IsString()) {
        double left;
        try {
            left = stod(GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        double right;
        try {
            right = stod(op.GetString());
        } 
        catch (invalid_argument& e) {
            cout<<"Invalid conversion from string to double."<<endl;
            return Value();
        }
        return Value(left < right); 
    }
    else {
        return Value();
    }
}

Value Value::Catenate(const Value& op) const{

    if (IsReal() && op.IsReal()) {
        string left = to_string(GetReal());
        left.erase(left.find_last_not_of('0') + 1, string::npos);
        left.erase(left.find_last_not_of('.') + 1, string::npos);
        
        string right = to_string(op.GetReal());
        right.erase(right.find_last_not_of('0') + 1, string::npos);
        right.erase(right.find_last_not_of('.') + 1, string::npos);
        
        return Value(left + right);
    }
    else if(IsString() && op.IsReal()) {
        string left = GetString();
        string right = to_string(op.GetReal());
        right.erase(right.find_last_not_of('0') + 1, string::npos);
        right.erase(right.find_last_not_of('.') + 1, string::npos);
        return Value(left + right); 
    } 
    else if(op.IsString() && IsReal()) {
        string left = to_string(GetReal());
        left.erase(left.find_last_not_of('0') + 1, string::npos);
        left.erase(left.find_last_not_of('.') + 1, string::npos);
        
        string right = op.GetString();
        return Value(left + right); 
    }
    else if(IsString() && op.IsString()) {
        string left = GetString();
        string right = op.GetString();
        return Value(left + right); 
    }
    else {
        return Value();
    }
}

Value Value::SLthan(const Value& op) const{
    if (IsReal() && op.IsReal()) {
        string left = to_string(GetReal());
        left.erase(left.find_last_not_of('0') + 1, string::npos);
        left.erase(left.find_last_not_of('.') + 1, string::npos);
        
        string right = to_string(op.GetReal());
        right.erase(right.find_last_not_of('0') + 1, string::npos);
        right.erase(right.find_last_not_of('.') + 1, string::npos);
        
        return Value(left < right);
    }
    else if(IsString() && op.IsReal()) {
        string left = GetString();
        string right = to_string(op.GetReal());
        right.erase(right.find_last_not_of('0') + 1, string::npos);
        right.erase(right.find_last_not_of('.') + 1, string::npos);
        return Value(left < right); 
    } 
    else if(op.IsString() && IsReal()) {
        string left = to_string(GetReal());
        left.erase(left.find_last_not_of('0') + 1, string::npos);
        left.erase(left.find_last_not_of('.') + 1, string::npos);
        
        string right = op.GetString();
        return Value(left < right); 
    }
    else if(IsString() && op.IsString()) {
        string left = GetString();
        string right = op.GetString();
        return Value(left < right); 
    }
    else {
        return Value();
    }
}
        	//string repetition operation of this with op
Value Value::Repeat(const Value& op) const{
    if(IsString() && op.IsReal()) {
        
        string left = GetString(), n= "";
        int right = op.GetReal();
        int t = right;
        for(int i = 1; i <= t; i++){
            n += left;
        }
        return Value(n); 
    }
    else if(op.IsReal() && IsReal()) {
        string n= "";
        int right = op.GetReal();
        int t = right;
        int left = GetReal();
        string leftS = to_string(left);
        for(int i = 1; i <= t; i++){
            n += leftS;
        }
        return Value(n); 
        
    }
    else if(op.IsString() && IsReal()) {
        
        string n= "";
        int left = GetReal();
        string leftS = to_string(left);
        string right = op.GetString();
        int t;
        try{
            t = stoi(right);
        }
        catch(invalid_argument & arg){
            cout << "Invalid conversion from string to double." << endl;
            return Value();
        }
        
        for(int i = 1; i <= t; i++){
            n += leftS;
        }
        return Value(n); 
    }
    else if(op.IsString() && IsString()) {   
        string left = GetString();
        string right = op.GetString();
        int t;
        try{
            t = stoi(right);
        }
        catch(invalid_argument & arg){
            cout << "Invalid conversion from string to double." << endl;
            return Value();
        }
        string n= "";
        for(int i = 1; i <= t; i++){
            n += left;
        }
        return Value(n); 
    }
    else {
        return Value();
    }
}

	    //string equality (-eq) operator of this with op
Value Value::SEqual(const Value& op) const{
    if (IsReal() && op.IsReal()) {
        string left = to_string(GetReal());
        left.erase(left.find_last_not_of('0') + 1, string::npos);
        left.erase(left.find_last_not_of('.') + 1, string::npos);
        
        string right = to_string(op.GetReal());
        right.erase(right.find_last_not_of('0') + 1, string::npos);
        right.erase(right.find_last_not_of('.') + 1, string::npos);
        
        return Value(left == right);
    }
    else if(IsString() && op.IsReal()) {
        string left = GetString();
        string right = to_string(op.GetReal());
        right.erase(right.find_last_not_of('0') + 1, string::npos);
        right.erase(right.find_last_not_of('.') + 1, string::npos);
        return Value(left == right); 
    } 
    else if(op.IsString() && IsReal()) {
        string left = to_string(GetReal());
        left.erase(left.find_last_not_of('0') + 1, string::npos);
        left.erase(left.find_last_not_of('.') + 1, string::npos);
        
        string right = op.GetString();
        return Value(left == right); 
    }
    else if(IsString() && op.IsString()) {
        string left = GetString();
        string right = op.GetString();
        return Value(left == right); 
    }
    else {
        return Value();
    
    }
}
	//string greater than (-gt) operator of this with op
Value Value::SGthan(const Value& op) const{
        if (IsReal() && op.IsReal()) {
        string left = to_string(GetReal());
        left.erase(left.find_last_not_of('0') + 1, string::npos);
        left.erase(left.find_last_not_of('.') + 1, string::npos);
        
        string right = to_string(op.GetReal());
        right.erase(right.find_last_not_of('0') + 1, string::npos);
        right.erase(right.find_last_not_of('.') + 1, string::npos);
        
        return Value(left > right);
    }
    else if(IsString() && op.IsReal()) {
        string left = GetString();
        string right = to_string(op.GetReal());
        right.erase(right.find_last_not_of('0') + 1, string::npos);
        right.erase(right.find_last_not_of('.') + 1, string::npos);
        return Value(left > right); 
    } 
    else if(op.IsString() && IsReal()) {
        string left = to_string(GetReal());
        left.erase(left.find_last_not_of('0') + 1, string::npos);
        left.erase(left.find_last_not_of('.') + 1, string::npos);
        
        string right = op.GetString();
        return Value(left > right); 
    }
    else if(IsString() && op.IsString()) {
        string left = GetString();
        string right = op.GetString();
        return Value(left > right); 
    }
    else {
        return Value();
    }
}


    
  



