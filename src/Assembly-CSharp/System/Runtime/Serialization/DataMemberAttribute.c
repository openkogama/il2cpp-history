
/* DataMemberAttribute() */

void Assembly-CSharp.dll::System::Runtime::Serialization::DataMemberAttribute::
     DataMemberAttribute__ctor(DataMemberAttribute *this,MethodInfo *method)

{
  (this->fields).emit_default = 1;
  (this->fields).order = -1;
  return;
}


/* Boolean get_EmitDefaultValue() */

bool Assembly-CSharp.dll::System::Runtime::Serialization::DataMemberAttribute::
     DataMemberAttribute_get_EmitDefaultValue(DataMemberAttribute *this,MethodInfo *method)

{
  return (this->fields).emit_default;
}


/* Void set_EmitDefaultValue(Boolean) */

void Assembly-CSharp.dll::System::Runtime::Serialization::DataMemberAttribute::
     DataMemberAttribute_set_EmitDefaultValue
               (DataMemberAttribute *this,bool value,MethodInfo *method)

{
  (this->fields).emit_default = value;
  return;
}

