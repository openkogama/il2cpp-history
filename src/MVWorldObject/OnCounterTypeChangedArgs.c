
/* String ToString() */

String * MVWorldObject.dll::OnCounterTypeChangedArgs::OnCounterTypeChangedArgs_ToString
                   (OnCounterTypeChangedArgs *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameStatCounterType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CounterType___0___Value___1___Ac);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,5);
  aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,(this->fields).counterType);
  lVar1 = FUN_?(TypeInfo__GameStatCounterType,aiStackX_8);
  if (args != (Object__Array *)0x0) {
    if (lVar1 != 0) {
      lVar2 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,0,lVar1);
    aiStackX_8[0] = (this->fields).count;
    lVar1 = FUN_?(uRam_?,aiStackX_8);
    if (lVar1 != 0) {
      lVar2 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,1,lVar1);
    aiStackX_8[0] = (this->fields).actorNumber;
    lVar1 = FUN_?(uRam_?,aiStackX_8);
    if (lVar1 != 0) {
      lVar2 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,2,lVar1);
    aiStackX_8[0] = (this->fields).team;
    lVar1 = FUN_?(TypeInfo__MV__WorldObject__MVTeam,aiStackX_8);
    if (lVar1 != 0) {
      lVar2 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,3,lVar1);
    aiStackX_8[0] = (this->fields).otherID;
    lVar1 = FUN_?(uRam_?,aiStackX_8);
    if (lVar1 != 0) {
      lVar1 = FUN_?(lVar1,(args->klass->_0).element_class);
      if (lVar1 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar5 = (String *)(*pcVar4)();
        return pSVar5;
      }
    }
    FUN_?(args,4);
    pSVar5 = StringLiteral_CounterType___0___Value___1___Ac;
    PStack_6._arg0 = (Object *)0x0;
    PStack_6._arg1 = (Object *)0x0;
    PStack_6._arg2 = (Object *)0x0;
    PStack_6._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_6,args,(MethodInfo *)0x0);
    PStack_7._arg0 = PStack_6._arg0;
    PStack_7._arg1 = PStack_6._arg1;
    PStack_7._arg2 = PStack_6._arg2;
    PStack_7._args = PStack_6._args;
    pSVar5 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar5,&PStack_7,(MethodInfo *)0x0);
    return pSVar5;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* OnCounterTypeChangedArgs(Int32, GameStatCounterType, Int32, MVTeam, Int32) */

void MVWorldObject.dll::OnCounterTypeChangedArgs::OnCounterTypeChangedArgs__ctor
               (OnCounterTypeChangedArgs *this,int32_t count,GameStatCounterType__Enum counterType,
               int32_t actorNumber,MVTeam__Enum team,int32_t otherID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).otherID = -1;
  if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
    FUN_?();
  }
  (this->fields).team = team;
  (this->fields).count = count;
  (this->fields).counterType = (uint8_t)counterType;
  (this->fields).otherID = otherID;
  (this->fields).actorNumber = actorNumber;
  return;
}

