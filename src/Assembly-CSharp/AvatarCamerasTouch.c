
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
                  pDVar9 = (Dictionary_2_System_Object_System_Object_ *)
                           (pAVar8->fields).avatarCameras;
                  if (pAVar1 != (AndroidFirstPersonCamera *)0x0) {
                    pOVar10 = (Object *)
                              (*(pAVar1->klass->vtable).get_CameraType.methodPtr)
                                        (pAVar1,(pAVar1->klass->vtable).get_CameraType.method);
                    if (pDVar9 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__Add
                                (pDVar9,pOVar10,(Object *)pAVar1,
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
                        pDVar9 = (Dictionary_2_System_Object_System_Object_ *)
                                 (pAVar8->fields).avatarCameras;
                        if (pAVar2 != (AndroidThirdPersonCamera *)0x0) {
                          pOVar10 = (Object *)
                                    (*(pAVar2->klass->vtable).get_CameraType.methodPtr)
                                              (pAVar2,(pAVar2->klass->vtable).get_CameraType.method)
                          ;
                          if (pDVar9 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,System::Object]::Dictionary_2_System_Object_System_Object__Add
                                      (pDVar9,pOVar10,(Object *)pAVar2,
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
                              pDVar9 = (Dictionary_2_System_Object_System_Object_ *)
                                       (pAVar8->fields).avatarCameras;
                              if (pLVar3 != (LobbyStateCamera *)0x0) {
                                pOVar10 = (Object *)
                                          (*(pLVar3->klass->vtable).get_CameraType.methodPtr)
                                                    (pLVar3,(pLVar3->klass->vtable).get_CameraType.
                                                            method);
                                if (pDVar9 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__Add
                                            (pDVar9,pOVar10,(Object *)pLVar3,
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
                                    pDVar9 = (Dictionary_2_System_Object_System_Object_ *)
                                             (pAVar8->fields).avatarCameras;
                                    if (pTVar4 != (TimeAttackFlagDebriefingCamera *)0x0) {
                                      pOVar10 = (Object *)
                                                (*(pTVar4->klass->vtable).get_CameraType.methodPtr)
                                                          (pTVar4,(pTVar4->klass->vtable).
                                                                  get_CameraType.method);
                                      if (pDVar9 != (Dictionary_2_System_Object_System_Object_ *)0x0
                                         ) {
                                        mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Object,System::Object]::
                                        Dictionary_2_System_Object_System_Object__Add
                                                  (pDVar9,pOVar10,(Object *)pTVar4,
                                                                                                      
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
                                          pDVar9 = (Dictionary_2_System_Object_System_Object_ *)
                                                   (pAVar8->fields).avatarCameras;
                                          if (pTVar5 != (TimeAttackFlagCountdownCamera *)0x0) {
                                            pOVar10 = (Object *)
                                                      (*(pTVar5->klass->vtable).get_CameraType.
                                                        methodPtr)(pTVar5,(pTVar5->klass->vtable).
                                                                          get_CameraType.method);
                                            if (pDVar9 != (Dictionary_2_System_Object_System_Object_
                                                           *)0x0) {
                                              mscorlib.dll::System::Collections::Generic::
                                              Dictionary`2[System::Object,System::Object]::
                                              Dictionary_2_System_Object_System_Object__Add
                                                        (pDVar9,pOVar10,(Object *)pTVar5,
                                                                                                                  
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
                                                pDVar9 = (Dictionary_2_System_Object_System_Object_
                                                          *)(pAVar8->fields).avatarCameras;
                                                if (pGVar6 != (GhostCamera *)0x0) {
                                                  pOVar10 = (Object *)
                                                            (*(pGVar6->klass->vtable).get_CameraType
                                                              .methodPtr)(pGVar6,(pGVar6->klass->
                                                                                 vtable).
                                                  get_CameraType.method);
                                                  if (pDVar9 != (
                                                  Dictionary_2_System_Object_System_Object_ *)0x0) {
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Object,System::Object]::
                                                    Dictionary_2_System_Object_System_Object__Add
                                                              (pDVar9,pOVar10,(Object *)pGVar6,
                                                                                                                              
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
                                                  pDVar9 = (
                                                  Dictionary_2_System_Object_System_Object_ *)
                                                  (pAVar8->fields).avatarCameras;
                                                  if (pDVar7 != (DeadCamera *)0x0) {
                                                    pOVar10 = (Object *)
                                                              (*(pDVar7->klass->vtable).
                                                                get_CameraType.methodPtr)
                                                                        (pDVar7,(pDVar7->klass->
                                                                                vtable).
                                                  get_CameraType.method);
                                                  if (pDVar9 != (
                                                  Dictionary_2_System_Object_System_Object_ *)0x0) {
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Object,System::Object]::
                                                    Dictionary_2_System_Object_System_Object__Add
                                                              (pDVar9,pOVar10,(Object *)pDVar7,
                                                                                                                              
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
                                                    bVar12 = MainCameraManager::
                                                             MainCameraManager_IsCameraControllerSet
                                                                       (pMVar11,(MethodInfo *)0x0);
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
  if (this_00 != (AvatarCamerasWrapper *)0x0) {
    AvatarCamerasWrapper::AvatarCamerasWrapper__ctor(this_00,(MethodInfo *)0x0);
    (this->fields).avatarCamerasWrapper = this_00;
    func_?(&(this->fields).avatarCamerasWrapper,this_00);
    this_01 = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__MVCameraController);
    if (this_01 != (TweenRunner_1_FloatTween_ *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
      TweenRunner_1_FloatTween___ctor(this_01,(MethodInfo *)0x0);
      (this->fields).cameraController = (MVCameraController *)this_01;
      func_?(&(this->fields).cameraController,this_01);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
                ((Transform *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

