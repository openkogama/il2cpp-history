
/* Void Awake() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_Awake
               (MainCameraManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (MainCameraManager__Class *)
           UnityEngine.AudioModule.dll::UnityEngine::AudioListener::AudioListener_get_volume
                     ((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
    pMVar1 = TypeInfo__MainCameraManager;
    func_?();
  }
  bVar2 = cRam_? == '\0';
  TypeInfo__MainCameraManager->static_fields->baseVolume = (float)pMVar1;
  if (bVar2) {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__MainCameraManager);
  }
  TypeInfo__MainCameraManager->static_fields->mute = 0;
  if (TypeInfo__MainCameraManager->static_fields->mute == 0) {
    if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__MainCameraManager);
    }
    value = TypeInfo__MainCameraManager->static_fields->baseVolume;
  }
  else {
    value = 0.0;
  }
  UnityEngine.AudioModule.dll::UnityEngine::AudioListener::AudioListener_set_volume
            (value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__MainCameraManager->static_fields->OnMuteChange != (Action_1_Boolean_ *)0x0) {
    if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = (Action_1_UIPushOption_ *)TypeInfo__MainCameraManager->static_fields->OnMuteChange;
    if (this_00 == (Action_1_UIPushOption_ *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,(uint)TypeInfo__MainCameraManager->static_fields->mute,
               MethodInfo__System__Action<bool>__Invoke_bool_);
  }
  commandComponents =
       (String__Array *)
       UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                 ((Component_1 *)this,(MethodInfo *)0x0);
  this_01 = (TextCommand_Command *)func_?(TypeInfo__ProtectedTransform);
  TextCommand+Command::TextCommand_Command__ctor(this_01,commandComponents,(MethodInfo *)0x0);
  (this->fields).protectedTransform = (ProtectedTransform *)this_01;
  return;
}


/* Void CancelTransitionCam() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_CancelTransitionCam
               (MainCameraManager *this,MethodInfo *method)

{
  pTVar1 = (this->fields).transitionCamera;
  if (pTVar1 != (TransitionCamera *)0x0) {
    (pTVar1->fields).transitionPercentage = 1.0;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ICameraSettings GetSettings(MVGameType) */

ICameraSettings *
Assembly-CSharp.dll::MainCameraManager::MainCameraManager_GetSettings
          (MVGameType__Enum gameType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__MainCameraManager);
  }
  this = TypeInfo__MainCameraManager->static_fields->cameraSettings;
  if (this != (Dictionary_2_MV_Common_MVGameType_ICameraSettings_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::MVGameType,System
             ::Object]::Dictionary_2_MV_Common_MVGameType_System_Object__get_Item
                       ((Dictionary_2_MV_Common_MVGameType_System_Object_ *)this,gameType,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__get_Item_MV__Common__MVGameType_
                       );
    return (ICameraSettings *)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pIVar3 = (ICameraSettings *)(*pcVar2)();
  return pIVar3;
}


/* Boolean HasSetting(MVGameType) */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_HasSetting
               (MVGameType__Enum gameType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__MainCameraManager);
  }
  this = TypeInfo__MainCameraManager->static_fields->cameraSettings;
  if (this != (Dictionary_2_MV_Common_MVGameType_ICameraSettings_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::MVGameType,System::
            Object]::Dictionary_2_MV_Common_MVGameType_System_Object__ContainsKey
                      ((Dictionary_2_MV_Common_MVGameType_System_Object_ *)this,gameType,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__ContainsKey_MV__Common__MVGameType_
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void IgnoreInputTypes(IgnoreInputTypes) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_IgnoreInputTypes
               (MainCameraManager *this,IgnoreInputTypes__Enum inputTypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).onIgnoreInputTypes;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    e = (InitializedGameQueryDataEventArgs *)func_?(TypeInfo__OnIgnoreInputTypesArgs);
    OnIgnoreInputTypesArgs::OnIgnoreInputTypesArgs__ctor
              ((OnIgnoreInputTypesArgs *)e,inputTypes,(MethodInfo *)0x0);
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,e,
               MethodInfo__System__EventHandler<OnIgnoreInputTypesArgs>__Invoke_System__Object__OnIgnoreInputTypesArgs_
              );
  }
  return;
}


