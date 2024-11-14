
/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::AvatarCamerasDesktop::AvatarCamerasDesktop_Initialize
               (AvatarCamerasDesktop *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  pDVar1 = (this->fields).firstPersonDesktopCamera;
  if (pDVar1 != (DesktopFirstPersonCamera *)0x0) {
    (pDVar1->fields)._.localAvatar = avatarLocal;
    func_?(&(pDVar1->fields)._.localAvatar,avatarLocal);
    pTVar2 = (this->fields).thirdPersonDesktopCamera;
    if (pTVar2 != (ThirdPersonCamera *)0x0) {
      (*(code *)(pTVar2->klass->vtable).Initialize.method)
                (pTVar2,avatarLocal,(pTVar2->klass->vtable).UpdateFromCameraSettings.methodPtr);
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
                pDVar1 = (this->fields).firstPersonDesktopCamera;
                if (pAVar8 != (AvatarCamerasWrapper *)0x0) {
                  if (cRam_? == '\0') {
                    func_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                   );
                    cRam_? = '\x01';
                  }
                  pDVar9 = (pAVar8->fields).avatarCameras;
                  if (pDVar1 != (DesktopFirstPersonCamera *)0x0) {
                    IVar10 = (*(code *)(pDVar1->klass->vtable).get_CameraType.method)
                                       (pDVar1,(pDVar1->klass->vtable).Awake.methodPtr);
                    if (pDVar9 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,IVar10,
                                 (Object *)pDVar1,
                                 MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                );
                      pAVar8 = (this->fields).avatarCamerasWrapper;
                      pTVar2 = (this->fields).thirdPersonDesktopCamera;
                      if (pAVar8 != (AvatarCamerasWrapper *)0x0) {
                        if (cRam_? == '\0') {
                          func_?(&
                                          MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                         );
                          cRam_? = '\x01';
                        }
                        pDVar9 = (pAVar8->fields).avatarCameras;
                        if (pTVar2 != (ThirdPersonCamera *)0x0) {
                          IVar10 = (*(code *)(pTVar2->klass->vtable).get_CameraType.method)
                                             (pTVar2,(pTVar2->klass->vtable).Awake.methodPtr);
                          if (pDVar9 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__Add
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,IVar10
                                       ,(Object *)pTVar2,
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
                                                    pMVar11 = MVGameControllerBase::
                                                                                                                            
                                                  MVGameControllerBase_get_MainCameraManager
                                                            ((MethodInfo *)0x0);
                                                  if (pMVar11 != (MainCameraManager *)0x0) {
                                                    bVar12 = mscorlib.dll::System::Runtime::
                                                             Serialization::ObjectHolder::
                                                                                                                          
                                                  ObjectHolder_get_TypeLoadExceptionReachable
                                                            ((ObjectHolder *)pMVar11,
                                                             (MethodInfo *)0x0);
                                                  if (bVar12 == 0) {
                                                    pMVar11 = MVGameControllerBase::
                                                                                                                            
                                                  MVGameControllerBase_get_MainCameraManager
                                                            ((MethodInfo *)0x0);
                                                  if (pMVar11 == (MainCameraManager *)0x0)
                                                  goto code_?;
                                                  MainCameraManager::
                                                  MainCameraManager_SetCameraController
                                                            (pMVar11,(this->fields).cameraController
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
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* AvatarCamerasDesktop() */

void Assembly-CSharp.dll::AvatarCamerasDesktop::AvatarCamerasDesktop__ctor
               (AvatarCamerasDesktop *this,MethodInfo *method)

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

