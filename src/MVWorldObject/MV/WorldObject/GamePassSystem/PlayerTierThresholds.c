
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierThresholds::
         PlayerTierThresholds_ToString(PlayerTierThresholds *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar5 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_goldPriceRequirement__0___gamePo,arg0,arg1,arg2,
                      (MethodInfo *)0x0);
  return pSVar5;
}


/* PlayerTierThresholds op_Addition(PlayerTierThresholds, PlayerTierThresholds) */

PlayerTierThresholds *
MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierThresholds::
PlayerTierThresholds_op_Addition(PlayerTierThresholds *a,PlayerTierThresholds *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (a != (PlayerTierThresholds *)0x0) {
    iVar1 = (a->fields).goldPriceRequirement;
    if (b != (PlayerTierThresholds *)0x0) {
      iVar2 = (b->fields).goldPriceRequirement;
      iVar3 = (a->fields).gamePointRequirement;
      TVar4._ticks = (a->fields).estimatedRequiredPlaytime._ticks;
      t2._ticks = (b->fields).estimatedRequiredPlaytime._ticks;
      iVar5 = (b->fields).gamePointRequirement;
      if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__TimeSpan);
      }
      TVar4 = mscorlib.dll::System::TimeSpan::TimeSpan_op_Addition(TVar4,t2,(MethodInfo *)0x0);
      method_00 = TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierThresholds;
      this = (ScaleAnimationBase *)func_?();
      Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                (this,0.0,(MethodInfo *)method_00);
      (this->fields)._._._._.m_CachedPtr = (void *)(iVar2 + iVar1);
      (this->fields).originalScale.x = (float)(int)TVar4._ticks;
      (this->fields).originalScale.y = (float)(int)((ulonglong)TVar4._ticks >> 0x20);
      (this->fields).state = iVar5 + iVar3;
      return (PlayerTierThresholds *)this;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  pPVar7 = (PlayerTierThresholds *)(*pcVar6)();
  return pPVar7;
}

