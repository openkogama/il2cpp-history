
/* Void <>m__0(Object, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
     LateBoundReflectionDelegateFactory+<CreateSet>c__AnonStorey4`1[System::Object]::
     LateBoundReflectionDelegateFactory_CreateSet_c_AnonStorey4_1_System_Object____m__0
               (LateBoundReflectionDelegateFactory_CreateSet_c_AnonStorey4_1_System_Object_ *this,
               Object *o,Object *v,MethodInfo *method)

{
  pFVar1 = (this->fields).fieldInfo;
  if (pFVar1 != (FieldInfo_1 *)0x0) {
    (*(code *)(pFVar1->klass->vtable).__unknown_10.method)
              (pFVar1,o,v,0,0,0,(pFVar1->klass->vtable).SetValue.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

