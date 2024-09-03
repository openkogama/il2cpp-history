
/* Boolean GetHasTimeLeft() */

bool MVWorldObject.dll::MV::WorldObject::MetaData::SubscriptionData::SubscriptionData_GetHasTimeLeft
               (SubscriptionData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  d1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  t2 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                 (d1,(DateTime)(this->fields).SubscriptionActivateTime._dateData,(MethodInfo *)0x0);
  t1._ticks = (this->fields).SubscriptionDuration._ticks;
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  mscorlib.dll::System::TimeSpan::TimeSpan_op_Subtraction(t1,t2,(MethodInfo *)0x0);
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  dVar1 = mscorlib.dll::System::TimeSpan::TimeSpan_get_TotalSeconds
                    ((TimeSpan *)&stack0xfffffff4,(MethodInfo *)0x0);
  return _UNK_? < dVar1;
}


/* TimeSpan GetTimeLeft() */

TimeSpan MVWorldObject.dll::MV::WorldObject::MetaData::SubscriptionData::
         SubscriptionData_GetTimeLeft(SubscriptionData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  d1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  TVar1 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                    (d1,(DateTime)(this->fields).SubscriptionActivateTime._dateData,
                     (MethodInfo *)0x0);
  pTVar2 = TypeInfo__System__TimeSpan;
  uVar3 = *(undefined4 *)((int)&(this->fields).SubscriptionDuration._ticks + 4);
  pTVar4 = *(TimeSpan__Class **)&(this->fields).SubscriptionDuration._ticks;
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
    pTVar4 = pTVar2;
  }
  t1._ticks._4_4_ = uVar3;
  t1._ticks._0_4_ = pTVar4;
  TVar1 = mscorlib.dll::System::TimeSpan::TimeSpan_op_Subtraction(t1,TVar1,(MethodInfo *)0x0);
  return (TimeSpan)TVar1._ticks;
}


/* SubscriptionData GetTouristProfileData() */

SubscriptionData *
MVWorldObject.dll::MV::WorldObject::MetaData::SubscriptionData::
SubscriptionData_GetTouristProfileData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__MetaData__SubscriptionData);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MV__WorldObject__MetaData__SubscriptionData;
  pSVar1 = (SubscriptionData *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pSVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (pSVar1 != (SubscriptionData *)0x0) {
    (pSVar1->fields).SubscriptionType = 0;
    return pSVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (SubscriptionData *)(*pcVar2)();
  return pSVar1;
}

