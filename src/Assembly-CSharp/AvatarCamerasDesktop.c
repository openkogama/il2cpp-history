
/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::AvatarCamerasDesktop::AvatarCamerasDesktop_Initialize
               (AvatarCamerasDesktop *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  pDVar1 = (this->fields).firstPersonDesktopCamera;
  if (pDVar1 != (DesktopFirstPersonCamera *)0x0) {
    bVar2 = iRam_? != 0;
    (pDVar1->fields)._.localAvatar = avatarLocal;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(pDVar1->fields)._.localAvatar >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pTVar7 = (this->fields).thirdPersonDesktopCamera;
    if (pTVar7 != (ThirdPersonCamera *)0x0) {
      (*(pTVar7->klass->vtable).Initialize.methodPtr)(pTVar7,avatarLocal);
      pLVar8 = (this->fields).lobbyStateCamera;
      if (pLVar8 != (LobbyStateCamera *)0x0) {
        LobbyStateCamera::LobbyStateCamera_Initialize(pLVar8,avatarLocal,(MethodInfo *)0x0);
        iVar9 = iRam_?;
        pTVar10 = (this->fields).timeAttackFlagDebriefingCamera;
        if (pTVar10 != (TimeAttackFlagDebriefingCamera *)0x0) {
          (pTVar10->fields).avatarLocal = avatarLocal;
          if (iVar9 != 0) {
            uVar3 = (uint)((ulonglong)&(pTVar10->fields).avatarLocal >> 0xc);
            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar2 = uVar5 == *puVar6;
              if (bVar2) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
              iVar9 = iRam_?;
            } while (!bVar2);
          }
          pTVar11 = (this->fields).timeAttackFlagCountdownCamera;
          if (pTVar11 != (TimeAttackFlagCountdownCamera *)0x0) {
            (pTVar11->fields).avatarLocal = avatarLocal;
            if (iVar9 != 0) {
              uVar3 = (uint)((ulonglong)&(pTVar11->fields).avatarLocal >> 0xc);
              lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
              do {
                uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                LOCK();
                bVar2 = uVar5 == *puVar6;
                if (bVar2) {
                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar2);
            }
            pGVar12 = (this->fields).ghostCamera;
            if (pGVar12 != (GhostCamera *)0x0) {
              GhostCamera::GhostCamera_Initialize(pGVar12,avatarLocal,(MethodInfo *)0x0);
              pDVar13 = (this->fields).deadCamera;
              if (pDVar13 != (DeadCamera *)0x0) {
                bVar2 = iRam_? != 0;
                (pDVar13->fields).avatarLocal = avatarLocal;
                if (bVar2) {
                  uVar3 = (uint)((ulonglong)&(pDVar13->fields).avatarLocal >> 0xc);
                  lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                    puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                    LOCK();
                    bVar2 = uVar5 == *puVar6;
                    if (bVar2) {
                      *puVar6 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar2);
                }
                pAVar14 = (this->fields).avatarCamerasWrapper;
                pDVar1 = (this->fields).firstPersonDesktopCamera;
                if (pAVar14 != (AvatarCamerasWrapper *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pDVar15 = (pAVar14->fields).avatarCameras;
                  if ((pDVar1 != (DesktopFirstPersonCamera *)0x0) &&
                     (IVar16 = (*(pDVar1->klass->vtable).get_CameraType.methodPtr)
                                         (pDVar1,(pDVar1->klass->vtable).get_CameraType.method),
                     pDVar15 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0)) {
                    pMVar17 = MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                              ->klass->rgctx_data[0x22].method;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::
                    Dictionary_2_System_Int32Enum_System_Object__TryInsert
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar15,IVar16,
                               (Object *)pDVar1,
                               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar17 >> 8),2),
                               pMVar17);
                    pAVar14 = (this->fields).avatarCamerasWrapper;
                    pTVar7 = (this->fields).thirdPersonDesktopCamera;
                    if (pAVar14 != (AvatarCamerasWrapper *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pDVar15 = (pAVar14->fields).avatarCameras;
                      if ((pTVar7 != (ThirdPersonCamera *)0x0) &&
                         (IVar16 = (*(pTVar7->klass->vtable).get_CameraType.methodPtr)
                                             (pTVar7,(pTVar7->klass->vtable).get_CameraType.method),
                         pDVar15 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0)) {
                        pMVar17 = MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                  ->klass->rgctx_data[0x22].method;
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar15,IVar16,
                                   (Object *)pTVar7,
                                   (InsertionBehavior__Enum)
                                   CONCAT71((int7)((ulonglong)pMVar17 >> 8),2),pMVar17);
                        pAVar14 = (this->fields).avatarCamerasWrapper;
                        pLVar8 = (this->fields).lobbyStateCamera;
                        if (pAVar14 != (AvatarCamerasWrapper *)0x0) {
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pDVar15 = (pAVar14->fields).avatarCameras;
                          if ((pLVar8 != (LobbyStateCamera *)0x0) &&
                             (IVar16 = (*(pLVar8->klass->vtable).get_CameraType.methodPtr)
                                                 (pLVar8,(pLVar8->klass->vtable).get_CameraType.
                                                         method),
                             pDVar15 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0)) {
                            pMVar17 = MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                      ->klass->rgctx_data[0x22].method;
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar15,
                                       IVar16,(Object *)pLVar8,
                                       (InsertionBehavior__Enum)
                                       CONCAT71((int7)((ulonglong)pMVar17 >> 8),2),pMVar17);
                            pAVar14 = (this->fields).avatarCamerasWrapper;
                            pTVar10 = (this->fields).timeAttackFlagDebriefingCamera;
                            if (pAVar14 != (AvatarCamerasWrapper *)0x0) {
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pDVar15 = (pAVar14->fields).avatarCameras;
                              if ((pTVar10 != (TimeAttackFlagDebriefingCamera *)0x0) &&
                                 (IVar16 = (*(pTVar10->klass->vtable).get_CameraType.methodPtr)
                                                     (pTVar10,(pTVar10->klass->vtable).get_CameraType.
                                                             method),
                                 pDVar15 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0)) {
                                pMVar17 = MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                          ->klass->rgctx_data[0x22].method;
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32Enum,System::Object]::
                                Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar15,
                                           IVar16,(Object *)pTVar10,
                                           (InsertionBehavior__Enum)
                                           CONCAT71((int7)((ulonglong)pMVar17 >> 8),2),pMVar17);
                                pAVar14 = (this->fields).avatarCamerasWrapper;
                                pTVar11 = (this->fields).timeAttackFlagCountdownCamera;
                                if (pAVar14 != (AvatarCamerasWrapper *)0x0) {
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pDVar15 = (pAVar14->fields).avatarCameras;
                                  if ((pTVar11 != (TimeAttackFlagCountdownCamera *)0x0) &&
                                     (IVar16 = (*(pTVar11->klass->vtable).get_CameraType.methodPtr)
                                                         (pTVar11,(pTVar11->klass->vtable).
                                                                 get_CameraType.method),
                                     pDVar15 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0)) {
                                    pMVar17 = MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                              ->klass->rgctx_data[0x22].method;
                                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32Enum,System::Object]::
                                    Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                              ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                               pDVar15,IVar16,(Object *)pTVar11,
                                               (InsertionBehavior__Enum)
                                               CONCAT71((int7)((ulonglong)pMVar17 >> 8),2),pMVar17);
                                    pAVar14 = (this->fields).avatarCamerasWrapper;
                                    pGVar12 = (this->fields).ghostCamera;
                                    if (pAVar14 != (AvatarCamerasWrapper *)0x0) {
                                      if (cRam_? == '\0') {
                                        FUN_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pDVar15 = (pAVar14->fields).avatarCameras;
                                      if ((pGVar12 != (GhostCamera *)0x0) &&
                                         (IVar16 = (*(pGVar12->klass->vtable).get_CameraType.
                                                     methodPtr)(pGVar12,(pGVar12->klass->vtable).
                                                                       get_CameraType.method),
                                         pDVar15 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0)) {
                                        pMVar17 = MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  ->klass->rgctx_data[0x22].method;
                                        mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32Enum,System::Object]::
                                        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                   pDVar15,IVar16,(Object *)pGVar12,
                                                   (InsertionBehavior__Enum)
                                                   CONCAT71((int7)((ulonglong)pMVar17 >> 8),2),
                                                   pMVar17);
                                        pAVar14 = (this->fields).avatarCamerasWrapper;
                                        pDVar13 = (this->fields).deadCamera;
                                        if (pAVar14 != (AvatarCamerasWrapper *)0x0) {
                                          if (cRam_? == '\0') {
                                            FUN_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  );
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          pDVar15 = (pAVar14->fields).avatarCameras;
                                          if ((pDVar13 != (DeadCamera *)0x0) &&
                                             (IVar16 = (*(pDVar13->klass->vtable).get_CameraType.
                                                         methodPtr)(pDVar13,(pDVar13->klass->vtable)
                                                                            .get_CameraType.method),
                                             pDVar15 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0
                                             )) {
                                            pMVar17 = 
                                                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                                                  ->klass->rgctx_data[0x22].method;
                                            mscorlib.dll::System::Collections::Generic::
                                            Dictionary`2[System::Int32Enum,System::Object]::
                                            Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                      ((Dictionary_2_System_Int32Enum_System_Object_
                                                        *)pDVar15,IVar16,(Object *)pDVar13,
                                                       (InsertionBehavior__Enum)
                                                       CONCAT71((int7)((ulonglong)pMVar17 >> 8),2),
                                                       pMVar17);
                                            pAVar14 = (this->fields).avatarCamerasWrapper;
                                            this_00 = (this->fields).cameraController;
                                            if ((pAVar14 != (AvatarCamerasWrapper *)0x0) &&
                                               (cameraBases = AvatarCamerasWrapper::
                                                              AvatarCamerasWrapper_GetCameraBases
                                                                        (pAVar14,(MethodInfo *)0x0),
                                               this_00 != (MVCameraController *)0x0)) {
                                              MVCameraController::MVCameraController_Initialize
                                                        (this_00,cameraBases,(MethodInfo *)0x0);
                                              pMVar18 = MVGameControllerBase::
                                                        MVGameControllerBase_get_MainCameraManager
                                                                  ((MethodInfo *)0x0);
                                              if (pMVar18 != (MainCameraManager *)0x0) {
                                                if ((pMVar18->fields).cameraController ==
                                                    (MVCameraController *)0x0) {
                                                  pMVar18 = MVGameControllerBase::
                                                                                                                        
                                                  MVGameControllerBase_get_MainCameraManager
                                                            ((MethodInfo *)0x0);
                                                  if (pMVar18 == (MainCameraManager *)0x0)
                                                  goto code_?;
                                                  MainCameraManager::
                                                  MainCameraManager_SetCameraController
                                                            (pMVar18,(this->fields).cameraController
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
code_?:
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* AvatarCamerasDesktop() */

void Assembly-CSharp.dll::AvatarCamerasDesktop::AvatarCamerasDesktop__ctor
               (AvatarCamerasDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarCamerasWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCameraController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (AvatarCamerasWrapper *)FUN_?(TypeInfo__AvatarCamerasWrapper);
  AvatarCamerasWrapper::AvatarCamerasWrapper__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).avatarCamerasWrapper = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarCamerasWrapper >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pMVar6 = (MVCameraController *)FUN_?(TypeInfo__MVCameraController);
  bVar1 = iRam_? != 0;
  (this->fields).cameraController = pMVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).cameraController >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

