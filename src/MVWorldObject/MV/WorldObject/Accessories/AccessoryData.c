
/* Boolean GetShowInShop() */

bool MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::AccessoryData_GetShowInShop
               (AccessoryData *this,MethodInfo *method)

{
  this_00 = (this->fields).time;
  if (this_00 == (AccessoryTimelimit *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if ((this_00->fields).timeLimit != 0) {
    TStack_3 = AccessoryTimelimit::AccessoryTimelimit_GetTimeLeft(this_00,(MethodInfo *)0x0);
    dVar4 = mscorlib.dll::System::TimeSpan::TimeSpan_get_TotalSeconds(&TStack_3,(MethodInfo *)0x0);
    if (dVar4 <= _UNK_?) {
      return 0;
    }
  }
  return (this->fields).iAvlb;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::AccessoryData_ToString
                   (AccessoryData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AccessoryCategory);
    func_?(&TypeInfo__MV__Common__AccessorySlotType);
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral__0__u000Du000A__isAvailable__1_u000Du000A__isLim);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,0xb);
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
    bStack_4 = (this->fields).iAvlb;
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_4);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar5;
    func_?(args->vector + 1,pOVar5);
    bStack_6 = (this->fields).iNew;
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_6);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar5;
    func_?(args->vector + 2,pOVar5);
    bStack_7 = (this->fields).iFtr;
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_7);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar5;
    func_?(args->vector + 3,pOVar5);
    iStack_8 = (this->fields).cost;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_8);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 5) goto code_?;
    args->vector[4] = pOVar5;
    func_?(args->vector + 4,pOVar5);
    iStack_9 = (this->fields).dsc;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_9);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 6) goto code_?;
    args->vector[5] = pOVar5;
    func_?(args->vector + 5,pOVar5);
    iStack_10 = (this->fields).lvl;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_10);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 7) goto code_?;
    args->vector[6] = pOVar5;
    func_?(args->vector + 6,pOVar5);
    iStack_11 = (this->fields).cat;
    pOVar5 = (Object *)func_?(TypeInfo__MV__Common__AccessoryCategory,&iStack_11);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 8) goto code_?;
    args->vector[7] = pOVar5;
    func_?(args->vector + 7,pOVar5);
    iStack_12 = (this->fields).pos;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_12);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 9) goto code_?;
    args->vector[8] = pOVar5;
    func_?(args->vector + 8,pOVar5);
    pSVar1 = (this->fields).url;
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 10) goto code_?;
    args->vector[9] = (Object *)pSVar1;
    func_?(args->vector + 9,pSVar1);
    iStack_13 = (this->fields).slot;
    pOVar5 = (Object *)func_?(TypeInfo__MV__Common__AccessorySlotType,&iStack_13);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (10 < args->max_length) {
      args->vector[10] = pOVar5;
      func_?(args->vector + 10,pOVar5);
      pSVar1 = mscorlib.dll::System::String::String_Format_3
                         (StringLiteral__0__u000Du000A__isAvailable__1_u000Du000A__isLim,args,
                          (MethodInfo *)0x0);
      return pSVar1;
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar14)();
  return pSVar1;
}


/* AccessoryData() */

void MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::AccessoryData__ctor
               (AccessoryData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__Accessories__AccessoryTimelimit);
    cRam_? = '\x01';
  }
  value = (AccessoryTimelimit *)
          func_?(TypeInfo__MV__WorldObject__Accessories__AccessoryTimelimit);
  if (value != (AccessoryTimelimit *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_EDI);
    method_00 = (MethodInfo *)&(this->fields).time;
    (this->fields).time = value;
    func_?(method_00,value);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 get_DiscountedPrice() */

int32_t MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
        AccessoryData_get_DiscountedPrice(AccessoryData *this,MethodInfo *method)

{
  return (this->fields).cost - ((this->fields).dsc * (this->fields).cost) / 100;
}

