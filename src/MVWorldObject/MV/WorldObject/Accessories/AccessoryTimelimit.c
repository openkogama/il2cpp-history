
/* Boolean GetHasTimeLeft() */

bool MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
     AccessoryTimelimit_GetHasTimeLeft(AccessoryTimelimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).timeLimit != 0) {
    TVar1 = AccessoryTimelimit_GetTimeLeft(this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?();
    }
    return 0.0 < (double)TVar1._ticks * _UNK_?;
  }
  return 1;
}


/* TimeSpan GetTimeLeft() */

TimeSpan MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
         AccessoryTimelimit_GetTimeLeft(AccessoryTimelimit *this,MethodInfo *method)

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
  if ((this->fields).timeLimit == 0) {
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__System__TimeSpan);
    }
    return (TimeSpan)(TypeInfo__System__TimeSpan->static_fields->MaxValue)._ticks;
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  d1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  TVar1 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                    (d1,(DateTime)(this->fields).timeLimitStartTime._dateData,(MethodInfo *)0x0);
  lVar2 = (longlong)(this->fields).timeLimit;
  if (lVar2 * 1000 + 0x346dc5d638865U < 0x68db8bac710cb) {
    uVar3 = lVar2 * 10000000;
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
    if (((longlong)(uVar3 ^ TVar1._ticks) < 0) && ((longlong)(uVar3 - TVar1._ticks ^ uVar3) < 0)) {
      uVar4 = func_?(&TypeInfo__System__OverflowException);
      this_00 = (OverflowException *)func_?(uVar4);
      pSVar5 = (String *)func_?(&StringLiteral_TimeSpan_overflowed_because_the_);
      mscorlib.dll::System::OverflowException::OverflowException__ctor_1
                (this_00,pSVar5,(MethodInfo *)0x0);
      uVar4 = func_?(&
                                  MethodInfo__System__TimeSpan__Subtract_MethodInfo__System__TimeSpan_
                                 );
      FUN_?(this_00,uVar4);
      pcVar6 = (code *)swi(3);
      TVar1._ticks = (*pcVar6)();
      return (TimeSpan)TVar1._ticks;
    }
    return (TimeSpan)(uVar3 - TVar1._ticks);
  }
  uVar4 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
  this_01 = (ArgumentOutOfRangeException *)func_?(uVar4);
  pSVar5 = (String *)func_?(&StringLiteral_TimeSpan_overflowed_because_the_);
  mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
            (this_01,(String *)0x0,pSVar5,(MethodInfo *)0x0);
  uVar4 = func_?(&MethodInfo__System__TimeSpan__TimeSpan_int__int__int__int__int_);
  FUN_?(this_01,uVar4);
  pcVar6 = (code *)swi(3);
  TVar1._ticks = (*pcVar6)();
  return (TimeSpan)TVar1._ticks;
}


/* String ToPrettyFormat(TimeSpan) */

String * MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
         AccessoryTimelimit_ToPrettyFormat(TimeSpan span,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__hour_1__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__minute_1__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_minutes);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__day_1__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  if (span._ticks == (TypeInfo__System__TimeSpan->static_fields->Zero)._ticks) {
    return StringLiteral__0_minutes;
  }
  this = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  if (0 < (int)(span._ticks / 864000000000)) {
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__System__TimeSpan,span._ticks % 864000000000);
    }
    aiStackX_8[0] = (int)(span._ticks / 864000000000);
    pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_8);
    pSVar2 = StringLiteral_s;
    if ((uint)(span._ticks / 864000000000) < 2) {
      pSVar2 = (String *)**(undefined8 **)(lRam_? + 0xb8);
    }
    if (this == (StringBuilder *)0x0) goto DAT_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_1
              (this,StringLiteral__0__day_1__,pOVar1,(Object *)pSVar2,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  if (0 < (int)(span._ticks / 36000000000) + (int)((span._ticks / 36000000000) / 0x18) * -0x18) {
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__System__TimeSpan);
    }
    aiStackX_8[0] =
         (int)(span._ticks / 36000000000) + (int)((span._ticks / 36000000000) / 0x18) * -0x18;
    pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_8);
    pSVar2 = StringLiteral_s;
    if ((uint)((int)(span._ticks / 36000000000) + (int)((span._ticks / 36000000000) / 0x18) * -0x18)
        < 2) {
      pSVar2 = (String *)**(undefined8 **)(lRam_? + 0xb8);
    }
    if (this == (StringBuilder *)0x0) goto DAT_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_1
              (this,StringLiteral__0__hour_1__,pOVar1,(Object *)pSVar2,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  lVar3 = span._ticks / 600000000;
  lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar3),8) + lVar3;
  if ((int)lVar3 + ((int)(lVar4 >> 5) - (int)(lVar4 >> 0x3f)) * -0x3c < 1) {
    if (this == (StringBuilder *)0x0) goto DAT_?;
  }
  else {
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__System__TimeSpan);
    }
    lVar3 = span._ticks / 600000000;
    lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar3),8) + lVar3;
    aiStackX_8[0] = (int)lVar3 + ((int)(lVar4 >> 5) - (int)(lVar4 >> 0x3f)) * -0x3c;
    pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_8);
    lVar3 = span._ticks / 600000000;
    lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar3),8) + lVar3;
    pSVar2 = StringLiteral_s;
    if ((uint)((int)lVar3 + ((int)(lVar4 >> 5) - (int)(lVar4 >> 0x3f)) * -0x3c) < 2) {
      pSVar2 = (String *)**(undefined8 **)(lRam_? + 0xb8);
    }
    if (this == (StringBuilder *)0x0) {
DAT_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar5)();
      return pSVar2;
    }
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_1
              (this,StringLiteral__0__minute_1__,pOVar1,(Object *)pSVar2,(MethodInfo *)0x0);
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar2 = (String *)
           (*(this->klass->vtable).ToString.methodPtr)(this,(this->klass->vtable).ToString.method);
  return pSVar2;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
         AccessoryTimelimit_ToString(AccessoryTimelimit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_No_timelimit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).timeLimit == 0) {
    return StringLiteral_No_timelimit;
  }
  TVar1 = AccessoryTimelimit_GetTimeLeft(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__hour_1__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__minute_1__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_minutes);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__day_1__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  if (TVar1._ticks == (TypeInfo__System__TimeSpan->static_fields->Zero)._ticks) {
    return StringLiteral__0_minutes;
  }
  this_00 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
  mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_00,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  if (0 < (int)(TVar1._ticks / 864000000000)) {
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__System__TimeSpan,TVar1._ticks % 864000000000);
    }
    aiStackX_8[0] = (int)(TVar1._ticks / 864000000000);
    pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_8);
    pSVar3 = StringLiteral_s;
    if ((uint)(TVar1._ticks / 864000000000) < 2) {
      pSVar3 = (String *)**(undefined8 **)(lRam_? + 0xb8);
    }
    if (this_00 == (StringBuilder *)0x0) goto DAT_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_1
              (this_00,StringLiteral__0__day_1__,pOVar2,(Object *)pSVar3,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  if (0 < (int)(TVar1._ticks / 36000000000) + (int)((TVar1._ticks / 36000000000) / 0x18) * -0x18) {
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__System__TimeSpan);
    }
    aiStackX_8[0] =
         (int)(TVar1._ticks / 36000000000) + (int)((TVar1._ticks / 36000000000) / 0x18) * -0x18;
    pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_8);
    pSVar3 = StringLiteral_s;
    if ((uint)((int)(TVar1._ticks / 36000000000) +
              (int)((TVar1._ticks / 36000000000) / 0x18) * -0x18) < 2) {
      pSVar3 = (String *)**(undefined8 **)(lRam_? + 0xb8);
    }
    if (this_00 == (StringBuilder *)0x0) goto DAT_?;
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_1
              (this_00,StringLiteral__0__hour_1__,pOVar2,(Object *)pSVar3,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__TimeSpan);
  }
  lVar4 = TVar1._ticks / 600000000;
  lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar4),8) + lVar4;
  if ((int)lVar4 + ((int)(lVar5 >> 5) - (int)(lVar5 >> 0x3f)) * -0x3c < 1) {
    if (this_00 == (StringBuilder *)0x0) goto DAT_?;
  }
  else {
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__System__TimeSpan);
    }
    lVar4 = TVar1._ticks / 600000000;
    lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar4),8) + lVar4;
    aiStackX_8[0] = (int)lVar4 + ((int)(lVar5 >> 5) - (int)(lVar5 >> 0x3f)) * -0x3c;
    pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_8);
    lVar4 = TVar1._ticks / 600000000;
    lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar4),8) + lVar4;
    pSVar3 = StringLiteral_s;
    if ((uint)((int)lVar4 + ((int)(lVar5 >> 5) - (int)(lVar5 >> 0x3f)) * -0x3c) < 2) {
      pSVar3 = (String *)**(undefined8 **)(lRam_? + 0xb8);
    }
    if (this_00 == (StringBuilder *)0x0) {
DAT_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar6)();
      return pSVar3;
    }
    mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormat_1
              (this_00,StringLiteral__0__minute_1__,pOVar2,(Object *)pSVar3,(MethodInfo *)0x0);
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar3 = (String *)
           (*(this_00->klass->vtable).ToString.methodPtr)
                     (this_00,(this_00->klass->vtable).ToString.method);
  return pSVar3;
}


/* Boolean get_IsTimeLimited() */

bool MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryTimelimit::
     AccessoryTimelimit_get_IsTimeLimited(AccessoryTimelimit *this,MethodInfo *method)

{
  return (this->fields).timeLimit != 0;
}

