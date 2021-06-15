
/* Boolean GetHasTimeLeft() */

bool MVWorldObject.dll::MV::WorldObject::MetaData::SubscriptionData::SubscriptionData_GetHasTimeLeft
               (SubscriptionData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow
                     ((DateTime *)&stack0xffffffe4,(MethodInfo *)0x0);
  t2 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction
                 (*pDVar1,(this->fields).SubscriptionActivateTime,(MethodInfo *)0x0);
  t1._ticks = (this->fields).SubscriptionDuration._ticks;
  if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
    func_?();
  }
  mscorlib.dll::System::TimeSpan::TimeSpan_op_Subtraction(t1,t2,(MethodInfo *)0x0);
  fVar2 = (float10)func_?();
  return _UNK_? < (double)fVar2;
}


/* TimeSpan GetTimeLeft() */

TimeSpan MVWorldObject.dll::MV::WorldObject::MetaData::SubscriptionData::
         SubscriptionData_GetTimeLeft(SubscriptionData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow
                     ((DateTime *)&stack0xffffffec,(MethodInfo *)0x0);
  TVar2 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction
                    (*pDVar1,(this->fields).SubscriptionActivateTime,(MethodInfo *)0x0);
  uVar3 = *(undefined4 *)((int)&(this->fields).SubscriptionDuration._ticks + 4);
  if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
    func_?();
  }
  this = (SubscriptionData *)((ulonglong)TVar2._ticks >> 0x20);
  t1._ticks._4_4_ = uVar3;
  t1._ticks._0_4_ = this;
  TVar2 = mscorlib.dll::System::TimeSpan::TimeSpan_op_Subtraction(t1,TVar2,(MethodInfo *)0x0);
  return (TimeSpan)TVar2._ticks;
}


/* SubscriptionData GetTouristProfileData() */

SubscriptionData *
MVWorldObject.dll::MV::WorldObject::MetaData::SubscriptionData::
SubscriptionData_GetTouristProfileData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MV__WorldObject__MetaData__SubscriptionData;
  this = (ScaleAnimationBase *)func_?();
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00)
  ;
  if (this != (ScaleAnimationBase *)0x0) {
    (this->fields)._._._._.m_CachedPtr = (void *)0x0;
    return (SubscriptionData *)this;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pSVar2 = (SubscriptionData *)(*pcVar1)();
  return pSVar2;
}

