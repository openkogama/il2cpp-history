
/* Void BackgroundUpdate() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_BackgroundUpdate(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this = TypeInfo__AwayMonitor->static_fields->instance;
  if (this != (AwayMonitor *)0x0) {
    AwayMonitor_HandleIdle(this,1,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CheckAndResolvePendingKick() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_CheckAndResolvePendingKick
               (AwayMonitor *this,MethodInfo *method)

{
  iStack_1 = in_ECX;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AwayMonitor);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__QuitIdle);
    func_?(&StringLiteral_Kicked__Idle_for__0__min_);
    cRam_? = '\x01';
  }
  pAVar2 = TypeInfo__AwayMonitor->static_fields->instance;
  if (pAVar2 != (AwayMonitor *)0x0) {
    if ((pAVar2->fields).state != 2) {
      return;
    }
    pAVar3 = (TypeInfo__AwayMonitor->static_fields->instance->fields).idleKickTimes;
    if (pAVar3 != (AwayMonitor_IdleKickTimes *)0x0) {
      iStack_1 = (pAVar3->fields).idleKickTimeMinutes;
      arg0 = (Object *)func_?(TypeInfo__System__Int32,&iStack_1);
      message = mscorlib.dll::System::String::String_Format
                          (StringLiteral_Kicked__Idle_for__0__min_,arg0,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,message,(MethodInfo *)0x0);
      this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                func_?(TypeInfo__QuitIdle);
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_ApplicationQuit
                ((QuitBaseCallback *)this_00,(MethodInfo *)0x0);
      pAVar2 = TypeInfo__AwayMonitor->static_fields->instance;
      if (pAVar2 != (AwayMonitor *)0x0) {
        (pAVar2->fields).state = 3;
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AwayMonitor);
    cRam_? = '\x01';
  }
  TypeInfo__AwayMonitor->static_fields->instance = (AwayMonitor *)0x0;
  func_?(TypeInfo__AwayMonitor->static_fields,0);
  return;
}


/* Void HandleIdle(Boolean) */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_HandleIdle
               (AwayMonitor *this,bool fromBackgroundUpdate,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__TimeSpan);
    func_?(&StringLiteral_Idle__You_will_be_kicked_in__0__);
    cRam_? = '\x01';
  }
  if ((this->fields).state == 3) {
    return;
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  d1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  t1 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                 (d1,(DateTime)(this->fields).latestMouseMoveTime._dateData,(MethodInfo *)0x0);
  pAVar1 = (this->fields).idleKickTimes;
  if (pAVar1 != (AwayMonitor_IdleKickTimes *)0x0) {
    uVar2 = (undefined4)(pAVar1->fields).warningTimeSpan._ticks;
    uVar3 = *(undefined4 *)((int)&(pAVar1->fields).warningTimeSpan._ticks + 4);
    if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    t2_00._ticks._4_4_ = uVar3;
    t2_00._ticks._0_4_ = uVar2;
    bVar4 = mscorlib.dll::System::TimeSpan::TimeSpan_op_LessThan(t1,t2_00,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      (this->fields).state = 0;
      return;
    }
    pAVar1 = (this->fields).idleKickTimes;
    if (pAVar1 != (AwayMonitor_IdleKickTimes *)0x0) {
      iVar5 = (pAVar1->fields).warningTimeSpan._ticks;
      uVar2 = *(undefined4 *)((int)&(pAVar1->fields).warningTimeSpan._ticks + 4);
      if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      t2._ticks._4_4_ = uVar2;
      t2._ticks._0_4_ = (int)iVar5;
      bVar4 = mscorlib.dll::System::TimeSpan::TimeSpan_op_GreaterThan(t1,t2,(MethodInfo *)0x0);
      if ((bVar4 != 0) && ((this->fields).state != 1)) {
        if (fromBackgroundUpdate == 0) {
          if ((this->fields).idleKickTimes == (AwayMonitor_IdleKickTimes *)0x0)
          goto code_?;
          arg0 = (Object *)func_?(TypeInfo__System__Int32);
          message = mscorlib.dll::System::String::String_Format
                              (StringLiteral_Idle__You_will_be_kicked_in__0__,arg0,(MethodInfo *)0x0
                              );
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,message,(MethodInfo *)0x0);
        }
        (this->fields).state = 1;
        return;
      }
      pAVar1 = (this->fields).idleKickTimes;
      if (pAVar1 != (AwayMonitor_IdleKickTimes *)0x0) {
        iVar5 = (pAVar1->fields).idleKickTimeSpan._ticks;
        uVar2 = *(undefined4 *)((int)&(pAVar1->fields).idleKickTimeSpan._ticks + 4);
        if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        t2_01._ticks._4_4_ = uVar2;
        t2_01._ticks._0_4_ = (int)iVar5;
        bVar4 = mscorlib.dll::System::TimeSpan::TimeSpan_op_GreaterThan(t1,t2_01,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          return;
        }
        if ((this->fields).state == 3) {
          return;
        }
        (this->fields).state = 2;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize(MVGameMode) */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_Initialize
               (MVGameMode__Enum mode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AwayMonitor);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__AwayMonitor__IdleKickTimes);
    func_?(&TypeInfo__MV__Common__MVGameMode);
    func_?(&StringLiteral_GameMode__);
    func_?(&StringLiteral___is_not_accounted);
    cRam_? = '\x01';
  }
  pAVar1 = (AwayMonitor *)func_?(TypeInfo__AwayMonitor);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  DVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  (pAVar1->fields).latestResetAFKTime._dateData = DVar2._dateData;
  uStack_3 = 0;
  mscorlib.dll::System::TimeSpan::TimeSpan__ctor_2
            ((TimeSpan *)&uStack_3,0,0,0,0x3b,(MethodInfo *)0x0);
  *(MonitorData **)&(pAVar1->fields).awayCheckFrequency._ticks = (MonitorData *)uStack_3;
  *(undefined **)((int)&(pAVar1->fields).awayCheckFrequency._ticks + 4) = uStack_3._4_4_;
  (pAVar1->fields).idleKickEnabled = 1;
  DVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  (pAVar1->fields).latestMouseMoveTime._dateData = DVar2._dateData;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)pAVar1,ExceptionArgument__Enum_obj,unaff_EDI);
  TypeInfo__AwayMonitor->static_fields->instance = pAVar1;
  func_?(TypeInfo__AwayMonitor->static_fields,pAVar1);
  if (mode != MVGameMode__Enum_Edit) {
    if (mode == MVGameMode__Enum_Play) {
      pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
      this = (AwayMonitor_IdleKickTimes *)func_?();
      mode = 0xf;
      warnAfterMinutes = 5;
      goto code_?;
    }
    if (mode != MVGameMode__Enum_CharacterEditor) {
      auStack_4 = (undefined1  [4])TypeInfo__MV__Common__MVGameMode;
      uStack_3._4_4_ = (undefined *)mode;
      uStack_3._0_4_ = (MonitorData *)0xffffffff;
      pSVar5 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)auStack_4,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_GameMode__,pSVar5,StringLiteral___is_not_accounted,
                          (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar5,(MethodInfo *)0x0);
      return;
    }
  }
  pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
  this = (AwayMonitor_IdleKickTimes *)func_?();
  mode = 0x1e;
  warnAfterMinutes = 0xf;
