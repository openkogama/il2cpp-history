
/* Void BackgroundUpdate() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_BackgroundUpdate(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AwayMonitor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
  if (pAVar1 == (AwayMonitor *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle__You_will_be_kicked_in__0__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pAVar1->fields).state != 3) {
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    d1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
    TVar3 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                      (d1,(DateTime)(pAVar1->fields).latestMouseMoveTime._dateData,(MethodInfo *)0x0
                      );
    pAVar4 = (pAVar1->fields).idleKickTimes;
    if (pAVar4 == (AwayMonitor_IdleKickTimes *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar5 = (pAVar4->fields).warningTimeSpan._ticks;
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (TVar3._ticks < lVar5) {
      (pAVar1->fields).state = 0;
    }
    else {
      pAVar4 = (pAVar1->fields).idleKickTimes;
      if (pAVar4 == (AwayMonitor_IdleKickTimes *)0x0) goto code_?;
      lVar5 = (pAVar4->fields).warningTimeSpan._ticks;
      if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((lVar5 < TVar3._ticks) && ((pAVar1->fields).state != 1)) {
        (pAVar1->fields).state = 1;
      }
      else {
        pAVar4 = (pAVar1->fields).idleKickTimes;
        if (pAVar4 == (AwayMonitor_IdleKickTimes *)0x0) goto code_?;
        lVar5 = (pAVar4->fields).idleKickTimeSpan._ticks;
        if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((lVar5 < TVar3._ticks) && ((pAVar1->fields).state != 3)) {
          (pAVar1->fields).state = 2;
        }
      }
    }
  }
  return;
}


/* Void CheckAndResolvePendingKick() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_CheckAndResolvePendingKick
               (AwayMonitor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AwayMonitor);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__QuitIdle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Kicked__Idle_for__0__min_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
  if (pAVar1 != (AwayMonitor *)0x0) {
    if ((pAVar1->fields).state != 2) {
      return;
    }
    pAVar2 = (pAVar1->fields).idleKickTimes;
    if (pAVar2 != (AwayMonitor_IdleKickTimes *)0x0) {
      aiStackX_18[0] = (pAVar2->fields).idleKickTimeMinutes;
      arg0 = (Object *)FUN_?(uRam_?,aiStackX_18);
      pSVar3 = StringLiteral_Kicked__Idle_for__0__min_;
      PStack_4._arg0 = (Object *)0x0;
      PStack_4._arg1 = (Object *)0x0;
      PStack_4._arg2 = (Object *)0x0;
      PStack_4._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_4,arg0,(MethodInfo *)0x0);
      PStack_5._arg0 = PStack_4._arg0;
      PStack_5._arg1 = PStack_4._arg1;
      PStack_5._arg2 = PStack_4._arg2;
      PStack_5._args = PStack_4._args;
      pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar3,&PStack_5,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
      applicationQuitObject = (QuitBaseCallback *)FUN_?(TypeInfo__QuitIdle);
      MVGameControllerBase::MVGameControllerBase_ApplicationQuit
                (applicationQuitObject,(MethodInfo *)0x0);
      pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
      if (pAVar1 != (AwayMonitor *)0x0) {
        (pAVar1->fields).state = 3;
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AwayMonitor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__AwayMonitor->static_fields->instance = (AwayMonitor *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__AwayMonitor->static_fields >> 0xc);
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


/* Void HandleIdle(Boolean) */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_HandleIdle
               (AwayMonitor *this,bool fromBackgroundUpdate,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle__You_will_be_kicked_in__0__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).state != 3) {
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    d1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
    TVar1 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                      (d1,(DateTime)(this->fields).latestMouseMoveTime._dateData,(MethodInfo *)0x0);
    pAVar2 = (this->fields).idleKickTimes;
    if (pAVar2 == (AwayMonitor_IdleKickTimes *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar4 = (pAVar2->fields).warningTimeSpan._ticks;
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (TVar1._ticks < lVar4) {
      (this->fields).state = 0;
    }
    else {
      pAVar2 = (this->fields).idleKickTimes;
      if (pAVar2 == (AwayMonitor_IdleKickTimes *)0x0) goto code_?;
      lVar4 = (pAVar2->fields).warningTimeSpan._ticks;
      if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((lVar4 < TVar1._ticks) && ((this->fields).state != 1)) {
        if (fromBackgroundUpdate == 0) {
          pAVar2 = (this->fields).idleKickTimes;
          if (pAVar2 == (AwayMonitor_IdleKickTimes *)0x0) goto code_?;
          aiStackX_8[0] = (pAVar2->fields).idleKickTimeMinutes - (pAVar2->fields).warningTimeMinutes
          ;
          arg0 = (Object *)FUN_?(uRam_?,aiStackX_8);
          message = mscorlib.dll::System::String::String_Format
                              (StringLiteral_Idle__You_will_be_kicked_in__0__,arg0,(MethodInfo *)0x0
                              );
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,message,(MethodInfo *)0x0);
        }
        (this->fields).state = 1;
      }
      else {
        pAVar2 = (this->fields).idleKickTimes;
        if (pAVar2 == (AwayMonitor_IdleKickTimes *)0x0) goto code_?;
        lVar4 = (pAVar2->fields).idleKickTimeSpan._ticks;
        if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((lVar4 < TVar1._ticks) && ((this->fields).state != 3)) {
          (this->fields).state = 2;
        }
      }
    }
  }
  return;
}


