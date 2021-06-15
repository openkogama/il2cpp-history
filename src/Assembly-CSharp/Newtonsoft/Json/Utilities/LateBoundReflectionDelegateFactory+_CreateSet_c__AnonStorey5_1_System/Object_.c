
/* Void <>m__0(Object, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
     LateBoundReflectionDelegateFactory+<CreateSet>c__AnonStorey5`1[System::Object]::
     LateBoundReflectionDelegateFactory_CreateSet_c_AnonStorey5_1_System_Object____m__0
               (LateBoundReflectionDelegateFactory_CreateSet_c_AnonStorey5_1_System_Object_ *this,
               Object *o,Object *v,MethodInfo *method)

{
  pPVar1 = (this->fields).propertyInfo;
  if (pPVar1 != (PropertyInfo_1 *)0x0) {
    (*(code *)(pPVar1->klass->vtable).SetValue.method)
              (pPVar1,o,v,0,(pPVar1->klass->vtable).__unknown_15.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

