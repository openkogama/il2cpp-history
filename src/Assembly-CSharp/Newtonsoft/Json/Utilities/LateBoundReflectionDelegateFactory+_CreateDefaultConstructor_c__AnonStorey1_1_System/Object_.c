
/* Object <>m__0() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         LateBoundReflectionDelegateFactory+<CreateDefaultConstructor>c__AnonStorey1`1[System::
         Object]::
         LateBoundReflectionDelegateFactory_CreateDefaultConstructor_c_AnonStorey1_1_System_Object____m__0
                   (LateBoundReflectionDelegateFactory_CreateDefaultConstructor_c_AnonStorey1_1_System_Object_
                    *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  type = (this->fields).type;
  args = (Object__Array *)func_?(TypeInfo__System__Object,0);
  pOVar1 = ReflectionUtils::ReflectionUtils_CreateInstance(type,args,(MethodInfo *)0x0);
  iVar2 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
    func_?(iVar2);
  }
  if (pOVar1 == (Object *)0x0) {
    return (Object *)0x0;
  }
  pOVar3 = (Object *)func_?(pOVar1,iVar2);
  if (pOVar3 != (Object *)0x0) {
    return pOVar3;
  }
  func_?(pOVar1,iVar2);
  pcVar4 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar4)();
  return pOVar1;
}


/* Object <>m__1() */

Object * Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
         LateBoundReflectionDelegateFactory+<CreateDefaultConstructor>c__AnonStorey1`1[System::
         Object]::
         LateBoundReflectionDelegateFactory_CreateDefaultConstructor_c_AnonStorey1_1_System_Object____m__1
                   (LateBoundReflectionDelegateFactory_CreateDefaultConstructor_c_AnonStorey1_1_System_Object_
                    *this,MethodInfo *method)

{
  this_00 = (this->fields).constructorInfo;
  if (this_00 == (ConstructorInfo *)0x0) {
    func_?(0);
  }
  else {
    unaff_EDI = mscorlib.dll::System::Reflection::ConstructorInfo::ConstructorInfo_Invoke
                          (this_00,(Object__Array *)0x0,(MethodInfo *)0x0);
    unaff_ESI = **(int **)(method->name + 0x60);
    if ((*(byte *)(unaff_ESI + 0xbe) & 1) == 0) {
      func_?(unaff_ESI);
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

