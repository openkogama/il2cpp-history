
/* Void CleanUp() */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_CleanUp
               (MVGameControllerDesktop *this,MethodInfo *method)

{
  MVGameControllerBase::MVGameControllerBase_DeleteScreenPlayerPrefs((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameLoader);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__MonoBehaviour);
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
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) goto code_?;
  if (((pMVar2->fields).worldNetwork != (WorldNetwork *)0x0) &&
     (pWVar3 = (pMVar2->fields).worldNetwork,
     (pWVar3->fields)._.worldObjectClientManager != (MVWorldObjectClientManagerNetwork *)0x0)) {
    MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_Cleanup
              ((pWVar3->fields)._.worldObjectClientManager,(MethodInfo *)0x0);
    pLVar4 = (pMVar2->fields)._LogicObjectManager_k__BackingField;
    if (pLVar4 == (LogicObjectManagerClient *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Clear__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(pLVar4->fields)._.logicWorldObjects;
    if (this_00 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
    TypeConverterRegistry+ConverterKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Clear__
              );
  }
  if ((pMVar2->fields)._MaterialRepository_k__BackingField != (MVMaterialRepository *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVMaterialRepository);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    TypeInfo__MVMaterialRepository->static_fields->instance = (MVMaterialRepository *)0x0;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)TypeInfo__MVMaterialRepository->static_fields >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PricesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__PricesManager->static_fields->prices = (Dictionary_2_System_Object_System_Object_ *)0x0;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)TypeInfo__PricesManager->static_fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
      (IPlayModeUI *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_01 = (Component *)
              TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (this_01 == (Component *)0x0) goto code_?;
    bVar10 = (TypeInfo__UnityEngine__MonoBehaviour->_1).naturalAligment;
    if (((this_01->klass->_1).naturalAligment < bVar10) ||
       ((this_01->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
        (Il2CppClass *)TypeInfo__UnityEngine__MonoBehaviour)) {
      FUN_?(this_01);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_01,(MethodInfo *)0x0);
    if (pGVar12 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar12,0,(MethodInfo *)0x0);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((this_02 != (MainCameraManager *)0x0) &&
     (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_02,(MethodInfo *)0x0), pGVar12 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar12,0,(MethodInfo *)0x0);
    pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (pGVar12 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar12,0,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__GameLoader->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GameLoader);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
      SceneManager_LoadSceneAsyncNameIndexInternal
                ((String *)0x0,0,(LoadSceneParameters)0x0,1,(MethodInfo *)0x0);
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcRam_? = pcVar11;
      iVar14 = (*pcRam_?)();
      UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
      SceneManager_GetSceneAt(iVar14 + -1,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__GameLoader->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GameLoader);
      }
      TypeInfo__GameLoader->static_fields->applicationStartUp = 0;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void CursorLock(Boolean, Boolean) */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_CursorLock
               (bool val,bool withoutCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ILockCursorManager);
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
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pMVar1 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
    if (withoutCallback == 0) {
      if ((pMVar1 == (MVGameControllerDesktop *)0x0) ||
         (pIVar2 = (pMVar1->fields).lockCursorManager, pIVar2 == (ILockCursorManager *)0x0)) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar4 = 1;
    }
    else {
      if ((pMVar1 == (MVGameControllerDesktop *)0x0) ||
         (pIVar2 = (pMVar1->fields).lockCursorManager, pIVar2 == (ILockCursorManager *)0x0))
      goto code_?;
      uVar4 = 2;
    }
    FUN_?(uVar4,TypeInfo__ILockCursorManager,pIVar2,val);
  }
  return;
}


/* Void HandleApplicationQuit(QuitBaseCallback) */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_HandleApplicationQuit
               (MVGameControllerDesktop *this,QuitBaseCallback *quitBaseCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__QuitBaseCallback);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (quitBaseCallback != (QuitBaseCallback *)0x0) {
    FUN_?(0,TypeInfo__QuitBaseCallback,quitBaseCallback);
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(0);
  return;
}


