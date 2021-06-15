
/* Void ActivateCameraController() */

void Assembly-CSharp.dll::AvatarCamerasDesktop::AvatarCamerasDesktop_ActivateCameraController
               (AvatarCamerasDesktop *this,MethodInfo *method)

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

void Assembly-CSharp.dll::AvatarCamerasDesktop::AvatarCamerasDesktop_Initialize
               (AvatarCamerasDesktop *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).firstPersonDesktopCamera;
  if (this_00 != (DesktopFirstPersonCamera *)0x0) {
    AvatarPickupOwner::AvatarPickupOwner_set_AdditionalIgnoreWOIDS
              ((AvatarPickupOwner *)this_00,(HashSet_1_System_Int32_ *)avatarLocal,(MethodInfo *)0x0
              );
    pTVar1 = (this->fields).thirdPersonDesktopCamera;
    if (pTVar1 != (ThirdPersonCamera *)0x0) {
      (*(code *)(pTVar1->klass->vtable).Initialize.method)
                (pTVar1,avatarLocal,(pTVar1->klass->vtable).CameraCollision.methodPtr);
      this_01 = (this->fields).lobbyStateCamera;
      if (this_01 != (LobbyStateCamera *)0x0) {
        LobbyStateCamera::LobbyStateCamera_Initialize(this_01,avatarLocal,(MethodInfo *)0x0);
        this_02 = (this->fields).timeAttackFlagDebriefingCamera;
        if (this_02 != (TimeAttackFlagDebriefingCamera *)0x0) {
          AvatarPreviewer::AvatarPreviewer_set_PreviewGameObject
                    ((AvatarPreviewer *)this_02,(GameObject *)avatarLocal,(MethodInfo *)0x0);
          this_03 = (RuntimePrototypeCubeModel *)(this->fields).timeAttackFlagCountdownCamera;
          if (this_03 != (RuntimePrototypeCubeModel *)0x0) {
            RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeId
                      (this_03,(int32_t)avatarLocal,(MethodInfo *)0x0);
            this_04 = (this->fields).ghostCamera;
            if (this_04 != (GhostCamera *)0x0) {
              GhostCamera::GhostCamera_Initialize(this_04,avatarLocal,(MethodInfo *)0x0);
              this_05 = (DesktopEditModeController *)(this->fields).deadCamera;
              if (this_05 != (DesktopEditModeController *)0x0) {
                DesktopEditModeController::DesktopEditModeController_set_EditModeStateMachine
                          (this_05,(EditorStateMachine *)avatarLocal,(MethodInfo *)0x0);
                pAVar2 = (this->fields).avatarCamerasWrapper;
                if (pAVar2 != (AvatarCamerasWrapper *)0x0) {
                  AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                            (pAVar2,(MVCameraBase *)(this->fields).firstPersonDesktopCamera,
                             (MethodInfo *)0x0);
                  pAVar2 = (this->fields).avatarCamerasWrapper;
                  if (pAVar2 != (AvatarCamerasWrapper *)0x0) {
                    AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                              (pAVar2,(MVCameraBase *)(this->fields).thirdPersonDesktopCamera,
                               (MethodInfo *)0x0);
                    pAVar2 = (this->fields).avatarCamerasWrapper;
                    if (pAVar2 != (AvatarCamerasWrapper *)0x0) {
                      AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                                (pAVar2,(MVCameraBase *)(this->fields).lobbyStateCamera,
                                 (MethodInfo *)0x0);
                      pAVar2 = (this->fields).avatarCamerasWrapper;
                      if (pAVar2 != (AvatarCamerasWrapper *)0x0) {
                        AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                                  (pAVar2,(MVCameraBase *)
                                          (this->fields).timeAttackFlagDebriefingCamera,
                                   (MethodInfo *)0x0);
                        pAVar2 = (this->fields).avatarCamerasWrapper;
                        if (pAVar2 != (AvatarCamerasWrapper *)0x0) {
                          AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                                    (pAVar2,(MVCameraBase *)
                                            (this->fields).timeAttackFlagCountdownCamera,
                                     (MethodInfo *)0x0);
                          pAVar2 = (this->fields).avatarCamerasWrapper;
                          if (pAVar2 != (AvatarCamerasWrapper *)0x0) {
                            AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                                      (pAVar2,(MVCameraBase *)(this->fields).ghostCamera,
                                       (MethodInfo *)0x0);
                            pAVar2 = (this->fields).avatarCamerasWrapper;
                            if (pAVar2 != (AvatarCamerasWrapper *)0x0) {
                              AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                                        (pAVar2,(MVCameraBase *)(this->fields).deadCamera,
                                         (MethodInfo *)0x0);
                              pAVar2 = (this->fields).avatarCamerasWrapper;
                              this_06 = (this->fields).cameraController;
                              if (pAVar2 != (AvatarCamerasWrapper *)0x0) {
                                cameraBases = AvatarCamerasWrapper::
                                              AvatarCamerasWrapper_GetCameraBases
                                                        (pAVar2,(MethodInfo *)0x0);
                                if (this_06 != (MVCameraController *)0x0) {
                                  MVCameraController::MVCameraController_Initialize
                                            (this_06,cameraBases,(MethodInfo *)0x0);
                                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.
                                              methodPtr & 0x2000000) != 0) &&
                                     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                                    func_?(TypeInfo__MVGameControllerBase);
                                  }
                                  pMVar3 = MVGameControllerBase::
                                           MVGameControllerBase_get_MainCameraManager
                                                     ((MethodInfo *)0x0);
                                  if (pMVar3 != (MainCameraManager *)0x0) {
                                    bVar4 = MainCameraManager::
                                            MainCameraManager_IsCameraControllerSet
                                                      (pMVar3,(MethodInfo *)0x0);
                                    if (bVar4 == 0) {
                                      if (cRam_? == '\0') {
                                        func_?(_UNK_?);
                                        cRam_? = '\x01';
                                      }
                                      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.
                                                  methodPtr & 0x2000000) != 0) &&
                                         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0))
                                      {
                                        func_?(TypeInfo__MVGameControllerBase);
                                      }
                                      pMVar3 = MVGameControllerBase::
                                               MVGameControllerBase_get_MainCameraManager
                                                         ((MethodInfo *)0x0);
                                      if (pMVar3 == (MainCameraManager *)0x0) goto code_?;
                                      MainCameraManager::MainCameraManager_SetCameraController
                                                (pMVar3,(this->fields).cameraController,
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
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* AvatarCamerasDesktop() */

void Assembly-CSharp.dll::AvatarCamerasDesktop::AvatarCamerasDesktop__ctor
               (AvatarCamerasDesktop *this,MethodInfo *method)

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

