
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierState::
         PlayerTierState_ToString(PlayerTierState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,5);
  iStack_1 = (this->fields).tierLockState;
  pOVar2 = (Object *)
           func_?(TypeInfo__MV__WorldObject__GamePassSystem__TierLockState,&iStack_1);
  if (args == (Object__Array *)0x0) {
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar2;
    iStack_5 = (this->fields).remainingGamePointRequired;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_5);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar2;
    iStack_6 = (this->fields).gamePointRequirementBase;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar2;
    iStack_7 = (this->fields).remainingGoldPriceRequired;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar2;
    iStack_8 = (this->fields).goldPriceRequirementBase;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_8);
    if (pOVar2 == (Object *)0x0) {
code_?:
      if (4 < args->max_length) {
        args->vector[4] = pOVar2;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar9 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral_tierLockState__0___remainingGame,args,(MethodInfo *)0x0);
        return pSVar9;
      }
      goto code_?;
    }
    iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
    if (iVar4 != 0) goto code_?;
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar10 = (code *)swi(3);
  pSVar9 = (String *)(*pcVar10)();
  return pSVar9;
}


/* PlayerTierState(TierLockState, Int32, Int32, Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierState::PlayerTierState__ctor
               (PlayerTierState *this,TierLockState__Enum tierLockState,
               int32_t remainingGamePointRequired,int32_t gamePointRequirementBase,
               int32_t remainingGoldPriceRequired,int32_t goldPriceRequirementBase,
               MethodInfo *method)

{
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).tierLockState = tierLockState;
  (this->fields).remainingGamePointRequired = remainingGamePointRequired;
  (this->fields).remainingGoldPriceRequired = remainingGoldPriceRequired;
  (this->fields).gamePointRequirementBase = gamePointRequirementBase;
  (this->fields).goldPriceRequirementBase = goldPriceRequirementBase;
  return;
}

