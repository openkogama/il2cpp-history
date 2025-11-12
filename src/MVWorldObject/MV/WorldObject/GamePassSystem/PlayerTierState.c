
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierState::
         PlayerTierState_ToString(PlayerTierState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__GamePassSystem__TierLockState);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_tierLockState__0___remainingGame);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,5);
  aiStackX_8[0] = (this->fields).tierLockState;
  lVar1 = FUN_?(TypeInfo__MV__WorldObject__GamePassSystem__TierLockState,aiStackX_8);
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
    aiStackX_8[0] = (this->fields).remainingGamePointRequired;
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
    aiStackX_8[0] = (this->fields).gamePointRequirementBase;
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
    aiStackX_8[0] = (this->fields).remainingGoldPriceRequired;
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
    FUN_?(args,3,lVar1);
    aiStackX_8[0] = (this->fields).goldPriceRequirementBase;
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
    pSVar5 = StringLiteral_tierLockState__0___remainingGame;
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


/* PlayerTierState(TierLockState, Int32, Int32, Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierState::PlayerTierState__ctor
               (PlayerTierState *this,TierLockState__Enum tierLockState,
               int32_t remainingGamePointRequired,int32_t gamePointRequirementBase,
               int32_t remainingGoldPriceRequired,int32_t goldPriceRequirementBase,
               MethodInfo *method)

{
  (this->fields).remainingGoldPriceRequired = remainingGoldPriceRequired;
  (this->fields).goldPriceRequirementBase = goldPriceRequirementBase;
  (this->fields).tierLockState = tierLockState;
  (this->fields).remainingGamePointRequired = remainingGamePointRequired;
  (this->fields).gamePointRequirementBase = gamePointRequirementBase;
  return;
}

