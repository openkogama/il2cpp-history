
/* Void Activate() */

void Assembly-CSharp.dll::AvatarLocalBuildMode::AvatarLocalBuildMode_Activate
               (AvatarLocalBuildMode *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarCamerasDesktop;
  if (pAVar1 == (AvatarCamerasDesktopBuildMode *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar3 == (MainCameraManager *)0x0) goto code_?;
  pMVar4 = (pAVar1->fields).cameraController;
  pMVar5 = (pMVar3->fields).cameraController;
  if (pMVar5 != (MVCameraController *)0x0) {
    pMVar6 = (pMVar5->fields).cameraStack;
    if (pMVar6 == (MVCameraController_CameraStack *)0x0) goto code_?;
    MVCameraController+CameraStack::MVCameraController_CameraStack_Deactivate
              (pMVar6,(MethodInfo *)0x0);
  }
  bVar7 = iRam_? != 0;
  (pMVar3->fields).cameraController = pMVar4;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(pMVar3->fields).cameraController >> 0xc);
    puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar9;
      LOCK();
      uVar11 = *puVar9;
      if (uVar10 == uVar11) {
        *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar11);
  }
  pMVar5 = (pMVar3->fields).cameraController;
  if ((pMVar5 != (MVCameraController *)0x0) &&
     (pMVar6 = (pMVar5->fields).cameraStack, pMVar6 != (MVCameraController_CameraStack *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                    ,0);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__get_Current__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(pMVar6->fields).cameras;
    if ((this_00 ==
         (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
         0x0) || (pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                            UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                            Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                      (this_00,
                                       MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                                      ),
                 pDVar12 ==
                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0)) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uStack_13 = (pDVar12->fields)._dictionary;
    puStack_14 = (undefined1 *)0x0;
    puStack_15 = (undefined *)0x0;
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&uStack_13 >> 0xc);
      puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar10 = *puVar9;
        LOCK();
        uVar11 = *puVar9;
        if (uVar10 == uVar11) {
          *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (uVar10 != uVar11);
    }
    if (uStack_13 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iStack_16 = (uStack_13->fields)._version;
    puStack_15 = (undefined *)0x0;
    uStack_13._4_4_ = (undefined4)((ulonglong)uStack_13 >> 0x20);
    uStack_17 = (undefined4)uStack_13;
    uStack_18 = uStack_13._4_4_;
    uStack_19 = 0;
    aplStack_20[0] = (longlong *)0x0;
    uStack_13 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
    puStack_14 = (undefined1 *)&uStack_17;
    do {
      lVar21 = CONCAT44(uStack_18,uStack_17);
      if (lVar21 == 0) {
code_?:
        FUN_?();
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (iStack_16 != *(int *)(lVar21 + 0x2c)) {
code_?:
        mscorlib.dll::System::ThrowHelper::
        ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                  ((MethodInfo *)0x0);
        goto code_?;
      }
      do {
        if (lVar21 == 0) goto code_?;
        if (*(uint *)(lVar21 + 0x20) <= uStack_19) {
          return;
        }
        lVar22 = *(longlong *)(lVar21 + 0x18);
        lVar23 = (longlong)(int)uStack_19;
        uVar8 = uStack_19 + 1;
        if (lVar22 == 0) goto code_?;
        if (*(uint *)(lVar22 + 0x18) <= uStack_19) {
          uStack_19 = uVar8;
          FUN_?();
          goto code_?;
        }
        uStack_19 = uVar8;
      } while (*(int *)(lVar22 + 0x20 + lVar23 * 0x18) < 0);
      aplStack_20[0] = *(longlong **)(lVar22 + (lVar23 + 2) * 0x18);
      func_?(aplStack_20);
      if (aplStack_20[0] == (longlong *)0x0) {
code_?:
        FUN_?();
        uVar8 = uStack_19;
code_?:
        uStack_19 = uVar8;
        FUN_?();
code_?:
        FUN_?();
        goto code_?;
      }
      (**(code **)(*aplStack_20[0] + 0x228))
                (aplStack_20[0],*(undefined8 *)(*aplStack_20[0] + 0x230));
    } while( true );
  }
code_?:
  FUN_?();
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
    FUN_?(&
                  AvatarCamerasDesktopBuildMode_MethodInfo__UnityEngine__Object__Instantiate<AvatarCamerasDesktopBuildMode>_AvatarCamerasDesktopBuildMode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatarCamerasDesktopPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar1 = (AvatarCamerasDesktopBuildMode *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pAVar1,
                       AvatarCamerasDesktopBuildMode_MethodInfo__UnityEngine__Object__Instantiate<AvatarCamerasDesktopBuildMode>_AvatarCamerasDesktopBuildMode_
                      );
  bVar2 = iRam_? != 0;
  (this->fields).avatarCamerasDesktop = pAVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).avatarCamerasDesktop >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pAVar1 = (this->fields).avatarCamerasDesktop;
  if (pAVar1 == (AvatarCamerasDesktopBuildMode *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pJVar8 = (pAVar1->fields).jetPackCamera;
  if (pJVar8 != (JetPackCamera *)0x0) {
    (*(pJVar8->klass->vtable).Initialize.methodPtr)
              (pJVar8,buildModeAvatar,(pJVar8->klass->vtable).Initialize.method);
    pAVar9 = (pAVar1->fields).avatarEditModeCamera;
    if (pAVar9 != (AvatarEditModeCamera *)0x0) {
      (*(pAVar9->klass->vtable).Initialize.methodPtr)
                (pAVar9,buildModeAvatar,(pAVar9->klass->vtable).Initialize.method);
      pAVar10 = (pAVar1->fields).avatarCamerasWrapper;
      pJVar8 = (pAVar1->fields).jetPackCamera;
      if (pAVar10 != (AvatarCamerasWrapper *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar11 = (pAVar10->fields).avatarCameras;
        if ((pJVar8 != (JetPackCamera *)0x0) &&
           (IVar12 = (*(pJVar8->klass->vtable).get_CameraType.methodPtr)
                               (pJVar8,(pJVar8->klass->vtable).get_CameraType.method),
           pDVar11 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0)) {
          pMVar13 = MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                   ->klass->rgctx_data[0x22].method;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar11,IVar12,(Object *)pJVar8,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar13 >> 8),2),pMVar13);
          pAVar10 = (pAVar1->fields).avatarCamerasWrapper;
          pAVar9 = (pAVar1->fields).avatarEditModeCamera;
          if (pAVar10 != (AvatarCamerasWrapper *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pDVar11 = (pAVar10->fields).avatarCameras;
            if ((pAVar9 != (AvatarEditModeCamera *)0x0) &&
               (IVar12 = (*(pAVar9->klass->vtable).get_CameraType.methodPtr)
                                   (pAVar9,(pAVar9->klass->vtable).get_CameraType.method),
               pDVar11 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0)) {
              pMVar13 = MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                       ->klass->rgctx_data[0x22].method;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar11,IVar12,
                         (Object *)pAVar9,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar13 >> 8),2),pMVar13)
              ;
              pAVar10 = (pAVar1->fields).avatarCamerasWrapper;
              this_00 = (pAVar1->fields).cameraController;
              if ((pAVar10 != (AvatarCamerasWrapper *)0x0) &&
                 (cameraBases = AvatarCamerasWrapper::AvatarCamerasWrapper_GetCameraBases
                                          (pAVar10,(MethodInfo *)0x0),
                 this_00 != (MVCameraController *)0x0)) {
                MVCameraController::MVCameraController_Initialize
                          (this_00,cameraBases,(MethodInfo *)0x0);
                pMVar14 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if (pMVar14 != (MainCameraManager *)0x0) {
                  if ((pMVar14->fields).cameraController == (MVCameraController *)0x0) {
                    pMVar14 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                        ((MethodInfo *)0x0);
                    if (pMVar14 == (MainCameraManager *)0x0) goto code_?;
                    MainCameraManager::MainCameraManager_SetCameraController
                              (pMVar14,(pAVar1->fields).cameraController,(MethodInfo *)0x0);
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
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

