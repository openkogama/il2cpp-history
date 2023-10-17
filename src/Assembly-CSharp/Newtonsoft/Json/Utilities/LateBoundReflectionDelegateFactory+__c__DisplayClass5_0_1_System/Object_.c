
/* Object <CreateGet>b__0(Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         LateBoundReflectionDelegateFactory+<>c__DisplayClass5_0`1[System::Object]::
         LateBoundReflectionDelegateFactory_c_DisplayClass5_0_1_System_Object___CreateGet_b__0
                   (LateBoundReflectionDelegateFactory_c_DisplayClass5_0_1_System_Object_ *this,
                   Object *o,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pPVar2 = (this->fields).propertyInfo;
  if (pPVar2 != (PropertyInfo_1 *)0x0) {
    pMStack_1 = (pPVar2->klass->vtable).GetValue.method;
    uStack_3 = 0;
    pOStack_4 = o;
    pOVar5 = (Object *)(*(pPVar2->klass->vtable).GetValue.methodPtr)(pPVar2);
    return pOVar5;
  }
  uVar6 = func_?(&pOStack_4);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar7)();
  return pOVar5;
}

