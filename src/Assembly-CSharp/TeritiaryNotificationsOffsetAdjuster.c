
/* Void OnDestroy() */

void Assembly-CSharp.dll::TeritiaryNotificationsOffsetAdjuster::
     TeritiaryNotificationsOffsetAdjuster_OnDestroy
               (TeritiaryNotificationsOffsetAdjuster *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__System__Action<ChatConsoleMode>);
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&
                    MethodInfo__TeritiaryNotificationsOffsetAdjuster__OnIsChatConsoleStateChange_ChatConsoleMode_
                   );
    func_?(&MethodInfo__TeritiaryNotificationsOffsetAdjuster__OnIsPausedStateChange_bool_);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  object = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (object != (IPlayModeUI *)0x0) {
    pDVar1 = (Delegate *)func_?(3,TypeInfo__IPlayModeUI,object);
    pUVar2 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar2,(Object *)this,
               MethodInfo__TeritiaryNotificationsOffsetAdjuster__OnIsPausedStateChange_bool_,
               (MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?();
      if (iVar3 == 0) goto code_?;
    }
    func_?(4);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar4 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pIVar4 != (IPlayModeUI *)0x0) {
      pDVar1 = (Delegate *)func_?(5,TypeInfo__IPlayModeUI,pIVar4);
      pUVar2 = (UnityAction_1_System_Int32Enum_ *)
               func_?(TypeInfo__System__Action<ChatConsoleMode>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar2,(Object *)object,
                 MethodInfo__TeritiaryNotificationsOffsetAdjuster__OnIsChatConsoleStateChange_ChatConsoleMode_
                 ,(MethodInfo *)0x0);
      pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
      if (pDVar1 == (Delegate *)0x0) {
code_?:
        func_?(6);
        return;
      }
      iVar3 = func_?();
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnIsChatConsoleStateChange(ChatConsoleMode) */

void Assembly-CSharp.dll::TeritiaryNotificationsOffsetAdjuster::
     TeritiaryNotificationsOffsetAdjuster_OnIsChatConsoleStateChange
               (TeritiaryNotificationsOffsetAdjuster *this,ChatConsoleMode__Enum mode,
               MethodInfo *method)

{
  if (mode == ChatConsoleMode__Enum_ChatPlayMode) {
    fVar1 = (this->fields).rectWidthWithChat;
  }
  else {
    fVar1 = (this->fields).rectWidth;
  }
  this_00 = (this->fields).rectTransform;
  if (this_00 != (RectTransform *)0x0) {
    VVar2 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                      (this_00,(MethodInfo *)0x0);
    VVar2.y = VVar2.y;
    VVar2.x = fVar1;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (this_00,VVar2,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnIsPausedStateChange(Boolean) */

void Assembly-CSharp.dll::TeritiaryNotificationsOffsetAdjuster::
     TeritiaryNotificationsOffsetAdjuster_OnIsPausedStateChange
               (TeritiaryNotificationsOffsetAdjuster *this,bool isPaused,MethodInfo *method)

{
  pTVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
  }
  if (isPaused == 0) {
    _isPaused = (this->fields).topPaddingInGame;
    this = (TeritiaryNotificationsOffsetAdjuster *)(this->fields).bottomPaddingInGame;
  }
  else {
    _isPaused = (this->fields).topPaddingInMenu;
    if (bVar2 == 0) {
      this = (TeritiaryNotificationsOffsetAdjuster *)(this->fields).bottomPaddingInMenu;
    }
    else {
      this = (TeritiaryNotificationsOffsetAdjuster *)(this->fields).bottomPaddingInMenuGamePass;
    }
  }
  pRVar3 = (pTVar1->fields).rectTransform;
  if (pRVar3 != (RectTransform *)0x0) {
    VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_get_anchoredPosition(pRVar3,(MethodInfo *)0x0);
    VVar5.y = (float)((uint)_isPaused ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    VVar5.x = VVar4.x;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
              (pRVar3,VVar5,(MethodInfo *)0x0);
    pRVar3 = (pTVar1->fields).rectTransform;
    if (pRVar3 != (RectTransform *)0x0) {
      VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                        (pRVar3,(MethodInfo *)0x0);
      VVar4.y = (float)((uint)_isPaused ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) -
                (float)this;
      VVar4.x = VVar5.x;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                (pRVar3,VVar4,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TeritiaryNotificationsOffsetAdjuster::
     TeritiaryNotificationsOffsetAdjuster_Start
               (TeritiaryNotificationsOffsetAdjuster *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__System__Action<ChatConsoleMode>);
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&TypeInfo__UnityEngine__RectTransform);
    func_?(&
                    MethodInfo__TeritiaryNotificationsOffsetAdjuster__OnIsChatConsoleStateChange_ChatConsoleMode_
                   );
    func_?(&MethodInfo__TeritiaryNotificationsOffsetAdjuster__OnIsPausedStateChange_bool_);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 == (Transform *)0x0) {
    (this->fields).rectTransform = (RectTransform *)0x0;
    pTVar2 = (Transform *)0x0;
  }
  else {
    pTVar2 = (Transform *)0x0;
    if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar2 = pTVar1;
    }
    (this->fields).rectTransform = (RectTransform *)pTVar2;
    pTVar2 = (Transform *)0x0;
    if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar2 = pTVar1;
    }
  }
  func_?(&(this->fields).rectTransform,pTVar2);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar3 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  pDVar4 = (Delegate *)this;
  if (pIVar3 != (IPlayModeUI *)0x0) {
    cVar5 = func_?(7,TypeInfo__IPlayModeUI,pIVar3);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
      bVar6 = 0;
    }
    else {
      bVar6 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                        ((MethodInfo *)0x0);
    }
    if (cVar5 == '\0') {
      fVar7 = (this->fields).topPaddingInGame;
      fVar8 = (this->fields).bottomPaddingInGame;
    }
    else {
      fVar7 = (this->fields).topPaddingInMenu;
      if (bVar6 == 0) {
        fVar8 = (this->fields).bottomPaddingInMenu;
      }
      else {
        fVar8 = (this->fields).bottomPaddingInMenuGamePass;
      }
    }
    pRVar9 = (this->fields).rectTransform;
    if (pRVar9 != (RectTransform *)0x0) {
      VVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
               RectTransform_get_anchoredPosition(pRVar9,(MethodInfo *)0x0);
      VVar11.y = (float)((uint)fVar7 ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      VVar11.x = VVar10.x;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                (pRVar9,VVar11,(MethodInfo *)0x0);
      pRVar9 = (this->fields).rectTransform;
      if (pRVar9 != (RectTransform *)0x0) {
        puVar12 = &UNK_?;
        VVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                           (pRVar9,(MethodInfo *)0x0);
        VVar10.y = (float)((uint)puVar12 ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
                   - fVar8;
        VVar10.x = VVar11.x;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                  (pRVar9,VVar10,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pIVar3 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
        if (pIVar3 != (IPlayModeUI *)0x0) {
          pDVar4 = (Delegate *)func_?(3,TypeInfo__IPlayModeUI,pIVar3);
          pUVar13 = (UnityAction_1_System_Int32Enum_ *)
                   func_?(TypeInfo__System__Action<bool>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (pUVar13,(Object *)this,
                     MethodInfo__TeritiaryNotificationsOffsetAdjuster__OnIsPausedStateChange_bool_,
                     (MethodInfo *)0x0);
          pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                             (pDVar4,(Delegate *)pUVar13,(MethodInfo *)0x0);
          if (pDVar4 != (Delegate *)0x0) {
            iVar14 = func_?(pDVar4);
            if (iVar14 == 0) goto code_?;
          }
          func_?(4,TypeInfo__IPlayModeUI,pIVar3);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          pIVar3 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
          if (pIVar3 != (IPlayModeUI *)0x0) {
            pDVar4 = (Delegate *)func_?(5,TypeInfo__IPlayModeUI,pIVar3);
            pUVar13 = (UnityAction_1_System_Int32Enum_ *)
                     func_?(TypeInfo__System__Action<ChatConsoleMode>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (pUVar13,(Object *)this,
                       MethodInfo__TeritiaryNotificationsOffsetAdjuster__OnIsChatConsoleStateChange_ChatConsoleMode_
                       ,(MethodInfo *)0x0);
            pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                               (pDVar4,(Delegate *)pUVar13,(MethodInfo *)0x0);
            if (pDVar4 == (Delegate *)0x0) {
code_?:
              func_?(6,TypeInfo__IPlayModeUI,pIVar3);
              return;
            }
            iVar14 = func_?(pDVar4);
            if (iVar14 != 0) goto code_?;
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?(pDVar4);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* TeritiaryNotificationsOffsetAdjuster() */

void Assembly-CSharp.dll::TeritiaryNotificationsOffsetAdjuster::
     TeritiaryNotificationsOffsetAdjuster__ctor
               (TeritiaryNotificationsOffsetAdjuster *this,MethodInfo *method)

{
  (this->fields).topPaddingInMenu = 40.0;
  (this->fields).topPaddingInGame = 190.0;
  (this->fields).bottomPaddingInMenu = 40.0;
  (this->fields).bottomPaddingInMenuGamePass = 380.0;
  (this->fields).bottomPaddingInGame = 650.0;
  (this->fields).rectWidth = 1500.0;
  (this->fields).rectWidthWithChat = 450.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