/* Void Init() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_Init
               (MainCameraManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).mainCamera;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UXElement,(MethodInfo *)0x0);
  uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Preview,(MethodInfo *)0x0);
  uVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Hidden,(MethodInfo *)0x0);
  uVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UXElementSecondary,(MethodInfo *)0x0);
  if (pCVar1 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              ((Camera *)0x0,
               ~(1 << ((byte)iVar2 & 0x1f) | 1 << (uVar3 & 0x1f) | 1 << (uVar4 & 0x1f) |
                1 << (uVar5 & 0x1f)),(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVar6 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar6 == MVGameMode__Enum_Play) {
      pCVar1 = (this->fields).mainCamera;
      if (pCVar1 == (Camera *)0x0) goto code_?;
      uVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                        (pCVar1,(MethodInfo *)0x0);
      uVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Logic,(MethodInfo *)0x0);
      uVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Logic,(MethodInfo *)0x0);
      if ((uVar4 & uVar3) == uVar5) {
        pCVar1 = (this->fields).mainCamera;
        if (pCVar1 == (Camera *)0x0) goto code_?;
        iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (pCVar1,(MethodInfo *)0x0);
        iVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                  (pCVar1,iVar2 - (1 << ((byte)iVar7 & 0x1f)),(MethodInfo *)0x0);
      }
    }
    pCVar1 = (this->fields).mainCamera;
    if (pCVar1 != (Camera *)0x0) {
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                        (pCVar1,(MethodInfo *)0x0);
      (this->fields).cullingMask = iVar2;
      return;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean IsCameraControllerSet() */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_IsCameraControllerSet
               (MainCameraManager *this,MethodInfo *method)

{
  return (this->fields).cameraController != (MVCameraController *)0x0;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_OnDestroy
               (MainCameraManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__MainCameraManager);
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)TypeInfo__MainCameraManager->static_fields->cameraSettings;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Clear__
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PlayPlingSound() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_PlayPlingSound
               (MainCameraManager *this,MethodInfo *method)

