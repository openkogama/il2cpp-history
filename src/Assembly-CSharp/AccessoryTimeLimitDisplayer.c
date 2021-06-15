
/* Void Update() */

void Assembly-CSharp.dll::AccessoryTimeLimitDisplayer::AccessoryTimeLimitDisplayer_Update
               (AccessoryTimeLimitDisplayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).accessoryTimeLimitData == (AccessoryTimelimit *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow
                     ((DateTime *)&stack0xffffffd4,(MethodInfo *)0x0);
  pAVar2 = (this->fields).accessoryTimeLimitData;
  if (pAVar2 != (AccessoryTimelimit *)0x0) {
    mscorlib.dll::System::DateTime::DateTime_op_Subtraction
              (*pDVar1,(pAVar2->fields).timeLimitStartTime,(MethodInfo *)0x0);
    fVar3 = (float10)func_?(&stack0xffffffcc,0);
    pAVar2 = (this->fields).accessoryTimeLimitData;
    if (pAVar2 != (AccessoryTimelimit *)0x0) {
      iVar4 = (pAVar2->fields).timeLimit;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                        ((float)fVar3 * _UNK_?,(MethodInfo *)0x0);
      iVar4 = iVar4 - iVar5;
      iVar6 = 0;
      if (-1 < iVar4) {
        iVar6 = iVar4;
      }
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                        ((float)iVar6 / _UNK_?,(MethodInfo *)0x0);
      pTVar7 = (this->fields).timeLeftText;
      if (iVar5 < 0x30) {
        if ((((uint)(TypeInfo__AccessoryTimeLimitDisplayer->vtable).Equals.methodPtr & 0x2000000) !=
             0) && ((TypeInfo__AccessoryTimeLimitDisplayer->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar8 = TypeInfo__AccessoryTimeLimitDisplayer->static_fields->format;
        pOVar9 = (Object *)func_?();
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                  ((float)iVar6 / _UNK_?,(MethodInfo *)0x0);
        func_?();
        arg1 = (Object *)func_?();
        fVar3 = (float10)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                  ((float)fVar3,(MethodInfo *)0x0);
        arg2 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar8 = mscorlib.dll::System::String::String_Format_2
                           (pSVar8,pOVar9,arg1,arg2,(MethodInfo *)0x0);
      }
      else {
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                  ((float)(iVar5 / 0x18),(MethodInfo *)0x0);
        pOVar9 = (Object *)func_?();
        pSVar8 = TM::TM__(StringLiteral__DAYS,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar8 = mscorlib.dll::System::String::String_Concat
                           (pOVar9,(Object *)pSVar8,(MethodInfo *)0x0);
      }
      if (pTVar7 != (Text *)0x0) {
        (*(code *)(pTVar7->klass->vtable).set_text.method)
                  (pTVar7,pSVar8,(pTVar7->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        return;
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* AccessoryTimeLimitDisplayer() */

void Assembly-CSharp.dll::AccessoryTimeLimitDisplayer::AccessoryTimeLimitDisplayer__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__AccessoryTimeLimitDisplayer->static_fields->format = StringLiteral__0_00___1_00___2_00_;
  return;
}

