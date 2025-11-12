
/* Void Activate() */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_Activate
               (MVCameraController *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraStack;
  if (pMVar1 == (MVCameraController_CameraStack *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(pMVar1->fields).cameras;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                            ),
        pDVar3 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_4 = (pDVar3->fields)._dictionary;
  puStack_5 = (undefined4 *)0x0;
  puStack_6 = (undefined *)0x0;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&uStack_4 >> 0xc);
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
  if (uStack_4 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_11 = (uStack_4->fields)._version;
  puStack_6 = (undefined *)0x0;
  uStack_4._4_4_ = (undefined4)((ulonglong)uStack_4 >> 0x20);
  uStack_12 = (undefined4)uStack_4;
  uStack_13 = uStack_4._4_4_;
  uStack_14 = 0;
  aplStack_15[0] = (longlong *)0x0;
  uStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0;
  puStack_5 = &uStack_12;
  do {
    lVar16 = CONCAT44(uStack_13,uStack_12);
    if (lVar16 == 0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iStack_11 != *(int *)(lVar16 + 0x2c)) {
code_?:
      mscorlib.dll::System::ThrowHelper::
      ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                ((MethodInfo *)0x0);
      goto code_?;
    }
    do {
      if (lVar16 == 0) goto code_?;
      if (*(uint *)(lVar16 + 0x20) <= uStack_14) {
        return;
      }
      lVar17 = *(longlong *)(lVar16 + 0x18);
      lVar18 = (longlong)(int)uStack_14;
      uVar7 = uStack_14 + 1;
      if (lVar17 == 0) goto code_?;
      if (*(uint *)(lVar17 + 0x18) <= uStack_14) {
        uStack_14 = uVar7;
        FUN_?();
        goto code_?;
      }
      uStack_14 = uVar7;
    } while (*(int *)(lVar17 + 0x20 + lVar18 * 0x18) < 0);
    aplStack_15[0] = *(longlong **)(lVar17 + (lVar18 + 2) * 0x18);
    func_?(aplStack_15);
    if (aplStack_15[0] == (longlong *)0x0) {
code_?:
      FUN_?();
      uVar7 = uStack_14;
code_?:
      uStack_14 = uVar7;
      FUN_?();
code_?:
      FUN_?();
      goto code_?;
    }
    (**(code **)(*aplStack_15[0] + 0x228))(aplStack_15[0],*(undefined8 *)(*aplStack_15[0] + 0x230));
  } while( true );
}


/* Void Deactivate() */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_Deactivate
               (MVCameraController *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraStack;
  if (pMVar1 == (MVCameraController_CameraStack *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(pMVar1->fields).cameras;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                            ),
        pDVar3 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_4 = (pDVar3->fields)._dictionary;
  puStack_5 = (undefined4 *)0x0;
  puStack_6 = (undefined *)0x0;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&uStack_4 >> 0xc);
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
  if (uStack_4 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_11 = (uStack_4->fields)._version;
  puStack_6 = (undefined *)0x0;
  uStack_4._4_4_ = (undefined4)((ulonglong)uStack_4 >> 0x20);
  uStack_12 = (undefined4)uStack_4;
  uStack_13 = uStack_4._4_4_;
  uStack_14 = 0;
  aplStack_15[0] = (longlong *)0x0;
  uStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0;
  puStack_5 = &uStack_12;
  do {
    lVar16 = CONCAT44(uStack_13,uStack_12);
    if (lVar16 == 0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iStack_11 != *(int *)(lVar16 + 0x2c)) {
code_?:
      mscorlib.dll::System::ThrowHelper::
      ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                ((MethodInfo *)0x0);
      goto code_?;
    }
    do {
      if (lVar16 == 0) goto code_?;
      if (*(uint *)(lVar16 + 0x20) <= uStack_14) {
        return;
      }
      lVar17 = *(longlong *)(lVar16 + 0x18);
      lVar18 = (longlong)(int)uStack_14;
      uVar7 = uStack_14 + 1;
      if (lVar17 == 0) goto code_?;
      if (*(uint *)(lVar17 + 0x18) <= uStack_14) {
        uStack_14 = uVar7;
        FUN_?();
        goto code_?;
      }
      uStack_14 = uVar7;
    } while (*(int *)(lVar17 + 0x20 + lVar18 * 0x18) < 0);
    aplStack_15[0] = *(longlong **)(lVar17 + (lVar18 + 2) * 0x18);
    func_?(aplStack_15);
    if (aplStack_15[0] == (longlong *)0x0) {
code_?:
      FUN_?();
      uVar7 = uStack_14;
code_?:
      uStack_14 = uVar7;
      FUN_?();
code_?:
      FUN_?();
      goto code_?;
    }
    (**(code **)(*aplStack_15[0] + 0x238))(aplStack_15[0],*(undefined8 *)(*aplStack_15[0] + 0x240));
  } while( true );
}


/* Object GetCamera[Object]() */

Object * Assembly-CSharp.dll::MVCameraController::MVCameraController_GetCamera
                   (MVCameraController *this,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    DStack_1._current.value = (Object *)&UNK_?;
    FUN_?(method);
  }
  pMVar2 = (this->fields).cameraStack;
  if (pMVar2 == (MVCameraController_CameraStack *)0x0) {
    DStack_1._current.value = (Object *)&UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    pOVar4 = (Object *)(*pcVar3)();
    return pOVar4;
  }
  lVar5 = *(longlong *)(method->field7_0x38).methodMetadataHandle;
  if (*(longlong *)(lVar5 + 0x38) == 0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<CameraType,_MVCameraBase>__get_Value__
                 );
    LOCK();
    UNLOCK();
    if (*(longlong *)(lVar5 + 0x38) == 0) {
      FUN_?(lVar5);
    }
  }
  pDVar6 = (Dictionary_2_System_UInt32_System_Object_ *)(pMVar2->fields).cameras;
  if (pDVar6 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    FUN_?();
  }
  else {
    uStack_7 = 0;
    uStack_8 = 0;
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&pDStack_10 >> 0xc);
      puVar11 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar12 = *puVar11;
        LOCK();
        uVar13 = *puVar11;
        if (uVar12 == uVar13) {
          *puVar11 = uVar12 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (uVar12 != uVar13);
    }
    pOVar4 = (Object *)0x0;
    uStack_14 = (ulonglong)(uint)(pDVar6->fields)._version;
    uStack_15 = 2;
    DStack_1._version = (undefined4)uStack_14;
    DStack_1._index = uStack_14._4_4_;
    DStack_1._current.key = 0;
    DStack_1._current._4_4_ = 0;
    DStack_1._current.value = (Object *)0x0;
    DStack_1._getEnumeratorRetType = 2;
    DStack_1._36_4_ = 0;
    pDStack_10 = pDVar6;
    DStack_1._dictionary = pDVar6;
    do {
      bVar16 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_1,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                        );
      unaff_RDI = DStack_1._current.value;
      if (bVar16 == 0) {
        return (Object *)0x0;
      }
      if (DStack_1._current.value == (Object *)0x0) goto code_?;
      pOVar17 = (Object *)FUN_?(&((DStack_1._current.value)->klass->_0).byval_arg);
      lVar18 = **(longlong **)(lVar5 + 0x38);
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pOVar19 = pOVar4;
      if (lVar18 != 0) {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar18 = FUN_?(lVar18,1);
        pOVar19 = (Object *)FUN_?(lVar18 + 0x20);
      }
    } while (pOVar17 != pOVar19);
    pMVar2 = *(MVCameraController_CameraStack **)(*(longlong *)(lVar5 + 0x38) + 8);
    if (((ulonglong)pMVar2[9].fields.activeCameras & 0x10000000000) == 0) {
      pMVar2 = (MVCameraController_CameraStack *)FUN_?(pMVar2);
    }
    if ((unaff_RDI == (Object *)0x0) ||
       (pOVar4 = (Object *)FUN_?(unaff_RDI,pMVar2), pOVar4 != (Object *)0x0)) {
      return pOVar4;
    }
  }
  FUN_?(unaff_RDI,pMVar2);
