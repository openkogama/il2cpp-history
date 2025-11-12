
/* Void ActivateCameraController() */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::
     AvatarCamerasDesktopBuildMode_ActivateCameraController
               (AvatarCamerasDesktopBuildMode *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 == (MainCameraManager *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pMVar3 = (this->fields).cameraController;
  pMVar4 = (pMVar1->fields).cameraController;
  if (pMVar4 != (MVCameraController *)0x0) {
    pMVar5 = (pMVar4->fields).cameraStack;
    if (pMVar5 == (MVCameraController_CameraStack *)0x0) goto code_?;
    MVCameraController+CameraStack::MVCameraController_CameraStack_Deactivate
              (pMVar5,(MethodInfo *)0x0);
  }
  bVar6 = iRam_? != 0;
  (pMVar1->fields).cameraController = pMVar3;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(pMVar1->fields).cameraController >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  pMVar4 = (pMVar1->fields).cameraController;
  if ((pMVar4 != (MVCameraController *)0x0) &&
     (pMVar5 = (pMVar4->fields).cameraStack, pMVar5 != (MVCameraController_CameraStack *)0x0)) {
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
               *)(pMVar5->fields).cameras;
    if ((this_00 ==
         (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
         0x0) || (pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                            UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                            Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                      (this_00,
                                       MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                                      ),
                 pDVar11 ==
                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0)) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uStack_12 = (pDVar11->fields)._dictionary;
    puStack_13 = (undefined1 *)0x0;
    puStack_14 = (undefined *)0x0;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&uStack_12 >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    if (uStack_12 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iStack_15 = (uStack_12->fields)._version;
    puStack_14 = (undefined *)0x0;
    uStack_12._4_4_ = (undefined4)((ulonglong)uStack_12 >> 0x20);
    uStack_16 = (undefined4)uStack_12;
    uStack_17 = uStack_12._4_4_;
    uStack_18 = 0;
    aplStack_19[0] = (longlong *)0x0;
    uStack_12 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
    puStack_13 = (undefined1 *)&uStack_16;
    do {
      lVar20 = CONCAT44(uStack_17,uStack_16);
      if (lVar20 == 0) {
code_?:
        FUN_?();
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (iStack_15 != *(int *)(lVar20 + 0x2c)) {
code_?:
        mscorlib.dll::System::ThrowHelper::
        ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                  ((MethodInfo *)0x0);
        goto code_?;
      }
      do {
        if (lVar20 == 0) goto code_?;
        if (*(uint *)(lVar20 + 0x20) <= uStack_18) {
          return;
        }
        lVar21 = *(longlong *)(lVar20 + 0x18);
        lVar22 = (longlong)(int)uStack_18;
        uVar7 = uStack_18 + 1;
        if (lVar21 == 0) goto code_?;
        if (*(uint *)(lVar21 + 0x18) <= uStack_18) {
          uStack_18 = uVar7;
          FUN_?();
          goto code_?;
        }
        uStack_18 = uVar7;
      } while (*(int *)(lVar21 + 0x20 + lVar22 * 0x18) < 0);
      aplStack_19[0] = *(longlong **)(lVar21 + (lVar22 + 2) * 0x18);
      func_?(aplStack_19);
      if (aplStack_19[0] == (longlong *)0x0) {
code_?:
        FUN_?();
        uVar7 = uStack_18;
code_?:
        uStack_18 = uVar7;
        FUN_?();
code_?:
        FUN_?();
        goto code_?;
      }
      (**(code **)(*aplStack_19[0] + 0x228))
                (aplStack_19[0],*(undefined8 *)(*aplStack_19[0] + 0x230));
    } while( true );
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* List`1[MVCameraBase] GetCameraBases() */

List_1_MVCameraBase_ *
Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_GetCameraBases
          (AvatarCamerasDesktopBuildMode *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarCamerasWrapper;
  if (pAVar1 == (AvatarCamerasWrapper *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pLVar3 = (List_1_MVCameraBase_ *)(*pcVar2)();
    return pLVar3;
  }
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVCameraBase>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar3 = (List_1_MVCameraBase_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<MVCameraBase>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar3,
             MethodInfo__System__Collections__Generic__List<MVCameraBase>__List__);
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(pAVar1->fields).avatarCameras;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::TypeConverterRegistry+ConverterKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                             (this_00,
                              MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                             ),
        pDVar4 ==
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
         *)0x0)) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    pDStack_5 = (pDVar4->fields)._dictionary;
    ppDStack_6 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)0x0;
    puStack_7 = (undefined *)0x0;
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&pDStack_9 >> 0xc);
      puVar10 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar11 = *puVar10;
        LOCK();
        uVar12 = *puVar10;
        if (uVar11 == uVar12) {
          *puVar10 = uVar11 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (uVar11 != uVar12);
    }
    if (pDStack_5 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      pDStack_9 = pDStack_5;
      FUN_?();
      pcVar2 = (code *)swi(3);
      pLVar3 = (List_1_MVCameraBase_ *)(*pcVar2)();
      return pLVar3;
    }
    ppDStack_6 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)((ulonglong)(uint)(pDStack_5->fields)._version << 0x20);
    puStack_7 = (undefined *)0x0;
    uStack_13 = (ulonglong)ppDStack_6;
    pOStack_14 = (Object *)0x0;
    pDStack_9 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0;
    ppDStack_6 = &pDStack_5;
    while (pDStack_5 !=
           (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           0x0) {
      if (uStack_13._4_4_ != (pDStack_5->fields)._version) goto code_?;
      uVar12 = uStack_13 & 0xffffffff;
      do {
        if (pDStack_5 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) goto code_?;
        uVar8 = (uint)uVar12;
        if ((uint)(pDStack_5->fields)._count <= uVar8) {
          return pLVar3;
        }
        pDVar15 = (pDStack_5->fields)._entries;
        uVar12 = (ulonglong)(uVar8 + 1);
        uStack_13 = CONCAT44(uStack_13._4_4_,uVar8 + 1);
        if (pDVar15 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)0x0) goto code_?;
        if ((uint)pDVar15->max_length <= uVar8) goto code_?;
      } while ((&pDVar15->vector[0].hashCode)[(longlong)(int)uVar8 * 6] < 0);
      pOStack_14 = *(Object **)((longlong)&pDVar15->vector[0].key + (longlong)(int)uVar8 * 0x18 + 8)
      ;
      func_?();
      pMVar16 = MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_;
      if (pLVar3 == (List_1_MVCameraBase_ *)0x0) goto code_?;
      piVar17 = &(pLVar3->fields)._version;
      *piVar17 = *piVar17 + 1;
      pMVar18 = (pLVar3->fields)._items;
      uVar8 = (pLVar3->fields)._size;
      if (pMVar18 == (MVCameraBase__Array *)0x0) goto code_?;
      if (uVar8 < (uint)pMVar18->max_length) {
        (pLVar3->fields)._size = uVar8 + 1;
        FUN_?(pMVar18,(longlong)(int)uVar8,pOStack_14);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)pLVar3,pOStack_14,pMVar16->klass->rgctx_data[0xe].method)
        ;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  pLVar3 = (List_1_MVCameraBase_ *)(*pcVar2)();
  return pLVar3;
}


/* Void Initialize(MVBuildModeAvatarLocal) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_Initialize
               (AvatarCamerasDesktopBuildMode *this,MVBuildModeAvatarLocal *avatarLocal,
               MethodInfo *method)

{
  pJVar1 = (this->fields).jetPackCamera;
  if (pJVar1 != (JetPackCamera *)0x0) {
    (*(pJVar1->klass->vtable).Initialize.methodPtr)
              (pJVar1,avatarLocal,(pJVar1->klass->vtable).Initialize.method);
    pAVar2 = (this->fields).avatarEditModeCamera;
    if (pAVar2 != (AvatarEditModeCamera *)0x0) {
      (*(pAVar2->klass->vtable).Initialize.methodPtr)
                (pAVar2,avatarLocal,(pAVar2->klass->vtable).Initialize.method);
      pAVar3 = (this->fields).avatarCamerasWrapper;
      pJVar1 = (this->fields).jetPackCamera;
      if (pAVar3 != (AvatarCamerasWrapper *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar4 = (pAVar3->fields).avatarCameras;
        if (pJVar1 != (JetPackCamera *)0x0) {
          IVar5 = (*(pJVar1->klass->vtable).get_CameraType.methodPtr)
                            (pJVar1,(pJVar1->klass->vtable).get_CameraType.method);
          if (pDVar4 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
            pMVar6 = MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                     ->klass->rgctx_data[0x22].method;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar4,IVar5,(Object *)pJVar1
                       ,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),2),pMVar6);
            pAVar3 = (this->fields).avatarCamerasWrapper;
            pAVar2 = (this->fields).avatarEditModeCamera;
            if (pAVar3 != (AvatarCamerasWrapper *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pDVar4 = (pAVar3->fields).avatarCameras;
              if (pAVar2 != (AvatarEditModeCamera *)0x0) {
                IVar5 = (*(pAVar2->klass->vtable).get_CameraType.methodPtr)
                                  (pAVar2,(pAVar2->klass->vtable).get_CameraType.method);
                if (pDVar4 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
                  pMVar6 = MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                           ->klass->rgctx_data[0x22].method;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar4,IVar5,
                             (Object *)pAVar2,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),2),
                             pMVar6);
                  pAVar3 = (this->fields).avatarCamerasWrapper;
                  this_00 = (this->fields).cameraController;
                  if (pAVar3 != (AvatarCamerasWrapper *)0x0) {
                    cameraBases = AvatarCamerasWrapper::AvatarCamerasWrapper_GetCameraBases
                                            (pAVar3,(MethodInfo *)0x0);
                    if (this_00 != (MVCameraController *)0x0) {
                      MVCameraController::MVCameraController_Initialize
                                (this_00,cameraBases,(MethodInfo *)0x0);
                      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                         ((MethodInfo *)0x0);
                      if (pMVar7 != (MainCameraManager *)0x0) {
                        if ((pMVar7->fields).cameraController == (MVCameraController *)0x0) {
                          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                             ((MethodInfo *)0x0);
                          if (pMVar7 == (MainCameraManager *)0x0) goto code_?;
                          MainCameraManager::MainCameraManager_SetCameraController
                                    (pMVar7,(this->fields).cameraController,(MethodInfo *)0x0);
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
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void PushCamera(CameraType) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_PushCamera
               (AvatarCamerasDesktopBuildMode *this,CameraType__Enum cameraType,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraController;
  if (pMVar1 == (MVCameraController *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pMVar3 = (pMVar1->fields).cameraStack;
  if (pMVar3 == (MVCameraController_CameraStack *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                  ,CONCAT44(in_register_00000014,cameraType),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_02 = (pMVar3->fields).cameras;
  if (this_02 == (Dictionary_2_CameraType_MVCameraBase_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__get_Item
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,cameraType,
             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
            );
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar4 = (pMVar3->fields).activeCameras;
  if (pLVar4 == (List_1_MVCameraBase_ *)0x0) goto code_?;
  iVar5 = (pLVar4->fields)._size;
  if (0 < iVar5) {
    pLVar4 = (pMVar3->fields).activeCameras;
    if ((uint)(pLVar4->fields)._size <= iVar5 - 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pMVar6 = (pLVar4->fields)._items;
    if (pMVar6 == (MVCameraBase__Array *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((uint)pMVar6->max_length <= iVar5 - 1U) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pMVar7 = pMVar6->vector[(longlong)iVar5 + -1];
    if (pMVar7 == (MVCameraBase *)0x0) goto code_?;
    (*(pMVar7->klass->vtable).Suspend.methodPtr)
              (pMVar7,pMVar1,(pMVar7->klass->vtable).Suspend.method);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pMVar3->fields).activeCameras == (List_1_MVCameraBase_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?();
  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  pMVar7 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar3,(MethodInfo *)0x0);
  this_04 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_04,(Object *)pMVar7,
             MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
             ,(MethodInfo *)0x0);
  if (pMVar8 == (MainCameraManager *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar9 = &(pMVar8->fields).OnIgnoreInputTypes;
  a = (pMVar8->fields).OnIgnoreInputTypes;
  do {
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_04,(MethodInfo *)0x0);
    pEVar11 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
    if (pDVar10 == (Delegate *)0x0) {
      pEVar12 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0;
    }
    else {
      pEVar12 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)FUN_?(pDVar10);
      if (pEVar12 == (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0) {
        FUN_?(pDVar10,pEVar11);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pEVar13 = *ppEVar9;
    bVar14 = a == pEVar13;
    if (bVar14) {
      *ppEVar9 = pEVar12;
      pEVar13 = a;
    }
    UNLOCK();
    pEVar12 = a;
    if (!bVar14) {
      pEVar12 = pEVar13;
    }
    if (iRam_? != 0) {
      uVar15 = (uint)((ulonglong)ppEVar9 >> 0xc);
      uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
      do {
        uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
        puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
        LOCK();
        bVar14 = uVar17 == *puVar18;
        if (bVar14) {
          *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
        }
        UNLOCK();
      } while (!bVar14);
    }
    bVar14 = pEVar12 != a;
    a = pEVar12;
  } while (bVar14);
  pMVar7 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar3,(MethodInfo *)0x0);
  if (pMVar7 == (MVCameraBase *)0x0) goto code_?;
  (*(pMVar7->klass->vtable).Enter.methodPtr)();
  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar8 == (MainCameraManager *)0x0) goto code_?;
  pMVar1 = (pMVar8->fields).cameraController;
  if (pMVar1 == (MVCameraController *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = (pMVar1->fields).cameraStack;
  if (pMVar3 == (MVCameraController_CameraStack *)0x0) goto code_?;
  pMVar7 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar7 == (MVCameraBase *)0x0) {
code_?:
    bVar14 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar7->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar3 = (pMVar1->fields).cameraStack;
    if ((pMVar3 == (MVCameraController_CameraStack *)0x0) ||
       (pMVar7 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar3,(MethodInfo *)0x0), pMVar7 == (MVCameraBase *)0x0))
    goto code_?;
    uVar15 = (*(pMVar7->klass->vtable).__unknown.methodPtr)
                       (pMVar7,(pMVar7->klass->vtable).__unknown.method);
    if ((uVar15 < 0x15) && ((0x100441U >> (uVar15 & 0x1f) & 1) != 0)) {
      bVar14 = true;
    }
    else {
      bVar14 = uVar15 == 0x13;
    }
  }
  this_00 = (pMVar8->fields).audioListener;
  if (this_00 != (AudioListener *)0x0) {
    method_00 = (MethodInfo *)0x0;
    player = (MVPlayer *)(ulonglong)(bVar14 ^ 1U);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,bVar14 ^ 1U,(MethodInfo *)0x0);
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
    if (this_03 != (MVLocalPlayer *)0x0) {
      pMVar19 = MVLocalPlayer::MVLocalPlayer_get_AvatarLocal(this_03,(MethodInfo *)0x0);
      if (pMVar19 == (MVAvatarLocal *)0x0) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AvatarLocal);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pAVar20 = (pMVar19->fields)._.avatar;
      if (pAVar20 != (Avatar *)0x0) {
        bVar21 = (TypeInfo__AvatarLocal->_1).naturalAligment;
        if (((pAVar20->klass->_1).naturalAligment < bVar21) ||
           ((pAVar20->klass->_1).typeHierarchy[(ulonglong)bVar21 - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLocal)) {
          FUN_?(pAVar20);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_01 = pAVar20[1].fields._.m_CancellationTokenSource;
        if (this_01 != (CancellationTokenSource *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)this_01,bVar14,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PushCamera(MVCameraBase) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_PushCamera_1
               (AvatarCamerasDesktopBuildMode *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraController;
  if ((pMVar1 == (MVCameraController *)0x0) ||
     (pMVar2 = (pMVar1->fields).cameraStack, pMVar2 == (MVCameraController_CameraStack *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar4 = (pMVar2->fields).activeCameras;
  if (pLVar4 == (List_1_MVCameraBase_ *)0x0) goto code_?;
  iVar5 = (pLVar4->fields)._size;
  if (0 < iVar5) {
    pLVar4 = (pMVar2->fields).activeCameras;
    if ((uint)(pLVar4->fields)._size <= iVar5 - 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pMVar6 = (pLVar4->fields)._items;
    if (pMVar6 == (MVCameraBase__Array *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((uint)pMVar6->max_length <= iVar5 - 1U) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pMVar7 = pMVar6->vector[(longlong)iVar5 + -1];
    if (pMVar7 == (MVCameraBase *)0x0) goto code_?;
    (*(pMVar7->klass->vtable).Suspend.methodPtr)
              (pMVar7,pMVar1,(pMVar7->klass->vtable).Suspend.method);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pMVar2->fields).activeCameras == (List_1_MVCameraBase_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?();
  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  pMVar7 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar2,(MethodInfo *)0x0);
  this_03 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_03,(Object *)pMVar7,
             MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
             ,(MethodInfo *)0x0);
  if (pMVar8 == (MainCameraManager *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar9 = &(pMVar8->fields).OnIgnoreInputTypes;
  a = (pMVar8->fields).OnIgnoreInputTypes;
  do {
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
    pEVar11 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
    if (pDVar10 == (Delegate *)0x0) {
      pEVar12 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0;
    }
    else {
      pEVar12 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)FUN_?(pDVar10);
      if (pEVar12 == (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0) {
        FUN_?(pDVar10,pEVar11);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    pEVar13 = *ppEVar9;
    bVar14 = a == pEVar13;
    if (bVar14) {
      *ppEVar9 = pEVar12;
      pEVar13 = a;
    }
    UNLOCK();
    pEVar12 = a;
    if (!bVar14) {
      pEVar12 = pEVar13;
    }
    if (iRam_? != 0) {
      uVar15 = (uint)((ulonglong)ppEVar9 >> 0xc);
      uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
      do {
        uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
        puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
        LOCK();
        bVar14 = uVar17 == *puVar18;
        if (bVar14) {
          *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
        }
        UNLOCK();
      } while (!bVar14);
    }
    bVar14 = pEVar12 != a;
    a = pEVar12;
  } while (bVar14);
  pMVar7 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar2,(MethodInfo *)0x0);
  if (pMVar7 == (MVCameraBase *)0x0) goto code_?;
  (*(pMVar7->klass->vtable).Enter.methodPtr)();
  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar8 == (MainCameraManager *)0x0) goto code_?;
  pMVar1 = (pMVar8->fields).cameraController;
  if (pMVar1 == (MVCameraController *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = (pMVar1->fields).cameraStack;
  if (pMVar2 == (MVCameraController_CameraStack *)0x0) goto code_?;
  pMVar7 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar2,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar7 == (MVCameraBase *)0x0) {
code_?:
    bVar14 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar7->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar2 = (pMVar1->fields).cameraStack;
    if ((pMVar2 == (MVCameraController_CameraStack *)0x0) ||
       (pMVar7 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar2,(MethodInfo *)0x0), pMVar7 == (MVCameraBase *)0x0))
    goto code_?;
    uVar15 = (*(pMVar7->klass->vtable).__unknown.methodPtr)
                       (pMVar7,(pMVar7->klass->vtable).__unknown.method);
    if ((uVar15 < 0x15) && ((0x100441U >> (uVar15 & 0x1f) & 1) != 0)) {
      bVar14 = true;
    }
    else {
      bVar14 = uVar15 == 0x13;
    }
  }
  this_00 = (pMVar8->fields).audioListener;
  if (this_00 != (AudioListener *)0x0) {
    method_00 = (MethodInfo *)0x0;
    player = (MVPlayer *)(ulonglong)(bVar14 ^ 1U);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,bVar14 ^ 1U,(MethodInfo *)0x0);
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
    if (this_02 != (MVLocalPlayer *)0x0) {
      pMVar19 = MVLocalPlayer::MVLocalPlayer_get_AvatarLocal(this_02,(MethodInfo *)0x0);
      if (pMVar19 == (MVAvatarLocal *)0x0) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AvatarLocal);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pAVar20 = (pMVar19->fields)._.avatar;
      if (pAVar20 != (Avatar *)0x0) {
        bVar21 = (TypeInfo__AvatarLocal->_1).naturalAligment;
        if (((pAVar20->klass->_1).naturalAligment < bVar21) ||
           ((pAVar20->klass->_1).typeHierarchy[(ulonglong)bVar21 - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLocal)) {
          FUN_?(pAVar20);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_01 = pAVar20[1].fields._.m_CancellationTokenSource;
        if (this_01 != (CancellationTokenSource *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)this_01,bVar14,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RemoveCamera(CameraType) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_RemoveCamera
               (AvatarCamerasDesktopBuildMode *this,CameraType__Enum cameraType,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraController;
  if (pMVar1 == (MVCameraController *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (pMVar1->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                    ,CONCAT44(in_register_00000014,cameraType),0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).cameras;
    if (this_01 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,cameraType,
                          MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                         );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>,pOVar3,pMVar1,0);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                     );
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar4 = (this_00->fields).activeCameras;
      if (pLVar4 != (List_1_MVCameraBase_ *)0x0) {
        uVar5 = (pLVar4->fields)._size - 1;
        if (-1 < (int)uVar5) {
          lVar6 = (longlong)(int)uVar5;
          lVar7 = lVar6 * 8 + 0x20;
          index = uVar5;
          do {
            pLVar4 = (this_00->fields).activeCameras;
            if (pLVar4 == (List_1_MVCameraBase_ *)0x0) goto code_?;
            if ((uint)(pLVar4->fields)._size <= index) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pMVar8 = (pLVar4->fields)._items;
            if (pMVar8 == (MVCameraBase__Array *)0x0) goto code_?;
            if ((uint)pMVar8->max_length <= index) {
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pOVar9 = *(Object **)((longlong)pMVar8->vector + lVar7 + -0x20);
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
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
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pOVar3 == (Object *)0x0 && pOVar9 == (Object *)0x0) {
code_?:
              pLVar4 = (this_00->fields).activeCameras;
              if ((pLVar4 != (List_1_MVCameraBase_ *)0x0) &&
                 (plVar10 = (longlong *)FUN_?(pLVar4,index), plVar10 != (longlong *)0x0)) {
                (**(code **)(*plVar10 + 0x1d8))(plVar10,pMVar1,*(undefined8 *)(*plVar10 + 0x1e0));
                this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                object = MVCameraController+CameraStack::
                         MVCameraController_CameraStack_get_CurCamera(this_00,(MethodInfo *)0x0);
                this_03 = (UnityAction_2_System_Object_System_Object_ *)
                          FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (this_03,(Object *)object,
                           MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                           ,(MethodInfo *)0x0);
                if (this_02 != (MainCameraManager *)0x0) {
                  MainCameraManager::MainCameraManager_remove_OnIgnoreInputTypes
                            (this_02,(EventHandler_1_OnIgnoreInputTypesArgs_ *)this_03,
                             (MethodInfo *)0x0);
                  pLVar4 = (this_00->fields).activeCameras;
                  if (pLVar4 != (List_1_MVCameraBase_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__RemoveAt
                              ((List_1_System_Object_ *)pLVar4,index,
                               MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_
                              );
                    if (index != uVar5) {
                      return;
                    }
                    if ((int)index < 1) {
                      return;
                    }
                    pLVar4 = (this_00->fields).activeCameras;
                    if ((pLVar4 != (List_1_MVCameraBase_ *)0x0) &&
                       (plVar10 = (longlong *)FUN_?(pLVar4,index - 1),
                       plVar10 != (longlong *)0x0)) {
                      (**(code **)(*plVar10 + 0x1f8))(plVar10,pMVar1,*(undefined8 *)(*plVar10 + 0x200))
                      ;
                      return;
                    }
                  }
                }
              }
              goto code_?;
            }
            if (pOVar3 == (Object *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (pOVar9 == (Object *)0x0) goto code_?;
              bVar11 = pOVar9[1].klass == (Object__Class *)0x0;
            }
            else if (pOVar9 == (Object *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              bVar11 = pOVar3[1].klass == (Object__Class *)0x0;
            }
            else {
              bVar11 = pOVar9 == pOVar3;
            }
            if (bVar11) goto code_?;
            index = index - 1;
            lVar7 = lVar7 + -8;
            lVar6 = lVar6 + -1;
          } while (-1 < lVar6);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveCamera(MVCameraBase) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::
     AvatarCamerasDesktopBuildMode_RemoveCamera_1
               (AvatarCamerasDesktopBuildMode *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraController;
  if ((pMVar1 == (MVCameraController *)0x0) ||
     (this_00 = (pMVar1->fields).cameraStack, this_00 == (MVCameraController_CameraStack *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>,cameraBase,pMVar1,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar3 = (this_00->fields).activeCameras;
  if (pLVar3 != (List_1_MVCameraBase_ *)0x0) {
    uVar4 = (pLVar3->fields)._size - 1;
    if (-1 < (int)uVar4) {
      lVar5 = (longlong)(int)uVar4;
      lVar6 = lVar5 * 8 + 0x20;
      index = uVar4;
      do {
        pLVar3 = (this_00->fields).activeCameras;
        if (pLVar3 == (List_1_MVCameraBase_ *)0x0) goto code_?;
        if ((uint)(pLVar3->fields)._size <= index) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pMVar7 = (pLVar3->fields)._items;
        if (pMVar7 == (MVCameraBase__Array *)0x0) goto code_?;
        if ((uint)pMVar7->max_length <= index) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pMVar8 = *(MVCameraBase **)((longlong)pMVar7->vector + lVar6 + -0x20);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
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
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cameraBase == (MVCameraBase *)0x0 && pMVar8 == (MVCameraBase *)0x0) {
code_?:
          pLVar3 = (this_00->fields).activeCameras;
          if ((pLVar3 != (List_1_MVCameraBase_ *)0x0) &&
             (plVar9 = (longlong *)FUN_?(pLVar3,index), plVar9 != (longlong *)0x0)) {
            (**(code **)(*plVar9 + 0x1d8))(plVar9,pMVar1,*(undefined8 *)(*plVar9 + 0x1e0));
            this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            pMVar8 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                               (this_00,(MethodInfo *)0x0);
            this_02 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_02,(Object *)pMVar8,
                       MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                       ,(MethodInfo *)0x0);
            if (this_01 != (MainCameraManager *)0x0) {
              MainCameraManager::MainCameraManager_remove_OnIgnoreInputTypes
                        (this_01,(EventHandler_1_OnIgnoreInputTypesArgs_ *)this_02,(MethodInfo *)0x0
                        );
              pLVar3 = (this_00->fields).activeCameras;
              if (pLVar3 != (List_1_MVCameraBase_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__RemoveAt
                          ((List_1_System_Object_ *)pLVar3,index,
                           MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_
                          );
                if (index != uVar4) {
                  return;
                }
                if ((int)index < 1) {
                  return;
                }
                pLVar3 = (this_00->fields).activeCameras;
                if ((pLVar3 != (List_1_MVCameraBase_ *)0x0) &&
                   (plVar9 = (longlong *)FUN_?(pLVar3,index - 1), plVar9 != (longlong *)0x0)
                   ) {
                  (**(code **)(*plVar9 + 0x1f8))(plVar9,pMVar1,*(undefined8 *)(*plVar9 + 0x200));
                  return;
                }
              }
            }
          }
          goto code_?;
        }
        if (cameraBase == (MVCameraBase *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pMVar8 == (MVCameraBase *)0x0) goto code_?;
          bVar10 = (pMVar8->fields)._._._._.m_CachedPtr == (void *)0x0;
        }
        else if (pMVar8 == (MVCameraBase *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar10 = (cameraBase->fields)._._._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar10 = pMVar8 == cameraBase;
        }
        if (bVar10) goto code_?;
        index = index - 1;
        lVar6 = lVar6 + -8;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCamera(CameraType) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_SetCamera
               (AvatarCamerasDesktopBuildMode *this,CameraType__Enum cameraType,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraController;
  if (pMVar1 == (MVCameraController *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pMVar3 = (pMVar1->fields).cameraStack;
  if (pMVar3 == (MVCameraController_CameraStack *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                  ,CONCAT44(in_register_00000014,cameraType),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_02 = (pMVar3->fields).cameras;
  if (this_02 == (Dictionary_2_CameraType_MVCameraBase_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__get_Item
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,cameraType,
             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
            );
  MVCameraController+CameraStack::MVCameraController_CameraStack_ClearStack
            (pMVar3,pMVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pMVar3->fields).activeCameras == (List_1_MVCameraBase_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?();
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  pMVar5 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar3,(MethodInfo *)0x0);
  this_04 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_04,(Object *)pMVar5,
             MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
             ,(MethodInfo *)0x0);
  if (pMVar4 == (MainCameraManager *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar6 = &(pMVar4->fields).OnIgnoreInputTypes;
  a = (pMVar4->fields).OnIgnoreInputTypes;
  do {
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_04,(MethodInfo *)0x0);
    pEVar8 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
    if (pDVar7 == (Delegate *)0x0) {
      pEVar9 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0;
    }
    else {
      pEVar9 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)FUN_?(pDVar7);
      if (pEVar9 == (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0) {
        FUN_?(pDVar7,pEVar8);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pEVar10 = *ppEVar6;
    bVar11 = a == pEVar10;
    if (bVar11) {
      *ppEVar6 = pEVar9;
      pEVar10 = a;
    }
    UNLOCK();
    pEVar9 = a;
    if (!bVar11) {
      pEVar9 = pEVar10;
    }
    if (iRam_? != 0) {
      uVar12 = (uint)((ulonglong)ppEVar6 >> 0xc);
      uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
      do {
        uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
        puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar14 == *puVar15;
        if (bVar11) {
          *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    bVar11 = pEVar9 != a;
    a = pEVar9;
  } while (bVar11);
  pMVar5 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar3,(MethodInfo *)0x0);
  if (pMVar5 == (MVCameraBase *)0x0) goto code_?;
  (*(pMVar5->klass->vtable).Enter.methodPtr)();
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar4 == (MainCameraManager *)0x0) goto code_?;
  pMVar1 = (pMVar4->fields).cameraController;
  if (pMVar1 == (MVCameraController *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = (pMVar1->fields).cameraStack;
  if (pMVar3 == (MVCameraController_CameraStack *)0x0) goto code_?;
  pMVar5 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar5 == (MVCameraBase *)0x0) {
code_?:
    bVar11 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar5->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar3 = (pMVar1->fields).cameraStack;
    if ((pMVar3 == (MVCameraController_CameraStack *)0x0) ||
       (pMVar5 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar3,(MethodInfo *)0x0), pMVar5 == (MVCameraBase *)0x0))
    goto code_?;
    uVar12 = (*(pMVar5->klass->vtable).__unknown.methodPtr)
                       (pMVar5,(pMVar5->klass->vtable).__unknown.method);
    if ((uVar12 < 0x15) && ((0x100441U >> (uVar12 & 0x1f) & 1) != 0)) {
      bVar11 = true;
    }
    else {
      bVar11 = uVar12 == 0x13;
    }
  }
  this_00 = (pMVar4->fields).audioListener;
  if (this_00 != (AudioListener *)0x0) {
    method_00 = (MethodInfo *)0x0;
    player = (MVPlayer *)(ulonglong)(bVar11 ^ 1U);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,bVar11 ^ 1U,(MethodInfo *)0x0);
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
    if (this_03 != (MVLocalPlayer *)0x0) {
      pMVar16 = MVLocalPlayer::MVLocalPlayer_get_AvatarLocal(this_03,(MethodInfo *)0x0);
      if (pMVar16 == (MVAvatarLocal *)0x0) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AvatarLocal);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pAVar17 = (pMVar16->fields)._.avatar;
      if (pAVar17 != (Avatar *)0x0) {
        bVar18 = (TypeInfo__AvatarLocal->_1).naturalAligment;
        if (((pAVar17->klass->_1).naturalAligment < bVar18) ||
           ((pAVar17->klass->_1).typeHierarchy[(ulonglong)bVar18 - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLocal)) {
          FUN_?(pAVar17);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_01 = pAVar17[1].fields._.m_CancellationTokenSource;
        if (this_01 != (CancellationTokenSource *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)this_01,bVar11,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCamera(MVCameraBase) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_SetCamera_1
               (AvatarCamerasDesktopBuildMode *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraController;
  if ((pMVar1 == (MVCameraController *)0x0) ||
     (pMVar2 = (pMVar1->fields).cameraStack, pMVar2 == (MVCameraController_CameraStack *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  MVCameraController+CameraStack::MVCameraController_CameraStack_ClearStack
            (pMVar2,pMVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pMVar2->fields).activeCameras == (List_1_MVCameraBase_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?();
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  pMVar5 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar2,(MethodInfo *)0x0);
  this_03 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_03,(Object *)pMVar5,
             MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
             ,(MethodInfo *)0x0);
  if (pMVar4 == (MainCameraManager *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar6 = &(pMVar4->fields).OnIgnoreInputTypes;
  a = (pMVar4->fields).OnIgnoreInputTypes;
  do {
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
    pEVar8 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
    if (pDVar7 == (Delegate *)0x0) {
      pEVar9 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0;
    }
    else {
      pEVar9 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)FUN_?(pDVar7);
      if (pEVar9 == (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0) {
        FUN_?(pDVar7,pEVar8);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    pEVar10 = *ppEVar6;
    bVar11 = a == pEVar10;
    if (bVar11) {
      *ppEVar6 = pEVar9;
      pEVar10 = a;
    }
    UNLOCK();
    pEVar9 = a;
    if (!bVar11) {
      pEVar9 = pEVar10;
    }
    if (iRam_? != 0) {
      uVar12 = (uint)((ulonglong)ppEVar6 >> 0xc);
      uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
      do {
        uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
        puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar14 == *puVar15;
        if (bVar11) {
          *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    bVar11 = pEVar9 != a;
    a = pEVar9;
  } while (bVar11);
  pMVar5 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar2,(MethodInfo *)0x0);
  if (pMVar5 == (MVCameraBase *)0x0) goto code_?;
  (*(pMVar5->klass->vtable).Enter.methodPtr)();
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar4 == (MainCameraManager *)0x0) goto code_?;
  pMVar1 = (pMVar4->fields).cameraController;
  if (pMVar1 == (MVCameraController *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = (pMVar1->fields).cameraStack;
  if (pMVar2 == (MVCameraController_CameraStack *)0x0) goto code_?;
  pMVar5 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar2,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar5 == (MVCameraBase *)0x0) {
code_?:
    bVar11 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar5->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar2 = (pMVar1->fields).cameraStack;
    if ((pMVar2 == (MVCameraController_CameraStack *)0x0) ||
       (pMVar5 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar2,(MethodInfo *)0x0), pMVar5 == (MVCameraBase *)0x0))
    goto code_?;
    uVar12 = (*(pMVar5->klass->vtable).__unknown.methodPtr)
                       (pMVar5,(pMVar5->klass->vtable).__unknown.method);
    if ((uVar12 < 0x15) && ((0x100441U >> (uVar12 & 0x1f) & 1) != 0)) {
      bVar11 = true;
    }
    else {
      bVar11 = uVar12 == 0x13;
    }
  }
  this_00 = (pMVar4->fields).audioListener;
  if (this_00 != (AudioListener *)0x0) {
    method_00 = (MethodInfo *)0x0;
    player = (MVPlayer *)(ulonglong)(bVar11 ^ 1U);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,bVar11 ^ 1U,(MethodInfo *)0x0);
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
    if (this_02 != (MVLocalPlayer *)0x0) {
      pMVar16 = MVLocalPlayer::MVLocalPlayer_get_AvatarLocal(this_02,(MethodInfo *)0x0);
      if (pMVar16 == (MVAvatarLocal *)0x0) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AvatarLocal);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pAVar17 = (pMVar16->fields)._.avatar;
      if (pAVar17 != (Avatar *)0x0) {
        bVar18 = (TypeInfo__AvatarLocal->_1).naturalAligment;
        if (((pAVar17->klass->_1).naturalAligment < bVar18) ||
           ((pAVar17->klass->_1).typeHierarchy[(ulonglong)bVar18 - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLocal)) {
          FUN_?(pAVar17);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_01 = pAVar17[1].fields._.m_CancellationTokenSource;
        if (this_01 != (CancellationTokenSource *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)this_01,bVar11,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* AvatarCamerasDesktopBuildMode() */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode__ctor
               (AvatarCamerasDesktopBuildMode *this,MethodInfo *method)

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

