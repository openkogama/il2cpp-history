
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::MVItem::MVItem_ToString
                   (MVItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_Name___0__ItemID___1__ItemTypeID);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,5);
  pSVar1 = (this->fields).name;
  if (args == (Object__Array *)0x0) {
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
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pSVar1;
    func_?(args->vector,pSVar1);
    iStack_4 = (this->fields).itemID;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_4);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar5;
    func_?(args->vector + 1,pOVar5);
    iStack_6 = (this->fields).itemTypeID;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar5;
    func_?(args->vector + 2,pOVar5);
    iStack_7 = (this->fields).priceGold;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar5;
    func_?(args->vector + 3,pOVar5);
    bStack_8 = (this->fields).resellable;
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_8);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (4 < args->max_length) {
      args->vector[4] = pOVar5;
      func_?(args->vector + 4,pOVar5);
      pSVar1 = mscorlib.dll::System::String::String_Format_3
                         (StringLiteral_Name___0__ItemID___1__ItemTypeID,args,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar9)();
  return pSVar1;
}

