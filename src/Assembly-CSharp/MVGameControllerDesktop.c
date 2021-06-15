
/* Void CleanUp() */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_CleanUp
               (MVGameControllerDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
            (StringLiteral_Screenmanager_Is_Fullscreen_mode,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
            (StringLiteral_Screenmanager_Resolution_Height,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_DeleteKey
            (StringLiteral_Screenmanager_Resolution_Width,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_Cleanup(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
        (IPlayModeUI *)0x0) {
code_?:
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_01 != (MainCameraManager *)0x0) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_01,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,0,(MethodInfo *)0x0);
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pGVar1,(MethodInfo *)0x0);
          if (pGVar1 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,0,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__GameLoader->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__GameLoader->_1).cctor_started == 0)) {
              func_?();
            }
            GameLoader::GameLoader_UnloadGame((MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar2 = (Component_1 *)
               TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
      if (pCVar2 != (Component_1 *)0x0) {
        bVar3 = (TypeInfo__UnityEngine__MonoBehaviour->_1).naturalAligment;
        pIVar4 = (IPlayModeUI__Class *)pCVar2->klass;
        bVar5 = (pIVar4->_1).naturalAligment;
        if ((bVar5 < bVar3) ||
           ((pIVar4->_1).typeHierarchy[bVar3 - 1] !=
            (Il2CppClass *)TypeInfo__UnityEngine__MonoBehaviour)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        pCVar7 = (Component_1 *)0x0;
        if (bVar6) {
          pCVar7 = pCVar2;
        }
        if (pCVar7 == (Component_1 *)0x0) goto code_?;
        if ((bVar5 < bVar3) ||
           ((pIVar4->_1).typeHierarchy[bVar3 - 1] !=
            (Il2CppClass *)TypeInfo__UnityEngine__MonoBehaviour)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        pCVar7 = (Component_1 *)0x0;
        if (bVar6) {
          pCVar7 = pCVar2;
        }
        if (pCVar7 == (Component_1 *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           (pCVar7,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,0,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HandleApplicationQuit(QuitBaseCallback) */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_HandleApplicationQuit
               (MVGameControllerDesktop *this,QuitBaseCallback *quitBaseCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (quitBaseCallback != (QuitBaseCallback *)0x0) {
    func_?(0,TypeInfo__QuitBaseCallback,quitBaseCallback);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Application::Application_Quit_1((MethodInfo *)0x0);
  return;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_LateUpdate
               (MVGameControllerDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_LateUpdate((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      this_01 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)this_00,(MethodInfo *)0x0);
      if (this_01 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
        this_02 = (MVWorldInventory *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (this_01,(MethodInfo *)0x0);
        if (this_02 != (MVWorldInventory *)0x0) {
          MVWorldInventory::MVWorldInventory_LateUpdate(this_02,(MethodInfo *)0x0);
          this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if (this_03 != (MainCameraManager *)0x0) {
            MainCameraManager::MainCameraManager_UpdateCamera(this_03,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
code_?:
  if ((((uint)(TypeInfo__FullScreenController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FullScreenController->_1).cctor_started == 0)) {
    func_?();
  }
  FullScreenController::FullScreenController_LateUpdate((MethodInfo *)0x0);
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
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerDesktop->static_fields->
        _OnApplicationRegainedFocus_k__BackingField != (UnityAction *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_00 = TypeInfo__MVGameControllerDesktop->static_fields->
                _OnApplicationRegainedFocus_k__BackingField;
      goto code_?;
    }
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerDesktop->static_fields->_OnApplicationLostFocus_k__BackingField ==
      (UnityAction *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = TypeInfo__MVGameControllerDesktop->static_fields->
            _OnApplicationLostFocus_k__BackingField;
code_?:
  if (this_00 != (UnityAction *)0x0) {
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              ((AvatarMotor_OnActiveBounceDelegate *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  bVar1 = cRam_? == '\0';
  TypeInfo__MVGameControllerDesktop->static_fields->_OnApplicationLostFocus_k__BackingField =
       (UnityAction *)0x0;
  if (bVar1) {
    func_?();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerDesktop->static_fields->_OnApplicationRegainedFocus_k__BackingField =
       (UnityAction *)0x0;
  return;
}


/* Void RegisterAvaterEditModeController(DesktopAvatarEditModeController) */

void Assembly-CSharp.dll::MVGameControllerDesktop::
     MVGameControllerDesktop_RegisterAvaterEditModeController
               (DesktopAvatarEditModeController *avatarEditModeController,MethodInfo *method)

{
  pMVar1 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
  if (pMVar1 != (MVGameControllerDesktop *)0x0) {
    (pMVar1->fields).modeController = (ModeControllerBase *)avatarEditModeController;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RegisterEditModeController(DesktopEditModeController) */

void Assembly-CSharp.dll::MVGameControllerDesktop::
     MVGameControllerDesktop_RegisterEditModeController
               (DesktopEditModeController *editModeController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
  if (pMVar1 != (MVGameControllerDesktop *)0x0) {
    (pMVar1->fields).modeController = (ModeControllerBase *)editModeController;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField =
         (IEditModeUI *)editModeController;
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
  if (playModeController != (DesktopPlayModeController *)0x0) {
    pIVar2 = (ILockCursorManager *)
             MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)playModeController,
                        (MethodInfo *)0x0);
    if (pMVar1 != (MVGameControllerDesktop *)0x0) {
      (pMVar1->fields).lockCursorManager = pIVar2;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField =
           (IPlayModeUI *)playModeController;
      MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      pMVar1 = MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
      if (MVar3 == MVGameMode__Enum_Play) {
        if (pMVar1 != (MVGameControllerDesktop *)0x0) {
          (pMVar1->fields).modeController = (ModeControllerBase *)playModeController;
          return;
        }
      }
      else if (pMVar1 != (MVGameControllerDesktop *)0x0) {
        pDVar4 = (DesktopEditModeController *)(pMVar1->fields).modeController;
        if (pDVar4 != (DesktopEditModeController *)0x0) {
          bVar5 = (TypeInfo__DesktopEditModeController->_1).naturalAligment;
          pDVar6 = pDVar4->klass;
          if (((pDVar6->_1).naturalAligment < bVar5) ||
             (bVar7 = true,
             (pDVar6->_1).typeHierarchy[bVar5 - 1] !=
             (Il2CppClass *)TypeInfo__DesktopEditModeController)) {
            bVar7 = false;
          }
          pDVar8 = (DesktopEditModeController *)0x0;
          if (bVar7) {
            pDVar8 = pDVar4;
          }
          pDVar9 = TypeInfo__DesktopEditModeController;
          if (pDVar8 != (DesktopEditModeController *)0x0) {
            if (((pDVar6->_1).naturalAligment < bVar5) ||
               ((pDVar6->_1).typeHierarchy[bVar5 - 1] !=
                (Il2CppClass *)TypeInfo__DesktopEditModeController)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            pDVar8 = (DesktopEditModeController *)0x0;
            if (bVar7) {
              pDVar8 = pDVar4;
            }
            if (pDVar8 != (DesktopEditModeController *)0x0) {
              DesktopEditModeController::DesktopEditModeController_RegisterPlayModeController
                        (pDVar8,playModeController,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  func_?(0);
  pDVar4 = extraout_ECX;
  pDVar9 = extraout_EDX;
code_?:
  func_?(pDVar4,pDVar9);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_Start
               (MVGameControllerDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                    ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0,unaff_ESI);
  if (bVar1 == 0) {
    this_00 = (this->fields)._.koGaMaSettings;
    if (this_00 == (KoGaMaSettingsContainer *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar1 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton::
            CrossPlatformInputManager_VirtualButton_get_matchWithInputManager
                      ((CrossPlatformInputManager_VirtualButton *)this_00,(MethodInfo *)0x0);
  }
  else {
    bVar1 = 1;
  }
  (*(code *)(this->klass->vtable).InitStandAlone.method)(this,bVar1);
  if ((((uint)(TypeInfo__FullScreenController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FullScreenController->_1).cctor_started == 0)) {
    func_?();
  }
  FullScreenController::FullScreenController_set_FullScreen(0,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
            (0x3ac,0x1e2,0,(MethodInfo *)0x0);
  FullScreenController::FullScreenController_Init(0x3ac,0x1e2,(MethodInfo *)0x0);
  return;
}


/* Void UnregisterEditModeController() */

void Assembly-CSharp.dll::MVGameControllerDesktop::
     MVGameControllerDesktop_UnregisterEditModeController(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  x = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    (pMVar2->fields).modeController = (ModeControllerBase *)0x0;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVGameControllerBase::MVGameControllerBase_set_EditModeUI((IEditModeUI *)0x0,(MethodInfo *)0x0);
  }
  return;
}


/* Void UnregisterPlayModeController() */

void Assembly-CSharp.dll::MVGameControllerDesktop::
     MVGameControllerDesktop_UnregisterPlayModeController(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField = (IPlayModeUI *)0x0;
  return;
}


/* Void UpdateInternal() */

void Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_UpdateInternal
               (MVGameControllerDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField == 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField = 1;
    this_00 = (this->fields)._.materialLoader;
    if (this_00 != (MaterialLoader *)0x0) {
      MaterialLoader::MaterialLoader_Initialize(this_00,(MethodInfo *)0x0);
      pMVar1 = (this->fields).modeController;
      if (pMVar1 != (ModeControllerBase *)0x0) {
        (*(code *)(pMVar1->klass->vtable).Initialize.method)(pMVar1,pMVar1->klass[1]._0.image);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_01 != (MVNetworkGame *)0x0) {
          this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
          if (this_02 != (MVLocalPlayer *)0x0) {
            profileID = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                        TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                        TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                  ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_02,
                                   (MethodInfo *)0x0);
            if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
              func_?(TypeInfo__LevelingManager);
            }
            LevelingManager::LevelingManager_Initialize((int32_t)profileID,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
code_?:
  if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).applicationHasFocus = 1;
  this_00 = (DummyAdManager *)
            func_?(TypeInfo__Assets__Scripts__AdIntegration__Dummy__DummyAdManager);
  Assets::Scripts::AdIntegration::Dummy::DummyAdManager::DummyAdManager__ctor
            (this_00,(MethodInfo *)0x0);
  (this->fields).adManager = (IAdManager *)this_00;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (SkinnedMeshOptimizeManager *)func_?(TypeInfo__SkinnedMeshOptimizeManager);
  SkinnedMeshOptimizeManager::SkinnedMeshOptimizeManager__ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._.skinnedMeshOptimizeManager = this_01;
  this_02 = (FlagDebriefingControl *)func_?(TypeInfo__FlagDebriefingControl);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this_02,(MethodInfo *)0x0);
  (this->fields)._.flagDebriefingControl = this_02;
  this_03 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            func_?(TypeInfo__GoldRewardManager);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_03,(MethodInfo *)0x0);
  (this->fields)._.goldRewardManager = (GoldRewardManager *)this_03;
  (this->fields)._.reAuthTestTries = 3;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* MVGameControllerDesktop get_Instance() */

MVGameControllerDesktop *
Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_get_Instance
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = (MVGameControllerDesktop *)TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 == (MVGameControllerDesktop *)0x0) {
    return (MVGameControllerDesktop *)0x0;
  }
  bVar2 = (TypeInfo__MVGameControllerDesktop->_1).naturalAligment;
  if (((((MVGameControllerBase__Class *)pMVar1->klass)->_1).naturalAligment < bVar2) ||
     ((((MVGameControllerBase__Class *)pMVar1->klass)->_1).typeHierarchy[bVar2 - 1] !=
      (Il2CppClass *)TypeInfo__MVGameControllerDesktop)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  pMVar4 = (MVGameControllerDesktop *)0x0;
  if (bVar3) {
    pMVar4 = pMVar1;
  }
  if (pMVar4 != (MVGameControllerDesktop *)0x0) {
    return pMVar4;
  }
  func_?(pMVar1,TypeInfo__MVGameControllerDesktop);
  pcVar5 = (code *)swi(3);
  pMVar1 = (MVGameControllerDesktop *)(*pcVar5)();
  return pMVar1;
}


/* Boolean get_IsPlayingInternal() */

bool Assembly-CSharp.dll::MVGameControllerDesktop::MVGameControllerDesktop_get_IsPlayingInternal
               (MVGameControllerDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
  if (MVar1 != MVJoinState__Enum_Playing) {
    return 0;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar2 != (GameSessionData *)0x0) {
    if ((pGVar2->fields).gameMode == 1) {
      return 1;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
    if (pGVar2 != (GameSessionData *)0x0) {
      if ((pGVar2->fields).gameMode != 0) {
        return 0;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
          (IEditModeUI *)0x0) {
        bVar3 = func_?(1,TypeInfo__IEditModeUI);
        return bVar3;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
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
  func_?();
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
    func_?(_UNK_?);
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
    func_?(_UNK_?);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerDesktop->static_fields->_OnApplicationLostFocus_k__BackingField = value;
  return;
}


/* Void set_OnApplicationRegainedFocus(UnityAction) */

void Assembly-CSharp.dll::MVGameControllerDesktop::
     MVGameControllerDesktop_set_OnApplicationRegainedFocus(UnityAction *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerDesktop->static_fields->_OnApplicationRegainedFocus_k__BackingField =
       value;
  return;
}

