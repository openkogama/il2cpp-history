
/* String ToString() */

String * Assembly-CSharp.dll::InitialLevelData::InitialLevelData_ToString
                   (InitialLevelData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__System__Collections__Generic__List<BadgeUrlData>__get_Count__);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_BadgeUrlData_Length__0___Level__);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  pLVar1 = (this->fields).BadgeUrlData;
  if (pLVar1 == (List_1_BadgeUrlData_ *)0x0) {
code_?:
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    iStack_3 = (pLVar1->fields)._size;
    pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
    if (args == (Object__Array *)0x0) goto code_?;
    if (pOVar4 != (Object *)0x0) {
      iVar5 = func_?(pOVar4,(args->klass->_0).element_class);
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar4;
    func_?(args->vector,pOVar4);
    iStack_6 = (this->fields).Level;
    pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (pOVar4 != (Object *)0x0) {
      iVar5 = func_?(pOVar4,(args->klass->_0).element_class);
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar4;
    func_?(args->vector + 1,pOVar4);
    iStack_7 = (this->fields).XP;
    pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
    if (pOVar4 != (Object *)0x0) {
      iVar5 = func_?(pOVar4,(args->klass->_0).element_class);
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar4;
    func_?(args->vector + 2,pOVar4);
    pXVar8 = (this->fields).XPLevelLimits;
    if (pXVar8 == (XPLevelLimits *)0x0) {
code_?:
      if (3 < args->max_length) {
        args->vector[3] = (Object *)pXVar8;
        func_?(args->vector + 3,pXVar8);
        pSVar9 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral_BadgeUrlData_Length__0___Level__,args,(MethodInfo *)0x0);
        return pSVar9;
      }
      goto code_?;
    }
    iVar5 = func_?(pXVar8,(args->klass->_0).element_class);
    if (iVar5 != 0) goto code_?;
  }
  uVar2 = func_?(0);
  func_?(uVar2);
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  pSVar9 = (String *)(*pcVar10)();
  return pSVar9;
}

