
/* Boolean GetHasTimeLeft() */

bool MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
     AccessoryTimelimit_GetHasTimeLeft(AccessoryTimelimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if ((this->fields).timeLimit != 0) {
    AccessoryTimelimit_GetTimeLeft(this,(MethodInfo *)0x0);
    if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    dVar1 = mscorlib.dll::System::TimeSpan::TimeSpan_get_TotalSeconds
                      ((TimeSpan *)&stack0xfffffff4,(MethodInfo *)0x0);
    return _UNK_? < dVar1;
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
  if ((this->fields).timeLimit != 0) {
    if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__DateTime);
    }
    d1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
    TVar1 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                      (d1,(DateTime)(this->fields).timeLimitStartTime._dateData,(MethodInfo *)0x0);
    TStack_2._ticks = 0;
    mscorlib.dll::System::TimeSpan::TimeSpan__ctor_3
              (&TStack_2,0,0,0,(this->fields).timeLimit,0,(MethodInfo *)0x0);
    if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    uStack3 = TStack_2._ticks._4_4_;
    TVar1 = mscorlib.dll::System::TimeSpan::TimeSpan_op_Subtraction
                      (TStack_2,TVar1,(MethodInfo *)0x0);
    return (TimeSpan)TVar1._ticks;
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
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    span._ticks._4_4_ = TypeInfo__System__TimeSpan;
    span._ticks._0_4_ = (TimeSpan *)&UNK_?;
    func_?();
  }
  span._ticks._0_4_ = &span;
  span._ticks._4_4_ = (TimeSpan__Class *)0x0;
  iVar2 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Days
                    ((TimeSpan *)span._ticks,(MethodInfo *)0x0);
  if (0 < iVar2) {
    if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    span._ticks._4_4_ = (TimeSpan__Class *)&UNK_?;
    mscorlib.dll::System::TimeSpan::TimeSpan_get_Days(&span,(MethodInfo *)0x0);
    span._ticks._4_4_ = (TimeSpan__Class *)&UNK_?;
    pOVar3 = (Object *)func_?();
    span._ticks._0_4_ = &span;
    span._ticks._4_4_ = (TimeSpan__Class *)0x0;
    iVar2 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Days
                      ((TimeSpan *)span._ticks,(MethodInfo *)0x0);
    pSVar4 = StringLiteral_s;
    if (iVar2 < 2) {
      pSVar4 = TypeInfo__System__String->static_fields->Empty;
    }
    if (this == (StringBuilder *)0x0) goto code_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_1
              (this,StringLiteral__0__day_1__,pOVar3,(Object *)pSVar4,(MethodInfo *)0x0);
  }
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  span._ticks._4_4_ = (TimeSpan__Class *)&UNK_?;
  iVar2 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Hours(&span,(MethodInfo *)0x0);
  if (0 < iVar2) {
    if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    mscorlib.dll::System::TimeSpan::TimeSpan_get_Hours(&span,(MethodInfo *)0x0);
    pOVar3 = (Object *)func_?();
    span._ticks._0_4_ = &span;
    span._ticks._4_4_ = (TimeSpan__Class *)0x0;
    iVar2 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Hours
                      ((TimeSpan *)span._ticks,(MethodInfo *)0x0);
    pSVar4 = StringLiteral_s;
    if (iVar2 < 2) {
      pSVar4 = TypeInfo__System__String->static_fields->Empty;
    }
    if (this == (StringBuilder *)0x0) goto code_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_1
              (this,StringLiteral__0__hour_1__,pOVar3,(Object *)pSVar4,(MethodInfo *)0x0);
  }
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  iVar2 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Minutes(&span,(MethodInfo *)0x0);
  if (iVar2 < 1) {
    if (this == (StringBuilder *)0x0) goto code_?;
  }
  else {
    if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    mscorlib.dll::System::TimeSpan::TimeSpan_get_Minutes(&span,(MethodInfo *)0x0);
    pOVar3 = (Object *)func_?();
    span._ticks._0_4_ = &span;
    span._ticks._4_4_ = (TimeSpan__Class *)0x0;
    iVar2 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Minutes
                      ((TimeSpan *)span._ticks,(MethodInfo *)0x0);
    pSVar4 = StringLiteral_s;
    if (iVar2 < 2) {
      pSVar4 = TypeInfo__System__String->static_fields->Empty;
    }
    if (this == (StringBuilder *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar5)();
      return pSVar4;
    }
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_1
              (this,StringLiteral__0__minute_1__,pOVar3,(Object *)pSVar4,(MethodInfo *)0x0);
  }
  pSVar4 = (String *)(*(code *)(this->klass->vtable).ToString.method)();
  return pSVar4;
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

