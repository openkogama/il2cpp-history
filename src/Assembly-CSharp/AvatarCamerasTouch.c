
/* Void ActivateCameraController() */

void Assembly-CSharp.dll::AvatarCamerasTouch::AvatarCamerasTouch_ActivateCameraController
               (AvatarCamerasTouch *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_SetCameraController
              (this_00,(this->fields).cameraController,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* List`1[MVCameraBase] GetCameraBases() */

List_1_MVCameraBase_ *
Assembly-CSharp.dll::AvatarCamerasTouch::AvatarCamerasTouch_GetCameraBases
          (AvatarCamerasTouch *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarCamerasWrapper;
  if (pAVar1 != (AvatarCamerasWrapper *)0x0) {
    *unaff_FS_OFFSET = &stack0xfffffff0;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_
                     );
      func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__List__);
      func_?(&TypeInfo__System__Collections__Generic__List<MVCameraBase>);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                     );
      cRam_? = '\x01';
    }
    OStack_2.klass = (Object__Class *)0x0;
    OStack_2.monitor = (MonitorData *)0x0;
    puStack_3 = (undefined *)0x0;
    pLVar4 = (List_1_MVCameraBase_ *)
             func_?(TypeInfo__System__Collections__Generic__List<MVCameraBase>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar4,
               MethodInfo__System__Collections__Generic__List<MVCameraBase>__List__);
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(pAVar1->fields).avatarCameras;
    if ((this_00 !=
         (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
          *)0x0) &&
       (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                            ),
       this_01 !=
       (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0)) {
      pDVar5 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffffd4,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                         );
      OStack_2.klass = (Object__Class *)pDVar5->_dictionary;
      OStack_2.monitor = (MonitorData *)pDVar5->_index;
      puStack_3 = (undefined *)pDVar5->_version;
      item = pDVar5->_currentValue;
      while( true ) {
        this_02 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                   *)&OStack_2;
        bVar6 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (this_02,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                          );
        if (bVar6 == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (&OStack_2,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                     ,unaff_retaddr);
          *unaff_FS_OFFSET = this_02;
          return pLVar4;
        }
        if (pLVar4 == (List_1_MVCameraBase_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar4,item,
                   MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_);
      }
    }
  }
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  pLVar4 = (List_1_MVCameraBase_ *)(*pcVar7)();
  return pLVar4;
}


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
                                                    pMVar11 = MVGameControllerBase::
                                                                                                                            
                                                  MVGameControllerBase_get_MainCameraManager
                                                            ((MethodInfo *)0x0);
                                                  if (pMVar11 != (MainCameraManager *)0x0) {
                                                    bVar12 = System.dll::System::Diagnostics::
                                                             ProcessStartInfo::
                                                             ProcessStartInfo_get_HaveEnvVars
                                                                       ((ProcessStartInfo *)pMVar11,
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


/* Void PushCamera(CameraType) */

void Assembly-CSharp.dll::AvatarCamerasTouch::AvatarCamerasTouch_PushCamera
               (AvatarCamerasTouch *this,CameraType__Enum cameraType,MethodInfo *method)

{
  cameraController = (this->fields).cameraController;
  if ((cameraController != (MVCameraController *)0x0) &&
     (this_00 = (cameraController->fields).cameraStack,
     this_00 != (MVCameraController_CameraStack *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).cameras;
    if (this_01 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      cameraBase = (MVCameraBase *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,cameraType,
                              MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                             );
      MVCameraController+CameraStack::MVCameraController_CameraStack_PushCamera_1
                (this_00,cameraBase,cameraController,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PushCamera(MVCameraBase) */

void Assembly-CSharp.dll::AvatarCamerasTouch::AvatarCamerasTouch_PushCamera_1
               (AvatarCamerasTouch *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  cameraController = (this->fields).cameraController;
  if ((cameraController != (MVCameraController *)0x0) &&
     (this_00 = (cameraController->fields).cameraStack,
     this_00 != (MVCameraController_CameraStack *)0x0)) {
    MVCameraController+CameraStack::MVCameraController_CameraStack_PushCamera_1
              (this_00,cameraBase,cameraController,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveCamera(CameraType) */

void Assembly-CSharp.dll::AvatarCamerasTouch::AvatarCamerasTouch_RemoveCamera
               (AvatarCamerasTouch *this,CameraType__Enum cameraType,MethodInfo *method)

{
  cameraController = (this->fields).cameraController;
  if ((cameraController != (MVCameraController *)0x0) &&
     (this_00 = (cameraController->fields).cameraStack,
     this_00 != (MVCameraController_CameraStack *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).cameras;
    if (this_01 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      cameraBase = (MVCameraBase *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,cameraType,
                              MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                             );
      MVCameraController+CameraStack::MVCameraController_CameraStack_RemoveCamera_1
                (this_00,cameraBase,cameraController,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveCamera(MVCameraBase) */

void Assembly-CSharp.dll::AvatarCamerasTouch::AvatarCamerasTouch_RemoveCamera_1
               (AvatarCamerasTouch *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  cameraController = (this->fields).cameraController;
  if ((cameraController != (MVCameraController *)0x0) &&
     (this_00 = (cameraController->fields).cameraStack,
     this_00 != (MVCameraController_CameraStack *)0x0)) {
    MVCameraController+CameraStack::MVCameraController_CameraStack_RemoveCamera_1
              (this_00,cameraBase,cameraController,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCamera(CameraType) */

void Assembly-CSharp.dll::AvatarCamerasTouch::AvatarCamerasTouch_SetCamera
               (AvatarCamerasTouch *this,CameraType__Enum cameraType,MethodInfo *method)

{
  cameraController = (this->fields).cameraController;
  if ((cameraController != (MVCameraController *)0x0) &&
     (this_00 = (cameraController->fields).cameraStack,
     this_00 != (MVCameraController_CameraStack *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).cameras;
    if (this_01 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      newCamera = (MVCameraBase *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,cameraType,
                             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                            );
      MVCameraController+CameraStack::MVCameraController_CameraStack_EnterCamera
                (this_00,newCamera,cameraController,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCamera(MVCameraBase) */

void Assembly-CSharp.dll::AvatarCamerasTouch::AvatarCamerasTouch_SetCamera_1
               (AvatarCamerasTouch *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  cameraController = (this->fields).cameraController;
  if ((cameraController != (MVCameraController *)0x0) &&
     (this_00 = (cameraController->fields).cameraStack,
     this_00 != (MVCameraController_CameraStack *)0x0)) {
    MVCameraController+CameraStack::MVCameraController_CameraStack_EnterCamera
              (this_00,cameraBase,cameraController,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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

