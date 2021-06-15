
/* Boolean GetHasTimeLeft() */

bool MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
     AccessoryTimelimit_GetHasTimeLeft(AccessoryTimelimit *this,MethodInfo *method)

{
  iStack_1 = 0;
  if ((this->fields).timeLimit != 0) {
    iStack_1 = (int64_t)AccessoryTimelimit_GetTimeLeft(this,(MethodInfo *)0x0);
    fVar2 = (float10)func_?(&iStack_1,0);
    return _UNK_? < (double)fVar2;
  }
  return 1;
}


/* TimeSpan GetTimeLeft() */

TimeSpan MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
         AccessoryTimelimit_GetTimeLeft(AccessoryTimelimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  uVar2 = 0;
  if ((this->fields).timeLimit != 0) {
    if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__DateTime);
    }
    pDVar3 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow
                       ((DateTime *)&stack0xffffffe4,(MethodInfo *)0x0);
    TVar4 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction
                      (*pDVar3,(this->fields).timeLimitStartTime,(MethodInfo *)0x0);
    func_?(&stack0xfffffff4,0,0,0,(this->fields).timeLimit,0,0);
    if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
      func_?();
    }
    t1._ticks._4_4_ = uVar2;
    t1._ticks._0_4_ = uVar1;
    TVar4 = mscorlib.dll::System::TimeSpan::TimeSpan_op_Subtraction(t1,TVar4,(MethodInfo *)0x0);
    return (TimeSpan)TVar4._ticks;
  }
  if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
    t1 = span;
  }
  span._ticks = t1._ticks;
  if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__TimeSpan);
  }
  bVar1 = mscorlib.dll::System::TimeSpan::TimeSpan_op_Equality
                    (t1,(TimeSpan)(TypeInfo__System__TimeSpan->static_fields->Zero)._ticks,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    return StringLiteral__0_minutes;
  }
  this = (StringBuilder *)func_?();
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(this,(MethodInfo *)0x0);
  iVar2 = func_?(&span);
  if (0 < iVar2) {
    span._ticks._0_4_ = 0;
    func_?();
    pOVar3 = (Object *)func_?();
    iVar2 = func_?(&span,0);
    pSVar4 = StringLiteral__0__day_1__;
    pSVar5 = StringLiteral_s;
    if (iVar2 < 2) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar5 = TypeInfo__System__String->static_fields->Empty;
    }
    if (this == (StringBuilder *)0x0) goto code_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_3
              (this,pSVar4,pOVar3,(Object *)pSVar5,(MethodInfo *)0x0);
  }
  span._ticks._0_4_ = 0;
  iVar2 = func_?();
  if (0 < iVar2) {
    span._ticks._0_4_ = 0;
    func_?();
    pOVar3 = (Object *)func_?();
    iVar2 = func_?(&span,0);
    pSVar4 = StringLiteral__0__hour_1__;
    pSVar5 = StringLiteral_s;
    if (iVar2 < 2) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar5 = TypeInfo__System__String->static_fields->Empty;
    }
    if (this == (StringBuilder *)0x0) goto code_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_3
              (this,pSVar4,pOVar3,(Object *)pSVar5,(MethodInfo *)0x0);
  }
  span._ticks._0_4_ = 0;
  iVar2 = func_?();
  if (0 < iVar2) {
    func_?(&span,0);
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
    iVar2 = func_?(&span,0);
    pSVar4 = StringLiteral__0__minute_1__;
    pSVar5 = StringLiteral_s;
    if (iVar2 < 2) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar5 = TypeInfo__System__String->static_fields->Empty;
    }
    if (this == (StringBuilder *)0x0) goto code_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_3
              (this,pSVar4,pOVar3,(Object *)pSVar5,(MethodInfo *)0x0);
  }
  if (this != (StringBuilder *)0x0) {
    pSVar4 = (String *)
             (*(code *)(this->klass->vtable).ToString.method)
                       (this,(this->klass->vtable).
                             System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    return pSVar4;
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar6)();
  return pSVar4;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
         AccessoryTimelimit_ToString(AccessoryTimelimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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