{
  pAVar1 = (this->fields).plingSound;
  if (pAVar1 == (AudioSource *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?,0,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pAVar1,0,0);
  return;
}


/* Void RegisterCameraWithSettings(MVGameType, ICameraSettings) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_RegisterCameraWithSettings
               (MVGameType__Enum gameType,ICameraSettings *cameraSettings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__MainCameraManager);
  }
  this = TypeInfo__MainCameraManager->static_fields->cameraSettings;
  if (this != (Dictionary_2_MV_Common_MVGameType_ICameraSettings_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::MVGameType,System::Object]
    ::Dictionary_2_MV_Common_MVGameType_System_Object__Add
              ((Dictionary_2_MV_Common_MVGameType_System_Object_ *)this,gameType,
               (Object *)cameraSettings,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Add_MV__Common__MVGameType__ICameraSettings_
              );
    if (TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded != (Action *)0x0) {
      if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
        func_?();
      }
      this_00 = (JumpState_OnWallJumpDelegate *)
                TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded;
      if (this_00 == (JumpState_OnWallJumpDelegate *)0x0) goto code_?;
      JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RenderLogic(Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_RenderLogic
               (MainCameraManager *this,bool renderLogic,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).mainCamera;
  if (renderLogic == 0) {
    if (this_00 == (Camera *)0x0) {
code_?:
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                      (this_00,(MethodInfo *)0x0);
    uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Logic,(MethodInfo *)0x0);
    uVar2 = uVar2 & ~(1 << (uVar3 & 0x1f));
  }
  else {
    if (this_00 == (Camera *)0x0) goto code_?;
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                      (this_00,(MethodInfo *)0x0);
    uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Logic,(MethodInfo *)0x0);
    uVar2 = uVar2 | 1 << (uVar3 & 0x1f);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
            (this_00,uVar2,(MethodInfo *)0x0);
  (this->fields).isLogicRendered = renderLogic;
  return;
}


/* Void SetCameraController(MVCameraController) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_SetCameraController
               (MainCameraManager *this,MVCameraController *cameraController,MethodInfo *method)

{
  this_00 = (this->fields).cameraController;
  if (this_00 != (MVCameraController *)0x0) {
    MVCameraController::MVCameraController_Deactivate(this_00,(MethodInfo *)0x0);
  }
  (this->fields).cameraController = cameraController;
  if (cameraController != (MVCameraController *)0x0) {
    MVCameraController::MVCameraController_Activate(cameraController,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StartTransitionCam(Single, Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_StartTransitionCam
               (MainCameraManager *this,float transitionTime,bool soft,MethodInfo *method)

{
  this_00 = (this->fields).transitionCamera;
  this_01 = (this->fields).cameraController;
  if (this_01 != (MVCameraController *)0x0) {
    this_02 = MVCameraController::MVCameraController_get_CurCamera(this_01,(MethodInfo *)0x0);
    if (this_02 != (MVCameraBase *)0x0) {
      targetCameraTransform =
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this_02,(MethodInfo *)0x0);
      if (this_00 != (TransitionCamera *)0x0) {
        TransitionCamera::TransitionCamera_InitTransition
                  (this_00,targetCameraTransform,transitionTime,soft,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UnRegisterCameraWithSettings(MVGameType) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_UnRegisterCameraWithSettings
               (MVGameType__Enum gameType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__MainCameraManager);
  }
  this = TypeInfo__MainCameraManager->static_fields->cameraSettings;
  if (this != (Dictionary_2_MV_Common_MVGameType_ICameraSettings_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::MVGameType,System::Object]
    ::Dictionary_2_MV_Common_MVGameType_System_Object__Remove
              ((Dictionary_2_MV_Common_MVGameType_System_Object_ *)this,gameType,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Remove_MV__Common__MVGameType_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateCamera() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_UpdateCamera
               (MainCameraManager *this,MethodInfo *method)

{
  this_00 = (this->fields).cameraController;
  if (this_00 != (MVCameraController *)0x0) {
    MVCameraController::MVCameraController_UpdateCamera
              (this_00,(this->fields).protectedTransform,(MethodInfo *)0x0);
    pTVar1 = (this->fields).transitionCamera;
    if (pTVar1 != (TransitionCamera *)0x0) {
      (*(code *)(pTVar1->klass->vtable).UpdateCamera.method)
                (pTVar1,(this->fields).cameraController,(this->fields).protectedTransform);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MainCameraManager() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_MV_Common_MVGameType_ICameraSettings_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Dictionary__
            );
  TypeInfo__MainCameraManager->static_fields->cameraSettings = this;
  pMVar1 = TypeInfo__MainCameraManager->static_fields;
  pMVar1->baseVolume = 0.0;
  pMVar1->mute = 0;
  return;
}


/* Void add_onIgnoreInputTypes(EventHandler`1[OnIgnoreInputTypesArgs]) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_add_onIgnoreInputTypes
               (MainCameraManager *this,EventHandler_1_OnIgnoreInputTypesArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).onIgnoreInputTypes;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_OnIgnoreInputTypesArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* MVCameraBase get_CurrentCamera() */

MVCameraBase *
Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_CurrentCamera
          (MainCameraManager *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraController;
  if (pMVar1 == (MVCameraController *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    pMVar3 = (MVCameraBase *)(*pcVar2)();
    return pMVar3;
  }
  pMVar4 = (pMVar1->fields).cameraStack;
  if (pMVar4 == (MVCameraController_CameraStack *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    pMVar3 = (MVCameraBase *)(*pcVar2)();
    return pMVar3;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar5 = (pMVar4->fields).activeCameras;
  if (pLVar5 != (List_1_MVCameraBase_ *)0x0) {
    pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5,
                        MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__);
    if (pOVar6 == (Object *)0x0) {
      return (MVCameraBase *)0x0;
    }
    pLVar5 = (pMVar4->fields).activeCameras;
    if (pLVar5 != (List_1_MVCameraBase_ *)0x0) {
      pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5,
                          MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__)
      ;
      pMVar3 = (MVCameraBase *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar5,
                          (int32_t)((int)&pOVar6[-1].monitor + 3),
                          MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                         );
      return pMVar3;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVCameraBase *)(*pcVar2)();
  return pMVar3;
}


/* Single get_FieldOfView() */

float Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_FieldOfView
                (MainCameraManager *this,MethodInfo *method)

{
  pCVar1 = (this->fields).mainCamera;
  if (pCVar1 == (Camera *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    fVar3 = (float10)(*pcVar2)();
    return (float)fVar3;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?,0,0);
    func_?(uVar4);
    pcVar2 = (code *)swi(3);
    fVar3 = (float10)(*pcVar2)();
    return (float)fVar3;
  }
  pcRam_? = pcVar2;
  fVar3 = (float10)(*pcRam_?)(pCVar1);
  return (float)fVar3;
}


/* Vector3 get_FireDirection() */

Vector3 * Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_FireDirection
                    (Vector3 *__return_storage_ptr__,MainCameraManager *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
    fVar2 = pVVar1->y;
    fVar3 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar4)();
  return pVVar1;
}


/* Vector3 get_FireOrigin() */

Vector3 * Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_FireOrigin
                    (Vector3 *__return_storage_ptr__,MainCameraManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffec,pTVar1,(MethodInfo *)0x0);
    fVar3 = pVVar2->z;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         ((Vector3 *)&puStack_4,pTVar1,(MethodInfo *)0x0);
      fVar5 = pVVar2->z;
      this_00 = (this->fields).cameraController;
      if (this_00 != (MVCameraController *)0x0) {
        fVar6 = 0.0;
        pMVar7 = MVCameraController::MVCameraController_get_CurCamera(this_00,(MethodInfo *)0x0);
        if (pMVar7 != (MVCameraBase *)0x0) {
          d = (Vector3__Class *)(pMVar7->fields).cameraRadius;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            d = TypeInfo__UnityEngine__Vector3;
            func_?();
          }
          pVVar2 = (Vector3 *)&puStack_4;
          a.y = (float)d;
          a.x = fVar6;
          a.z = fVar5;
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             (pVVar2,a,(float)d,(MethodInfo *)0x0);
          uVar9 = pVVar8->x;
          a_00.y = fVar6;
          a_00.x = (float)pVVar2;
          a_00.z = fVar3;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             ((Vector3 *)&puStack_4,a_00,*pVVar8,(MethodInfo *)0x0);
          fVar3 = pVVar2->z;
          *(undefined8 *)uVar9 = *(undefined8 *)pVVar2;
          *(float *)(uVar9 + 8) = fVar3;
          return (Vector3 *)uVar9;
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar10)();
  return pVVar2;
}


/* Boolean get_Mute() */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_Mute(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__MainCameraManager);
  }
  return TypeInfo__MainCameraManager->static_fields->mute;
}


