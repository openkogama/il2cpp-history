
/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::AvatarCamerasTouch::AvatarCamerasTouch_Initialize
               (AvatarCamerasTouch *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  pAVar1 = (this->fields).firstPersonMobileCamera;
  if (pAVar1 != (AndroidFirstPersonCamera *)0x0) {
    (pAVar1->fields)._.localAvatar = avatarLocal;
    func_?(&(pAVar1->fields)._.localAvatar,avatarLocal);
    pAVar2 = (this->fields).thirdPersonMobileCamera;
    if (pAVar2 != (AndroidThirdPersonCamera *)0x0) {
      AndroidThirdPersonCamera::AndroidThirdPersonCamera_Initialize
                (pAVar2,avatarLocal,(MethodInfo *)0x0);
      pLVar3 = (this->fields).lobbyStateCamera;
      if (pLVar3 != (LobbyStateCamera *)0x0) {
        LobbyStateCamera::LobbyStateCamera_Initialize(pLVar3,avatarLocal,(MethodInfo *)0x0);
        pTVar4 = (this->fields).timeAttackFlagDebriefingCamera;
        if (pTVar4 != (TimeAttackFlagDebriefingCamera *)0x0) {
          (pTVar4->fields).avatarLocal = avatarLocal;
          func_?(&(pTVar4->fields).avatarLocal,avatarLocal);
          pTVar5 = (this->fields).timeAttackFlagCountdownCamera;
          if (pTVar5 != (TimeAttackFlagCountdownCamera *)0x0) {
            (pTVar5->fields).avatarLocal = avatarLocal;
            func_?(&(pTVar5->fields).avatarLocal,avatarLocal);
            pGVar6 = (this->fields).ghostCamera;
            if (pGVar6 != (GhostCamera *)0x0) {
              GhostCamera::GhostCamera_Initialize(pGVar6,avatarLocal,(MethodInfo *)0x0);
              pDVar7 = (this->fields).deadCamera;
              if (pDVar7 != (DeadCamera *)0x0) {
                (pDVar7->fields).avatarLocal = avatarLocal;
                func_?(&(pDVar7->fields).avatarLocal,avatarLocal);
                pAVar8 = (this->fields).avatarCamerasWrapper;
                pAVar1 = (this->fields).firstPersonMobileCamera;
                if (pAVar8 != (AvatarCamerasWrapper *)0x0) {
                  if (cRam_? == '\0') {
                    func_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                   );
                    cRam_? = '\x01';
                  }
                  pDVar9 = (pAVar8->fields).avatarCameras;
                  if (pAVar1 != (AndroidFirstPersonCamera *)0x0) {
                    IVar10 = (*(code *)(pAVar1->klass->vtable).get_CameraType.method)
                                       (pAVar1,(pAVar1->klass->vtable).Awake.methodPtr);
                    if (pDVar9 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,IVar10,
                                 (Object *)pAVar1,
                                 MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                );
                      pAVar8 = (this->fields).avatarCamerasWrapper;
                      pAVar2 = (this->fields).thirdPersonMobileCamera;
                      if (pAVar8 != (AvatarCamerasWrapper *)0x0) {
                        if (cRam_? == '\0') {
                          func_?(&
                                          MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                         );
                          cRam_? = '\x01';
                        }
                        pDVar9 = (pAVar8->fields).avatarCameras;
                        if (pAVar2 != (AndroidThirdPersonCamera *)0x0) {
                          IVar10 = (*(code *)(pAVar2->klass->vtable).get_CameraType.method)
                                             (pAVar2,(pAVar2->klass->vtable).Awake.methodPtr);
                          if (pDVar9 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__Add
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,IVar10
                                       ,(Object *)pAVar2,
                                       MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                      );
                            pAVar8 = (this->fields).avatarCamerasWrapper;
                            pLVar3 = (this->fields).lobbyStateCamera;
                            if (pAVar8 != (AvatarCamerasWrapper *)0x0) {
                              if (cRam_? == '\0') {
                                func_?(&
                                                MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                               );
                                cRam_? = '\x01';
                              }
                              pDVar9 = (pAVar8->fields).avatarCameras;
                              if (pLVar3 != (LobbyStateCamera *)0x0) {
                                IVar10 = (*(code *)(pLVar3->klass->vtable).get_CameraType.method)
                                                   (pLVar3,(pLVar3->klass->vtable).Awake.methodPtr);
                                if (pDVar9 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__Add
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,
                                             IVar10,(Object *)pLVar3,
                                             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                            );
                                  pAVar8 = (this->fields).avatarCamerasWrapper;
                                  pTVar4 = (this->fields).timeAttackFlagDebriefingCamera;
                                  if (pAVar8 != (AvatarCamerasWrapper *)0x0) {
                                    if (cRam_? == '\0') {
                                      func_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  );
                                      cRam_? = '\x01';
                                    }
                                    pDVar9 = (pAVar8->fields).avatarCameras;
                                    if (pTVar4 != (TimeAttackFlagDebriefingCamera *)0x0) {
                                      IVar10 = (*(code *)(pTVar4->klass->vtable).get_CameraType.
                                                         method)(pTVar4,(pTVar4->klass->vtable).
                                                                        Awake.methodPtr);
                                      if (pDVar9 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
                                        mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32Enum,System::Object]::
                                        Dictionary_2_System_Int32Enum_System_Object__Add
                                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                   pDVar9,IVar10,(Object *)pTVar4,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  );
                                        pAVar8 = (this->fields).avatarCamerasWrapper;
                                        pTVar5 = (this->fields).timeAttackFlagCountdownCamera;
                                        if (pAVar8 != (AvatarCamerasWrapper *)0x0) {
                                          if (cRam_? == '\0') {
                                            func_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  );
                                            cRam_? = '\x01';
                                          }
                                          pDVar9 = (pAVar8->fields).avatarCameras;
                                          if (pTVar5 != (TimeAttackFlagCountdownCamera *)0x0) {
                                            IVar10 = (*(code *)(pTVar5->klass->vtable).
                                                               get_CameraType.method)
                                                               (pTVar5,(pTVar5->klass->vtable).Awake
                                                                       .methodPtr);
                                            if (pDVar9 != (Dictionary_2_CameraType_MVCameraBase_ *)
                                                          0x0) {
                                              mscorlib.dll::System::Collections::Generic::
                                              Dictionary`2[System::Int32Enum,System::Object]::
                                              Dictionary_2_System_Int32Enum_System_Object__Add
                                                        ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar9,IVar10,(Object *)pTVar5,
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  );
                                              pAVar8 = (this->fields).avatarCamerasWrapper;
                                              pGVar6 = (this->fields).ghostCamera;
                                              if (pAVar8 != (AvatarCamerasWrapper *)0x0) {
                                                if (cRam_? == '\0') {
                                                  func_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  );
                                                  cRam_? = '\x01';
                                                }
                                                pDVar9 = (pAVar8->fields).avatarCameras;
                                                if (pGVar6 != (GhostCamera *)0x0) {
                                                  IVar10 = (*(code *)(pGVar6->klass->vtable).
                                                                     get_CameraType.method)
                                                                     (pGVar6,(pGVar6->klass->vtable)
                                                                             .Awake.methodPtr);
                                                  if (pDVar9 != (
                                                  Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar9,IVar10,(Object *)pGVar6,
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  );
                                                  pAVar8 = (this->fields).avatarCamerasWrapper;
                                                  pDVar7 = (this->fields).deadCamera;
                                                  if (pAVar8 != (AvatarCamerasWrapper *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      func_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  );
                                                  cRam_? = '\x01';
                                                  }
                                                  pDVar9 = (pAVar8->fields).avatarCameras;
                                                  if (pDVar7 != (DeadCamera *)0x0) {
                                                    IVar10 = (*(code *)(pDVar7->klass->vtable).
                                                                       get_CameraType.method)
                                                                       (pDVar7,(pDVar7->klass->
                                                                               vtable).Awake.
                                                                               methodPtr);
                                                    if (pDVar9 != (
                                                  Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar9,IVar10,(Object *)pDVar7,
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  );
                                                  pAVar8 = (this->fields).avatarCamerasWrapper;
                                                  this_00 = (this->fields).cameraController;
                                                  if (pAVar8 != (AvatarCamerasWrapper *)0x0) {
                                                    cameraBases = AvatarCamerasWrapper::
                                                                                                                                    
                                                  AvatarCamerasWrapper_GetCameraBases
                                                            (pAVar8,(MethodInfo *)0x0);
                                                  if (this_00 != (MVCameraController *)0x0) {
                                                    MVCameraController::
                                                    MVCameraController_Initialize
                                                              (this_00,cameraBases,(MethodInfo *)0x0
                                                              );
                                                    this_01 = (SchemaElementDecl *)
                                                              MVGameControllerBase::
                                                                                                                            
                                                  MVGameControllerBase_get_MainCameraManager
                                                            ((MethodInfo *)0x0);
                                                  if (this_01 != (SchemaElementDecl *)0x0) {
                                                    bVar11 = System.Xml.dll::System::Xml::Schema::
                                                             SchemaElementDecl::
                                                                                                                          
                                                  SchemaElementDecl_get_HasDefaultAttribute
                                                            (this_01,(MethodInfo *)0x0);
                                                  if (bVar11 == 0) {
                                                    this_02 = MVGameControllerBase::
                                                                                                                            
                                                  MVGameControllerBase_get_MainCameraManager
                                                            ((MethodInfo *)0x0);
                                                  if (this_02 == (MainCameraManager *)0x0)
                                                  goto code_?;
                                                  MainCameraManager::
                                                  MainCameraManager_SetCameraController
                                                            (this_02,(this->fields).cameraController
                                                             ,(MethodInfo *)0x0);
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* AvatarCamerasTouch() */

void Assembly-CSharp.dll::AvatarCamerasTouch::AvatarCamerasTouch__ctor
               (AvatarCamerasTouch *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarCamerasWrapper);
    func_?(&TypeInfo__MVCameraController);
    cRam_? = '\x01';
  }
  this_00 = (AvatarCamerasWrapper *)func_?(TypeInfo__AvatarCamerasWrapper);
  AvatarCamerasWrapper::AvatarCamerasWrapper__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).avatarCamerasWrapper = this_00;
  func_?(&(this->fields).avatarCamerasWrapper,this_00);
  this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__MVCameraController);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
  (this->fields).cameraController = (MVCameraController *)this_01;
  func_?(&(this->fields).cameraController,this_01);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