code_?:
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar3)();
  return pOVar4;
}


/* Void Initialize(List`1[MVCameraBase]) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_Initialize
               (MVCameraController *this,List_1_MVCameraBase_ *cameraBases,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVCameraController__CameraStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (MVCameraController_CameraStack *)
            FUN_?(TypeInfo__MVCameraController__CameraStack);
  MVCameraController+CameraStack::MVCameraController_CameraStack__ctor
            (this_00,cameraBases,this,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).cameraStack = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Void PushCamera(CameraType) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_PushCamera
               (MVCameraController *this,CameraType__Enum cameraType,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraStack;
  if (pMVar1 == (MVCameraController_CameraStack *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_02 = (pMVar1->fields).cameras;
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
  pLVar3 = (pMVar1->fields).activeCameras;
  if (pLVar3 == (List_1_MVCameraBase_ *)0x0) goto code_?;
  iVar4 = (pLVar3->fields)._size;
  if (0 < iVar4) {
    pLVar3 = (pMVar1->fields).activeCameras;
    if ((uint)(pLVar3->fields)._size <= iVar4 - 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pMVar5 = (pLVar3->fields)._items;
    if (pMVar5 == (MVCameraBase__Array *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((uint)pMVar5->max_length <= iVar4 - 1U) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pMVar6 = pMVar5->vector[(longlong)iVar4 + -1];
    if (pMVar6 == (MVCameraBase *)0x0) goto code_?;
    (*(pMVar6->klass->vtable).Suspend.methodPtr)
              (pMVar6,this,(pMVar6->klass->vtable).Suspend.method);
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
  if ((pMVar1->fields).activeCameras == (List_1_MVCameraBase_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?();
  pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  pMVar6 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar1,(MethodInfo *)0x0);
  this_04 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_04,(Object *)pMVar6,
             MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
             ,(MethodInfo *)0x0);
  if (pMVar7 == (MainCameraManager *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar8 = &(pMVar7->fields).OnIgnoreInputTypes;
  a = (pMVar7->fields).OnIgnoreInputTypes;
  do {
    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_04,(MethodInfo *)0x0);
    pEVar10 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
    if (pDVar9 == (Delegate *)0x0) {
      pEVar11 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0;
    }
    else {
      pEVar11 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)FUN_?(pDVar9);
      if (pEVar11 == (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0) {
        FUN_?(pDVar9,pEVar10);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pEVar12 = *ppEVar8;
    bVar13 = a == pEVar12;
    if (bVar13) {
      *ppEVar8 = pEVar11;
      pEVar12 = a;
    }
    UNLOCK();
    pEVar11 = a;
    if (!bVar13) {
      pEVar11 = pEVar12;
    }
    if (iRam_? != 0) {
      uVar14 = (uint)((ulonglong)ppEVar8 >> 0xc);
      uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
      do {
        uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
        puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
        LOCK();
        bVar13 = uVar16 == *puVar17;
        if (bVar13) {
          *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    bVar13 = pEVar11 != a;
    a = pEVar11;
  } while (bVar13);
  pMVar6 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar1,(MethodInfo *)0x0);
  if (pMVar6 == (MVCameraBase *)0x0) goto code_?;
  (*(pMVar6->klass->vtable).Enter.methodPtr)();
  pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar7 == (MainCameraManager *)0x0) goto code_?;
  pMVar18 = (pMVar7->fields).cameraController;
  if (pMVar18 == (MVCameraController *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (pMVar18->fields).cameraStack;
  if (pMVar1 == (MVCameraController_CameraStack *)0x0) goto code_?;
  pMVar6 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar1,(MethodInfo *)0x0);
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
  if (pMVar6 == (MVCameraBase *)0x0) {
code_?:
    bVar13 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar6->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar1 = (pMVar18->fields).cameraStack;
    if ((pMVar1 == (MVCameraController_CameraStack *)0x0) ||
       (pMVar6 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar1,(MethodInfo *)0x0), pMVar6 == (MVCameraBase *)0x0))
    goto code_?;
    uVar14 = (*(pMVar6->klass->vtable).__unknown.methodPtr)
                       (pMVar6,(pMVar6->klass->vtable).__unknown.method);
    if ((uVar14 < 0x15) && ((0x100441U >> (uVar14 & 0x1f) & 1) != 0)) {
      bVar13 = true;
    }
    else {
      bVar13 = uVar14 == 0x13;
    }
  }
  this_00 = (pMVar7->fields).audioListener;
  if (this_00 != (AudioListener *)0x0) {
    method_00 = (MethodInfo *)0x0;
    player = (MVPlayer *)(ulonglong)(bVar13 ^ 1U);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,bVar13 ^ 1U,(MethodInfo *)0x0);
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
                    ((GameObject *)this_01,bVar13,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::MVCameraController::MVCameraController_PushCamera_1
               (MVCameraController *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraStack;
  if (pMVar1 == (MVCameraController_CameraStack *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
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
  pLVar3 = (pMVar1->fields).activeCameras;
  if (pLVar3 == (List_1_MVCameraBase_ *)0x0) goto code_?;
  iVar4 = (pLVar3->fields)._size;
  if (0 < iVar4) {
    pLVar3 = (pMVar1->fields).activeCameras;
    if ((uint)(pLVar3->fields)._size <= iVar4 - 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pMVar5 = (pLVar3->fields)._items;
    if (pMVar5 == (MVCameraBase__Array *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((uint)pMVar5->max_length <= iVar4 - 1U) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pMVar6 = pMVar5->vector[(longlong)iVar4 + -1];
    if (pMVar6 == (MVCameraBase *)0x0) goto code_?;
    (*(pMVar6->klass->vtable).Suspend.methodPtr)
              (pMVar6,this,(pMVar6->klass->vtable).Suspend.method);
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
  if ((pMVar1->fields).activeCameras == (List_1_MVCameraBase_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?();
  pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  pMVar6 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar1,(MethodInfo *)0x0);
  this_03 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_03,(Object *)pMVar6,
             MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
             ,(MethodInfo *)0x0);
  if (pMVar7 == (MainCameraManager *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar8 = &(pMVar7->fields).OnIgnoreInputTypes;
  a = (pMVar7->fields).OnIgnoreInputTypes;
  do {
    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
    pEVar10 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
    if (pDVar9 == (Delegate *)0x0) {
      pEVar11 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0;
    }
    else {
      pEVar11 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)FUN_?(pDVar9);
      if (pEVar11 == (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0) {
        FUN_?(pDVar9,pEVar10);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pEVar12 = *ppEVar8;
    bVar13 = a == pEVar12;
    if (bVar13) {
      *ppEVar8 = pEVar11;
      pEVar12 = a;
    }
    UNLOCK();
    pEVar11 = a;
    if (!bVar13) {
      pEVar11 = pEVar12;
    }
    if (iRam_? != 0) {
      uVar14 = (uint)((ulonglong)ppEVar8 >> 0xc);
      uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
      do {
        uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
        puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
        LOCK();
        bVar13 = uVar16 == *puVar17;
        if (bVar13) {
          *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    bVar13 = pEVar11 != a;
    a = pEVar11;
  } while (bVar13);
  pMVar6 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar1,(MethodInfo *)0x0);
  if (pMVar6 == (MVCameraBase *)0x0) goto code_?;
  (*(pMVar6->klass->vtable).Enter.methodPtr)();
  pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar7 == (MainCameraManager *)0x0) goto code_?;
  pMVar18 = (pMVar7->fields).cameraController;
  if (pMVar18 == (MVCameraController *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (pMVar18->fields).cameraStack;
  if (pMVar1 == (MVCameraController_CameraStack *)0x0) goto code_?;
  pMVar6 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar1,(MethodInfo *)0x0);
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
  if (pMVar6 == (MVCameraBase *)0x0) {
code_?:
    bVar13 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar6->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar1 = (pMVar18->fields).cameraStack;
    if ((pMVar1 == (MVCameraController_CameraStack *)0x0) ||
       (pMVar6 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar1,(MethodInfo *)0x0), pMVar6 == (MVCameraBase *)0x0))
    goto code_?;
    uVar14 = (*(pMVar6->klass->vtable).__unknown.methodPtr)
                       (pMVar6,(pMVar6->klass->vtable).__unknown.method);
    if ((uVar14 < 0x15) && ((0x100441U >> (uVar14 & 0x1f) & 1) != 0)) {
      bVar13 = true;
    }
    else {
      bVar13 = uVar14 == 0x13;
    }
  }
  this_00 = (pMVar7->fields).audioListener;
  if (this_00 != (AudioListener *)0x0) {
    method_00 = (MethodInfo *)0x0;
    player = (MVPlayer *)(ulonglong)(bVar13 ^ 1U);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,bVar13 ^ 1U,(MethodInfo *)0x0);
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
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_01 = pAVar20[1].fields._.m_CancellationTokenSource;
        if (this_01 != (CancellationTokenSource *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)this_01,bVar13,(MethodInfo *)0x0);
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


/* Void RemoveCamera(CameraType) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_RemoveCamera
               (MVCameraController *this,CameraType__Enum cameraType,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).cameras;
    if (this_01 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,cameraType,
                          MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                         );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>,pOVar1,this,0);
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
      pLVar2 = (this_00->fields).activeCameras;
      if (pLVar2 != (List_1_MVCameraBase_ *)0x0) {
        uVar3 = (pLVar2->fields)._size - 1;
        if (-1 < (int)uVar3) {
          lVar4 = (longlong)(int)uVar3;
          lVar5 = lVar4 * 8 + 0x20;
          index = uVar3;
          do {
            pLVar2 = (this_00->fields).activeCameras;
            if (pLVar2 == (List_1_MVCameraBase_ *)0x0) goto code_?;
            if ((uint)(pLVar2->fields)._size <= index) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pMVar7 = (pLVar2->fields)._items;
            if (pMVar7 == (MVCameraBase__Array *)0x0) goto code_?;
            if ((uint)pMVar7->max_length <= index) {
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pOVar8 = *(Object **)((longlong)pMVar7->vector + lVar5 + -0x20);
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
            if (pOVar1 == (Object *)0x0 && pOVar8 == (Object *)0x0) {
code_?:
              pLVar2 = (this_00->fields).activeCameras;
              if ((pLVar2 != (List_1_MVCameraBase_ *)0x0) &&
                 (plVar9 = (longlong *)FUN_?(pLVar2,index), plVar9 != (longlong *)0x0)) {
                (**(code **)(*plVar9 + 0x1d8))(plVar9,this,*(undefined8 *)(*plVar9 + 0x1e0));
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
                  pLVar2 = (this_00->fields).activeCameras;
                  if (pLVar2 != (List_1_MVCameraBase_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__RemoveAt
                              ((List_1_System_Object_ *)pLVar2,index,
                               MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_
                              );
                    if (index != uVar3) {
                      return;
                    }
                    if ((int)index < 1) {
                      return;
                    }
                    pLVar2 = (this_00->fields).activeCameras;
                    if ((pLVar2 != (List_1_MVCameraBase_ *)0x0) &&
                       (plVar9 = (longlong *)FUN_?(pLVar2,index - 1),
                       plVar9 != (longlong *)0x0)) {
                      (**(code **)(*plVar9 + 0x1f8))(plVar9,this,*(undefined8 *)(*plVar9 + 0x200));
                      return;
                    }
                  }
                }
              }
              goto code_?;
            }
            if (pOVar1 == (Object *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (pOVar8 == (Object *)0x0) goto code_?;
              bVar10 = pOVar8[1].klass == (Object__Class *)0x0;
            }
            else if (pOVar8 == (Object *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              bVar10 = pOVar1[1].klass == (Object__Class *)0x0;
            }
            else {
              bVar10 = pOVar8 == pOVar1;
            }
            if (bVar10) goto code_?;
            index = index - 1;
            lVar5 = lVar5 + -8;
            lVar4 = lVar4 + -1;
          } while (-1 < lVar4);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RemoveCamera(MVCameraBase) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_RemoveCamera_1
               (MVCameraController *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 == (MVCameraController_CameraStack *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>,cameraBase,this,0);
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
  pLVar2 = (this_00->fields).activeCameras;
  if (pLVar2 != (List_1_MVCameraBase_ *)0x0) {
    uVar3 = (pLVar2->fields)._size - 1;
    if (-1 < (int)uVar3) {
      lVar4 = (longlong)(int)uVar3;
      lVar5 = lVar4 * 8 + 0x20;
      index = uVar3;
      do {
        pLVar2 = (this_00->fields).activeCameras;
        if (pLVar2 == (List_1_MVCameraBase_ *)0x0) goto code_?;
        if ((uint)(pLVar2->fields)._size <= index) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pMVar6 = (pLVar2->fields)._items;
        if (pMVar6 == (MVCameraBase__Array *)0x0) goto code_?;
        if ((uint)pMVar6->max_length <= index) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pMVar7 = *(MVCameraBase **)((longlong)pMVar6->vector + lVar5 + -0x20);
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
        if (cameraBase == (MVCameraBase *)0x0 && pMVar7 == (MVCameraBase *)0x0) {
code_?:
          pLVar2 = (this_00->fields).activeCameras;
          if ((pLVar2 != (List_1_MVCameraBase_ *)0x0) &&
             (plVar8 = (longlong *)FUN_?(pLVar2,index), plVar8 != (longlong *)0x0)) {
            (**(code **)(*plVar8 + 0x1d8))(plVar8,this,*(undefined8 *)(*plVar8 + 0x1e0));
            this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            pMVar7 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                               (this_00,(MethodInfo *)0x0);
            this_02 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_02,(Object *)pMVar7,
                       MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                       ,(MethodInfo *)0x0);
            if (this_01 != (MainCameraManager *)0x0) {
              MainCameraManager::MainCameraManager_remove_OnIgnoreInputTypes
                        (this_01,(EventHandler_1_OnIgnoreInputTypesArgs_ *)this_02,(MethodInfo *)0x0
                        );
              pLVar2 = (this_00->fields).activeCameras;
              if (pLVar2 != (List_1_MVCameraBase_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__RemoveAt
                          ((List_1_System_Object_ *)pLVar2,index,
                           MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_
                          );
                if (index != uVar3) {
                  return;
                }
                if ((int)index < 1) {
                  return;
                }
                pLVar2 = (this_00->fields).activeCameras;
                if ((pLVar2 != (List_1_MVCameraBase_ *)0x0) &&
                   (plVar8 = (longlong *)FUN_?(pLVar2,index - 1), plVar8 != (longlong *)0x0)
                   ) {
                  (**(code **)(*plVar8 + 0x1f8))(plVar8,this,*(undefined8 *)(*plVar8 + 0x200));
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
          if (pMVar7 == (MVCameraBase *)0x0) goto code_?;
          bVar9 = (pMVar7->fields)._._._._.m_CachedPtr == (void *)0x0;
        }
        else if (pMVar7 == (MVCameraBase *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar9 = (cameraBase->fields)._._._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar9 = pMVar7 == cameraBase;
        }
        if (bVar9) goto code_?;
        index = index - 1;
        lVar5 = lVar5 + -8;
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Respawn() */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_Respawn
               (MVCameraController *this,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    pMVar1 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                       (this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVCameraBase *)0x0) {
      UNRECOVERED_JUMPTABLE = (pMVar1->klass->vtable).Reset.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(pMVar1,(pMVar1->klass->vtable).Reset.method,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCamera(CameraType) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_SetCamera
               (MVCameraController *this,CameraType__Enum cameraType,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraStack;
  if (pMVar1 == (MVCameraController_CameraStack *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_02 = (pMVar1->fields).cameras;
  if (this_02 == (Dictionary_2_CameraType_MVCameraBase_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__get_Item
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,cameraType,
             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
            );
  MVCameraController+CameraStack::MVCameraController_CameraStack_ClearStack
            (pMVar1,this,(MethodInfo *)0x0);
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
  if ((pMVar1->fields).activeCameras == (List_1_MVCameraBase_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?();
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  pMVar4 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar1,(MethodInfo *)0x0);
  this_04 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_04,(Object *)pMVar4,
             MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
             ,(MethodInfo *)0x0);
  if (pMVar3 == (MainCameraManager *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar5 = &(pMVar3->fields).OnIgnoreInputTypes;
  a = (pMVar3->fields).OnIgnoreInputTypes;
  do {
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_04,(MethodInfo *)0x0);
    pEVar7 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
    if (pDVar6 == (Delegate *)0x0) {
      pEVar8 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0;
    }
    else {
      pEVar8 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)FUN_?(pDVar6);
      if (pEVar8 == (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0) {
        FUN_?(pDVar6,pEVar7);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pEVar9 = *ppEVar5;
    bVar10 = a == pEVar9;
    if (bVar10) {
      *ppEVar5 = pEVar8;
      pEVar9 = a;
    }
    UNLOCK();
    pEVar8 = a;
    if (!bVar10) {
      pEVar8 = pEVar9;
    }
    if (iRam_? != 0) {
      uVar11 = (uint)((ulonglong)ppEVar5 >> 0xc);
      uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
      do {
        uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
        puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar13 == *puVar14;
        if (bVar10) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    bVar10 = pEVar8 != a;
    a = pEVar8;
  } while (bVar10);
  pMVar4 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar1,(MethodInfo *)0x0);
  if (pMVar4 == (MVCameraBase *)0x0) goto code_?;
  (*(pMVar4->klass->vtable).Enter.methodPtr)();
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar3 == (MainCameraManager *)0x0) goto code_?;
  pMVar15 = (pMVar3->fields).cameraController;
  if (pMVar15 == (MVCameraController *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (pMVar15->fields).cameraStack;
  if (pMVar1 == (MVCameraController_CameraStack *)0x0) goto code_?;
  pMVar4 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar1,(MethodInfo *)0x0);
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
  if (pMVar4 == (MVCameraBase *)0x0) {
code_?:
    bVar10 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar4->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar1 = (pMVar15->fields).cameraStack;
    if ((pMVar1 == (MVCameraController_CameraStack *)0x0) ||
       (pMVar4 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar1,(MethodInfo *)0x0), pMVar4 == (MVCameraBase *)0x0))
    goto code_?;
    uVar11 = (*(pMVar4->klass->vtable).__unknown.methodPtr)
                       (pMVar4,(pMVar4->klass->vtable).__unknown.method);
    if ((uVar11 < 0x15) && ((0x100441U >> (uVar11 & 0x1f) & 1) != 0)) {
      bVar10 = true;
    }
    else {
      bVar10 = uVar11 == 0x13;
    }
  }
  this_00 = (pMVar3->fields).audioListener;
  if (this_00 != (AudioListener *)0x0) {
    method_00 = (MethodInfo *)0x0;
    player = (MVPlayer *)(ulonglong)(bVar10 ^ 1U);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,bVar10 ^ 1U,(MethodInfo *)0x0);
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
                    ((GameObject *)this_01,bVar10,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::MVCameraController::MVCameraController_SetCamera_1
               (MVCameraController *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraStack;
  if (pMVar1 == (MVCameraController_CameraStack *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  MVCameraController+CameraStack::MVCameraController_CameraStack_ClearStack
            (pMVar1,this,(MethodInfo *)0x0);
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
  if ((pMVar1->fields).activeCameras == (List_1_MVCameraBase_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?();
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  pMVar4 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar1,(MethodInfo *)0x0);
  this_03 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_03,(Object *)pMVar4,
             MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
             ,(MethodInfo *)0x0);
  if (pMVar3 == (MainCameraManager *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar5 = &(pMVar3->fields).OnIgnoreInputTypes;
  a = (pMVar3->fields).OnIgnoreInputTypes;
  do {
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
    pEVar7 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
    if (pDVar6 == (Delegate *)0x0) {
      pEVar8 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0;
    }
    else {
      pEVar8 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)FUN_?(pDVar6);
      if (pEVar8 == (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0) {
        FUN_?(pDVar6,pEVar7);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pEVar9 = *ppEVar5;
    bVar10 = a == pEVar9;
    if (bVar10) {
      *ppEVar5 = pEVar8;
      pEVar9 = a;
    }
    UNLOCK();
    pEVar8 = a;
    if (!bVar10) {
      pEVar8 = pEVar9;
    }
    if (iRam_? != 0) {
      uVar11 = (uint)((ulonglong)ppEVar5 >> 0xc);
      uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
      do {
        uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
        puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar13 == *puVar14;
        if (bVar10) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    bVar10 = pEVar8 != a;
    a = pEVar8;
  } while (bVar10);
  pMVar4 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar1,(MethodInfo *)0x0);
  if (pMVar4 == (MVCameraBase *)0x0) goto code_?;
  (*(pMVar4->klass->vtable).Enter.methodPtr)();
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar3 == (MainCameraManager *)0x0) goto code_?;
  pMVar15 = (pMVar3->fields).cameraController;
  if (pMVar15 == (MVCameraController *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (pMVar15->fields).cameraStack;
  if (pMVar1 == (MVCameraController_CameraStack *)0x0) goto code_?;
  pMVar4 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                      (pMVar1,(MethodInfo *)0x0);
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
  if (pMVar4 == (MVCameraBase *)0x0) {
code_?:
    bVar10 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar4->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar1 = (pMVar15->fields).cameraStack;
    if ((pMVar1 == (MVCameraController_CameraStack *)0x0) ||
       (pMVar4 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (pMVar1,(MethodInfo *)0x0), pMVar4 == (MVCameraBase *)0x0))
    goto code_?;
    uVar11 = (*(pMVar4->klass->vtable).__unknown.methodPtr)
                       (pMVar4,(pMVar4->klass->vtable).__unknown.method);
    if ((uVar11 < 0x15) && ((0x100441U >> (uVar11 & 0x1f) & 1) != 0)) {
      bVar10 = true;
    }
    else {
      bVar10 = uVar11 == 0x13;
    }
  }
  this_00 = (pMVar3->fields).audioListener;
  if (this_00 != (AudioListener *)0x0) {
    method_00 = (MethodInfo *)0x0;
    player = (MVPlayer *)(ulonglong)(bVar10 ^ 1U);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,bVar10 ^ 1U,(MethodInfo *)0x0);
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
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_01 = pAVar17[1].fields._.m_CancellationTokenSource;
        if (this_01 != (CancellationTokenSource *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)this_01,bVar10,(MethodInfo *)0x0);
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


/* Void UpdateCamera(ProtectedTransform) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_UpdateCamera
               (MVCameraController *this,ProtectedTransform *protectedTransform,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    pMVar1 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                       (this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVCameraBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pMVar1->klass->vtable).UpdateCamera.methodPtr)
                (pMVar1,this,protectedTransform,(pMVar1->klass->vtable).UpdateCamera.method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVCameraBase get_CurCamera() */

MVCameraBase *
Assembly-CSharp.dll::MVCameraController::MVCameraController_get_CurCamera
          (MVCameraController *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraStack;
  if (pMVar1 == (MVCameraController_CameraStack *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pMVar3 = (MVCameraBase *)(*pcVar2)();
    return pMVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar4 = (pMVar1->fields).activeCameras;
  if (pLVar4 != (List_1_MVCameraBase_ *)0x0) {
    if ((pLVar4->fields)._size == 0) {
      return (MVCameraBase *)0x0;
    }
    iVar5 = (pLVar4->fields)._size;
    if ((uint)(pLVar4->fields)._size <= iVar5 - 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      pMVar3 = (MVCameraBase *)(*pcVar2)();
      return pMVar3;
    }
    pMVar6 = (pLVar4->fields)._items;
    if (pMVar6 != (MVCameraBase__Array *)0x0) {
      if (iVar5 - 1U < (uint)pMVar6->max_length) {
        return pMVar6->vector[(longlong)iVar5 + -1];
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      pMVar3 = (MVCameraBase *)(*pcVar2)();
      return pMVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVCameraBase *)(*pcVar2)();
  return pMVar3;
}


/* Boolean get_HasEars() */

bool Assembly-CSharp.dll::MVCameraController::MVCameraController_get_HasEars
               (MVCameraController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).cameraStack;
  if (pMVar1 == (MVCameraController_CameraStack *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pMVar4 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                     (pMVar1,(MethodInfo *)0x0);
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
  if (pMVar4 != (MVCameraBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar4->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pMVar1 = (this->fields).cameraStack;
      if (pMVar1 != (MVCameraController_CameraStack *)0x0) {
        pMVar4 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                           (pMVar1,(MethodInfo *)0x0);
        if (pMVar4 != (MVCameraBase *)0x0) {
          uVar5 = (*(pMVar4->klass->vtable).__unknown.methodPtr)
                            (pMVar4,(pMVar4->klass->vtable).__unknown.method);
          if ((uVar5 < 0x15) && ((0x100441U >> (uVar5 & 0x1f) & 1) != 0)) {
            return 1;
          }
          return uVar5 == 0x13;
        }
      }
      goto code_?;
    }
  }
  return 0;
}

