
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
  ppAVar2 = &(this->fields).avatarCamerasDesktop;
  *ppAVar2 = pAVar1;
  func_?(ppAVar2,pAVar1);
  pAVar1 = *ppAVar2;
  if ((pAVar1 != (AvatarCamerasDesktopBuildMode *)0x0) &&
     (pJVar3 = (pAVar1->fields).jetPackCamera, pJVar3 != (JetPackCamera *)0x0)) {
    (*(code *)(pJVar3->klass->vtable).Initialize.method)
              (pJVar3,buildModeAvatar,pJVar3->klass[1]._0.image);
    pAVar4 = (pAVar1->fields).avatarEditModeCamera;
    if (pAVar4 != (AvatarEditModeCamera *)0x0) {
      (*(code *)(pAVar4->klass->vtable).Initialize.method)
                (pAVar4,buildModeAvatar,pAVar4->klass[1]._0.image);
      pAVar5 = (pAVar1->fields).avatarCamerasWrapper;
      if (pAVar5 != (AvatarCamerasWrapper *)0x0) {
        AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                  (pAVar5,(MVCameraBase *)(pAVar1->fields).jetPackCamera,(MethodInfo *)0x0);
        pAVar5 = (pAVar1->fields).avatarCamerasWrapper;
        if (pAVar5 != (AvatarCamerasWrapper *)0x0) {
          AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                    (pAVar5,(MVCameraBase *)(pAVar1->fields).avatarEditModeCamera,(MethodInfo *)0x0)
          ;
          pAVar5 = (pAVar1->fields).avatarCamerasWrapper;
          this_00 = (pAVar1->fields).cameraController;
          if (pAVar5 != (AvatarCamerasWrapper *)0x0) {
            cameraBases = AvatarCamerasWrapper::AvatarCamerasWrapper_GetCameraBases
                                    (pAVar5,(MethodInfo *)0x0);
            if (this_00 != (MVCameraController *)0x0) {
              MVCameraController::MVCameraController_Initialize
                        (this_00,cameraBases,(MethodInfo *)0x0);
              this_01 = (SchemaElementDecl *)
                        MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                  ((MethodInfo *)0x0);
              if (this_01 != (SchemaElementDecl *)0x0) {
                bVar6 = System.Xml.dll::System::Xml::Schema::SchemaElementDecl::
                        SchemaElementDecl_get_HasDefaultAttribute(this_01,(MethodInfo *)0x0);
                if (bVar6 == 0) {
                  this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                      ((MethodInfo *)0x0);
                  if (this_02 == (MainCameraManager *)0x0) goto code_?;
                  MainCameraManager::MainCameraManager_SetCameraController
                            (this_02,(pAVar1->fields).cameraController,(MethodInfo *)0x0);
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

