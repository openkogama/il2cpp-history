
/* Void CheckAndResolvePendingKick() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_CheckAndResolvePendingKick
               (AwayMonitor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
  if (pAVar1 != (AwayMonitor *)0x0) {
    if ((pAVar1->fields).state != 2) {
      return;
    }
    if ((pAVar1 != (AwayMonitor *)0x0) &&
       ((pAVar1->fields).idleKickTimes != (AwayMonitor_IdleKickTimes *)0x0)) {
      arg0 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      message = mscorlib.dll::System::String::String_Format
                          (StringLiteral_Kicked__Idle_for__0__min_,arg0,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,message,(MethodInfo *)0x0);
      this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)func_?();
      WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
      WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_ApplicationQuit
                ((QuitBaseCallback *)this_00,(MethodInfo *)0x0);
      pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
      if (pAVar1 != (AwayMonitor *)0x0) {
        (pAVar1->fields).state = 3;
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__AwayMonitor->static_fields->instance = (AwayMonitor *)0x0;
  return;
}


/* Void HandleIdle(Boolean) */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_HandleIdle
               (AwayMonitor *this,bool fromBackgroundUpdate,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = this;
  if ((this->fields).state == 3) {
    return;
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now
                     ((DateTime *)&stack0xffffffe8,(MethodInfo *)0x0);
  t1 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction
                 (*pDVar2,(pAVar1->fields).latestMouseMoveTime,(MethodInfo *)0x0);
  pAVar3 = (pAVar1->fields).idleKickTimes;
  if (pAVar3 != (AwayMonitor_IdleKickTimes *)0x0) {
    pAVar4 = *(AwayMonitor **)&(pAVar3->fields).warningTimeSpan._ticks;
    uVar5 = *(undefined4 *)((int)&(pAVar3->fields).warningTimeSpan._ticks + 4);
    if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
      this = (AwayMonitor *)TypeInfo__System__TimeSpan;
      func_?();
      pAVar4 = this;
    }
    this = (AwayMonitor *)0x0;
    t2_00._ticks._4_4_ = uVar5;
    t2_00._ticks._0_4_ = pAVar4;
    bVar6 = mscorlib.dll::System::TimeSpan::TimeSpan_op_LessThan(t1,t2_00,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      (pAVar1->fields).state = 0;
      return;
    }
    pAVar3 = (pAVar1->fields).idleKickTimes;
    if (pAVar3 != (AwayMonitor_IdleKickTimes *)0x0) {
      this = *(AwayMonitor **)&(pAVar3->fields).warningTimeSpan._ticks;
      uVar5 = *(undefined4 *)((int)&(pAVar3->fields).warningTimeSpan._ticks + 4);
      if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
        func_?();
      }
      t2._ticks._4_4_ = uVar5;
      t2._ticks._0_4_ = this;
      bVar6 = mscorlib.dll::System::TimeSpan::TimeSpan_op_GreaterThan(t1,t2,(MethodInfo *)0x0);
      if ((bVar6 != 0) && ((pAVar1->fields).state != 1)) {
        if (fromBackgroundUpdate == 0) {
          if ((pAVar1->fields).idleKickTimes == (AwayMonitor_IdleKickTimes *)0x0)
          goto code_?;
          this = (AwayMonitor *)&this;
          arg0 = (Object *)func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            this = (AwayMonitor *)TypeInfo__System__String;
            func_?();
          }
          this = (AwayMonitor *)0x0;
          message = (MethodInfo *)
                    mscorlib.dll::System::String::String_Format
                              (StringLiteral_Idle__You_will_be_kicked_in__0__,arg0,(MethodInfo *)0x0
                              );
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            method = (MethodInfo *)&UNK_?;
            func_?();
          }
          _fromBackgroundUpdate = (MonitorData *)0x3;
          this = (AwayMonitor *)&UNK_?;
          method = message;
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,(String *)message,(MethodInfo *)0x0);
        }
        (pAVar1->fields).state = 1;
        return;
      }
      pAVar3 = (pAVar1->fields).idleKickTimes;
      if (pAVar3 != (AwayMonitor_IdleKickTimes *)0x0) {
        pAVar4 = *(AwayMonitor **)&(pAVar3->fields).idleKickTimeSpan._ticks;
        uVar5 = *(undefined4 *)((int)&(pAVar3->fields).idleKickTimeSpan._ticks + 4);
        if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
          this = (AwayMonitor *)TypeInfo__System__TimeSpan;
          func_?();
          pAVar4 = this;
        }
        this = (AwayMonitor *)0x0;
        t2_01._ticks._4_4_ = uVar5;
        t2_01._ticks._0_4_ = pAVar4;
        bVar6 = mscorlib.dll::System::TimeSpan::TimeSpan_op_GreaterThan(t1,t2_01,(MethodInfo *)0x0);
        if (bVar6 == 0) {
          return;
        }
        if ((pAVar1->fields).state == 3) {
          return;
        }
        (pAVar1->fields).state = 2;
        return;
      }
    }
  }