/* Camera get_SecondaryCamera() */

Camera * Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_SecondaryCamera
                   (MainCameraManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).secondaryCamera;
  if (this_00 != (Transform *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this_00,
                        UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                       );
    return (Camera *)pMVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pCVar3 = (Camera *)(*pcVar2)();
  return pCVar3;
}


/* Camera get_TertiaryCamera() */

Camera * Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_TertiaryCamera
                   (MainCameraManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tertiaryCamera;
  if (this_00 != (Transform *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this_00,
                        UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                       );
    return (Camera *)pMVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pCVar3 = (Camera *)(*pcVar2)();
  return pCVar3;
}


/* Boolean get_TertiaryCameraActive() */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_TertiaryCameraActive
               (MainCameraManager *this,MethodInfo *method)

{
  this_00 = (this->fields).tertiaryCamera;
  if ((this_00 == (Transform *)0x0) ||
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0)) {
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0))
  {
    uVar4 = func_?(&UNK_?,0);
    func_?(uVar4);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pcRam_? = pcVar2;
  bVar3 = (*pcRam_?)();
  return bVar3;
}


/* Void remove_onIgnoreInputTypes(EventHandler`1[OnIgnoreInputTypesArgs]) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_remove_onIgnoreInputTypes
               (MainCameraManager *this,EventHandler_1_OnIgnoreInputTypesArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).onIgnoreInputTypes;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_OnIgnoreInputTypesArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void set_BlueModeEnabled(Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_BlueModeEnabled
               (MainCameraManager *this,bool value,MethodInfo *method)

{
  this_00 = (this->fields).secondaryCamera;
  (this->fields).blueModeEnabled = value;
  if (this_00 != (Transform *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_02 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_02,value,(MethodInfo *)0x0);
      this_01 = (this->fields).greyScaleEffect;
      if (this_01 != (GrayscaleEffect *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_01,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_CamMaskMode(MaskMode) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_CamMaskMode
               (MainCameraManager *this,MaskMode__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).maskMode = value;
  if (value == MaskMode__Enum_Default) {
    pCVar1 = (this->fields).mainCamera;
    if (pCVar1 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar1,(this->fields).cullingMask,(MethodInfo *)0x0);
      (this->fields).blueModeEnabled = 0;
      MainCameraManager_RenderLogic(this,(this->fields).isLogicRendered,(MethodInfo *)0x0);
      return;
    }
  }
  else if (value == MaskMode__Enum_AvatarLobbyFocus) {
    pCVar1 = (this->fields).mainCamera;
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
    if (pCVar1 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar1,1 << ((byte)iVar2 & 0x1f),(MethodInfo *)0x0);
      (this->fields).blueModeEnabled = 1;
      return;
    }
  }
  else {
    if (value != MaskMode__Enum_SkyBoxOnly) {
      return;
    }
    pCVar1 = (this->fields).mainCamera;
    if (pCVar1 != (Camera *)0x0) {
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)func_?(&UNK_?,unaff_EBP), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?,0,0);
        func_?(uVar4);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pCVar1,0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_FieldOfView(Single) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_FieldOfView
               (MainCameraManager *this,float value,MethodInfo *method)

{
  this_00 = (this->fields).mainCamera;
  if (this_00 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_IsLogicRendered(Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_IsLogicRendered
               (MainCameraManager *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).mainCamera;
  if (value == 0) {
    if (this_00 == (Camera *)0x0) {
code_?:
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                      (this_00,(MethodInfo *)0x0);
    uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Logic,(MethodInfo *)0x0);
    uVar2 = uVar2 & ~(1 << (uVar3 & 0x1f));
  }
  else {
    if (this_00 == (Camera *)0x0) goto code_?;
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                      (this_00,(MethodInfo *)0x0);
    uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Logic,(MethodInfo *)0x0);
    uVar2 = uVar2 | 1 << (uVar3 & 0x1f);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
            (this_00,uVar2,(MethodInfo *)0x0);
  (this->fields).isLogicRendered = value;
  return;
}


/* Void set_Mute(Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_Mute
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__MainCameraManager);
  }
  TypeInfo__MainCameraManager->static_fields->mute = value;
  if (TypeInfo__MainCameraManager->static_fields->mute == 0) {
    if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__MainCameraManager);
    }
    value_00 = TypeInfo__MainCameraManager->static_fields->baseVolume;
  }
  else {
    value_00 = 0.0;
  }
  UnityEngine.AudioModule.dll::UnityEngine::AudioListener::AudioListener_set_volume
            (value_00,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__MainCameraManager->static_fields->OnMuteChange != (Action_1_Boolean_ *)0x0) {
    if ((((uint)(TypeInfo__MainCameraManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MainCameraManager->_1).cctor_started == 0)) {
      func_?();
    }
    this = (Action_1_UIPushOption_ *)TypeInfo__MainCameraManager->static_fields->OnMuteChange;
    if (this == (Action_1_UIPushOption_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this,(uint)TypeInfo__MainCameraManager->static_fields->mute,
               MethodInfo__System__Action<bool>__Invoke_bool_);
  }
  return;
}


/* Void set_TertiaryCameraActive(Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_TertiaryCameraActive
               (MainCameraManager *this,bool value,MethodInfo *method)

{
  this_00 = (this->fields).tertiaryCamera;
  if ((this_00 == (Transform *)0x0) ||
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0)) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0))
  {
    uVar3 = func_?(&UNK_?,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(0);
  return;
}