/* Void Initialize(MVGameMode) */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_Initialize
               (MVGameMode__Enum mode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AwayMonitor);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AwayMonitor__IdleKickTimes);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__MVGameMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GameMode__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___is_not_accounted);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (AwayMonitor *)FUN_?(TypeInfo__AwayMonitor);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  DVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  bVar3 = cRam_? == '\0';
  (pAVar1->fields).latestResetAFKTime._dateData = DVar2._dateData;
  if (bVar3) {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  (pAVar1->fields).awayCheckFrequency._ticks = 590000000;
  (pAVar1->fields).idleKickEnabled = 1;
  DVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  (pAVar1->fields).latestMouseMoveTime._dateData = DVar2._dateData;
  TypeInfo__AwayMonitor->static_fields->instance = pAVar1;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)TypeInfo__AwayMonitor->static_fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  if (mode != MVGameMode__Enum_Edit) {
    if (mode == MVGameMode__Enum_Play) {
code_?:
      pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
      pAVar8 = (AwayMonitor_IdleKickTimes *)FUN_?(TypeInfo__AwayMonitor__IdleKickTimes);
      AwayMonitor+IdleKickTimes::AwayMonitor_IdleKickTimes__ctor(pAVar8,5,0xf,(MethodInfo *)0x0);
      if (pAVar1 != (AwayMonitor *)0x0) {
        bVar3 = iRam_? == 0;
        (pAVar1->fields).idleKickTimes = pAVar8;
        if (bVar3) {
          return;
        }
        uVar4 = (uint)((ulonglong)&(pAVar1->fields).idleKickTimes >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
        return;
      }
      goto code_?;
    }
    if (mode != MVGameMode__Enum_CharacterEditor) {
      if (mode == MVGameMode__Enum_SpacePlay) goto code_?;
      if (mode != MVGameMode__Enum_SpaceEdit) {
        EStack_9.klass = (Enum__Class *)TypeInfo__MV__Common__MVGameMode;
        EStack_9.monitor = (MonitorData *)0xffffffffffffffff;
        MStack_10 = mode;
        pSVar11 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_9,(MethodInfo *)0x0);
        pSVar11 = mscorlib.dll::System::String::String_Concat_5
                           (StringLiteral_GameMode__,pSVar11,StringLiteral___is_not_accounted,
                            (MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar11,(MethodInfo *)0x0);
        return;
      }
    }
  }
  pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
  pAVar8 = (AwayMonitor_IdleKickTimes *)FUN_?(TypeInfo__AwayMonitor__IdleKickTimes);
  AwayMonitor+IdleKickTimes::AwayMonitor_IdleKickTimes__ctor(pAVar8,0xf,0x1e,(MethodInfo *)0x0);
  if (pAVar1 != (AwayMonitor *)0x0) {
    bVar3 = iRam_? == 0;
    (pAVar1->fields).idleKickTimes = pAVar8;
    if (bVar3) {
      return;
    }
    uVar4 = (uint)((ulonglong)&(pAVar1->fields).idleKickTimes >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
    return;
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void InternalUpdate() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_InternalUpdate(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AwayMonitor);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_Y);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MoveLeft);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_X);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MoveRight);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AwayMonitor->static_fields;
  if (pAVar1->allAxisAvailable == 0) {
    if (pAVar1->allPlatformerButtonsAvailable == 0) {
      if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1
                   ).field_0x1c == 0) {
        FUN_?();
      }
      bVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
              CrossPlatformInputManager_AxisExists(StringLiteral_Mouse_X,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                     _1).field_0x1c == 0) {
          FUN_?();
        }
        bVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
                CrossPlatformInputManager_AxisExists(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          TypeInfo__AwayMonitor->static_fields->allAxisAvailable = 1;
          goto code_?;
        }
      }
      if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1
                   ).field_0x1c == 0) {
        FUN_?();
      }
      bVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
              CrossPlatformInputManager_ButtonExists(StringLiteral_MoveLeft,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                     _1).field_0x1c == 0) {
          FUN_?();
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
        FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager)
        ;
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__DateTime);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_MoveLeft);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_MoveRight);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1
                   ).field_0x1c == 0) {
        FUN_?();
      }
      bVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
              CrossPlatformInputManager_GetButton(StringLiteral_MoveLeft,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                     _1).field_0x1c == 0) {
          FUN_?();
        }
        bVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
                CrossPlatformInputManager_GetButton(StringLiteral_MoveRight,(MethodInfo *)0x0);
        if (bVar2 == 0) goto code_?;
      }
      if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
        FUN_?();
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
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__DateTime,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__TimeSpan);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    DVar4 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
    TVar5 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                      (DVar4,(DateTime)(pAVar3->fields).latestMouseMoveTime._dateData,
                       (MethodInfo *)0x0);
    lVar6 = (pAVar3->fields).awayCheckFrequency._ticks;
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (TVar5._ticks < lVar6) {
      if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
        FUN_?();
      }
      DVar4 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
      TVar5 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                        (DVar4,(DateTime)(pAVar3->fields).latestResetAFKTime._dateData,
                         (MethodInfo *)0x0);
      lVar6 = (pAVar3->fields).awayCheckFrequency._ticks;
      if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (lVar6 < TVar5._ticks) {
        if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
          FUN_?();
        }
        DVar4 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
        (pAVar3->fields).latestResetAFKTime._dateData = DVar4._dateData;
      }
    }
    if ((pAVar3->fields).idleKickEnabled != 0) {
      AwayMonitor_HandleIdle(pAVar3,0,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_Update(MethodInfo *method)

{
  if (cRam_? == '\0') {
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__AwayMonitor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pAVar2 = TypeInfo__AwayMonitor->static_fields->instance;
    if (pAVar2 == (AwayMonitor *)0x0) goto code_?;
    PStack_1._args = (Object__Array *)&UNK_?;
    AwayMonitor_UpdateMouse(pAVar2,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__AwayMonitor->static_fields->instance;
    if (pAVar2 == (AwayMonitor *)0x0) goto code_?;
    PStack_1._args = (Object__Array *)&UNK_?;
    AwayMonitor_UpdateIdle(pAVar2,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      PStack_1._args = (Object__Array *)&UNK_?;
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    PStack_1._args = (Object__Array *)&UNK_?;
    AwayMonitor_InternalUpdate((MethodInfo *)0x0);
  }
  if (TypeInfo__AwayMonitor->static_fields->instance != (AwayMonitor *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__AwayMonitor,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__QuitIdle);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Kicked__Idle_for__0__min_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pAVar2 = TypeInfo__AwayMonitor->static_fields->instance;
    if (pAVar2 != (AwayMonitor *)0x0) {
      if ((pAVar2->fields).state != 2) {
        return;
      }
      pAVar3 = (pAVar2->fields).idleKickTimes;
      if (pAVar3 != (AwayMonitor_IdleKickTimes *)0x0) {
        aiStackX_18[0] = (pAVar3->fields).idleKickTimeMinutes;
        arg0 = (Object *)FUN_?(uRam_?,aiStackX_18);
        pSVar4 = StringLiteral_Kicked__Idle_for__0__min_;
        PStack_1._arg0 = (Object *)0x0;
        PStack_1._arg1 = (Object *)0x0;
        PStack_1._arg2 = (Object *)0x0;
        PStack_1._args = (Object__Array *)0x0;
        mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_1,arg0,(MethodInfo *)0x0);
        PStack_5._arg0 = PStack_1._arg0;
        PStack_5._arg1 = PStack_1._arg1;
        PStack_5._arg2 = PStack_1._arg2;
        PStack_5._args = PStack_1._args;
        pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                           ((IFormatProvider *)0x0,pSVar4,&PStack_5,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,pSVar4,(MethodInfo *)0x0);
        applicationQuitObject = (QuitBaseCallback *)FUN_?(TypeInfo__QuitIdle);
        MVGameControllerBase::MVGameControllerBase_ApplicationQuit
                  (applicationQuitObject,(MethodInfo *)0x0);
        pAVar2 = TypeInfo__AwayMonitor->static_fields->instance;
        if (pAVar2 != (AwayMonitor *)0x0) {
          (pAVar2->fields).state = 3;
          return;
        }
      }
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
code_?:
  PStack_1._args = (Object__Array *)&UNK_?;
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateButtons() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_UpdateButtons
               (AwayMonitor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MoveLeft);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MoveRight);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
          CrossPlatformInputManager_GetButton(StringLiteral_MoveLeft,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
                 field_0x1c == 0) {
      FUN_?();
    }
    bVar1 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
            CrossPlatformInputManager_GetButton(StringLiteral_MoveRight,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  DVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  (this->fields).latestMouseMoveTime._dateData = DVar2._dateData;
  return;
}


/* Void UpdateIdle() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_UpdateIdle(AwayMonitor *this,MethodInfo *method)

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
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  DVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  TVar2 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                    (DVar1,(DateTime)(this->fields).latestMouseMoveTime._dateData,(MethodInfo *)0x0)
  ;
  lVar3 = (this->fields).awayCheckFrequency._ticks;
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TVar2._ticks < lVar3) {
    if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
      FUN_?();
    }
    DVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
    TVar2 = mscorlib.dll::System::DateTime::DateTime_op_Subtraction_1
                      (DVar1,(DateTime)(this->fields).latestResetAFKTime._dateData,(MethodInfo *)0x0
                      );
    lVar3 = (this->fields).awayCheckFrequency._ticks;
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (lVar3 < TVar2._ticks) {
      if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
        FUN_?();
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
    FUN_?(&TypeInfo__AwayMonitor);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  DVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  if (pAVar1 != (AwayMonitor *)0x0) {
    (pAVar1->fields).latestMouseMoveTime._dateData = DVar2._dateData;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateMobile() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_UpdateMobile(MethodInfo *method)

{
  if (cRam_? == '\0') {
    PStack_1._args = (Object__Array *)&UNK_?;
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PStack_1._args = (Object__Array *)&UNK_?;
  AwayMonitor_InternalUpdate((MethodInfo *)0x0);
  if (TypeInfo__AwayMonitor->static_fields->instance != (AwayMonitor *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__AwayMonitor,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__QuitIdle);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Kicked__Idle_for__0__min_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pAVar2 = TypeInfo__AwayMonitor->static_fields->instance;
    if (pAVar2 != (AwayMonitor *)0x0) {
      if ((pAVar2->fields).state != 2) {
        return;
      }
      pAVar3 = (pAVar2->fields).idleKickTimes;
      if (pAVar3 != (AwayMonitor_IdleKickTimes *)0x0) {
        aiStackX_18[0] = (pAVar3->fields).idleKickTimeMinutes;
        arg0 = (Object *)FUN_?(uRam_?,aiStackX_18);
        pSVar4 = StringLiteral_Kicked__Idle_for__0__min_;
        PStack_1._arg0 = (Object *)0x0;
        PStack_1._arg1 = (Object *)0x0;
        PStack_1._arg2 = (Object *)0x0;
        PStack_1._args = (Object__Array *)0x0;
        mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_1,arg0,(MethodInfo *)0x0);
        PStack_5._arg0 = PStack_1._arg0;
        PStack_5._arg1 = PStack_1._arg1;
        PStack_5._arg2 = PStack_1._arg2;
        PStack_5._args = PStack_1._args;
        pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                           ((IFormatProvider *)0x0,pSVar4,&PStack_5,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,pSVar4,(MethodInfo *)0x0);
        applicationQuitObject = (QuitBaseCallback *)FUN_?(TypeInfo__QuitIdle);
        MVGameControllerBase::MVGameControllerBase_ApplicationQuit
                  (applicationQuitObject,(MethodInfo *)0x0);
        pAVar2 = TypeInfo__AwayMonitor->static_fields->instance;
        if (pAVar2 != (AwayMonitor *)0x0) {
          (pAVar2->fields).state = 3;
          return;
        }
      }
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  PStack_1._args = (Object__Array *)&UNK_?;
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateMouse() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_UpdateMouse(AwayMonitor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_Y);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_X);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_ScrollWheel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar1 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                    (StringLiteral_Mouse_ScrollWheel,(MethodInfo *)0x0);
  if (fVar1 < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon ||
      fVar1 == TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar1 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                      (StringLiteral_Mouse_X,(MethodInfo *)0x0);
    if (fVar1 < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon ||
        fVar1 == TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar1 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                        (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
      if (fVar1 < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon ||
          fVar1 == TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
        return;
      }
    }
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  DVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  (this->fields).latestMouseMoveTime._dateData = DVar2._dateData;
  return;
}


/* AwayMonitor() */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor__ctor(AwayMonitor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  DVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  bVar2 = cRam_? == '\0';
  (this->fields).latestResetAFKTime._dateData = DVar1._dateData;
  if (bVar2) {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  (this->fields).awayCheckFrequency._ticks = 590000000;
  (this->fields).idleKickEnabled = 1;
  DVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  (this->fields).latestMouseMoveTime._dateData = DVar1._dateData;
  return;
}


/* Boolean get_IdleKickEnabled() */

bool Assembly-CSharp.dll::AwayMonitor::AwayMonitor_get_IdleKickEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AwayMonitor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
  if (pAVar1 != (AwayMonitor *)0x0) {
    return (pAVar1->fields).idleKickEnabled;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void set_IdleKickEnabled(Boolean) */

void Assembly-CSharp.dll::AwayMonitor::AwayMonitor_set_IdleKickEnabled
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AwayMonitor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AwayMonitor->static_fields->instance;
  if (pAVar1 != (AwayMonitor *)0x0) {
    (pAVar1->fields).idleKickEnabled = value;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