code_?:
  this = (AwayMonitor *)0x0;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize(MVGameMode) */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_Initialize
               (MVGameMode__Enum mode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (AwayMonitor *)func_?(TypeInfo__AwayMonitor);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now
                     ((DateTime *)&stack0xffffffe4,(MethodInfo *)0x0);
  uVar3 = *(undefined4 *)((int)&(pDVar2->ticks)._ticks + 4);
  iVar4 = pDVar2->kind;
  uVar5 = *(undefined4 *)&pDVar2->field_0xc;
  method_00 = (MethodInfo *)&uStack_6;
  *(int *)&(pAVar1->fields).latestResetAFKTime.ticks._ticks = (int)(pDVar2->ticks)._ticks;
  *(undefined4 *)((int)&(pAVar1->fields).latestResetAFKTime.ticks._ticks + 4) = uVar3;
  (pAVar1->fields).latestResetAFKTime.kind = iVar4;
  *(undefined4 *)&(pAVar1->fields).latestResetAFKTime.field_0xc = uVar5;
  uStack_6._0_4_ = (Il2CppMethodPointer)0x0;
  uStack_6._4_4_ = (Il2CppMethodPointer)0x0;
  func_?(method_00,0,0,0,0x3b,0);
  *(Il2CppMethodPointer *)&(pAVar1->fields).awayCheckFrequency._ticks =
       (Il2CppMethodPointer)uStack_6;
  *(Il2CppMethodPointer *)((int)&(pAVar1->fields).awayCheckFrequency._ticks + 4) = uStack_6._4_4_;
  (pAVar1->fields).idleKickEnabled = 1;
  pDVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now
                     ((DateTime *)&stack0xffffffe4,(MethodInfo *)0x0);
  uVar3 = *(undefined4 *)((int)&(pDVar2->ticks)._ticks + 4);
  iVar4 = pDVar2->kind;
  uVar5 = *(undefined4 *)&pDVar2->field_0xc;
  *(int *)&(pAVar1->fields).latestMouseMoveTime.ticks._ticks = (int)(pDVar2->ticks)._ticks;
  *(undefined4 *)((int)&(pAVar1->fields).latestMouseMoveTime.ticks._ticks + 4) = uVar3;
  (pAVar1->fields).latestMouseMoveTime.kind = iVar4;
  *(undefined4 *)&(pAVar1->fields).latestMouseMoveTime.field_0xc = uVar5;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)pAVar1,0.0,method_00);
  TypeInfo__AwayMonitor->static_fields->instance = pAVar1;
  if (mode != MVGameMode__Enum_Edit) {
    if (mode == MVGameMode__Enum_Play) {
      pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
      this = (AwayMonitor_IdleKickTimes *)func_?();
      kickAfterMinutes = 0xf;
      iVar4 = 5;
      goto code_?;
    }
    if (mode != MVGameMode__Enum_CharacterEditor) {
      arg1 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      message = mscorlib.dll::System::String::String_Concat_1
                          ((Object *)StringLiteral_GameMode__,arg1,
                           (Object *)StringLiteral___is_not_accounted,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      uStack_6._4_4_ = (Il2CppMethodPointer)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)message,(MethodInfo *)0x0);
      return;
    }
  }
  pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
  this = (AwayMonitor_IdleKickTimes *)func_?();
  kickAfterMinutes = 0x1e;
  iVar4 = 0xf;
