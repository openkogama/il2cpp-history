
/* Void ActivateCameraController() */

void Assembly-CSharp.dll::AvatarCamerasMobile::AvatarCamerasMobile_ActivateCameraController
               (AvatarCamerasMobile *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_SetCameraController
              (this_00,(this->fields).cameraController,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::AvatarCamerasMobile::AvatarCamerasMobile_Initialize
               (AvatarCamerasMobile *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).firstPersonMobileCamera;
  if (this_00 != (AndroidFirstPersonCamera *)0x0) {
    AvatarPickupOwner::AvatarPickupOwner_set_AdditionalIgnoreWOIDS
              ((AvatarPickupOwner *)this_00,(HashSet_1_System_Int32_ *)avatarLocal,(MethodInfo *)0x0
              );
    this_01 = (this->fields).thirdPersonMobileCamera;
    if (this_01 != (AndroidThirdPersonCamera *)0x0) {
      AndroidThirdPersonCamera::AndroidThirdPersonCamera_Initialize
                (this_01,avatarLocal,(MethodInfo *)0x0);
      this_02 = (this->fields).lobbyStateCamera;
      if (this_02 != (LobbyStateCamera *)0x0) {
        LobbyStateCamera::LobbyStateCamera_Initialize(this_02,avatarLocal,(MethodInfo *)0x0);
        this_03 = (this->fields).timeAttackFlagDebriefingCamera;
        if (this_03 != (TimeAttackFlagDebriefingCamera *)0x0) {
          AvatarPreviewer::AvatarPreviewer_set_PreviewGameObject
                    ((AvatarPreviewer *)this_03,(GameObject *)avatarLocal,(MethodInfo *)0x0);
          this_04 = (RuntimePrototypeCubeModel *)(this->fields).timeAttackFlagCountdownCamera;
          if (this_04 != (RuntimePrototypeCubeModel *)0x0) {
            RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeId
                      (this_04,(int32_t)avatarLocal,(MethodInfo *)0x0);
            this_05 = (this->fields).ghostCamera;
            if (this_05 != (GhostCamera *)0x0) {
              GhostCamera::GhostCamera_Initialize(this_05,avatarLocal,(MethodInfo *)0x0);
              this_06 = (DesktopEditModeController *)(this->fields).deadCamera;
              if (this_06 != (DesktopEditModeController *)0x0) {
                DesktopEditModeController::DesktopEditModeController_set_EditModeStateMachine
                          (this_06,(EditorStateMachine *)avatarLocal,(MethodInfo *)0x0);
                pAVar1 = (this->fields).avatarCamerasWrapper;
                if (pAVar1 != (AvatarCamerasWrapper *)0x0) {
                  AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                            (pAVar1,(MVCameraBase *)(this->fields).firstPersonMobileCamera,
                             (MethodInfo *)0x0);
                  pAVar1 = (this->fields).avatarCamerasWrapper;
                  if (pAVar1 != (AvatarCamerasWrapper *)0x0) {
                    AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                              (pAVar1,(MVCameraBase *)(this->fields).thirdPersonMobileCamera,
                               (MethodInfo *)0x0);
                    pAVar1 = (this->fields).avatarCamerasWrapper;
                    if (pAVar1 != (AvatarCamerasWrapper *)0x0) {
                      AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                                (pAVar1,(MVCameraBase *)(this->fields).lobbyStateCamera,
                                 (MethodInfo *)0x0);
                      pAVar1 = (this->fields).avatarCamerasWrapper;
                      if (pAVar1 != (AvatarCamerasWrapper *)0x0) {
                        AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                                  (pAVar1,(MVCameraBase *)
                                          (this->fields).timeAttackFlagDebriefingCamera,
                                   (MethodInfo *)0x0);
                        pAVar1 = (this->fields).avatarCamerasWrapper;
                        if (pAVar1 != (AvatarCamerasWrapper *)0x0) {
                          AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                                    (pAVar1,(MVCameraBase *)
                                            (this->fields).timeAttackFlagCountdownCamera,
                                     (MethodInfo *)0x0);
                          pAVar1 = (this->fields).avatarCamerasWrapper;
                          if (pAVar1 != (AvatarCamerasWrapper *)0x0) {
                            AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                                      (pAVar1,(MVCameraBase *)(this->fields).ghostCamera,
                                       (MethodInfo *)0x0);
                            pAVar1 = (this->fields).avatarCamerasWrapper;
                            if (pAVar1 != (AvatarCamerasWrapper *)0x0) {
                              AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                                        (pAVar1,(MVCameraBase *)(this->fields).deadCamera,
                                         (MethodInfo *)0x0);
                              pAVar1 = (this->fields).avatarCamerasWrapper;
                              this_07 = (this->fields).cameraController;
                              if (pAVar1 != (AvatarCamerasWrapper *)0x0) {
                                cameraBases = AvatarCamerasWrapper::
                                              AvatarCamerasWrapper_GetCameraBases
                                                        (pAVar1,(MethodInfo *)0x0);
                                if (this_07 != (MVCameraController *)0x0) {
                                  MVCameraController::MVCameraController_Initialize
                                            (this_07,cameraBases,(MethodInfo *)0x0);
                                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.
                                              methodPtr & 0x2000000) != 0) &&
                                     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                                    func_?();
                                  }
                                  pMVar2 = MVGameControllerBase::
                                           MVGameControllerBase_get_MainCameraManager
                                                     ((MethodInfo *)0x0);
                                  if (pMVar2 != (MainCameraManager *)0x0) {
                                    bVar3 = MainCameraManager::
                                            MainCameraManager_IsCameraControllerSet
                                                      (pMVar2,(MethodInfo *)0x0);
                                    if (bVar3 == 0) {
                                      if (cRam_? == '\0') {
                                        func_?();
                                        cRam_? = '\x01';
                                      }
                                      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.
                                                  methodPtr & 0x2000000) != 0) &&
                                         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0))
                                      {
                                        func_?();
                                      }
                                      pMVar2 = MVGameControllerBase::
                                               MVGameControllerBase_get_MainCameraManager
                                                         ((MethodInfo *)0x0);
                                      if (pMVar2 == (MainCameraManager *)0x0) goto code_?;
                                      MainCameraManager::MainCameraManager_SetCameraController
                                                (pMVar2,(this->fields).cameraController,
                                                 (MethodInfo *)0x0);
                                    }
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* AvatarCamerasMobile() */

void Assembly-CSharp.dll::AvatarCamerasMobile::AvatarCamerasMobile__ctor
               (AvatarCamerasMobile *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)func_?(TypeInfo__AvatarCamerasWrapper);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>;
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Dictionary__
            );
  (this_00->fields)._._._._.m_CachedPtr = this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this->fields).avatarCamerasWrapper = (AvatarCamerasWrapper *)this_00;
  this_02 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            func_?(TypeInfo__MVCameraController);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_02,(MethodInfo *)0x0);
  (this->fields).cameraController = (MVCameraController *)this_02;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

