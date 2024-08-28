
/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::AvatarCamerasDesktop::AvatarCamerasDesktop_Initialize
               (AvatarCamerasDesktop *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  pDVar1 = (this->fields).firstPersonDesktopCamera;
  if (pDVar1 != (DesktopFirstPersonCamera *)0x0) {
    ppMVar2 = &(pDVar1->fields)._.localAvatar;
    *ppMVar2 = avatarLocal;
    func_?(ppMVar2,avatarLocal);
    pTVar3 = (this->fields).thirdPersonDesktopCamera;
    if (pTVar3 != (ThirdPersonCamera *)0x0) {
      (*(code *)(pTVar3->klass->vtable).Initialize.method)
                (pTVar3,avatarLocal,(pTVar3->klass->vtable).CameraCollision.methodPtr);
      pLVar4 = (this->fields).lobbyStateCamera;
      if (pLVar4 != (LobbyStateCamera *)0x0) {
        LobbyStateCamera::LobbyStateCamera_Initialize(pLVar4,avatarLocal,(MethodInfo *)0x0);
        pTVar5 = (this->fields).timeAttackFlagDebriefingCamera;
        if (pTVar5 != (TimeAttackFlagDebriefingCamera *)0x0) {
          ppMVar2 = &(pTVar5->fields).avatarLocal;
          *ppMVar2 = avatarLocal;
          func_?(ppMVar2,avatarLocal);
          pTVar6 = (this->fields).timeAttackFlagCountdownCamera;
          if (pTVar6 != (TimeAttackFlagCountdownCamera *)0x0) {
            ppMVar2 = &(pTVar6->fields).avatarLocal;
            *ppMVar2 = avatarLocal;
            func_?(ppMVar2,avatarLocal);
            pGVar7 = (this->fields).ghostCamera;
            if (pGVar7 != (GhostCamera *)0x0) {
              GhostCamera::GhostCamera_Initialize(pGVar7,avatarLocal,(MethodInfo *)0x0);
              pDVar8 = (this->fields).deadCamera;
              if (pDVar8 != (DeadCamera *)0x0) {
                ppMVar2 = &(pDVar8->fields).avatarLocal;
                *ppMVar2 = avatarLocal;
                func_?(ppMVar2,avatarLocal);
                pAVar9 = (this->fields).avatarCamerasWrapper;
                pDVar1 = (this->fields).firstPersonDesktopCamera;
                if (pAVar9 != (AvatarCamerasWrapper *)0x0) {
                  if (cRam_? == '\0') {
                    func_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                   );
                    cRam_? = '\x01';
                  }
                  pDVar10 = (pAVar9->fields).avatarCameras;
                  if (pDVar1 != (DesktopFirstPersonCamera *)0x0) {
                    IVar11 = (*(code *)(pDVar1->klass->vtable).get_CameraType.method)
                                       (pDVar1,(pDVar1->klass->vtable).Awake.methodPtr);
                    if (pDVar10 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar10,IVar11,
                                 (Object *)pDVar1,
                                 MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                );
                      pAVar9 = (this->fields).avatarCamerasWrapper;
                      pTVar3 = (this->fields).thirdPersonDesktopCamera;
                      if (pAVar9 != (AvatarCamerasWrapper *)0x0) {
                        if (cRam_? == '\0') {
                          func_?(&
                                          MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                         );
                          cRam_? = '\x01';
                        }
                        pDVar10 = (pAVar9->fields).avatarCameras;
                        if (pTVar3 != (ThirdPersonCamera *)0x0) {
                          IVar11 = (*(code *)(pTVar3->klass->vtable).get_CameraType.method)
                                             (pTVar3,(pTVar3->klass->vtable).Awake.methodPtr);
                          if (pDVar10 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__Add
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar10,IVar11
                                       ,(Object *)pTVar3,
                                       MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                      );
                            pAVar9 = (this->fields).avatarCamerasWrapper;
                            pLVar4 = (this->fields).lobbyStateCamera;
                            if (pAVar9 != (AvatarCamerasWrapper *)0x0) {
                              if (cRam_? == '\0') {
                                func_?(&
                                                MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                               );
                                cRam_? = '\x01';
                              }
                              pDVar10 = (pAVar9->fields).avatarCameras;
                              if (pLVar4 != (LobbyStateCamera *)0x0) {
                                IVar11 = (*(code *)(pLVar4->klass->vtable).get_CameraType.method)
                                                   (pLVar4,(pLVar4->klass->vtable).Awake.methodPtr);
                                if (pDVar10 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__Add
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar10,
                                             IVar11,(Object *)pLVar4,
                                             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                            );
                                  pAVar9 = (this->fields).avatarCamerasWrapper;
                                  pTVar5 = (this->fields).timeAttackFlagDebriefingCamera;
                                  if (pAVar9 != (AvatarCamerasWrapper *)0x0) {
                                    if (cRam_? == '\0') {
                                      func_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  );
                                      cRam_? = '\x01';
                                    }
                                    pDVar10 = (pAVar9->fields).avatarCameras;
                                    if (pTVar5 != (TimeAttackFlagDebriefingCamera *)0x0) {
                                      IVar11 = (*(code *)(pTVar5->klass->vtable).get_CameraType.
                                                         method)(pTVar5,(pTVar5->klass->vtable).
                                                                        Awake.methodPtr);
                                      if (pDVar10 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
                                        mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32Enum,System::Object]::
                                        Dictionary_2_System_Int32Enum_System_Object__Add
                                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                   pDVar10,IVar11,(Object *)pTVar5,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  );
                                        pAVar9 = (this->fields).avatarCamerasWrapper;
                                        pTVar6 = (this->fields).timeAttackFlagCountdownCamera;
                                        if (pAVar9 != (AvatarCamerasWrapper *)0x0) {
                                          if (cRam_? == '\0') {
                                            func_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  );
                                            cRam_? = '\x01';
                                          }
                                          pDVar10 = (pAVar9->fields).avatarCameras;
                                          if (pTVar6 != (TimeAttackFlagCountdownCamera *)0x0) {
                                            IVar11 = (*(code *)(pTVar6->klass->vtable).
                                                               get_CameraType.method)
                                                               (pTVar6,(pTVar6->klass->vtable).Awake
                                                                       .methodPtr);
                                            if (pDVar10 != (Dictionary_2_CameraType_MVCameraBase_ *)
                                                          0x0) {
                                              mscorlib.dll::System::Collections::Generic::
                                              Dictionary`2[System::Int32Enum,System::Object]::
                                              Dictionary_2_System_Int32Enum_System_Object__Add
                                                        ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar10,IVar11,(Object *)pTVar6,
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  );
                                              pAVar9 = (this->fields).avatarCamerasWrapper;
                                              pGVar7 = (this->fields).ghostCamera;
                                              if (pAVar9 != (AvatarCamerasWrapper *)0x0) {
                                                if (cRam_? == '\0') {
                                                  func_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  );
                                                  cRam_? = '\x01';
                                                }
                                                pDVar10 = (pAVar9->fields).avatarCameras;
                                                if (pGVar7 != (GhostCamera *)0x0) {
                                                  IVar11 = (*(code *)(pGVar7->klass->vtable).
                                                                     get_CameraType.method)
                                                                     (pGVar7,(pGVar7->klass->vtable)
                                                                             .Awake.methodPtr);
                                                  if (pDVar10 != (
                                                  Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar10,IVar11,(Object *)pGVar7,
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  );
                                                  pAVar9 = (this->fields).avatarCamerasWrapper;
                                                  pDVar8 = (this->fields).deadCamera;
                                                  if (pAVar9 != (AvatarCamerasWrapper *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      func_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  );
                                                  cRam_? = '\x01';
                                                  }
                                                  pDVar10 = (pAVar9->fields).avatarCameras;
                                                  if (pDVar8 != (DeadCamera *)0x0) {
                                                    IVar11 = (*(code *)(pDVar8->klass->vtable).
                                                                       get_CameraType.method)
                                                                       (pDVar8,(pDVar8->klass->
                                                                               vtable).Awake.
                                                                               methodPtr);
                                                    if (pDVar10 != (
                                                  Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar10,IVar11,(Object *)pDVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  );
                                                  pAVar9 = (this->fields).avatarCamerasWrapper;
                                                  this_00 = (this->fields).cameraController;
                                                  if (pAVar9 != (AvatarCamerasWrapper *)0x0) {
                                                    cameraBases = AvatarCamerasWrapper::
                                                                                                                                    
                                                  AvatarCamerasWrapper_GetCameraBases
                                                            (pAVar9,(MethodInfo *)0x0);
                                                  if (this_00 != (MVCameraController *)0x0) {
                                                    MVCameraController::
                                                    MVCameraController_Initialize
                                                              (this_00,cameraBases,(MethodInfo *)0x0
                                                              );
                                                    pMVar12 = MVGameControllerBase::
                                                                                                                            
                                                  MVGameControllerBase_get_MainCameraManager
                                                            ((MethodInfo *)0x0);
                                                  if (pMVar12 != (MainCameraManager *)0x0) {
                                                    bVar13 = mscorlib.dll::System::Runtime::
                                                             Serialization::ObjectHolder::
                                                                                                                          
                                                  ObjectHolder_get_TypeLoadExceptionReachable
                                                            ((ObjectHolder *)pMVar12,
                                                             (MethodInfo *)0x0);
                                                  if (bVar13 == 0) {
                                                    pMVar12 = MVGameControllerBase::
                                                                                                                            
                                                  MVGameControllerBase_get_MainCameraManager
                                                            ((MethodInfo *)0x0);
                                                  if (pMVar12 == (MainCameraManager *)0x0)
                                                  goto code_?;
                                                  MainCameraManager::
                                                  MainCameraManager_SetCameraController
                                                            (pMVar12,(this->fields).cameraController
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
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
  ppAVar1 = &(this->fields).avatarCamerasWrapper;
  *ppAVar1 = this_00;
  func_?(ppAVar1,this_00);
  this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__MVCameraController);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
  ppMVar2 = &(this->fields).cameraController;
  *ppMVar2 = (MVCameraController *)this_01;
  func_?(ppMVar2,this_01);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

