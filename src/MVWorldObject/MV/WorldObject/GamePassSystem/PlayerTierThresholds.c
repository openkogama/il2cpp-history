
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierThresholds::
         PlayerTierThresholds_ToString(PlayerTierThresholds *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_goldPriceRequirement__0___gamePo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iStackX_8._0_4_ = (this->fields).goldPriceRequirement;
  arg0 = (Object *)FUN_?(uRam_?,&iStackX_8);
  iStackX_8 = CONCAT44(iStackX_8._4_4_,(this->fields).gamePointRequirement);
  arg1 = (Object *)FUN_?(uRam_?,&iStackX_8);
  iStackX_8 = (this->fields).estimatedRequiredPlaytime._ticks;
  arg2 = (Object *)FUN_?(TypeInfo__System__TimeSpan,&iStackX_8);
  pSVar1 = StringLiteral_goldPriceRequirement__0___gamePo;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
            (&PStack_2,arg0,arg1,arg2,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* PlayerTierThresholds(Int32, Int32, TimeSpan) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierThresholds::
     PlayerTierThresholds__ctor_1
               (PlayerTierThresholds *this,int32_t goldPriceRequirement,int32_t gamePointRequirement
               ,TimeSpan estimatedRequiredPlaytime,MethodInfo *method)

{
  (this->fields).goldPriceRequirement = goldPriceRequirement;
  (this->fields).gamePointRequirement = gamePointRequirement;
  (this->fields).estimatedRequiredPlaytime._ticks = estimatedRequiredPlaytime._ticks;
  return;
}


/* PlayerTierThresholds op_Addition(PlayerTierThresholds, PlayerTierThresholds) */

PlayerTierThresholds *
MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierThresholds::
PlayerTierThresholds_op_Addition(PlayerTierThresholds *a,PlayerTierThresholds *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierThresholds);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((a != (PlayerTierThresholds *)0x0) &&
     (iVar1 = (a->fields).goldPriceRequirement, b != (PlayerTierThresholds *)0x0)) {
    iVar2 = (a->fields).gamePointRequirement;
    TVar3._ticks = (a->fields).estimatedRequiredPlaytime._ticks;
    iVar4 = (b->fields).goldPriceRequirement;
    iVar5 = (b->fields).gamePointRequirement;
    t2._ticks = (b->fields).estimatedRequiredPlaytime._ticks;
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?();
    }
    TVar3 = mscorlib.dll::System::TimeSpan::TimeSpan_op_Addition(TVar3,t2,(MethodInfo *)0x0);
    pPVar6 = (PlayerTierThresholds *)
             FUN_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierThresholds);
    (pPVar6->fields).goldPriceRequirement = iVar4 + iVar1;
    (pPVar6->fields).gamePointRequirement = iVar5 + iVar2;
    (pPVar6->fields).estimatedRequiredPlaytime._ticks = TVar3._ticks;
    return pPVar6;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pPVar6 = (PlayerTierThresholds *)(*pcVar7)();
  return pPVar6;
}