code_?:
  uStack_3._4_4_ = &UNK_?;
  AwayMonitor+IdleKickTimes::AwayMonitor_IdleKickTimes__ctor
            (this,warnAfterMinutes,mode,(MethodInfo *)0x0);
  if (pAVar1 != (AwayMonitor *)0x0) {
    ppAStack6 = &(pAVar1->fields).idleKickTimes;
    (pAVar1->fields).idleKickTimes = this;
    pAStack7 = this;
    func_?();
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void InternalUpdate() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_InternalUpdate(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AwayMonitor);
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    func_?(&StringLiteral_Mouse_Y);
    func_?(&StringLiteral_MoveLeft);
    func_?(&StringLiteral_Mouse_X);
    func_?(&StringLiteral_MoveRight);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AwayMonitor->static_fields;
  if (pAVar1->allAxisAvailable == 0) {
    if (pAVar1->allPlatformerButtonsAvailable == 0) {
      if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                       );
      }
      bVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
              CrossPlatformInputManager_AxisExists(StringLiteral_Mouse_X,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(
                         TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                         );
        }
        bVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
                CrossPlatformInputManager_AxisExists(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          TypeInfo__AwayMonitor->static_fields->allAxisAvailable = 1;
          goto code_?;
        }
      }
      if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                       );
      }
      bVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
              CrossPlatformInputManager_ButtonExists(StringLiteral_MoveLeft,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
                CrossPlatformInputManager_ButtonExists(StringLiteral_MoveRight,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          TypeInfo__AwayMonitor->static_fields->allPlatformerButtonsAvailable = 1;
        }
      }
    }
    else {
      pAVar3 = pAVar1->instance;
      if (pAVar3 == (AwayMonitor *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(&
                        TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                       );
        func_?(&TypeInfo__System__DateTime);
        func_?(&StringLiteral_MoveLeft);
        func_?(&StringLiteral_MoveRight);
        cRam_? = '\x01';
      }
      if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                       );
      }
      bVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
              CrossPlatformInputManager_GetButton(StringLiteral_MoveLeft,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(
                         TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                         );
        }
        bVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
                CrossPlatformInputManager_GetButton(StringLiteral_MoveRight,(MethodInfo *)0x0);
        if (bVar2 == 0) goto code_?;
      }
      if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__DateTime);
      }
      DVar4 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
      (pAVar3->fields).latestMouseMoveTime._dateData = DVar4._dateData;
    }
  }
  else {
    if (pAVar1->instance == (AwayMonitor *)0x0) goto code_?;
    AwayMonitor_UpdateMouse(pAVar1->instance,(MethodInfo *)0x0);
  }
