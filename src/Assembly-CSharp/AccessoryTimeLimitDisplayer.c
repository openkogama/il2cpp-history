
/* Void Update() */

void Assembly-CSharp.dll::AccessoryTimeLimitDisplayer::AccessoryTimeLimitDisplayer_Update(AccessoryTimeLimitDisplayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryTimeLimitDisplayer);
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?();
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
    TVar2 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1(d1,(DateTime)(pAVar1->fields).timeLimitStartTime._dateData,(MethodInfo *)0x0);
    puStack_3 = (undefined4 *)TVar2._ticks;
    uStack_4 = (double)CONCAT44(uStack_4._4_4_,(int)((ulonglong)TVar2._ticks >> 0x20));
    dVar5 = mscorlib.dll::System::TimeSpan::TimeSpan_get_TotalHours((TimeSpan *)&puStack_3,(MethodInfo *)0x0);
    pAVar1 = (this->fields).accessoryTimeLimitData;
    if (pAVar1 != (AccessoryTimelimit *)0x0) {
      iVar6 = (pAVar1->fields).timeLimit;
      dStack_7 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),unaff_EBX);
      if (cRam_? == '\0') {
        uStack_4 = 3.990364252937954e-227;
        func_?();
        cRam_? = '\x01';
        dVar5 = dStack_7;
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        uStack_4 = (double)CONCAT44(TypeInfo__System__Math,&UNK_?);
        func_?();
      }
      cVar8 = cRam_?;
      uStack_4 = (double)((float)dVar5 * 3600.0);
      fVar9 = (float10)func_?();
      iVar6 = iVar6 - (int)fVar9;
      iVar10 = 0;
      if (-1 < iVar6) {
        iVar10 = iVar6;
      }
      fStack_11 = (float)iVar10 / 3600.0;
      if (cVar8 == '\0') {
        uStack_4 = 3.9903642529380216e-227;
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        uStack_4 = (double)CONCAT44(TypeInfo__System__Math,&UNK_?);
        func_?();
      }
      uStack_4 = (double)fStack_11;
      fVar9 = (float10)func_?();
      pTVar12 = (this->fields).timeLeftText;
      fVar13 = (float)(int)fVar9;
      if ((int)fVar13 < 0x30) {
        if ((TypeInfo__AccessoryTimeLimitDisplayer->_1).cctor_finished_or_no_cctor == 0) {
          uStack_4 = (double)CONCAT44(TypeInfo__AccessoryTimeLimitDisplayer,&UNK_?);
          func_?();
        }
        pSVar14 = TypeInfo__AccessoryTimeLimitDisplayer->static_fields->format;
        uStack_4 = (double)CONCAT44(&fStack_11,TypeInfo__System__Int32);
        fStack_11 = fVar13;
        arg0 = (Object *)func_?();
        uStack_4 = (double)(ulonglong)(uint)((float)iVar10 / 60.0);
        iVar6 = func_?();
        uStack_15 = (double)iVar6;
        uStack_4 = (double)CONCAT44(&UNK_?,(undefined *)uStack_4);
        fVar9 = (float10)func_?();
        uStack_4 = (double)CONCAT44((int)&uStack_15 + 4,TypeInfo__System__Single);
        uStack_15 = (double)CONCAT44((float)fVar9,(undefined4)uStack_15);
        arg1 = (Object *)func_?();
        uStack_4._4_4_ = 0;
        uStack_4._0_4_ = &UNK_?;
        fVar9 = (float10)func_?();
        uStack_4 = (double)CONCAT44(uStack_4._4_4_,(float)fVar9);
        uStack_16 = func_?();
        puStack_3 = &uStack_16;
        arg2 = (Object *)func_?();
        pSVar14 = mscorlib.dll::System::String::String_Format_2(pSVar14,arg0,arg1,arg2,(MethodInfo *)0x0);
        if (pTVar12 != (Text *)0x0) {
          (*(pTVar12->klass->vtable).set_text.methodPtr)(pTVar12,pSVar14,(pTVar12->klass->vtable).set_text.method);
          return;
        }
      }
      else {
        uStack_4 = (double)(ulonglong)(uint)(float)((int)fVar13 / 0x18);
        iVar6 = func_?();
        uStack_4 = (double)CONCAT44(iVar6 + 1,(undefined *)uStack_4);
        pSVar14 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)((int)&uStack_4 + 4),(MethodInfo *)0x0);
        str1 = TM::TM__(StringLiteral__DAYS,(MethodInfo *)0x0);
        pSVar14 = mscorlib.dll::System::String::String_Concat_3(pSVar14,str1,(MethodInfo *)0x0);
        if (pTVar12 != (Text *)0x0) {
          (*(pTVar12->klass->vtable).set_text.methodPtr)(pTVar12,pSVar14,(pTVar12->klass->vtable).set_text.method);
          return;
        }
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* AccessoryTimeLimitDisplayer() */

void Assembly-CSharp.dll::AccessoryTimeLimitDisplayer::AccessoryTimeLimitDisplayer__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AccessoryTimeLimitDisplayer);
    func_?(&StringLiteral__0_00___1_00___2_00_);
    cRam_? = '\x01';
  }
  TypeInfo__AccessoryTimeLimitDisplayer->static_fields->format = StringLiteral__0_00___1_00___2_00_;
  func_?(TypeInfo__AccessoryTimeLimitDisplayer->static_fields,StringLiteral__0_00___1_00___2_00_);
  return;
}

