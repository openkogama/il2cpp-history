
/* Object <CreateGet>b__0(Object) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         LateBoundReflectionDelegateFactory+<>c__DisplayClass6_0`1[System::Object]::
         LateBoundReflectionDelegateFactory_c_DisplayClass6_0_1_System_Object___CreateGet_b__0
                   (LateBoundReflectionDelegateFactory_c_DisplayClass6_0_1_System_Object_ *this,
                   Object *o,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pFStack_2 = (this->fields).fieldInfo;
  if (pFStack_2 != (FieldInfo_1 *)0x0) {
    pMStack_1 = (pFStack_2->klass->vtable).__unknown_9.method;
    pOStack_3 = o;
    pOVar4 = (Object *)(*(pFStack_2->klass->vtable).__unknown_9.methodPtr)();
    return pOVar4;
  }
  uVar5 = func_?(&pFStack_2);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar6)();
  return pOVar4;
}

