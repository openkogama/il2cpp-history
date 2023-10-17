
/* BsonString(Object, Boolean) */

void Assembly-CSharp.dll::Newtonsoft::Json::Bson::BsonString::BsonString__ctor
               (BsonString *this,Object *value,bool includeLength,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._._value = value;
  func_?(&(this->fields)._._value,value);
  (this->fields)._._type = 2;
  (this->fields)._IncludeLength_k__BackingField = includeLength;
  return;
}

