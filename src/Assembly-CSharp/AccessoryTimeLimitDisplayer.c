
/* Void Update() */

void Assembly-CSharp.dll::AccessoryTimeLimitDisplayer::AccessoryTimeLimitDisplayer_Update
               (AccessoryTimeLimitDisplayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryTimeLimitDisplayer);
    func_?(&TypeInfo__System__DateTime);
    func_?();
    func_?(&TypeInfo__System__Single);
    func_?();
    func_?(&StringLiteral__DAYS);
    cRam_? = '\x01';
  }
  if ((this->fields).accessoryTimeLimitData == (AccessoryTimelimit *)0x0) {
    return;
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  d1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  pAVar1 = (this->fields).accessoryTimeLimitData;
  if (pAVar1 != (AccessoryTimelimit *)0x0) {
    uStack_2 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                          (d1,(DateTime)(pAVar1->fields).timeLimitStartTime._dateData,
                           (MethodInfo *)0x0);
    if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
      uStack_2._4_4_ = TypeInfo__System__TimeSpan;
      uStack_2._0_4_ = &UNK_?;
      func_?();
    }
    dVar3 = mscorlib.dll::System::TimeSpan::TimeSpan_get_TotalHours
                       ((TimeSpan *)&uStack_2,(MethodInfo *)0x0);
    pAVar1 = (this->fields).accessoryTimeLimitData;
    if (pAVar1 != (AccessoryTimelimit *)0x0) {
      fVar4 = (float)dVar3 * _UNK_?;
      iVar5 = (pAVar1->fields).timeLimit;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      cVar6 = cRam_?;
      uStack_7 = (double)fVar4;
      fVar8 = (float10)func_?(uStack_7);
      uStack_7 = (double)fVar8;
      iVar5 = iVar5 - (int)fVar8;
      iVar9 = 0;
      if (-1 < iVar5) {
        iVar9 = iVar5;
      }
      fStack_10 = (float)iVar9 / _UNK_?;
      if (cVar6 == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uStack_7 = (double)fStack_10;
      fVar8 = (float10)func_?(uStack_7);
      pTVar11 = (this->fields).timeLeftText;
      fVar4 = (float)(int)fVar8;
      uStack_7 = (double)CONCAT44(pTVar11,SUB84((double)fVar8,0));
      if ((int)fVar4 < 0x30) {
        if ((TypeInfo__AccessoryTimeLimitDisplayer->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar12 = TypeInfo__AccessoryTimeLimitDisplayer->static_fields->format;
        fStack_10 = fVar4;
        arg0 = (Object *)func_?(TypeInfo__System__Int32,&fStack_10);
        iVar5 = func_?((float)iVar9 / _UNK_?,0);
        uStack_13 = (double)iVar5;
        fVar8 = (float10)func_?();
        uStack_13 = (double)CONCAT44((float)fVar8,(undefined4)uStack_13);
        arg1 = (Object *)func_?(TypeInfo__System__Single,(int)&uStack_13 + 4);
        fVar8 = (float10)func_?();
        uStack_14 = func_?((float)fVar8);
        arg2 = (Object *)func_?(TypeInfo__System__Int32,&uStack_14);
        pSVar12 = mscorlib.dll::System::String::String_Format_2
                           (pSVar12,arg0,arg1,arg2,(MethodInfo *)0x0);
        if (uStack_7._4_4_ != (int *)0x0) {
          (**(code **)(*uStack_7._4_4_ + 0x318))
                    (uStack_7._4_4_,pSVar12,*(undefined4 *)(*uStack_7._4_4_ + 0x31c));
          return;
        }
      }
      else {
        iVar5 = func_?((float)((int)fVar4 / 0x18),0);
        IStack_15.m_value = iVar5 + 1;
        pSVar12 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_15,(MethodInfo *)0x0);
        str1 = TM::TM__(StringLiteral__DAYS,(MethodInfo *)0x0);
        pSVar12 = mscorlib.dll::System::String::String_Concat_3(pSVar12,str1,(MethodInfo *)0x0);
        if (pTVar11 != (Text *)0x0) {
          (*(code *)(pTVar11->klass->vtable).set_text.method)
                    (pTVar11,pSVar12,
                     (pTVar11->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          return;
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* AccessoryTimeLimitDisplayer() */

void Assembly-CSharp.dll::AccessoryTimeLimitDisplayer::AccessoryTimeLimitDisplayer__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryTimeLimitDisplayer);
    func_?(&StringLiteral__0_00___1_00___2_00_);
    cRam_? = '\x01';
  }
  TypeInfo__AccessoryTimeLimitDisplayer->static_fields->format = StringLiteral__0_00___1_00___2_00_;
  func_?(TypeInfo__AccessoryTimeLimitDisplayer->static_fields,
                  StringLiteral__0_00___1_00___2_00_);
  return;
}

