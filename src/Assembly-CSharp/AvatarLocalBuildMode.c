
/* Void Activate() */

void Assembly-CSharp.dll::AvatarLocalBuildMode::AvatarLocalBuildMode_Activate
               (AvatarLocalBuildMode *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarCamerasDesktop;
  if (pAVar1 != (AvatarCamerasDesktopBuildMode *)0x0) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_00 != (MainCameraManager *)0x0) {
      MainCameraManager::MainCameraManager_SetCameraController
                (this_00,(pAVar1->fields).cameraController,(MethodInfo *)0x0);
      return;
    }
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
    func_?(&
                    AvatarCamerasDesktopBuildMode_MethodInfo__UnityEngine__Object__Instantiate<AvatarCamerasDesktopBuildMode>_AvatarCamerasDesktopBuildMode_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatarCamerasDesktopPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pAVar1 = (AvatarCamerasDesktopBuildMode *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pAVar1,
                      AvatarCamerasDesktopBuildMode_MethodInfo__UnityEngine__Object__Instantiate<AvatarCamerasDesktopBuildMode>_AvatarCamerasDesktopBuildMode_
                     );
  (this->fields).avatarCamerasDesktop = pAVar1;
  func_?(&(this->fields).avatarCamerasDesktop,pAVar1);
  pAVar1 = (this->fields).avatarCamerasDesktop;
  if ((pAVar1 != (AvatarCamerasDesktopBuildMode *)0x0) &&
     (pJVar2 = (pAVar1->fields).jetPackCamera, pJVar2 != (JetPackCamera *)0x0)) {
    (*(code *)(pJVar2->klass->vtable).Initialize.method)
              (pJVar2,buildModeAvatar,pJVar2->klass[1]._0.image);
    pAVar3 = (pAVar1->fields).avatarEditModeCamera;
    if (pAVar3 != (AvatarEditModeCamera *)0x0) {
      (*(code *)(pAVar3->klass->vtable).Initialize.method)
                (pAVar3,buildModeAvatar,pAVar3->klass[1]._0.image);
      pAVar4 = (pAVar1->fields).avatarCamerasWrapper;
      if (pAVar4 != (AvatarCamerasWrapper *)0x0) {
        AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                  (pAVar4,(MVCameraBase *)(pAVar1->fields).jetPackCamera,(MethodInfo *)0x0);
        pAVar4 = (pAVar1->fields).avatarCamerasWrapper;
        if (pAVar4 != (AvatarCamerasWrapper *)0x0) {
          AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                    (pAVar4,(MVCameraBase *)(pAVar1->fields).avatarEditModeCamera,(MethodInfo *)0x0)
          ;
          pAVar4 = (pAVar1->fields).avatarCamerasWrapper;
          this_00 = (pAVar1->fields).cameraController;
          if (pAVar4 != (AvatarCamerasWrapper *)0x0) {
            cameraBases = AvatarCamerasWrapper::AvatarCamerasWrapper_GetCameraBases
                                    (pAVar4,(MethodInfo *)0x0);
            if (this_00 != (MVCameraController *)0x0) {
              MVCameraController::MVCameraController_Initialize
                        (this_00,cameraBases,(MethodInfo *)0x0);
              pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                 ((MethodInfo *)0x0);
              if (pMVar5 != (MainCameraManager *)0x0) {
                bVar6 = System.dll::System::Diagnostics::ProcessStartInfo::
                        ProcessStartInfo_get_HaveEnvVars
                                  ((ProcessStartInfo *)pMVar5,(MethodInfo *)0x0);
                if (bVar6 == 0) {
                  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                     ((MethodInfo *)0x0);
                  if (pMVar5 == (MainCameraManager *)0x0) goto code_?;
                  MainCameraManager::MainCameraManager_SetCameraController
                            (pMVar5,(pAVar1->fields).cameraController,(MethodInfo *)0x0);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

