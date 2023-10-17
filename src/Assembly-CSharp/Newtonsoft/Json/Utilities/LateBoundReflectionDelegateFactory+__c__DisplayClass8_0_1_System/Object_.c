
/* Void <CreateSet>b__0(Object, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
     LateBoundReflectionDelegateFactory+<>c__DisplayClass8_0`1[System::Object]::
     LateBoundReflectionDelegateFactory_c_DisplayClass8_0_1_System_Object___CreateSet_b__0
               (LateBoundReflectionDelegateFactory_c_DisplayClass8_0_1_System_Object_ *this,
               Object *o,Object *v,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pPVar2 = (this->fields).propertyInfo;
  if (pPVar2 != (PropertyInfo_1 *)0x0) {
    pMStack_1 = (pPVar2->klass->vtable).SetValue.method;
    uStack_3 = 0;
    pOStack_4 = v;
    (*(pPVar2->klass->vtable).SetValue.methodPtr)(pPVar2,o);
    return;
  }
  uVar5 = func_?(&pOStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

