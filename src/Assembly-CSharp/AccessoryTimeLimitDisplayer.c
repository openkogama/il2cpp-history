
/* Void Update() */

void Assembly-CSharp.dll::AccessoryTimeLimitDisplayer::AccessoryTimeLimitDisplayer_Update
               (AccessoryTimeLimitDisplayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryTimeLimitDisplayer);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__DAYS);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).accessoryTimeLimitData == (AccessoryTimelimit *)0x0) {
    return;
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  d1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  pAVar1 = (this->fields).accessoryTimeLimitData;
  if (pAVar1 != (AccessoryTimelimit *)0x0) {
    TVar2 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                      (d1,(DateTime)(pAVar1->fields).timeLimitStartTime._dateData,(MethodInfo *)0x0)
    ;
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?();
    }
    pAVar1 = (this->fields).accessoryTimeLimitData;
    if (pAVar1 != (AccessoryTimelimit *)0x0) {
      iVar3 = (pAVar1->fields).timeLimit;
      iVar4 = FUN_?((float)((double)TVar2._ticks * _UNK_?) * _UNK_?);
      iVar3 = iVar3 - iVar4;
      iVar4 = 0;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      iVar3 = FUN_?((float)iVar4 / _UNK_?);
      pTVar5 = (this->fields).timeLeftText;
      if (iVar3 < 0x30) {
        if (*(int *)&(TypeInfo__AccessoryTimeLimitDisplayer->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__AccessoryTimeLimitDisplayer);
        }
        pSVar6 = TypeInfo__AccessoryTimeLimitDisplayer->static_fields->format;
        aIStackX_8[0].m_value = iVar3;
        arg0 = (Object *)FUN_?(uRam_?,aIStackX_8);
        FUN_?((float)iVar4 / _UNK_?);
        aIStackX_8[0].m_value = FUN_?();
        arg1 = (Object *)FUN_?(uRam_?,aIStackX_8);
        FUN_?();
        aIStackX_8[0].m_value = FUN_?();
        arg2 = (Object *)FUN_?(uRam_?,aIStackX_8);
        PStack_7._arg0 = (Object *)0x0;
        PStack_7._arg1 = (Object *)0x0;
        PStack_7._arg2 = (Object *)0x0;
        PStack_7._args = (Object__Array *)0x0;
        mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
                  (&PStack_7,arg0,arg1,arg2,(MethodInfo *)0x0);
        PStack_8._arg0 = PStack_7._arg0;
        PStack_8._arg1 = PStack_7._arg1;
        PStack_8._arg2 = PStack_7._arg2;
        PStack_8._args = PStack_7._args;
        pSVar6 = mscorlib.dll::System::String::String_FormatHelper
                           ((IFormatProvider *)0x0,pSVar6,&PStack_8,(MethodInfo *)0x0);
      }
      else {
        iVar3 = FUN_?();
        aIStackX_8[0].m_value = iVar3 + 1;
        pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
        str1 = TM::TM__(StringLiteral__DAYS,(MethodInfo *)0x0);
        pSVar6 = mscorlib.dll::System::String::String_Concat_4(pSVar6,str1,(MethodInfo *)0x0);
      }
      if (pTVar5 != (Text *)0x0) {
        (*(pTVar5->klass->vtable).set_text.methodPtr)
                  (pTVar5,pSVar6,(pTVar5->klass->vtable).set_text.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* AccessoryTimeLimitDisplayer() */

void Assembly-CSharp.dll::AccessoryTimeLimitDisplayer::AccessoryTimeLimitDisplayer__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryTimeLimitDisplayer);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_00___1_00___2_00_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__AccessoryTimeLimitDisplayer->static_fields->format = StringLiteral__0_00___1_00___2_00_;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__AccessoryTimeLimitDisplayer->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}

