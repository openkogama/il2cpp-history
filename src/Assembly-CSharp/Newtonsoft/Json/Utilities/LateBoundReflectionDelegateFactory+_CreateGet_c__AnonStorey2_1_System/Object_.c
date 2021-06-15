
/* Object <>m__0(Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         LateBoundReflectionDelegateFactory+<CreateGet>c__AnonStorey2`1[System::Object]::
         LateBoundReflectionDelegateFactory_CreateGet_c_AnonStorey2_1_System_Object____m__0
                   (LateBoundReflectionDelegateFactory_CreateGet_c_AnonStorey2_1_System_Object_
                    *this,Object *o,MethodInfo *method)

{
  pPVar1 = (this->fields).propertyInfo;
  if (pPVar1 != (PropertyInfo_1 *)0x0) {
    pOVar2 = (Object *)
             (*(code *)(pPVar1->klass->vtable).GetValue.method)
                       (pPVar1,o,0,(pPVar1->klass->vtable).__unknown_14.methodPtr);
    return pOVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar3)();
  return pOVar2;
}

