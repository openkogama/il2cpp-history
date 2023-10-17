
/* Object <CreateMethodCall>b__0(Object, Object[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         LateBoundReflectionDelegateFactory+<>c__DisplayClass3_0`1[System::Object]::
         LateBoundReflectionDelegateFactory_c_DisplayClass3_0_1_System_Object___CreateMethodCall_b__0
                   (LateBoundReflectionDelegateFactory_c_DisplayClass3_0_1_System_Object_ *this,
                   Object *o,Object__Array *a,MethodInfo *method)

{
  this_00 = (this->fields).c;
  if (this_00 != (ConstructorInfo *)0x0) {
    pOVar1 = mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_Invoke
                       (this_00,a,(MethodInfo *)0x0);
    return pOVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar3)();
  return pOVar1;
}


/* Object <CreateMethodCall>b__1(Object, Object[]) */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         LateBoundReflectionDelegateFactory+<>c__DisplayClass3_0`1[System::Object]::
         LateBoundReflectionDelegateFactory_c_DisplayClass3_0_1_System_Object___CreateMethodCall_b__1
                   (LateBoundReflectionDelegateFactory_c_DisplayClass3_0_1_System_Object_ *this,
                   Object *o,Object__Array *a,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pMVar2 = (this->fields).method;
  if (pMVar2 != (MethodBase *)0x0) {
    pMStack_1 = (pMVar2->klass->vtable).__unknown_10.method;
    uStack_3 = 0;
    pOStack_4 = a;
    pOVar5 = (Object *)(*(pMVar2->klass->vtable).__unknown_10.methodPtr)(pMVar2,o,0,0);
    return pOVar5;
  }
  uVar6 = func_?(&pOStack_4);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar7)();
  return pOVar5;
}

