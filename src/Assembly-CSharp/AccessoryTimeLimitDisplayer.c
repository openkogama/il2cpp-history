
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
    uStack_3 = mscorlib.dll::System::TimeSpan::TimeSpan_get_TotalHours
                          ((TimeSpan *)&uStack_2,(MethodInfo *)0x0);
    pAVar1 = (this->fields).accessoryTimeLimitData;
    if (pAVar1 != (AccessoryTimelimit *)0x0) {
      iVar4 = (pAVar1->fields).timeLimit;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      fVar5 = (float)uStack_3 * _UNK_?;
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      cVar6 = cRam_?;
      uStack_3 = (double)fVar5;
      fVar7 = (float10)func_?(uStack_3);
      uStack_3 = (double)fVar7;
      iVar4 = iVar4 - (int)fVar7;
      iVar8 = 0;
      if (-1 < iVar4) {
        iVar8 = iVar4;
      }
      fStack_9 = (float)iVar8 / _UNK_?;
      if (cVar6 == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uStack_3 = (double)fStack_9;
      fVar7 = (float10)func_?(uStack_3);
      pTVar10 = (this->fields).timeLeftText;
      fVar5 = (float)(int)fVar7;
      uStack_3 = (double)CONCAT44(pTVar10,SUB84((double)fVar7,0));
      if ((int)fVar5 < 0x30) {
        if ((TypeInfo__AccessoryTimeLimitDisplayer->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar11 = TypeInfo__AccessoryTimeLimitDisplayer->static_fields->format;
        fStack_9 = fVar5;
        arg0 = (Object *)func_?(TypeInfo__System__Int32,&fStack_9);
        iVar4 = func_?((float)iVar8 / _UNK_?,0);
        uStack_12 = (double)iVar4;
        fVar7 = (float10)func_?();
        uStack_12 = (double)CONCAT44((float)fVar7,(undefined4)uStack_12);
        arg1 = (Object *)func_?(TypeInfo__System__Single,(int)&uStack_12 + 4);
        fVar7 = (float10)func_?();
        uStack_13 = func_?((float)fVar7);
        arg2 = (Object *)func_?(TypeInfo__System__Int32,&uStack_13);
        pSVar11 = mscorlib.dll::System::String::String_Format_2
                           (pSVar11,arg0,arg1,arg2,(MethodInfo *)0x0);
        if (uStack_3._4_4_ != (int *)0x0) {
          (**(code **)(*uStack_3._4_4_ + 0x318))
                    (uStack_3._4_4_,pSVar11,*(undefined4 *)(*uStack_3._4_4_ + 0x31c));
          return;
        }
      }
      else {
        iVar4 = func_?((float)((int)fVar5 / 0x18),0);
        IStack_14.m_value = iVar4 + 1;
        pSVar11 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_14,(MethodInfo *)0x0);
        str1 = TM::TM__(StringLiteral__DAYS,(MethodInfo *)0x0);
        pSVar11 = mscorlib.dll::System::String::String_Concat_3(pSVar11,str1,(MethodInfo *)0x0);
        if (pTVar10 != (Text *)0x0) {
          (*(code *)(pTVar10->klass->vtable).set_text.method)
                    (pTVar10,pSVar11,
                     (pTVar10->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          return;
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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