code_?:
  pAVar3 = TypeInfo__AwayMonitor->static_fields->instance;
  if (pAVar3 != (AwayMonitor *)0x0) {
    AwayMonitor_UpdateIdle(pAVar3,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_Update(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
    if (pAVar1 == (AwayMonitor *)0x0) goto code_?;
    AwayMonitor_UpdateMouse(pAVar1,(MethodInfo *)0x0);
    pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
    if (pAVar1 == (AwayMonitor *)0x0) goto code_?;
    AwayMonitor_UpdateIdle(pAVar1,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    AwayMonitor_InternalUpdate((MethodInfo *)0x0);
  }
  pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
  if (pAVar1 != (AwayMonitor *)0x0) {
    AwayMonitor_CheckAndResolvePendingKick(pAVar1,(MethodInfo *)0x0);
    return;
  }
code_?:
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateButtons() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_UpdateButtons
               (AwayMonitor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    func_?(&TypeInfo__System__DateTime);
    func_?(&StringLiteral_MoveLeft);
    func_?(&StringLiteral_MoveRight);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  bVar1 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
          CrossPlatformInputManager_GetButton(StringLiteral_MoveLeft,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
            CrossPlatformInputManager_GetButton(StringLiteral_MoveRight,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  DVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  (this->fields).latestMouseMoveTime._dateData = DVar2._dateData;
  return;
}


/* Void UpdateIdle() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_UpdateIdle(AwayMonitor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  DVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  TVar2 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                    (DVar1,(DateTime)(this->fields).latestMouseMoveTime._dateData,(MethodInfo *)0x0)
  ;
  uVar3 = *(undefined4 *)((int)&(this->fields).awayCheckFrequency._ticks + 4);
  iVar4 = (this->fields).awayCheckFrequency._ticks;
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  t2._ticks._4_4_ = uVar3;
  t2._ticks._0_4_ = (int)iVar4;
  bVar5 = mscorlib.dll::System::TimeSpan::TimeSpan_op_LessThan(TVar2,t2,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    DVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
    TVar2 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                      (DVar1,(DateTime)(this->fields).latestResetAFKTime._dateData,(MethodInfo *)0x0
                      );
    uVar3 = *(undefined4 *)((int)&(this->fields).awayCheckFrequency._ticks + 4);
    iVar4 = (this->fields).awayCheckFrequency._ticks;
    if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    t2_00._ticks._4_4_ = uVar3;
    t2_00._ticks._0_4_ = (int)iVar4;
    bVar5 = mscorlib.dll::System::TimeSpan::TimeSpan_op_GreaterThan(TVar2,t2_00,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      DVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
      (this->fields).latestResetAFKTime._dateData = DVar1._dateData;
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
    func_?(&TypeInfo__AwayMonitor);
    func_?(&TypeInfo__System__DateTime);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  DVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  if (pAVar1 != (AwayMonitor *)0x0) {
    (pAVar1->fields).latestMouseMoveTime._dateData = DVar2._dateData;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateMobile() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_UpdateMobile(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  AwayMonitor_InternalUpdate((MethodInfo *)0x0);
  this = TypeInfo__AwayMonitor->static_fields->instance;
  if (this != (AwayMonitor *)0x0) {
    AwayMonitor_CheckAndResolvePendingKick(this,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateMouse() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_UpdateMouse(AwayMonitor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__UnityEngine__Mathf);
    func_?(&StringLiteral_Mouse_Y);
    func_?(&StringLiteral_Mouse_X);
    func_?(&StringLiteral_Mouse_ScrollWheel);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  fVar1 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                    (StringLiteral_Mouse_ScrollWheel,(MethodInfo *)0x0);
  if (fVar1 < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon ||
      fVar1 == TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    fVar1 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                      (StringLiteral_Mouse_X,(MethodInfo *)0x0);
    if (fVar1 < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon ||
        fVar1 == TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        this = (AwayMonitor *)TypeInfo__MVInputWrapper;
        func_?();
      }
      fVar1 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                        (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
      if (fVar1 < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon ||
          fVar1 == TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
        return;
      }
    }
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  DVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  (this->fields).latestMouseMoveTime._dateData = DVar2._dateData;
  return;
}


/* AwayMonitor() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor__ctor(AwayMonitor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__DateTime);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  DVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  (this->fields).latestResetAFKTime._dateData = DVar1._dateData;
  TStack_2._ticks = 0;
  mscorlib.dll::System::TimeSpan::TimeSpan__ctor_2(&TStack_2,0,0,0,0x3b,(MethodInfo *)0x0);
  *(undefined4 *)&(this->fields).awayCheckFrequency._ticks = (undefined4)TStack_2._ticks;
  *(undefined4 *)((int)&(this->fields).awayCheckFrequency._ticks + 4) = TStack_2._ticks._4_4_;
  (this->fields).idleKickEnabled = 1;
  DVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  (this->fields).latestMouseMoveTime._dateData = DVar1._dateData;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  return;
}


/* Boolean get_IdleKickEnabled() */

bool Assembly-CSharp.dll::AwayMonitor::AwayMonitor_get_IdleKickEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
  if (pAVar1 != (AwayMonitor *)0x0) {
    return (pAVar1->fields).idleKickEnabled;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void set_IdleKickEnabled(Boolean) */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_set_IdleKickEnabled
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppAStack_1 = &TypeInfo__AwayMonitor;
    func_?();
    cRam_? = '\x01';
  }
  pAVar2 = TypeInfo__AwayMonitor->static_fields->instance;
  if (pAVar2 != (AwayMonitor *)0x0) {
    (pAVar2->fields).idleKickEnabled = value;
    return;
  }
  ppAStack_1 = (AwayMonitor__Class **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

