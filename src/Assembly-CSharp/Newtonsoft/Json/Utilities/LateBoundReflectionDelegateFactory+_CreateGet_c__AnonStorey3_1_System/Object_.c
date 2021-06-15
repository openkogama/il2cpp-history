
/* Object <>m__0(Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         LateBoundReflectionDelegateFactory+<CreateGet>c__AnonStorey3`1[System::Object]::
         LateBoundReflectionDelegateFactory_CreateGet_c_AnonStorey3_1_System_Object____m__0
                   (LateBoundReflectionDelegateFactory_CreateGet_c_AnonStorey3_1_System_Object_
                    *this,Object *o,MethodInfo *method)

{
  pFVar1 = (this->fields).fieldInfo;
  if (pFVar1 != (FieldInfo_1 *)0x0) {
    pOVar2 = (Object *)
             (*(code *)(pFVar1->klass->vtable).__unknown_9.method)
                       (pFVar1,o,(pFVar1->klass->vtable).get_IsLiteral.methodPtr);
    return pOVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar3)();
  return pOVar2;
}