code_?:
  AwayMonitor+IdleKickTimes::AwayMonitor_IdleKickTimes__ctor
            (this,iVar4,kickAfterMinutes,(MethodInfo *)0x0);
  if (pAVar1 != (AwayMonitor *)0x0) {
    (pAVar1->fields).idleKickTimes = this;
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_Update(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
  if (pAVar1 == (AwayMonitor *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  fStack_2 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                       (StringLiteral_Mouse_ScrollWheel,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= fStack_2 &&
      fStack_2 != TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
code_?:
    if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__DateTime);
    }
    pDVar3 = mscorlib.dll::System::DateTime::DateTime_get_Now
                       ((DateTime *)&stack0xffffffe8,(MethodInfo *)0x0);
    uVar4 = *(undefined4 *)((int)&(pDVar3->ticks)._ticks + 4);
    iVar5 = pDVar3->kind;
    uVar6 = *(undefined4 *)&pDVar3->field_0xc;
    *(int *)&(pAVar1->fields).latestMouseMoveTime.ticks._ticks = (int)(pDVar3->ticks)._ticks;
    *(undefined4 *)((int)&(pAVar1->fields).latestMouseMoveTime.ticks._ticks + 4) = uVar4;
    (pAVar1->fields).latestMouseMoveTime.kind = iVar5;
    *(undefined4 *)&(pAVar1->fields).latestMouseMoveTime.field_0xc = uVar6;
  }
  else {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    fStack_2 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                         (StringLiteral_Mouse_X,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= fStack_2 &&
        fStack_2 != TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) goto code_?;
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    fStack_2 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                         (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= fStack_2 &&
        fStack_2 != TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) goto code_?;
  }
  pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
  if ((pAVar1 != (AwayMonitor *)0x0) &&
     (AwayMonitor_UpdateIdle(pAVar1,(MethodInfo *)0x0),
     TypeInfo__AwayMonitor->static_fields->instance != (AwayMonitor *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
    if (pAVar1 != (AwayMonitor *)0x0) {
      if ((pAVar1->fields).state != 2) {
        return;
      }
      if ((pAVar1 != (AwayMonitor *)0x0) &&
         (pAVar7 = (pAVar1->fields).idleKickTimes, pAVar7 != (AwayMonitor_IdleKickTimes *)0x0)) {
        fStack_2 = (float)(pAVar7->fields).idleKickTimeMinutes;
        arg0 = (Object *)func_?(TypeInfo__System__Int32,&fStack_2);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        message = mscorlib.dll::System::String::String_Format
                            (StringLiteral_Kicked__Idle_for__0__min_,arg0,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,message,(MethodInfo *)0x0);
        this = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)func_?();
        WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
        WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_ApplicationQuit
                  ((QuitBaseCallback *)this,(MethodInfo *)0x0);
        pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
        if (pAVar1 != (AwayMonitor *)0x0) {
          (pAVar1->fields).state = 3;
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateIdle() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_UpdateIdle(AwayMonitor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now
                     ((DateTime *)&stack0xffffffe8,(MethodInfo *)0x0);
  TVar2 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction
                    (*pDVar1,(this->fields).latestMouseMoveTime,(MethodInfo *)0x0);
  uVar3 = (uint)(this->fields).awayCheckFrequency._ticks;
  if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
    func_?();
  }
  t2._ticks._4_4_ = 0;
  t2._ticks._0_4_ = uVar3;
  bVar4 = mscorlib.dll::System::TimeSpan::TimeSpan_op_LessThan(TVar2,t2,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now
                       ((DateTime *)&stack0xffffffe8,(MethodInfo *)0x0);
    TVar2 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction
                      (*pDVar1,(this->fields).latestResetAFKTime,(MethodInfo *)0x0);
    uVar3 = (uint)(this->fields).awayCheckFrequency._ticks;
    if ((((uint)(TypeInfo__System__TimeSpan->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__TimeSpan->_1).cctor_started == 0)) {
      func_?();
    }
    t2_00._ticks._4_4_ = 0;
    t2_00._ticks._0_4_ = uVar3;
    bVar4 = mscorlib.dll::System::TimeSpan::TimeSpan_op_GreaterThan(TVar2,t2_00,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      args = (Object__Array *)func_?();
      if ((((uint)(TypeInfo__BrowserComm__ToJavaScript->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_started == 0)) {
        func_?();
      }
      BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
                (StringLiteral_resetAFKtimer,args,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
        func_?();
      }
      pDVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now
                         ((DateTime *)&stack0xffffffe8,(MethodInfo *)0x0);
      uVar5 = *(undefined4 *)((int)&(pDVar1->ticks)._ticks + 4);
      iVar6 = pDVar1->kind;
      uVar7 = *(undefined4 *)&pDVar1->field_0xc;
      *(int *)&(this->fields).latestResetAFKTime.ticks._ticks = (int)(pDVar1->ticks)._ticks;
      *(undefined4 *)((int)&(this->fields).latestResetAFKTime.ticks._ticks + 4) = uVar5;
      (this->fields).latestResetAFKTime.kind = iVar6;
      *(undefined4 *)&(this->fields).latestResetAFKTime.field_0xc = uVar7;
    }
  }
  if ((this->fields).idleKickEnabled != 0) {
    AwayMonitor_HandleIdle(this,0,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateIdleAction() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_UpdateIdleAction(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now(&DStack_3,(MethodInfo *)0x0);
  uVar4 = *(undefined4 *)((int)&(pDVar2->ticks)._ticks + 4);
  iVar5 = pDVar2->kind;
  uVar6 = *(undefined4 *)&pDVar2->field_0xc;
  if (pAVar1 != (AwayMonitor *)0x0) {
    *(int *)&(pAVar1->fields).latestMouseMoveTime.ticks._ticks = (int)(pDVar2->ticks)._ticks;
    *(undefined4 *)((int)&(pAVar1->fields).latestMouseMoveTime.ticks._ticks + 4) = uVar4;
    (pAVar1->fields).latestMouseMoveTime.kind = iVar5;
    *(undefined4 *)&(pAVar1->fields).latestMouseMoveTime.field_0xc = uVar6;
    return;
  }
  DStack_3.ticks._ticks._0_4_ = 0;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateMouse() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_UpdateMouse(AwayMonitor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  fVar1 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                    (StringLiteral_Mouse_ScrollWheel,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  if (fVar1 < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon ||
      fVar1 == TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    fVar1 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                      (StringLiteral_Mouse_X,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    if (fVar1 < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon ||
        fVar1 == TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      fVar1 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                        (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      if (fVar1 < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon ||
          fVar1 == TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
        return;
      }
    }
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?();
  }
  pDVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now
                     ((DateTime *)&stack0xffffffe8,(MethodInfo *)0x0);
  uVar3 = *(undefined4 *)((int)&(pDVar2->ticks)._ticks + 4);
  iVar4 = pDVar2->kind;
  uVar5 = *(undefined4 *)&pDVar2->field_0xc;
  *(int *)&(this->fields).latestMouseMoveTime.ticks._ticks = (int)(pDVar2->ticks)._ticks;
  *(undefined4 *)((int)&(this->fields).latestMouseMoveTime.ticks._ticks + 4) = uVar3;
  (this->fields).latestMouseMoveTime.kind = iVar4;
  *(undefined4 *)&(this->fields).latestMouseMoveTime.field_0xc = uVar5;
  return;
}


/* AwayMonitor() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor__ctor(AwayMonitor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now(&DStack_2,(MethodInfo *)0x0);
  uVar3 = *(undefined4 *)((int)&(pDVar1->ticks)._ticks + 4);
  iVar4 = pDVar1->kind;
  uVar5 = *(undefined4 *)&pDVar1->field_0xc;
  *(int *)&(this->fields).latestResetAFKTime.ticks._ticks = (int)(pDVar1->ticks)._ticks;
  *(undefined4 *)((int)&(this->fields).latestResetAFKTime.ticks._ticks + 4) = uVar3;
  (this->fields).latestResetAFKTime.kind = iVar4;
  *(undefined4 *)&(this->fields).latestResetAFKTime.field_0xc = uVar5;
  method_00 = (MethodInfo *)&uStack_6;
  uStack_6._0_4_ = (Il2CppMethodPointer)0x0;
  uStack_6._4_4_ = (Il2CppMethodPointer)0x0;
  func_?(method_00,0,0,0,0x3b,0);
  *(Il2CppMethodPointer *)&(this->fields).awayCheckFrequency._ticks = (Il2CppMethodPointer)uStack_6;
  *(Il2CppMethodPointer *)((int)&(this->fields).awayCheckFrequency._ticks + 4) = uStack_6._4_4_;
  (this->fields).idleKickEnabled = 1;
  pDVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now(&DStack_2,(MethodInfo *)0x0);
  uVar3 = *(undefined4 *)((int)&(pDVar1->ticks)._ticks + 4);
  iVar4 = pDVar1->kind;
  uVar5 = *(undefined4 *)&pDVar1->field_0xc;
  *(int *)&(this->fields).latestMouseMoveTime.ticks._ticks = (int)(pDVar1->ticks)._ticks;
  *(undefined4 *)((int)&(this->fields).latestMouseMoveTime.ticks._ticks + 4) = uVar3;
  (this->fields).latestMouseMoveTime.kind = iVar4;
  *(undefined4 *)&(this->fields).latestMouseMoveTime.field_0xc = uVar5;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,method_00);
  return;
}


/* Boolean get_IdleKickEnabled() */

bool Assembly-CSharp.dll::AwayMonitor::AwayMonitor_get_IdleKickEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
  if (pAVar1 != (AwayMonitor *)0x0) {
    return (pAVar1->fields).idleKickEnabled;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void set_IdleKickEnabled(Boolean) */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_set_IdleKickEnabled
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
  if (pAVar1 != (AwayMonitor *)0x0) {
    (pAVar1->fields).idleKickEnabled = value;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

