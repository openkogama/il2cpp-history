
/* Boolean GetHasTimeLeft() */

bool MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
     AccessoryTimelimit_GetHasTimeLeft(AccessoryTimelimit *this,MethodInfo *method)

{
  if ((this->fields).timeLimit != 0) {
    TStack_1 = AccessoryTimelimit_GetTimeLeft(this,(MethodInfo *)0x0);
    dVar2 = mscorlib.dll::System::TimeSpan::TimeSpan_get_TotalSeconds(&TStack_1,(MethodInfo *)0x0);
    return _UNK_? < dVar2;
  }
  return 1;
}


/* TimeSpan GetTimeLeft() */

TimeSpan MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
         AccessoryTimelimit_GetTimeLeft(AccessoryTimelimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  TStack_1._ticks = 0;
  if ((this->fields).timeLimit != 0) {
    if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__DateTime);
    }
    d1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
    t2 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                   (d1,(DateTime)(this->fields).timeLimitStartTime._dateData,(MethodInfo *)0x0);
    mscorlib.dll::System::TimeSpan::TimeSpan__ctor_3
              (&TStack_1,0,0,0,(this->fields).timeLimit,0,(MethodInfo *)0x0);
    TVar2._ticks = TStack_1._ticks;
    uStack3 = TStack_1._ticks._4_4_;
    if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TVar2 = mscorlib.dll::System::TimeSpan::TimeSpan_op_Subtraction(TVar2,t2,(MethodInfo *)0x0);
    return (TimeSpan)TVar2._ticks;
  }
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__TimeSpan);
  }
  return (TimeSpan)(TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
}


/* String ToPrettyFormat(TimeSpan) */

String * MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
         AccessoryTimelimit_ToPrettyFormat(TimeSpan span,MethodInfo *method)

{
  t1._ticks = span._ticks;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__System__TimeSpan);
    func_?(&StringLiteral__0__hour_1__);
    func_?(&StringLiteral__0__minute_1__);
    func_?(&StringLiteral__0_minutes);
    func_?(&StringLiteral__0__day_1__);
    func_?(&StringLiteral_s);
    cRam_? = '\x01';
    t1 = span;
  }
  span._ticks = t1._ticks;
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__TimeSpan);
  }
  bVar1 = mscorlib.dll::System::TimeSpan::TimeSpan_op_Equality
                    (t1,(TimeSpan)(TypeInfo__System__TimeSpan->static_fields->Zero)._ticks,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    return StringLiteral__0_minutes;
  }
  this = (StringBuilder *)func_?();
  if (this == (StringBuilder *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  iVar4 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Days(&span,(MethodInfo *)0x0);
  if (0 < iVar4) {
    span._ticks._4_4_ = (String *)&UNK_?;
    mscorlib.dll::System::TimeSpan::TimeSpan_get_Days(&span,(MethodInfo *)0x0);
    span._ticks._4_4_ = (String *)&UNK_?;
    pOVar5 = (Object *)func_?();
    iVar4 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Days(&span,(MethodInfo *)0x0);
    pSVar3 = StringLiteral_s;
    if (iVar4 < 2) {
      pSVar3 = TypeInfo__System__String->static_fields->Empty;
    }
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_1
              (this,StringLiteral__0__day_1__,pOVar5,(Object *)pSVar3,(MethodInfo *)0x0);
  }
  span._ticks._4_4_ = (String *)&UNK_?;
  iVar4 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Hours(&span,(MethodInfo *)0x0);
  if (0 < iVar4) {
    mscorlib.dll::System::TimeSpan::TimeSpan_get_Hours(&span,(MethodInfo *)0x0);
    pOVar5 = (Object *)func_?();
    iVar4 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Hours(&span,(MethodInfo *)0x0);
    pSVar3 = StringLiteral_s;
    if (iVar4 < 2) {
      pSVar3 = TypeInfo__System__String->static_fields->Empty;
    }
    span._ticks._0_4_ = (Object *)0x0;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_1
              (this,StringLiteral__0__hour_1__,pOVar5,(Object *)pSVar3,(MethodInfo *)0x0);
  }
  iVar4 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Minutes(&span,(MethodInfo *)0x0);
  if (0 < iVar4) {
    mscorlib.dll::System::TimeSpan::TimeSpan_get_Minutes(&span,(MethodInfo *)0x0);
    pOVar5 = (Object *)func_?();
    iVar4 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Minutes(&span,(MethodInfo *)0x0);
    span._ticks._4_4_ = StringLiteral_s;
    if (iVar4 < 2) {
      span._ticks._4_4_ = TypeInfo__System__String->static_fields->Empty;
    }
    span._ticks._0_4_ = pOVar5;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_1
              (this,StringLiteral__0__minute_1__,pOVar5,(Object *)span._ticks._4_4_,
               (MethodInfo *)0x0);
  }
  pSVar3 = (String *)(*(this->klass->vtable).ToString.methodPtr)();
  return pSVar3;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
         AccessoryTimelimit_ToString(AccessoryTimelimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_No_timelimit);
    cRam_? = '\x01';
  }
  if ((this->fields).timeLimit != 0) {
    span = AccessoryTimelimit_GetTimeLeft(this,(MethodInfo *)0x0);
    pSVar1 = AccessoryTimelimit_ToPrettyFormat(span,(MethodInfo *)0x0);
    return pSVar1;
  }
  return StringLiteral_No_timelimit;
}


/* Boolean get_IsTimeLimited() */

bool MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
     AccessoryTimelimit_get_IsTimeLimited(AccessoryTimelimit *this,MethodInfo *method)

{
  return (this->fields).timeLimit != 0;
}

