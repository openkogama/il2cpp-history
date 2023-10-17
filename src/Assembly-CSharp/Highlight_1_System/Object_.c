
/* Highlight`1[System.Object](Int32, Object) */

void Assembly-CSharp.dll::Highlight`1[System::Object]::Highlight_1_System_Object___ctor
               (Highlight_1_System_Object_ *this,int32_t id,Object *highlightData,MethodInfo *method
               )

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).id = id;
  (this->fields).highlightData = highlightData;
  func_?(&(this->fields).highlightData,highlightData);
  return;
}

