
/* Void CleanUp() */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_CleanUp
               (MVGameControllerDesktop *this,MethodInfo *method)

{
  MVGameControllerBase::MVGameControllerBase_DeleteScreenPlayerPrefs((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GameLoader);
    func_?(&TypeInfo__UnityEngine__MonoBehaviour);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this_00 = (pMVar1->fields).game, this_00 != (MVNetworkGame *)0x0)) {
    MVNetworkGame::MVNetworkGame_Cleanup(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      this = (MVGameControllerDesktop *)&TypeInfo__MVGameControllerBase;
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
        (IPlayModeUI *)0x0) {
code_?:
      this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_01 != (MainCameraManager *)0x0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          if (pGVar2 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
            if ((TypeInfo__GameLoader->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            GameLoader::GameLoader_UnloadGame((MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      this_02 = (Component *)
                TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
      unaff_ESI = TypeInfo__UnityEngine__MonoBehaviour;
      if (this_02 != (Component *)0x0) {
        if (((this_02->klass->_1).typeHierarchyDepth <
             (TypeInfo__UnityEngine__MonoBehaviour->_1).typeHierarchyDepth) ||
           ((this_02->klass->_1).typeHierarchy
            [(TypeInfo__UnityEngine__MonoBehaviour->_1).typeHierarchyDepth - 1] !=
            (Il2CppClass *)TypeInfo__UnityEngine__MonoBehaviour)) goto code_?;
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_02,(MethodInfo *)0x0);
        unaff_ESI = pMStack_3;
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?();
  this_02 = extraout_EDX;
code_?:
  func_?(this_02,unaff_ESI);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CursorLock(Boolean, Boolean) */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_CursorLock
               (bool val,bool withoutCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
    return;
  }
  pMVar1 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
  if (withoutCallback == 0) {
    if ((pMVar1 != (MVGameControllerDesktop *)0x0) &&
       ((pMVar1->fields).lockCursorManager != (ILockCursorManager *)0x0)) {
      pIStack_2 = TypeInfo__ILockCursorManager;
      func_?(3);
      return;
    }
  }
  else if ((pMVar1 != (MVGameControllerDesktop *)0x0) &&
          ((pMVar1->fields).lockCursorManager != (ILockCursorManager *)0x0)) {
    pIStack_2 = TypeInfo__ILockCursorManager;
    func_?(4);
    return;
  }
  uVar3 = func_?(&pIStack_2);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleApplicationQuit(QuitBaseCallback) */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_HandleApplicationQuit
               (MVGameControllerDesktop *this,QuitBaseCallback *quitBaseCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__QuitBaseCallback);
    cRam_? = '\x01';
  }
  if (quitBaseCallback != (QuitBaseCallback *)0x0) {
    func_?(0,TypeInfo__QuitBaseCallback,quitBaseCallback);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Application::Application_Quit_1((MethodInfo *)0x0);
  return;
}


/* Void OnApplicationFocus(Boolean) */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_OnApplicationFocus
               (MVGameControllerDesktop *this,bool focus,MethodInfo *method)

{
  if ((this->fields).applicationHasFocus == focus) {
    return;
  }
  (this->fields).applicationHasFocus = focus;
  if (focus != 0) {
    if (cRam_? == '\0') {
      ppMStack_1 = &TypeInfo__MVGameControllerDesktop;
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerDesktop->static_fields->
        _OnApplicationRegainedFocus_k__BackingField != (UnityAction *)0x0) {
      if (cRam_? == '\0') {
        ppMStack_1 = &TypeInfo__MVGameControllerDesktop;
        func_?();
        cRam_? = '\x01';
      }
      pUVar2 = TypeInfo__MVGameControllerDesktop->static_fields->
               _OnApplicationRegainedFocus_k__BackingField;
      goto code_?;
    }
  }
  if (cRam_? == '\0') {
    ppMStack_1 = &TypeInfo__MVGameControllerDesktop;
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerDesktop->static_fields->_OnApplicationLostFocus_k__BackingField ==
      (UnityAction *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    ppMStack_1 = &TypeInfo__MVGameControllerDesktop;
    func_?();
    cRam_? = '\x01';
  }
  pUVar2 = TypeInfo__MVGameControllerDesktop->static_fields->_OnApplicationLostFocus_k__BackingField
  ;
code_?:
  if (pUVar2 != (UnityAction *)0x0) {
    ppMStack_1 = (pUVar2->fields)._._.method;
    puStack_3 = (pUVar2->fields)._._.method_code;
    (*(pUVar2->fields)._._.invoke_impl)();
    return;
  }
  ppMStack_1 = (MVGameControllerDesktop__Class **)&stack0xfffffffc;
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_OnDestroy
               (MVGameControllerDesktop *this,MethodInfo *method)

{
  MVGameControllerBase::MVGameControllerBase_OnDestroy
            ((MVGameControllerBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerDesktop->static_fields->_OnApplicationLostFocus_k__BackingField =
       (UnityAction *)0x0;
  func_?(TypeInfo__MVGameControllerDesktop->static_fields,&stack0xfffffffc,&UNK_?);
  return;
}


/* Void RegisterAvaterEditModeController(DesktopAvatarEditModeController) */

void Assembly-CSharp.dll::MVGameControllerDesktop::
     MVGameControllerDesktop_RegisterAvaterEditModeController
               (DesktopAvatarEditModeController *avatarEditModeController,MethodInfo *method)

{
  pMVar1 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
  if (pMVar1 != (MVGameControllerDesktop *)0x0) {
    (pMVar1->fields)._.modeController = (ModeControllerBase *)avatarEditModeController;
    func_?();
    return;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RegisterEditModeController(DesktopEditModeController) */

void Assembly-CSharp.dll::MVGameControllerDesktop::
     MVGameControllerDesktop_RegisterEditModeController
               (DesktopEditModeController *editModeController,MethodInfo *method)

{
  pMVar1 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
  if (pMVar1 != (MVGameControllerDesktop *)0x0) {
    (pMVar1->fields)._.modeController = (ModeControllerBase *)editModeController;
    func_?(&(pMVar1->fields)._.modeController,editModeController);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField =
         (IEditModeUI *)editModeController;
    func_?(&TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField,
                    editModeController);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RegisterPlayModeController(DesktopPlayModeController) */

void Assembly-CSharp.dll::MVGameControllerDesktop::
     MVGameControllerDesktop_RegisterPlayModeController
               (DesktopPlayModeController *playModeController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DesktopEditModeController);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
  if ((playModeController != (DesktopPlayModeController *)0x0) &&
     (pIVar2 = (playModeController->fields).lockCursorManager,
     pMVar1 != (MVGameControllerDesktop *)0x0)) {
    (pMVar1->fields).lockCursorManager = pIVar2;
    func_?(&(pMVar1->fields).lockCursorManager,pIVar2);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField =
         (IPlayModeUI *)playModeController;
    func_?(&TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField,
                    playModeController);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar3 != (GameSessionData *)0x0) {
      if ((pGVar3->fields).gameMode == 1) {
        pMVar1 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
        if (pMVar1 != (MVGameControllerDesktop *)0x0) {
          (pMVar1->fields)._.modeController = (ModeControllerBase *)playModeController;
          func_?(&(pMVar1->fields)._.modeController,playModeController);
          return;
        }
      }
      else {
        pMVar1 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
        if (pMVar1 != (MVGameControllerDesktop *)0x0) {
          this = (DesktopEditModeController *)(pMVar1->fields)._.modeController;
          unaff_EDI = TypeInfo__DesktopEditModeController;
          if (this != (DesktopEditModeController *)0x0) {
            if (((TypeInfo__DesktopEditModeController->_1).typeHierarchyDepth <=
                 (this->klass->_1).typeHierarchyDepth) &&
               ((this->klass->_1).typeHierarchy
                [(TypeInfo__DesktopEditModeController->_1).typeHierarchyDepth - 1] ==
                (Il2CppClass *)TypeInfo__DesktopEditModeController)) {
              DesktopEditModeController::DesktopEditModeController_RegisterPlayModeController
                        (this,playModeController,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
  this = extraout_EDX;
code_?:
  func_?(this,unaff_EDI);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_Start
               (MVGameControllerDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FullScreenController);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.textureIntegrityChecker;
  if (this_00 != (TextureIntegrityChecker *)0x0) {
    AntiHack::TextureIntegrityChecker::TextureIntegrityChecker_Initialize(this_00,(MethodInfo *)0x0)
    ;
    bVar1 = System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[System::
            Single,System::Object]::
            SortedList_2_TKey_TValue_ValueList_System_Single_System_Object__System_Collections_ICollection_get_IsSynchronized
                      ((SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ *)0x0,
                       unaff_ESI);
    if ((bVar1 != 0) || ((this->fields)._.koGaMaSettings != (KoGaMaSettingsContainer *)0x0)) {
      (*(this->klass->vtable).InitStandAlone.methodPtr)(this);
      if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      FullScreenController::FullScreenController_set_FullScreen(0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                (0x3ac,0x1e2,0,(MethodInfo *)0x0);
      FullScreenController::FullScreenController_Init(0x3ac,0x1e2,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UnregisterEditModeController() */

void Assembly-CSharp.dll::MVGameControllerDesktop::
     MVGameControllerDesktop_UnregisterEditModeController(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pMVar2 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
    if (pMVar2 == (MVGameControllerDesktop *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pMVar2->fields)._.modeController = (ModeControllerBase *)0x0;
    ppMStack4 = (MVGameControllerBase__Class **)0x0;
    func_?();
    if (cRam_? == '\0') {
      ppMStack4 = &TypeInfo__MVGameControllerBase;
      func_?();
      cRam_? = '\x01';
    }
    ppMStack4 = (MVGameControllerBase__Class **)0x0;
    TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField = (IEditModeUI *)0x0;
    func_?();
  }
  return;
}


/* Void UnregisterPlayModeController() */

void Assembly-CSharp.dll::MVGameControllerDesktop::
     MVGameControllerDesktop_UnregisterPlayModeController(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField = (IPlayModeUI *)0x0;
  func_?(&TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField,0);
  return;
}


/* Void UpdateInternal() */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_UpdateInternal
               (MVGameControllerDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BackButtonManager);
    func_?(&TypeInfo__LevelingManager);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField == 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField = 1;
    this_00 = (this->fields)._.materialLoader;
    if (this_00 != (MaterialLoader *)0x0) {
      MaterialLoader::MaterialLoader_Initialize(this_00,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._.modeController;
      if (pMVar1 != (ModeControllerBase *)0x0) {
        (*(pMVar1->klass->vtable).Initialize.methodPtr)
                  (pMVar1,(pMVar1->klass->vtable).Initialize.method);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar2 != (MVGameControllerBase *)0x0) &&
           (this_01 = (pMVar2->fields).game, this_01 != (MVNetworkGame *)0x0)) {
          pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
          if (pMVar3 != (MVLocalPlayer *)0x0) {
            profileID = (pMVar3->fields)._._ProfileID_k__BackingField;
            if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__LevelingManager);
            }
            LevelingManager::LevelingManager_Initialize(profileID,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
code_?:
  if ((TypeInfo__BackButtonManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BackButtonManager);
  }
  BackButtonManager::BackButtonManager_Update((MethodInfo *)0x0);
  return;
}


/* MVGameControllerDesktop() */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop__ctor
               (MVGameControllerDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AdIntegration__InHouse__InHouseAdManager);
    cRam_? = '\x01';
  }
  (this->fields).applicationHasFocus = 1;
  this_00 = (InHouseAdManager *)func_?(TypeInfo__AdIntegration__InHouse__InHouseAdManager);
  if (this_00 != (InHouseAdManager *)0x0) {
    AdIntegration::InHouse::InHouseAdManager::InHouseAdManager__ctor(this_00,(MethodInfo *)0x0);
    (this->fields).adManager = (IAdManager *)this_00;
    func_?(&(this->fields).adManager,this_00);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__FlagDebriefingControl);
      func_?(&TypeInfo__GoldRewardManager);
      func_?(&TypeInfo__SkinnedMeshOptimizeManager);
      cRam_? = '\x01';
    }
    this_01 = (SkinnedMeshOptimizeManager *)func_?(TypeInfo__SkinnedMeshOptimizeManager);
    if (this_01 != (SkinnedMeshOptimizeManager *)0x0) {
      SkinnedMeshOptimizeManager::SkinnedMeshOptimizeManager__ctor(this_01,(MethodInfo *)0x0);
      (this->fields)._.skinnedMeshOptimizeManager = this_01;
      func_?(&(this->fields)._.skinnedMeshOptimizeManager,this_01);
      this_02 = (FlagDebriefingControl *)func_?(TypeInfo__FlagDebriefingControl);
      if (this_02 != (FlagDebriefingControl *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
        TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)this_02,(MethodInfo *)0x0);
        (this->fields)._.flagDebriefingControl = this_02;
        func_?(&(this->fields)._.flagDebriefingControl,this_02);
        this_03 = (GoldRewardManager *)func_?(TypeInfo__GoldRewardManager);
        if (this_03 != (GoldRewardManager *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
          TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)this_03,(MethodInfo *)0x0);
          (this->fields)._.goldRewardManager = this_03;
          func_?(&(this->fields)._.goldRewardManager,this_03);
          (this->fields)._.reAuthTestTries = 3;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
                    ((Transform *)this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* MVGameControllerDesktop get_Instance() */

MVGameControllerDesktop *
Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_get_Instance
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&TypeInfo__MVGameControllerDesktop);
    cRam_? = '\x01';
  }
  pMVar1 = (MVGameControllerDesktop *)TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 == (MVGameControllerDesktop *)0x0) {
    return (MVGameControllerDesktop *)0x0;
  }
  if (((TypeInfo__MVGameControllerDesktop->_1).typeHierarchyDepth <=
       (((MVGameControllerBase__Class *)pMVar1->klass)->_1).typeHierarchyDepth) &&
     ((((MVGameControllerBase__Class *)pMVar1->klass)->_1).typeHierarchy
      [(TypeInfo__MVGameControllerDesktop->_1).typeHierarchyDepth - 1] ==
      (Il2CppClass *)TypeInfo__MVGameControllerDesktop)) {
    return pMVar1;
  }
  func_?(pMVar1,TypeInfo__MVGameControllerDesktop);
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVGameControllerDesktop *)(*pcVar2)();
  return pMVar1;
}


/* Boolean get_IsCursorLock() */

bool Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
    return 0;
  }
  pMVar1 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
  if ((pMVar1 != (MVGameControllerDesktop *)0x0) &&
     ((pMVar1->fields).lockCursorManager != (ILockCursorManager *)0x0)) {
    puStack_2 = (undefined *)0x2;
    bVar3 = func_?();
    return bVar3;
  }
  uVar4 = func_?(&puStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  bVar3 = (*pcVar5)();
  return bVar3;
}


/* Boolean get_IsPlayingInternal() */

bool Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_get_IsPlayingInternal
               (MVGameControllerDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields)._joinState != 3) {
      return 0;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar2 != (GameSessionData *)0x0) {
      if ((pGVar2->fields).gameMode == 1) {
        return 1;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar2 != (GameSessionData *)0x0) {
        if ((pGVar2->fields).gameMode != 0) {
          return 0;
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
            (IEditModeUI *)0x0) {
          pIStack_3 = TypeInfo__IEditModeUI;
          uStack_4 = 1;
          bVar5 = func_?();
          return bVar5;
        }
      }
    }
  }
  uVar6 = func_?(&uStack_4);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
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
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pIVar5 = (ILockCursorManager *)(*pcVar4)();
  return pIVar5;
}


/* UnityAction get_OnApplicationLostFocus() */

UnityAction *
Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_get_OnApplicationLostFocus
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerDesktop);
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
    func_?(&TypeInfo__MVGameControllerDesktop);
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
    func_?(&TypeInfo__MVGameControllerDesktop);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerDesktop->static_fields->_OnApplicationLostFocus_k__BackingField = value;
  func_?(TypeInfo__MVGameControllerDesktop->static_fields,value);
  return;
}


/* Void set_OnApplicationRegainedFocus(UnityAction) */

void Assembly-CSharp.dll::MVGameControllerDesktop::
     MVGameControllerDesktop_set_OnApplicationRegainedFocus(UnityAction *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerDesktop);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerDesktop->static_fields->_OnApplicationRegainedFocus_k__BackingField =
       value;
  func_?(&TypeInfo__MVGameControllerDesktop->static_fields->
                   _OnApplicationRegainedFocus_k__BackingField,unaff_EBP);
  return;
}

