
/* Boolean GetHasTimeLeft() */

bool MVWorldObject.dll::MV::WorldObject::MetaData::SubscriptionData::SubscriptionData_GetHasTimeLeft
               (SubscriptionData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  d1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  t2 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                 (d1,(DateTime)(this->fields).SubscriptionActivateTime._dateData,(MethodInfo *)0x0);
  TVar1._ticks = (this->fields).SubscriptionDuration._ticks;
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  TVar1 = mscorlib.dll::System::TimeSpan::TimeSpan_op_Subtraction(TVar1,t2,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  return 0.0 < (double)TVar1._ticks * _UNK_?;
}


/* TimeSpan GetTimeLeft() */

TimeSpan MVWorldObject.dll::MV::WorldObject::MetaData::SubscriptionData::
         SubscriptionData_GetTimeLeft(SubscriptionData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  d1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  TVar1 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                    (d1,(DateTime)(this->fields).SubscriptionActivateTime._dateData,
                     (MethodInfo *)0x0);
  uVar2 = (this->fields).SubscriptionDuration._ticks;
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (((longlong)(uVar2 ^ TVar1._ticks) < 0) && ((longlong)(uVar2 - TVar1._ticks ^ uVar2) < 0)) {
    uVar3 = func_?(&TypeInfo__System__OverflowException);
    this_00 = (OverflowException *)func_?(uVar3);
    message = (String *)func_?(&StringLiteral_TimeSpan_overflowed_because_the_);
    mscorlib.dll::System::OverflowException::OverflowException__ctor_1
              (this_00,message,(MethodInfo *)0x0);
    uVar3 = func_?(&
                                MethodInfo__System__TimeSpan__Subtract_MethodInfo__System__TimeSpan_
                               );
    FUN_?(this_00,uVar3);
    pcVar4 = (code *)swi(3);
    TVar1._ticks = (*pcVar4)();
    return (TimeSpan)TVar1._ticks;
  }
  return (TimeSpan)(uVar2 - TVar1._ticks);
}


/* SubscriptionData GetTouristProfileData() */

SubscriptionData *
MVWorldObject.dll::MV::WorldObject::MetaData::SubscriptionData::
SubscriptionData_GetTouristProfileData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__SubscriptionData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (SubscriptionData *)FUN_?(TypeInfo__MV__WorldObject__MetaData__SubscriptionData);
  if (pSVar1 != (SubscriptionData *)0x0) {
    (pSVar1->fields).SubscriptionType = 0;
    return pSVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (SubscriptionData *)(*pcVar2)();
  return pSVar1;
}

