
/* ErrorContext(Object, Object, Exception) */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::ErrorContext::ErrorContext__ctor
               (ErrorContext *this,Object *originalObject,Object *member,Exception *error,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._OriginalObject_k__BackingField = originalObject;
  func_?(&(this->fields)._OriginalObject_k__BackingField,originalObject);
  (this->fields)._Member_k__BackingField = member;
  func_?(&(this->fields)._Member_k__BackingField,member);
  (this->fields)._Error_k__BackingField = error;
  func_?(&this->fields,error);
  return;
}

