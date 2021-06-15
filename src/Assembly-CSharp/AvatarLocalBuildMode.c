
/* Void Activate() */

void Assembly-CSharp.dll::AvatarLocalBuildMode::AvatarLocalBuildMode_Activate
               (AvatarLocalBuildMode *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarCamerasDesktop;
  if (pAVar1 == (AvatarCamerasDesktopBuildMode *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
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
              (this_00,(pAVar1->fields).cameraController,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(MVBuildModeAvatarLocal) */

void Assembly-CSharp.dll::AvatarLocalBuildMode::AvatarLocalBuildMode_Initialize
               (AvatarLocalBuildMode *this,MVBuildModeAvatarLocal *buildModeAvatar,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).avatarCamerasDesktopPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      AvatarCamerasDesktopBuildMode_MethodInfo__UnityEngine__Object__Instantiate<AvatarCamerasDesktopBuildMode>_AvatarCamerasDesktopBuildMode_
                     );
  (this->fields).avatarCamerasDesktop = (AvatarCamerasDesktopBuildMode *)pXVar1;
  if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pPVar2 = (pXVar1->fields).xpBoostParticles;
    if (pPVar2 != (ParticleSystem *)0x0) {
      (*(code *)pPVar2->klass[1]._1.typeHierarchy)
                (pPVar2,buildModeAvatar,pPVar2->klass[1]._1.unity_user_data);
      piVar3 = *(int **)&(pXVar1->fields).isParticlesPlaying;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x140))(piVar3,buildModeAvatar,*(undefined4 *)(*piVar3 + 0x144));
        pAVar4 = (AvatarCamerasWrapper *)(pXVar1->fields).layersToRender;
        if (pAVar4 != (AvatarCamerasWrapper *)0x0) {
          AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                    (pAVar4,(MVCameraBase *)(pXVar1->fields).xpBoostParticles,(MethodInfo *)0x0);
          pAVar4 = (AvatarCamerasWrapper *)(pXVar1->fields).layersToRender;
          if (pAVar4 != (AvatarCamerasWrapper *)0x0) {
            AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                      (pAVar4,*(MVCameraBase **)&(pXVar1->fields).isParticlesPlaying,
                       (MethodInfo *)0x0);
            pAVar4 = (AvatarCamerasWrapper *)(pXVar1->fields).layersToRender;
            this_00 = (pXVar1->fields).previewCam;
            if (pAVar4 != (AvatarCamerasWrapper *)0x0) {
              cameraBases = AvatarCamerasWrapper::AvatarCamerasWrapper_GetCameraBases
                                      (pAVar4,(MethodInfo *)0x0);
              if (this_00 != (Camera *)0x0) {
                MVCameraController::MVCameraController_Initialize
                          ((MVCameraController *)this_00,cameraBases,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if (this_01 != (MainCameraManager *)0x0) {
                  bVar5 = MainCameraManager::MainCameraManager_IsCameraControllerSet
                                    (this_01,(MethodInfo *)0x0);
                  if (bVar5 == 0) {
                    AvatarCamerasDesktopBuildMode::
                    AvatarCamerasDesktopBuildMode_ActivateCameraController
                              ((AvatarCamerasDesktopBuildMode *)pXVar1,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

