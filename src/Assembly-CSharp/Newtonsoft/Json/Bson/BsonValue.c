
/* BsonValue(Object, BsonType) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonValue::BsonValue__ctor
               (BsonValue *this,Object *value,BsonType__Enum type,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._value = value;
  func_?(&(this->fields)._value,value);
  (this->fields)._type = (undefined1)type;
  return;
}

