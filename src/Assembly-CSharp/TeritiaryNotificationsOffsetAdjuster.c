
/* Void OnDestroy() */

void Assembly-CSharp.dll::TeritiaryNotificationsOffsetAdjuster::
     TeritiaryNotificationsOffsetAdjuster_OnDestroy
               (TeritiaryNotificationsOffsetAdjuster *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<ChatConsoleMode>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TeritiaryNotificationsOffsetAdjuster__OnIsChatConsoleStateChange_ChatConsoleMode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TeritiaryNotificationsOffsetAdjuster__OnIsPausedStateChange_bool_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar1 != (IPlayModeUI *)0x0) {
    pDVar2 = (Delegate *)FUN_?(3,TypeInfo__IPlayModeUI,pIVar1);
    value = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
    FUN_?(value,this);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove(pDVar2,value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<bool>;
    pIVar4 = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
    if ((pDVar2 != (Delegate *)0x0) &&
       (lVar5 = FUN_?(pDVar2,TypeInfo__System__Action<bool>), lVar5 == 0)) {
      FUN_?(pDVar2,pAVar3);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FUN_?(4,TypeInfo__IPlayModeUI,pIVar1);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pIVar1 != (IPlayModeUI *)0x0) {
      pDVar2 = (Delegate *)FUN_?();
      this_00 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(TypeInfo__System__Action<ChatConsoleMode>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_00,(Object *)this,
                 MethodInfo__TeritiaryNotificationsOffsetAdjuster__OnIsChatConsoleStateChange_ChatConsoleMode_
                 ,(MethodInfo *)0x0);
      pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar7 = TypeInfo__System__Action<ChatConsoleMode>;
      if ((pDVar2 != (Delegate *)0x0) &&
         (pIVar4 = (Il2CppRuntimeInterfaceOffsetPair *)
                    FUN_?(pDVar2,TypeInfo__System__Action<ChatConsoleMode>),
         pIVar4 == (Il2CppRuntimeInterfaceOffsetPair *)0x0)) {
        FUN_?(pDVar2,pAVar7);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pIVar8 = pIVar1->klass;
      uVar9 = 0;
      uVar10._0_1_ = (pIVar8->_1).rank;
      uVar10._1_1_ = (pIVar8->_1).minimumAlignment;
      pIVar11 = pIVar4;
      if (uVar10 != 0) {
        pIVar11 = pIVar8->interfaceOffsets;
        do {
          if (pIVar11[uVar9].interfaceType == (Il2CppClass *)TypeInfo__IPlayModeUI) {
            pVVar12 = &(pIVar8->vtable).ShowEUseIcon + (pIVar11[uVar9].offset + 6);
            goto code_?;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar10);
      }
      pVVar12 = (VirtualInvokeData *)FUN_?(pIVar1,TypeInfo__IPlayModeUI,6,pIVar11,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar12->methodPtr)(pIVar1,pIVar4,pVVar12->method,pVVar12->methodPtr);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnIsChatConsoleStateChange(ChatConsoleMode) */

void Assembly-CSharp.dll::TeritiaryNotificationsOffsetAdjuster::
     TeritiaryNotificationsOffsetAdjuster_OnIsChatConsoleStateChange
               (TeritiaryNotificationsOffsetAdjuster *this,ChatConsoleMode__Enum mode,
               MethodInfo *method)

{
  this_00 = (this->fields).rectTransform;
  lVar1 = 0x38;
  if (mode != ChatConsoleMode__Enum_ChatPlayMode) {
    lVar1 = 0x34;
  }
  uVar2 = *(undefined4 *)((longlong)&this->klass + lVar1);
  if (this_00 == (RectTransform *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                    (this_00,(MethodInfo *)0x0);
  auStack_5[0] = CONCAT44(VVar4.y,uVar2);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                  ,auStack_5[0],0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_00 == (RectTransform *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pvVar6 = (this_00->fields)._._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar6,auStack_5);
  return;
}


/* Void OnIsPausedStateChange(Boolean) */

void Assembly-CSharp.dll::TeritiaryNotificationsOffsetAdjuster::
     TeritiaryNotificationsOffsetAdjuster_OnIsPausedStateChange
               (TeritiaryNotificationsOffsetAdjuster *this,bool isPaused,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
  }
  fVar2 = (&(this->fields).topPaddingInMenu)[(ulonglong)isPaused ^ 1];
  if (isPaused == 0) {
    fVar3 = (this->fields).bottomPaddingInGame;
  }
  else if (bVar1 == 0) {
    fVar3 = (this->fields).bottomPaddingInMenu;
  }
  else {
    fVar3 = (this->fields).bottomPaddingInMenuGamePass;
  }
  pRVar4 = (this->fields).rectTransform;
  if (pRVar4 != (RectTransform *)0x0) {
    VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_get_anchoredPosition(pRVar4,(MethodInfo *)0x0);
    uVar6 = _UNK_?;
    fStackX_8 = VVar5.x;
    VVar5.y = (float)((uint)fVar2 ^ _UNK_?);
    VVar5.x = fStackX_8;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
              (pRVar4,VVar5,(MethodInfo *)0x0);
    pRVar4 = (this->fields).rectTransform;
    if (pRVar4 != (RectTransform *)0x0) {
      VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                        (pRVar4,(MethodInfo *)0x0);
      fStackX_8 = VVar5.x;
      auStack_7[0] = CONCAT44((float)((uint)fVar2 ^ uVar6) - fVar3,fStackX_8);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                      ,auStack_7[0],0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pRVar4 == (RectTransform *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pvVar9 = (pRVar4->fields)._._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar4,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar9,auStack_7);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TeritiaryNotificationsOffsetAdjuster::
     TeritiaryNotificationsOffsetAdjuster_Start
               (TeritiaryNotificationsOffsetAdjuster *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<ChatConsoleMode>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TeritiaryNotificationsOffsetAdjuster__OnIsChatConsoleStateChange_ChatConsoleMode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TeritiaryNotificationsOffsetAdjuster__OnIsPausedStateChange_bool_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  pTVar2 = (Transform *)0x0;
  pTVar3 = pTVar2;
  if ((pTVar1 != (Transform *)0x0) &&
     (pTVar3 = (Transform *)0x0,
     pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform)) {
    pTVar3 = pTVar1;
  }
  bVar4 = iRam_? != 0;
  (this->fields).rectTransform = (RectTransform *)pTVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).rectTransform >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
      (IPlayModeUI *)0x0) {
    bVar9 = FUN_?(7,TypeInfo__IPlayModeUI);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
      bVar10 = 0;
    }
    else {
      bVar10 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                         ((MethodInfo *)0x0);
    }
    fVar11 = (&(this->fields).topPaddingInMenu)[(ulonglong)bVar9 ^ 1];
    if (bVar9 == 0) {
      fVar12 = (this->fields).bottomPaddingInGame;
    }
    else if (bVar10 == 0) {
      fVar12 = (this->fields).bottomPaddingInMenu;
    }
    else {
      fVar12 = (this->fields).bottomPaddingInMenuGamePass;
    }
    pRVar13 = (this->fields).rectTransform;
    if (pRVar13 != (RectTransform *)0x0) {
      VVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
               RectTransform_get_anchoredPosition(pRVar13,(MethodInfo *)0x0);
      uVar5 = _UNK_?;
      fStackX_8 = VVar14.x;
      VVar14.y = (float)((uint)fVar11 ^ _UNK_?);
      VVar14.x = fStackX_8;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                (pRVar13,VVar14,(MethodInfo *)0x0);
      pRVar13 = (this->fields).rectTransform;
      if (pRVar13 != (RectTransform *)0x0) {
        VVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                           (pRVar13,(MethodInfo *)0x0);
        fStackX_8 = VVar14.x;
        value.y = (float)((uint)fVar11 ^ uVar5) - fVar12;
        value.x = fStackX_8;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                  (pRVar13,value,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar15 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
        if (pIVar15 != (IPlayModeUI *)0x0) {
          pDVar16 = (Delegate *)FUN_?(3,TypeInfo__IPlayModeUI,pIVar15);
          b = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
          FUN_?(b,this);
          pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine(pDVar16,b,(MethodInfo *)0x0);
          pAVar17 = TypeInfo__System__Action<bool>;
          if ((pDVar16 != (Delegate *)0x0) &&
             (lVar18 = FUN_?(pDVar16,TypeInfo__System__Action<bool>), lVar18 == 0)) {
            FUN_?(pDVar16,pAVar17);
            pcVar19 = (code *)swi(3);
            (*pcVar19)();
            return;
          }
          FUN_?(4,TypeInfo__IPlayModeUI,pIVar15);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pIVar15 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
          if (pIVar15 != (IPlayModeUI *)0x0) {
            pDVar16 = (Delegate *)FUN_?();
            this_00 = (UnityAction_1_System_Int32Enum_ *)
                      FUN_?(TypeInfo__System__Action<ChatConsoleMode>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (this_00,(Object *)this,
                       MethodInfo__TeritiaryNotificationsOffsetAdjuster__OnIsChatConsoleStateChange_ChatConsoleMode_
                       ,(MethodInfo *)0x0);
            pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine
                                (pDVar16,(Delegate *)this_00,(MethodInfo *)0x0);
            pAVar20 = TypeInfo__System__Action<ChatConsoleMode>;
            if ((pDVar16 != (Delegate *)0x0) &&
               (pTVar2 = (Transform *)
                          FUN_?(pDVar16,TypeInfo__System__Action<ChatConsoleMode>),
               pTVar2 == (Transform *)0x0)) {
              FUN_?(pDVar16,pAVar20);
              pcVar19 = (code *)swi(3);
              (*pcVar19)();
              return;
            }
            pIVar21 = pIVar15->klass;
            uVar22 = 0;
            uVar23._0_1_ = (pIVar21->_1).rank;
            uVar23._1_1_ = (pIVar21->_1).minimumAlignment;
            pTVar3 = pTVar2;
            if (uVar23 != 0) {
              pTVar3 = (Transform *)pIVar21->interfaceOffsets;
              do {
                if ((Il2CppClass *)(&pTVar3->klass)[(ulonglong)uVar22 * 2] ==
                    (Il2CppClass *)TypeInfo__IPlayModeUI) {
                  pVVar24 = &(pIVar21->vtable).ShowEUseIcon +
                            (*(int *)(&pTVar3->monitor + (ulonglong)uVar22 * 2) + 6);
                  goto code_?;
                }
                uVar22 = uVar22 + 1;
              } while (uVar22 < uVar23);
            }
            pVVar24 = (VirtualInvokeData *)
                      FUN_?(pIVar15,TypeInfo__IPlayModeUI,6,pTVar3,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pVVar24->methodPtr)(pIVar15,pTVar2,pVVar24->method,pVVar24->methodPtr);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* TeritiaryNotificationsOffsetAdjuster() */

void Assembly-CSharp.dll::TeritiaryNotificationsOffsetAdjuster::
     TeritiaryNotificationsOffsetAdjuster__ctor
               (TeritiaryNotificationsOffsetAdjuster *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).topPaddingInMenu = 40.0;
  (this->fields).topPaddingInGame = 190.0;
  (this->fields).bottomPaddingInMenu = 40.0;
  (this->fields).bottomPaddingInMenuGamePass = 380.0;
  (this->fields).bottomPaddingInGame = 650.0;
  (this->fields).rectWidth = 1500.0;
  (this->fields).rectWidthWithChat = 450.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052af36,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

