
/* Boolean GetShowInShop() */

bool MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::AccessoryData_GetShowInShop
               (AccessoryData *this,MethodInfo *method)

{
  this_00 = (this->fields).time;
  if (this_00 != (AccessoryTimelimit *)0x0) {
    if ((this_00->fields).timeLimit != 0) {
      if (this_00 == (AccessoryTimelimit *)0x0) goto code_?;
      iStack_1 = 0;
      iStack_1 = (int64_t)AccessoryTimelimit::AccessoryTimelimit_GetTimeLeft
                                    (this_00,(MethodInfo *)0x0);
      fVar2 = (float10)func_?(&iStack_1,0);
      if ((double)fVar2 <= _UNK_?) {
        return 0;
      }
    }
    return (this->fields).iAvlb;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::AccessoryData_ToString
                   (AccessoryData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,0xb);
  pSVar1 = (this->fields).name;
  if (args == (Object__Array *)0x0) {
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pSVar1;
    bStack_4 = (this->fields).iAvlb;
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_4);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar5;
    bStack_6 = (this->fields).iNew;
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_6);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar5;
    bStack_7 = (this->fields).iFtr;
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_7);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar5;
    iStack_8 = (this->fields).cost;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_8);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 5) goto code_?;
    args->vector[4] = pOVar5;
    iStack_9 = (this->fields).dsc;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_9);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 6) goto code_?;
    args->vector[5] = pOVar5;
    iStack_10 = (this->fields).lvl;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_10);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 7) goto code_?;
    args->vector[6] = pOVar5;
    iStack_11 = (this->fields).cat;
    pOVar5 = (Object *)func_?(TypeInfo__MV__Common__AccessoryCategory,&iStack_11);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 8) goto code_?;
    args->vector[7] = pOVar5;
    iStack_12 = (this->fields).pos;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_12);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 9) goto code_?;
    args->vector[8] = pOVar5;
    pSVar1 = (this->fields).url;
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 10) goto code_?;
    args->vector[9] = (Object *)pSVar1;
    iStack_13 = (this->fields).slot;
    pOVar5 = (Object *)func_?(TypeInfo__MV__Common__AccessorySlotType,&iStack_13);
    if (pOVar5 == (Object *)0x0) {
code_?:
      if (10 < args->max_length) {
        args->vector[10] = pOVar5;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar1 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral__0__u000Du000A__isAvailable__1_u000Du000A__isLim,args,
                            (MethodInfo *)0x0);
        return pSVar1;
      }
      goto code_?;
    }
    iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
    if (iVar3 != 0) goto code_?;
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar14 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar14)();
  return pSVar1;
}


/* AccessoryData() */

void MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::AccessoryData__ctor
               (AccessoryData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MV__WorldObject__Accessories__AccessoryTimelimit;
  this_00 = (ScaleAnimationBase *)func_?();
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            (this_00,0.0,(MethodInfo *)method_00);
  (this->fields).time = (AccessoryTimelimit *)this_00;
  return;
}


/* Int32 get_DiscountedPrice() */

int32_t MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
        AccessoryData_get_DiscountedPrice(AccessoryData *this,MethodInfo *method)

{
  iVar1 = (this->fields).cost;
  return iVar1 - ((this->fields).dsc * iVar1) / 100;
}

