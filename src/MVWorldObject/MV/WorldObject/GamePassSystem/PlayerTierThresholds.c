
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierThresholds::
         PlayerTierThresholds_ToString(PlayerTierThresholds *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__TimeSpan);
    func_?(&StringLiteral_goldPriceRequirement__0___gamePo);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  this = (PlayerTierThresholds *)(this->fields).goldPriceRequirement;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
  iStack_2 = (pPVar1->fields).gamePointRequirement;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  uStack_3 = (undefined4)(pPVar1->fields).estimatedRequiredPlaytime._ticks;
  uStack_4 = *(undefined4 *)((int)&(pPVar1->fields).estimatedRequiredPlaytime._ticks + 4);
  arg2 = (Object *)func_?(TypeInfo__System__TimeSpan,&uStack_3);
  pSVar5 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_goldPriceRequirement__0___gamePo,arg0,arg1,arg2,
                      (MethodInfo *)0x0);
  return pSVar5;
}


/* PlayerTierThresholds(Int32, Int32, TimeSpan) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierThresholds::
     PlayerTierThresholds__ctor_1
               (PlayerTierThresholds *this,int32_t goldPriceRequirement,int32_t gamePointRequirement
               ,TimeSpan estimatedRequiredPlaytime,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).goldPriceRequirement = goldPriceRequirement;
  (this->fields).gamePointRequirement = gamePointRequirement;
  *(undefined4 *)&(this->fields).estimatedRequiredPlaytime._ticks = in_stack_1;
  *(undefined4 *)((int)&(this->fields).estimatedRequiredPlaytime._ticks + 4) =
       (undefined4)estimatedRequiredPlaytime._ticks;
  return;
}


/* PlayerTierThresholds op_Addition(PlayerTierThresholds, PlayerTierThresholds) */

PlayerTierThresholds *
MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierThresholds::
PlayerTierThresholds_op_Addition(PlayerTierThresholds *a,PlayerTierThresholds *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierThresholds);
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if (a != (PlayerTierThresholds *)0x0) {
    iVar1 = (a->fields).goldPriceRequirement;
    if (b != (PlayerTierThresholds *)0x0) {
      iVar2 = (a->fields).gamePointRequirement;
      TVar3._ticks = (a->fields).estimatedRequiredPlaytime._ticks;
      iVar4 = (b->fields).goldPriceRequirement;
      t2._ticks = (b->fields).estimatedRequiredPlaytime._ticks;
      method_00 = (MethodInfo *)(b->fields).gamePointRequirement;
      if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__TimeSpan);
      }
      TVar3 = mscorlib.dll::System::TimeSpan::TimeSpan_op_Addition(TVar3,t2,(MethodInfo *)0x0);
      pPVar5 = (PlayerTierThresholds *)
               func_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierThresholds);
      if (pPVar5 != (PlayerTierThresholds *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)pPVar5,ExceptionArgument__Enum_obj,method_00);
        (pPVar5->fields).goldPriceRequirement = iVar4 + iVar1;
        (pPVar5->fields).gamePointRequirement = (int)&method_00->methodPointer + iVar2;
        (pPVar5->fields).estimatedRequiredPlaytime._ticks = TVar3._ticks;
        return pPVar5;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pPVar5 = (PlayerTierThresholds *)(*pcVar6)();
  return pPVar5;
}

