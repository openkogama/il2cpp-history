
/* Object <CreateDefaultConstructor>b__0() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         LateBoundReflectionDelegateFactory+<>c__DisplayClass4_0`1[System::Object]::
         LateBoundReflectionDelegateFactory_c_DisplayClass4_0_1_System_Object___CreateDefaultConstructor_b__0
                   (LateBoundReflectionDelegateFactory_c_DisplayClass4_0_1_System_Object_ *this,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    cRam_? = '\x01';
  }
  pMVar1 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
  type = (this->fields).type;
  iVar2 = *(int *)(System__Object__MethodInfo__System__Array__Empty<System::Object>______->
                  field7_0x1c).methodMetadataHandle;
  if ((*(byte *)(iVar2 + 0xba) & 1) == 0) {
    iVar2 = func_?(iVar2);
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_?(iVar2);
  }
  iVar2 = *(int *)(pMVar1->field7_0x1c).methodMetadataHandle;
  if ((*(byte *)(iVar2 + 0xba) & 1) == 0) {
    iVar2 = func_?(iVar2);
  }
  pOVar3 = ReflectionUtils::ReflectionUtils_CreateInstance
                     (type,(Object__Array *)**(undefined4 **)(iVar2 + 0x5c),(MethodInfo *)0x0);
  pvVar4 = method->klass->rgctx_data->rgctxDataDummy;
  if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
    pvVar4 = (void *)func_?(pvVar4);
  }
  if (pOVar3 == (Object *)0x0) {
    return (Object *)0x0;
  }
  pOVar5 = (Object *)func_?(pOVar3,pvVar4);
  if (pOVar5 != (Object *)0x0) {
    return pOVar5;
  }
  func_?(pOVar3,pvVar4);
  pcVar6 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar6)();
  return pOVar3;
}


/* Object <CreateDefaultConstructor>b__1() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         LateBoundReflectionDelegateFactory+<>c__DisplayClass4_0`1[System::Object]::
         LateBoundReflectionDelegateFactory_c_DisplayClass4_0_1_System_Object___CreateDefaultConstructor_b__1
                   (LateBoundReflectionDelegateFactory_c_DisplayClass4_0_1_System_Object_ *this,
                   MethodInfo *method)

{
  this_00 = (this->fields).constructorInfo;
  if (this_00 == (ConstructorInfo *)0x0) {
    func_?();
  }
  else {
    unaff_EDI = mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_Invoke
                          (this_00,(Object__Array *)0x0,(MethodInfo *)0x0);
    unaff_ESI = method->klass->rgctx_data->rgctxDataDummy;
    if ((*(byte *)((int)unaff_ESI + 0xba) & 1) == 0) {
      unaff_ESI = (void *)func_?(unaff_ESI);
    }
    if (unaff_EDI == (Object *)0x0) {
      return (Object *)0x0;
    }
    pOVar1 = (Object *)func_?(unaff_EDI,unaff_ESI);
    if (pOVar1 != (Object *)0x0) {
      return pOVar1;
    }
  }
  func_?(unaff_EDI,unaff_ESI);
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}