/* Void OnApplicationFocus(Boolean) */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_OnApplicationFocus
               (MVGameControllerDesktop *this,bool focus,MethodInfo *method)

{
  if ((this->fields).applicationHasFocus != focus) {
    (this->fields).applicationHasFocus = focus;
    if (focus != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerDesktop);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerDesktop->static_fields->
          _OnApplicationRegainedFocus_k__BackingField != (UnityAction *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerDesktop);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pUVar1 = TypeInfo__MVGameControllerDesktop->static_fields->
                 _OnApplicationRegainedFocus_k__BackingField;
        goto code_?;
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerDesktop);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerDesktop->static_fields->_OnApplicationLostFocus_k__BackingField !=
        (UnityAction *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerDesktop);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pUVar1 = TypeInfo__MVGameControllerDesktop->static_fields->
               _OnApplicationLostFocus_k__BackingField;
code_?:
      if (pUVar1 != (UnityAction *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pUVar1->fields)._._.invoke_impl)
                  ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
        return;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_OnDestroy
               (MVGameControllerDesktop *this,MethodInfo *method)

{
  MVGameControllerBase::MVGameControllerBase_OnDestroy
            ((MVGameControllerBase *)this,(MethodInfo *)0x0);
  FUN_?(0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerDesktop);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerDesktop->static_fields->_OnApplicationRegainedFocus_k__BackingField =
       (UnityAction *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__MVGameControllerDesktop->static_fields->
                    _OnApplicationRegainedFocus_k__BackingField >> 0xc);
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


/* Void RegisterAvaterEditModeController(DesktopAvatarEditModeController) */

void Assembly-CSharp.dll::MVGameControllerDesktop::
     MVGameControllerDesktop_RegisterAvaterEditModeController
               (DesktopAvatarEditModeController *avatarEditModeController,MethodInfo *method)

{
  pMVar1 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
  if (pMVar1 == (MVGameControllerDesktop *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  (pMVar1->fields)._.modeController = (ModeControllerBase *)avatarEditModeController;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(pMVar1->fields)._.modeController >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void RegisterEditModeController(DesktopEditModeController) */

void Assembly-CSharp.dll::MVGameControllerDesktop::
     MVGameControllerDesktop_RegisterEditModeController
               (DesktopEditModeController *editModeController,MethodInfo *method)

{
  pMVar1 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
  if (pMVar1 == (MVGameControllerDesktop *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  (pMVar1->fields)._.modeController = (ModeControllerBase *)editModeController;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(pMVar1->fields)._.modeController >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField =
       (IEditModeUI *)editModeController;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)
                   &TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField >>
                  0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void RegisterPlayModeController(DesktopPlayModeController) */

void Assembly-CSharp.dll::MVGameControllerDesktop::
     MVGameControllerDesktop_RegisterPlayModeController
               (DesktopPlayModeController *playModeController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
  if ((playModeController != (DesktopPlayModeController *)0x0) &&
     (pMVar1 != (MVGameControllerDesktop *)0x0)) {
    bVar2 = iRam_? != 0;
    (pMVar1->fields).lockCursorManager = (playModeController->fields).lockCursorManager;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(pMVar1->fields).lockCursorManager >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    FUN_?(playModeController);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar7 != (GameSessionData *)0x0) {
      if ((pGVar7->fields).gameMode == 1) {
        pMVar1 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
        if (pMVar1 != (MVGameControllerDesktop *)0x0) {
          bVar2 = iRam_? == 0;
          (pMVar1->fields)._.modeController = (ModeControllerBase *)playModeController;
          if (bVar2) {
            return;
          }
          uVar3 = (uint)((ulonglong)&(pMVar1->fields)._.modeController >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
          return;
        }
      }
      else {
        pMVar1 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
        if ((pMVar1 != (MVGameControllerDesktop *)0x0) &&
           (this = (DesktopEditModeController *)(pMVar1->fields)._.modeController,
           this != (DesktopEditModeController *)0x0)) {
          bVar8 = (TypeInfo__DesktopEditModeController->_1).naturalAligment;
          if ((bVar8 <= (this->klass->_1).naturalAligment) &&
             ((DesktopEditModeController__Class *)
              (this->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] ==
              TypeInfo__DesktopEditModeController)) {
            DesktopEditModeController::DesktopEditModeController_RegisterPlayModeController
                      (this,playModeController,(MethodInfo *)0x0);
            return;
          }
          FUN_?(this);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_Start
               (MVGameControllerDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._.textureIntegrityChecker;
  if ((pTVar1 == (TextureIntegrityChecker *)0x0) ||
     (this_00 = (pTVar1->fields).materialPlaneRenderer, this_00 == (MaterialPlaneRenderer *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_Initialize(this_00,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  (*(this->klass->vtable).InitStandAlone.methodPtr)(this);
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  FullScreenController::FullScreenController_set_FullScreen(0,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
            (0x3ac,0x1e2,0,(MethodInfo *)0x0);
  aIStackX_10[0].m_value = 0x1e2;
  aIStackX_8[0].m_value = 0x3ac;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_init);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CurrentResolution__w_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Screen__w_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__init_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Init__w_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___h_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ScreenOrientation_Unknown_is_dep);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(1);
  values = (String__Array *)FUN_?(TypeInfo__System__String);
  if (values == (String__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?(values,0,StringLiteral_Init__w_);
  pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
  FUN_?(values,1,pSVar4);
  FUN_?(values,2,StringLiteral___h_);
  pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
  FUN_?(values,3,pSVar4);
  FUN_?(values,4,StringLiteral__init_);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  FUN_?(values);
  mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  iVar5 = (*pcRam_?)();
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_6._pointer._value = (void *)0x0;
  RStack_6._length = 0;
  RStack_6._12_4_ = 0;
  pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                     (iVar5,&RStack_6,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  iVar5 = (*pcRam_?)();
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_6._pointer._value = (void *)0x0;
  RStack_6._length = 0;
  RStack_6._12_4_ = 0;
  pSVar7 = mscorlib.dll::System::Number::Number_FormatInt32
                     (iVar5,&RStack_6,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_6
            (StringLiteral_Screen__w_,pSVar4,StringLiteral___h_,pSVar7,(MethodInfo *)0x0);
  RStack_6._pointer._value = (void *)0x0;
  RStack_6._length = 0;
  RStack_6._12_4_ = 0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&RStack_6);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  auStack_8 = (undefined1  [8])0x0;
  uStack_9._0_4_ = 0;
  uStack_9._4_4_ = 0;
  pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                     ((int32_t)RStack_6._pointer._value,(ReadOnlySpan_1_Char_ *)auStack_8,
                      (IFormatProvider *)0x0,(MethodInfo *)0x0);
  RStack_6._pointer._value = (void *)0x0;
  RStack_6._length = 0;
  RStack_6._12_4_ = 0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&RStack_6);
  BVar10._value = RStack_6._pointer._value;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  auStack_8 = (undefined1  [8])0x0;
  uStack_9._0_4_ = 0;
  uStack_9._4_4_ = 0;
  pSVar7 = mscorlib.dll::System::Number::Number_FormatInt32
                     ((int32_t)((ulonglong)BVar10._value >> 0x20),(ReadOnlySpan_1_Char_ *)auStack_8,
                      (IFormatProvider *)0x0,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_6
            (StringLiteral_CurrentResolution__w_,pSVar4,StringLiteral___h_,pSVar7,(MethodInfo *)0x0)
  ;
  FullScreenController::FullScreenController_PrintMeasures(StringLiteral_init,(MethodInfo *)0x0);
  TypeInfo__FullScreenController->static_fields->initialized = 1;
  TypeInfo__FullScreenController->static_fields->screenWidthBeforeFullscreen = 0x3ac;
  TypeInfo__FullScreenController->static_fields->screenHeightBeforeFullscreen = 0x1e2;
  return;
}


/* Void UnregisterEditModeController() */

void Assembly-CSharp.dll::MVGameControllerDesktop::
     MVGameControllerDesktop_UnregisterEditModeController(MethodInfo *method)

{
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
  if (pMVar2 == (MVGameControllerDesktop *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = iRam_? != 0;
  (pMVar2->fields)._.modeController = (ModeControllerBase *)0x0;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(pMVar2->fields)._.modeController >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField = (IEditModeUI *)0x0;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)
                   &TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField >>
                  0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  return;
}


/* Void UpdateInternal() */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_UpdateInternal
               (MVGameControllerDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BackButtonManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelingManager);
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
  if (TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField = 1;
    pMVar1 = (this->fields)._.modeController;
    if (pMVar1 == (ModeControllerBase *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(pMVar1->klass->vtable).Initialize.methodPtr)();
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar3 == (MVGameControllerBase *)0x0) ||
         (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) ||
        (this_00 = (pMVar4->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
       (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar5 == (MVLocalPlayer *)0x0)) goto code_?;
    iVar6 = (pMVar5->fields)._._ProfileID_k__BackingField;
    if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    aIStackX_18[0].m_value = iVar6;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__AsyncWWWManager);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__GetRequest);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__LevelingManager__OnInitialData_UnityEngine__Networking__UnityWebRequest_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__MV__Common__Urls);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__Common__Urls);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_xp_level_init_data__profile_id_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar7 = mscorlib.dll::System::String::String_Concat_4
                        (TypeInfo__MV__Common__Urls->static_fields->api,
                         StringLiteral_xp_level_init_data__profile_id_,(MethodInfo *)0x0);
    str1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
    pSVar7 = mscorlib.dll::System::String::String_Concat_4(pSVar7,str1,(MethodInfo *)0x0);
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)0x0,
               MethodInfo__LevelingManager__OnInitialData_UnityEngine__Networking__UnityWebRequest_,
               (MethodInfo *)0x0);
    this_02 = (AsyncWebRequest *)FUN_?(TypeInfo__GetRequest);
    AsyncWebRequest::AsyncWebRequest__ctor
              (this_02,pSVar7,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
               WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    AsyncWWWManager::AsyncWWWManager_WWWRequest(this_02,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__BackButtonManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BackButtonManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BackButtonManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar8 = TypeInfo__BackButtonManager->static_fields->subscribers;
  if (pLVar8 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
    if ((pLVar8->fields)._size < 1) {
      return;
    }
    if (*(int *)&(TypeInfo__BackButtonManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar8 = TypeInfo__BackButtonManager->static_fields->subscribers;
    if (pLVar8 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
      iVar9 = (pLVar8->fields)._size;
      if ((uint)(pLVar8->fields)._size <= iVar9 - 1U) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pBVar10 = (pLVar8->fields)._items;
      if (pBVar10 != (BackButtonManager_BackButtonSubscriber__Array *)0x0) {
        if ((uint)pBVar10->max_length <= iVar9 - 1U) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pBVar11 = pBVar10->vector[(longlong)iVar9 + -1];
        if (pBVar11 != (BackButtonManager_BackButtonSubscriber *)0x0) {
          iVar9 = (pBVar11->fields).state;
          if (iVar9 == 0) {
            KVar12 = (pBVar11->fields).button;
            if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar13 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp(KVar12,(MethodInfo *)0x0);
          }
          else if (iVar9 == 1) {
            KVar12 = (pBVar11->fields).button;
            if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar13 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown(KVar12,(MethodInfo *)0x0);
          }
          else {
            if (iVar9 != 2) {
              return;
            }
            KVar12 = (pBVar11->fields).button;
            if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar13 = MVInputWrapper::MVInputWrapper_GetBooleanControl(KVar12,(MethodInfo *)0x0);
          }
          if (bVar13 != 0) {
            pUVar14 = (pBVar11->fields).callback;
            if (pUVar14 == (UnityAction *)0x0) goto code_?;
            (*(pUVar14->fields)._._.invoke_impl)
                      ((pUVar14->fields)._._.method_code,(pUVar14->fields)._._.method);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVGameControllerDesktop() */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop__ctor
               (MVGameControllerDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdIntegration__InHouse__InHouseAdManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).applicationHasFocus = 1;
  pIVar1 = (IAdManager *)FUN_?(TypeInfo__AdIntegration__InHouse__InHouseAdManager);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[4].klass = 0x14;
  (this->fields).adManager = pIVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).adManager >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FlagDebriefingControl,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoldRewardManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SkinnedMeshOptimizeManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar7 = (SkinnedMeshOptimizeManager *)FUN_?(TypeInfo__SkinnedMeshOptimizeManager);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar8 = (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>
                        );
  FUN_?(pLVar8,
                MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__List__
               );
  iVar9 = iRam_?;
  (pSVar7->fields).optimizationDataList = pLVar8;
  if (iVar9 != 0) {
    uVar3 = (uint)((ulonglong)&pSVar7->fields >> 0xc);
    lVar10 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar10 + 0xADDR);
      puVar4 = (ulonglong *)(lVar10 + 0xADDR);
      LOCK();
      bVar2 = uVar6 == *puVar4;
      if (bVar2) {
        *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar9 = iRam_?;
    } while (!bVar2);
  }
  (this->fields)._.skinnedMeshOptimizeManager = pSVar7;
  if (iVar9 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.skinnedMeshOptimizeManager >> 0xc);
    lVar10 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar10 + 0xADDR);
      puVar4 = (ulonglong *)(lVar10 + 0xADDR);
      LOCK();
      bVar2 = uVar6 == *puVar4;
      if (bVar2) {
        *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pFVar11 = (FlagDebriefingControl *)FUN_?(TypeInfo__FlagDebriefingControl);
  bVar2 = iRam_? != 0;
  (this->fields)._.flagDebriefingControl = pFVar11;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.flagDebriefingControl >> 0xc);
    lVar10 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar10 + 0xADDR);
      puVar4 = (ulonglong *)(lVar10 + 0xADDR);
      LOCK();
      bVar2 = uVar6 == *puVar4;
      if (bVar2) {
        *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pGVar12 = (GoldRewardManager *)FUN_?(TypeInfo__GoldRewardManager);
  bVar2 = iRam_? != 0;
  (this->fields)._.goldRewardManager = pGVar12;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.goldRewardManager >> 0xc);
    lVar10 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar10 + 0xADDR);
      puVar4 = (ulonglong *)(lVar10 + 0xADDR);
      LOCK();
      bVar2 = uVar6 == *puVar4;
      if (bVar2) {
        *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  bVar2 = cRam_? == '\0';
  (this->fields)._.reAuthTestTries = 3;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}


/* MVGameControllerDesktop get_Instance() */

MVGameControllerDesktop *
Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_get_Instance
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerDesktop);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVGameControllerDesktop *)TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerDesktop *)0x0) {
    bVar2 = (TypeInfo__MVGameControllerDesktop->_1).naturalAligment;
    if (((((MVGameControllerBase__Class *)pMVar1->klass)->_1).naturalAligment < bVar2) ||
       ((((MVGameControllerBase__Class *)pMVar1->klass)->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__MVGameControllerDesktop)) {
      FUN_?(pMVar1,TypeInfo__MVGameControllerDesktop);
      pcVar3 = (code *)swi(3);
      pMVar1 = (MVGameControllerDesktop *)(*pcVar3)();
      return pMVar1;
    }
  }
  return pMVar1;
}


/* Boolean get_IsCursorLock() */

bool Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ILockCursorManager);
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
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
    return 0;
  }
  pMVar1 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
  if ((pMVar1 != (MVGameControllerDesktop *)0x0) &&
     (pIVar2 = (pMVar1->fields).lockCursorManager, pIVar2 != (ILockCursorManager *)0x0)) {
    uVar3 = 0;
    pIVar4 = pIVar2->klass;
    uVar5._0_1_ = (pIVar4->_1).rank;
    uVar5._1_1_ = (pIVar4->_1).minimumAlignment;
    if (uVar5 != 0) {
      do {
        if (pIVar4->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__ILockCursorManager) {
          pVVar6 = &(pIVar4->vtable).get_CursorLock + pIVar4->interfaceOffsets[uVar3].offset;
          UNRECOVERED_JUMPTABLE = pVVar6->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          bVar7 = (*UNRECOVERED_JUMPTABLE)(pIVar2,pVVar6->method,UNRECOVERED_JUMPTABLE);
          return bVar7;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar5);
    }
    puVar8 = (undefined8 *)FUN_?(pIVar2);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar7 = (*(code *)*puVar8)(pIVar2,puVar8[1],(code *)*puVar8);
    return bVar7;
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar7 = (*pcVar9)();
  return bVar7;
}


/* Boolean get_IsPlayingInternal() */

bool Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_get_IsPlayingInternal
               (MVGameControllerDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IEditModeUI);
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
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields)._joinState != 3) {
      return 0;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar2 != (GameSessionData *)0x0) {
      if ((pGVar2->fields).gameMode == 1) {
        return 1;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar2 != (GameSessionData *)0x0) {
        if ((pGVar2->fields).gameMode != 0) {
          return 0;
        }
        plVar3 = (longlong *)FUN_?();
        if (plVar3 != (longlong *)0x0) {
          uVar4 = 0;
          lVar5 = *plVar3;
          if (*(ushort *)(lVar5 + 0x12e) != 0) {
            do {
              if (*(IEditModeUI__Class **)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar4 * 0x10) ==
                  TypeInfo__IEditModeUI) {
                puVar6 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar4 * 0x10) + 1)
                          * 0x10 + 0x138 + lVar5);
                UNRECOVERED_JUMPTABLE = (code *)*puVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                bVar7 = (*UNRECOVERED_JUMPTABLE)(plVar3,puVar6[1],UNRECOVERED_JUMPTABLE);
                return bVar7;
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < *(ushort *)(lVar5 + 0x12e));
          }
          puVar6 = (undefined8 *)FUN_?(plVar3);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          bVar7 = (*(code *)*puVar6)(plVar3,puVar6[1],(code *)*puVar6);
          return bVar7;
        }
      }
    }
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  bVar7 = (*UNRECOVERED_JUMPTABLE)();
  return bVar7;
}


/* ILockCursorManager get_LockCursorManager() */

ILockCursorManager *
Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
          (MethodInfo *method)

{
  pMVar1 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
  if (pMVar1 != (MVGameControllerDesktop *)0x0) {
    return (pMVar1->fields).lockCursorManager;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (ILockCursorManager *)(*pcVar2)();
  return pIVar3;
}


/* UnityAction get_OnApplicationLostFocus() */

UnityAction *
Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_get_OnApplicationLostFocus
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerDesktop);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerDesktop->static_fields->_OnApplicationLostFocus_k__BackingField;
}


/* UnityAction get_OnApplicationRegainedFocus() */

UnityAction *
Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_get_OnApplicationRegainedFocus
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerDesktop);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__MVGameControllerDesktop->static_fields->
         _OnApplicationRegainedFocus_k__BackingField;
}


/* Void set_OnApplicationLostFocus(UnityAction) */

void Assembly-CSharp.dll::MVGameControllerDesktop::
     MVGameControllerDesktop_set_OnApplicationLostFocus(UnityAction *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerDesktop);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerDesktop->static_fields->_OnApplicationLostFocus_k__BackingField = value;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__MVGameControllerDesktop->static_fields >> 0xc);
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


/* Void set_OnApplicationRegainedFocus(UnityAction) */

void Assembly-CSharp.dll::MVGameControllerDesktop::
     MVGameControllerDesktop_set_OnApplicationRegainedFocus(UnityAction *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerDesktop);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerDesktop->static_fields->_OnApplicationRegainedFocus_k__BackingField =
       value;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__MVGameControllerDesktop->static_fields->
                    _OnApplicationRegainedFocus_k__BackingField >> 0xc);
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

