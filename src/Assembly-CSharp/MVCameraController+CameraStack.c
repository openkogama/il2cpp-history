
/* Void Activate() */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_Activate
               (MVCameraController_CameraStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                 );
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
            )(this->fields).cameras;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                            ),
        pDVar1 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = (pDVar1->fields)._dictionary;
  puStack_4 = (undefined4 *)0x0;
  uStack_5 = 0;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&uStack_3 >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  if (uStack_3 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_10 = (uStack_3->fields)._version;
  uStack_5 = 0;
  uStack_3._4_4_ = (undefined4)((ulonglong)uStack_3 >> 0x20);
  uStack_11 = (undefined4)uStack_3;
  uStack_12 = uStack_3._4_4_;
  uStack_13 = 0;
  aplStack_14[0] = (longlong *)0x0;
  uStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0;
  puStack_4 = &uStack_11;
  do {
    lVar15 = CONCAT44(uStack_12,uStack_11);
    if (lVar15 == 0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iStack_10 != *(int *)(lVar15 + 0x2c)) {
code_?:
      mscorlib.dll::System::ThrowHelper::
      ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                ((MethodInfo *)0x0);
      goto code_?;
    }
    do {
      if (lVar15 == 0) goto code_?;
      if (*(uint *)(lVar15 + 0x20) <= uStack_13) {
        return;
      }
      lVar16 = *(longlong *)(lVar15 + 0x18);
      lVar17 = (longlong)(int)uStack_13;
      uVar6 = uStack_13 + 1;
      if (lVar16 == 0) goto code_?;
      if (*(uint *)(lVar16 + 0x18) <= uStack_13) {
        uStack_13 = uVar6;
        FUN_?();
        goto code_?;
      }
      uStack_13 = uVar6;
    } while (*(int *)(lVar16 + 0x20 + lVar17 * 0x18) < 0);
    aplStack_14[0] = *(longlong **)(lVar16 + (lVar17 + 2) * 0x18);
    func_?(aplStack_14);
    if (aplStack_14[0] == (longlong *)0x0) {
code_?:
      FUN_?();
      uVar6 = uStack_13;
code_?:
      uStack_13 = uVar6;
      FUN_?();
code_?:
      FUN_?();
      goto code_?;
    }
    (**(code **)(*aplStack_14[0] + 0x228))(aplStack_14[0],*(undefined8 *)(*aplStack_14[0] + 0x230));
  } while( true );
}


/* Void ActivateAndEnterCamera(MVCameraBase, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::
     MVCameraController_CameraStack_ActivateAndEnterCamera
               (MVCameraController_CameraStack *this,MVCameraBase *cameraBase,
               MVCameraController *cameraController,MethodInfo *method)

{
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
  if ((this->fields).activeCameras == (List_1_MVCameraBase_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_?();
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  pMVar3 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
  this_03 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_03,(Object *)pMVar3,
             MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
             ,(MethodInfo *)0x0);
  if (pMVar2 == (MainCameraManager *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar4 = &(pMVar2->fields).OnIgnoreInputTypes;
  a = (pMVar2->fields).OnIgnoreInputTypes;
  do {
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
    pEVar6 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
    if (pDVar5 == (Delegate *)0x0) {
      pEVar7 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0;
    }
    else {
      pEVar7 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)FUN_?(pDVar5);
      if (pEVar7 == (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0) {
        FUN_?(pDVar5,pEVar6);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pEVar8 = *ppEVar4;
    bVar9 = a == pEVar8;
    if (bVar9) {
      *ppEVar4 = pEVar7;
      pEVar8 = a;
    }
    UNLOCK();
    pEVar7 = a;
    if (!bVar9) {
      pEVar7 = pEVar8;
    }
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)ppEVar4 >> 0xc);
      uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      do {
        uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar12 == *puVar13;
        if (bVar9) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    bVar9 = pEVar7 != a;
    a = pEVar7;
  } while (bVar9);
  pMVar3 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
  if (pMVar3 == (MVCameraBase *)0x0) goto code_?;
  (*(pMVar3->klass->vtable).Enter.methodPtr)();
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar2 == (MainCameraManager *)0x0) goto code_?;
  pMVar14 = (pMVar2->fields).cameraController;
  if (pMVar14 == (MVCameraController *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar15 = (pMVar14->fields).cameraStack;
  if (pMVar15 == (MVCameraController_CameraStack *)0x0) goto code_?;
  pMVar3 = MVCameraController_CameraStack_get_CurCamera(pMVar15,(MethodInfo *)0x0);
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
  if (pMVar3 == (MVCameraBase *)0x0) {
code_?:
    bVar9 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar3->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar15 = (pMVar14->fields).cameraStack;
    if ((pMVar15 == (MVCameraController_CameraStack *)0x0) ||
       (pMVar3 = MVCameraController_CameraStack_get_CurCamera(pMVar15,(MethodInfo *)0x0),
       pMVar3 == (MVCameraBase *)0x0)) goto code_?;
    uVar10 = (*(pMVar3->klass->vtable).__unknown.methodPtr)
                       (pMVar3,(pMVar3->klass->vtable).__unknown.method);
    if ((uVar10 < 0x15) && ((0x100441U >> (uVar10 & 0x1f) & 1) != 0)) {
      bVar9 = true;
    }
    else {
      bVar9 = uVar10 == 0x13;
    }
  }
  this_00 = (pMVar2->fields).audioListener;
  if (this_00 != (AudioListener *)0x0) {
    method_00 = (MethodInfo *)0x0;
    player = (MVPlayer *)(ulonglong)(bVar9 ^ 1U);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,bVar9 ^ 1U,(MethodInfo *)0x0);
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
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_01 = pAVar17[1].fields._.m_CancellationTokenSource;
        if (this_01 != (CancellationTokenSource *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)this_01,bVar9,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ClearStack(MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_ClearStack
               (MVCameraController_CameraStack *this,MVCameraController *cameraController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).activeCameras;
  if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
    index = (pLVar1->fields)._size - 1;
    if (-1 < (int)index) {
      lVar2 = (longlong)(int)index * 8 + 0x20;
      do {
        pLVar1 = (this->fields).activeCameras;
        if (pLVar1 == (List_1_MVCameraBase_ *)0x0) goto code_?;
        if ((uint)(pLVar1->fields)._size <= index) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pMVar4 = (pLVar1->fields)._items;
        if (pMVar4 == (MVCameraBase__Array *)0x0) goto code_?;
        if ((uint)pMVar4->max_length <= index) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar5 = *(longlong **)((longlong)pMVar4->vector + lVar2 + -0x20);
        if (plVar5 == (longlong *)0x0) goto code_?;
        (**(code **)(*plVar5 + 0x1d8))(plVar5,cameraController,*(undefined8 *)(*plVar5 + 0x1e0));
        this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        pLVar1 = (this->fields).activeCameras;
        if (pLVar1 == (List_1_MVCameraBase_ *)0x0) goto code_?;
        if ((uint)(pLVar1->fields)._size <= index) goto code_?;
        pMVar4 = (pLVar1->fields)._items;
        if (pMVar4 == (MVCameraBase__Array *)0x0) goto code_?;
        if ((uint)pMVar4->max_length <= index) goto code_?;
        object = *(Object **)((longlong)pMVar4->vector + lVar2 + -0x20);
        this_01 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_01,object,
                   MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                   ,(MethodInfo *)0x0);
        if (this_00 == (MainCameraManager *)0x0) goto code_?;
        MainCameraManager::MainCameraManager_remove_OnIgnoreInputTypes
                  (this_00,(EventHandler_1_OnIgnoreInputTypesArgs_ *)this_01,(MethodInfo *)0x0);
        pLVar1 = (this->fields).activeCameras;
        if (pLVar1 == (List_1_MVCameraBase_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)pLVar1,index,
                   MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_);
        lVar2 = lVar2 + -8;
        index = index - 1;
      } while (-1 < (int)index);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_Deactivate
               (MVCameraController_CameraStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                 );
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
            )(this->fields).cameras;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                            ),
        pDVar1 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = (pDVar1->fields)._dictionary;
  puStack_4 = (undefined4 *)0x0;
  uStack_5 = 0;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&uStack_3 >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  if (uStack_3 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_10 = (uStack_3->fields)._version;
  uStack_5 = 0;
  uStack_3._4_4_ = (undefined4)((ulonglong)uStack_3 >> 0x20);
  uStack_11 = (undefined4)uStack_3;
  uStack_12 = uStack_3._4_4_;
  uStack_13 = 0;
  aplStack_14[0] = (longlong *)0x0;
  uStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0;
  puStack_4 = &uStack_11;
  do {
    lVar15 = CONCAT44(uStack_12,uStack_11);
    if (lVar15 == 0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iStack_10 != *(int *)(lVar15 + 0x2c)) {
code_?:
      mscorlib.dll::System::ThrowHelper::
      ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                ((MethodInfo *)0x0);
      goto code_?;
    }
    do {
      if (lVar15 == 0) goto code_?;
      if (*(uint *)(lVar15 + 0x20) <= uStack_13) {
        return;
      }
      lVar16 = *(longlong *)(lVar15 + 0x18);
      lVar17 = (longlong)(int)uStack_13;
      uVar6 = uStack_13 + 1;
      if (lVar16 == 0) goto code_?;
      if (*(uint *)(lVar16 + 0x18) <= uStack_13) {
        uStack_13 = uVar6;
        FUN_?();
        goto code_?;
      }
      uStack_13 = uVar6;
    } while (*(int *)(lVar16 + 0x20 + lVar17 * 0x18) < 0);
    aplStack_14[0] = *(longlong **)(lVar16 + (lVar17 + 2) * 0x18);
    func_?(aplStack_14);
    if (aplStack_14[0] == (longlong *)0x0) {
code_?:
      FUN_?();
      uVar6 = uStack_13;
code_?:
      uStack_13 = uVar6;
      FUN_?();
code_?:
      FUN_?();
      goto code_?;
    }
    (**(code **)(*aplStack_14[0] + 0x238))(aplStack_14[0],*(undefined8 *)(*aplStack_14[0] + 0x240));
  } while( true );
}


/* Void EnterCamera(MVCameraBase, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_EnterCamera
               (MVCameraController_CameraStack *this,MVCameraBase *newCamera,
               MVCameraController *cameraController,MethodInfo *method)

{
  MVCameraController_CameraStack_ClearStack(this,cameraController,(MethodInfo *)0x0);
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
  if ((this->fields).activeCameras == (List_1_MVCameraBase_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_?();
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  pMVar3 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
  this_03 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_03,(Object *)pMVar3,
             MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
             ,(MethodInfo *)0x0);
  if (pMVar2 == (MainCameraManager *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar4 = &(pMVar2->fields).OnIgnoreInputTypes;
  a = (pMVar2->fields).OnIgnoreInputTypes;
  do {
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
    pEVar6 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
    if (pDVar5 == (Delegate *)0x0) {
      pEVar7 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0;
    }
    else {
      pEVar7 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)FUN_?(pDVar5);
      if (pEVar7 == (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0) {
        FUN_?(pDVar5,pEVar6);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pEVar8 = *ppEVar4;
    bVar9 = a == pEVar8;
    if (bVar9) {
      *ppEVar4 = pEVar7;
      pEVar8 = a;
    }
    UNLOCK();
    pEVar7 = a;
    if (!bVar9) {
      pEVar7 = pEVar8;
    }
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)ppEVar4 >> 0xc);
      uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      do {
        uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar12 == *puVar13;
        if (bVar9) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    bVar9 = pEVar7 != a;
    a = pEVar7;
  } while (bVar9);
  pMVar3 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
  if (pMVar3 == (MVCameraBase *)0x0) goto code_?;
  (*(pMVar3->klass->vtable).Enter.methodPtr)();
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar2 == (MainCameraManager *)0x0) goto code_?;
  pMVar14 = (pMVar2->fields).cameraController;
  if (pMVar14 == (MVCameraController *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar15 = (pMVar14->fields).cameraStack;
  if (pMVar15 == (MVCameraController_CameraStack *)0x0) goto code_?;
  pMVar3 = MVCameraController_CameraStack_get_CurCamera(pMVar15,(MethodInfo *)0x0);
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
  if (pMVar3 == (MVCameraBase *)0x0) {
code_?:
    bVar9 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar3->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar15 = (pMVar14->fields).cameraStack;
    if ((pMVar15 == (MVCameraController_CameraStack *)0x0) ||
       (pMVar3 = MVCameraController_CameraStack_get_CurCamera(pMVar15,(MethodInfo *)0x0),
       pMVar3 == (MVCameraBase *)0x0)) goto code_?;
    uVar10 = (*(pMVar3->klass->vtable).__unknown.methodPtr)
                       (pMVar3,(pMVar3->klass->vtable).__unknown.method);
    if ((uVar10 < 0x15) && ((0x100441U >> (uVar10 & 0x1f) & 1) != 0)) {
      bVar9 = true;
    }
    else {
      bVar9 = uVar10 == 0x13;
    }
  }
  this_00 = (pMVar2->fields).audioListener;
  if (this_00 != (AudioListener *)0x0) {
    method_00 = (MethodInfo *)0x0;
    player = (MVPlayer *)(ulonglong)(bVar9 ^ 1U);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,bVar9 ^ 1U,(MethodInfo *)0x0);
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
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_01 = pAVar17[1].fields._.m_CancellationTokenSource;
        if (this_01 != (CancellationTokenSource *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)this_01,bVar9,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Object GetCamera[Object]() */

Object * Assembly-CSharp.dll::MVCameraController+CameraStack::
         MVCameraController_CameraStack_GetCamera
                   (MVCameraController_CameraStack *this,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
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
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  pDVar1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).cameras;
  if (pDVar1 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    FUN_?();
  }
  else {
    uStack_2 = 0;
    uStack_3 = 0;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&pDStack_5 >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    pOVar9 = (Object *)0x0;
    uStack_10 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_11 = 2;
    DStack_12._version = (undefined4)uStack_10;
    DStack_12._index = uStack_10._4_4_;
    DStack_12._current.key = 0;
    DStack_12._current._4_4_ = 0;
    DStack_12._current.value = (Object *)0x0;
    DStack_12._getEnumeratorRetType = 2;
    DStack_12._36_4_ = 0;
    pDStack_5 = pDVar1;
    DStack_12._dictionary = pDVar1;
    do {
      bVar13 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_12,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                        );
      unaff_RDI = DStack_12._current.value;
      if (bVar13 == 0) {
        return (Object *)0x0;
      }
      if (DStack_12._current.value == (Object *)0x0) goto code_?;
      pOVar14 = (Object *)FUN_?(&((DStack_12._current.value)->klass->_0).byval_arg);
      pvVar15 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pOVar16 = pOVar9;
      if (pvVar15 != (void *)0x0) {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar17 = FUN_?(pvVar15,1);
        pOVar16 = (Object *)FUN_?(lVar17 + 0x20);
      }
    } while (pOVar14 != pOVar16);
    this = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if (((ulonglong)this[9].fields.activeCameras & 0x10000000000) == 0) {
      this = (MVCameraController_CameraStack *)FUN_?(this);
    }
    if ((unaff_RDI == (Object *)0x0) ||
       (pOVar9 = (Object *)FUN_?(unaff_RDI,this), pOVar9 != (Object *)0x0)) {
      return pOVar9;
    }
  }
  FUN_?(unaff_RDI,this);
code_?:
  FUN_?();
  FUN_?();
  pcVar18 = (code *)swi(3);
  pOVar9 = (Object *)(*pcVar18)();
  return pOVar9;
}


/* Void PushCamera(CameraType, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_PushCamera
               (MVCameraController_CameraStack *this,CameraType__Enum cameraType,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_02 = (this->fields).cameras;
  if (this_02 == (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
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
  pLVar2 = (this->fields).activeCameras;
  if (pLVar2 == (List_1_MVCameraBase_ *)0x0) goto code_?;
  iVar3 = (pLVar2->fields)._size;
  if (0 < iVar3) {
    pLVar2 = (this->fields).activeCameras;
    if ((uint)(pLVar2->fields)._size <= iVar3 - 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pMVar4 = (pLVar2->fields)._items;
    if (pMVar4 == (MVCameraBase__Array *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((uint)pMVar4->max_length <= iVar3 - 1U) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pMVar5 = pMVar4->vector[(longlong)iVar3 + -1];
    if (pMVar5 == (MVCameraBase *)0x0) goto code_?;
    (*(pMVar5->klass->vtable).Suspend.methodPtr)
              (pMVar5,cameraController,(pMVar5->klass->vtable).Suspend.method);
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
  if ((this->fields).activeCameras == (List_1_MVCameraBase_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_?();
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  pMVar5 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
  this_04 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_04,(Object *)pMVar5,
             MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
             ,(MethodInfo *)0x0);
  if (pMVar6 == (MainCameraManager *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar7 = &(pMVar6->fields).OnIgnoreInputTypes;
  a = (pMVar6->fields).OnIgnoreInputTypes;
  do {
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_04,(MethodInfo *)0x0);
    pEVar9 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
    if (pDVar8 == (Delegate *)0x0) {
      pEVar10 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0;
    }
    else {
      pEVar10 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)FUN_?(pDVar8);
      if (pEVar10 == (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0) {
        FUN_?(pDVar8,pEVar9);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pEVar11 = *ppEVar7;
    bVar12 = a == pEVar11;
    if (bVar12) {
      *ppEVar7 = pEVar10;
      pEVar11 = a;
    }
    UNLOCK();
    pEVar10 = a;
    if (!bVar12) {
      pEVar10 = pEVar11;
    }
    if (iRam_? != 0) {
      uVar13 = (uint)((ulonglong)ppEVar7 >> 0xc);
      uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
      do {
        uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
        puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
        LOCK();
        bVar12 = uVar15 == *puVar16;
        if (bVar12) {
          *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    bVar12 = pEVar10 != a;
    a = pEVar10;
  } while (bVar12);
  pMVar5 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
  if (pMVar5 == (MVCameraBase *)0x0) goto code_?;
  (*(pMVar5->klass->vtable).Enter.methodPtr)();
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar6 == (MainCameraManager *)0x0) goto code_?;
  pMVar17 = (pMVar6->fields).cameraController;
  if (pMVar17 == (MVCameraController *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar18 = (pMVar17->fields).cameraStack;
  if (pMVar18 == (MVCameraController_CameraStack *)0x0) goto code_?;
  pMVar5 = MVCameraController_CameraStack_get_CurCamera(pMVar18,(MethodInfo *)0x0);
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
    bVar12 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar5->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar18 = (pMVar17->fields).cameraStack;
    if ((pMVar18 == (MVCameraController_CameraStack *)0x0) ||
       (pMVar5 = MVCameraController_CameraStack_get_CurCamera(pMVar18,(MethodInfo *)0x0),
       pMVar5 == (MVCameraBase *)0x0)) goto code_?;
    uVar13 = (*(pMVar5->klass->vtable).__unknown.methodPtr)
                       (pMVar5,(pMVar5->klass->vtable).__unknown.method);
    if ((uVar13 < 0x15) && ((0x100441U >> (uVar13 & 0x1f) & 1) != 0)) {
      bVar12 = true;
    }
    else {
      bVar12 = uVar13 == 0x13;
    }
  }
  this_00 = (pMVar6->fields).audioListener;
  if (this_00 != (AudioListener *)0x0) {
    method_00 = (MethodInfo *)0x0;
    player = (MVPlayer *)(ulonglong)(bVar12 ^ 1U);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,bVar12 ^ 1U,(MethodInfo *)0x0);
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
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_01 = pAVar20[1].fields._.m_CancellationTokenSource;
        if (this_01 != (CancellationTokenSource *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)this_01,bVar12,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PushCamera(MVCameraBase, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::
     MVCameraController_CameraStack_PushCamera_1
               (MVCameraController_CameraStack *this,MVCameraBase *cameraBase,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).activeCameras;
  if (pLVar1 == (List_1_MVCameraBase_ *)0x0) goto code_?;
  iVar2 = (pLVar1->fields)._size;
  if (0 < iVar2) {
    pLVar1 = (this->fields).activeCameras;
    if ((uint)(pLVar1->fields)._size <= iVar2 - 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pMVar4 = (pLVar1->fields)._items;
    if (pMVar4 == (MVCameraBase__Array *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((uint)pMVar4->max_length <= iVar2 - 1U) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pMVar5 = pMVar4->vector[(longlong)iVar2 + -1];
    if (pMVar5 == (MVCameraBase *)0x0) goto code_?;
    (*(pMVar5->klass->vtable).Suspend.methodPtr)
              (pMVar5,cameraController,(pMVar5->klass->vtable).Suspend.method);
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
  if ((this->fields).activeCameras == (List_1_MVCameraBase_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?();
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  pMVar5 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
  this_03 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_03,(Object *)pMVar5,
             MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
             ,(MethodInfo *)0x0);
  if (pMVar6 == (MainCameraManager *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar7 = &(pMVar6->fields).OnIgnoreInputTypes;
  a = (pMVar6->fields).OnIgnoreInputTypes;
  do {
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
    pEVar9 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
    if (pDVar8 == (Delegate *)0x0) {
      pEVar10 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0;
    }
    else {
      pEVar10 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)FUN_?(pDVar8);
      if (pEVar10 == (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0) {
        FUN_?(pDVar8,pEVar9);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    pEVar11 = *ppEVar7;
    bVar12 = a == pEVar11;
    if (bVar12) {
      *ppEVar7 = pEVar10;
      pEVar11 = a;
    }
    UNLOCK();
    pEVar10 = a;
    if (!bVar12) {
      pEVar10 = pEVar11;
    }
    if (iRam_? != 0) {
      uVar13 = (uint)((ulonglong)ppEVar7 >> 0xc);
      uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
      do {
        uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
        puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
        LOCK();
        bVar12 = uVar15 == *puVar16;
        if (bVar12) {
          *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    bVar12 = pEVar10 != a;
    a = pEVar10;
  } while (bVar12);
  pMVar5 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
  if (pMVar5 == (MVCameraBase *)0x0) goto code_?;
  (*(pMVar5->klass->vtable).Enter.methodPtr)();
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar6 == (MainCameraManager *)0x0) goto code_?;
  pMVar17 = (pMVar6->fields).cameraController;
  if (pMVar17 == (MVCameraController *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar18 = (pMVar17->fields).cameraStack;
  if (pMVar18 == (MVCameraController_CameraStack *)0x0) goto code_?;
  pMVar5 = MVCameraController_CameraStack_get_CurCamera(pMVar18,(MethodInfo *)0x0);
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
    bVar12 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar5->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar18 = (pMVar17->fields).cameraStack;
    if ((pMVar18 == (MVCameraController_CameraStack *)0x0) ||
       (pMVar5 = MVCameraController_CameraStack_get_CurCamera(pMVar18,(MethodInfo *)0x0),
       pMVar5 == (MVCameraBase *)0x0)) goto code_?;
    uVar13 = (*(pMVar5->klass->vtable).__unknown.methodPtr)
                       (pMVar5,(pMVar5->klass->vtable).__unknown.method);
    if ((uVar13 < 0x15) && ((0x100441U >> (uVar13 & 0x1f) & 1) != 0)) {
      bVar12 = true;
    }
    else {
      bVar12 = uVar13 == 0x13;
    }
  }
  this_00 = (pMVar6->fields).audioListener;
  if (this_00 != (AudioListener *)0x0) {
    method_00 = (MethodInfo *)0x0;
    player = (MVPlayer *)(ulonglong)(bVar12 ^ 1U);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,bVar12 ^ 1U,(MethodInfo *)0x0);
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
                    ((GameObject *)this_01,bVar12,(MethodInfo *)0x0);
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


/* Void RemoveCamera(CameraType, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::
     MVCameraController_CameraStack_RemoveCamera
               (MVCameraController_CameraStack *this,CameraType__Enum cameraType,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cameras;
  if (this_00 == (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
           Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                     ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,cameraType,
                      MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                     );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>,pOVar2,cameraController,0)
    ;
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
  pLVar3 = (this->fields).activeCameras;
  if (pLVar3 != (List_1_MVCameraBase_ *)0x0) {
    uVar4 = (pLVar3->fields)._size - 1;
    if (-1 < (int)uVar4) {
      lVar5 = (longlong)(int)uVar4;
      lVar6 = lVar5 * 8 + 0x20;
      index = uVar4;
      do {
        pLVar3 = (this->fields).activeCameras;
        if (pLVar3 == (List_1_MVCameraBase_ *)0x0) goto code_?;
        if ((uint)(pLVar3->fields)._size <= index) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pMVar7 = (pLVar3->fields)._items;
        if (pMVar7 == (MVCameraBase__Array *)0x0) goto code_?;
        if ((uint)pMVar7->max_length <= index) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pOVar8 = *(Object **)((longlong)pMVar7->vector + lVar6 + -0x20);
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
        if (pOVar2 == (Object *)0x0 && pOVar8 == (Object *)0x0) {
code_?:
          pLVar3 = (this->fields).activeCameras;
          if ((pLVar3 != (List_1_MVCameraBase_ *)0x0) &&
             (plVar9 = (longlong *)FUN_?(pLVar3,index), plVar9 != (longlong *)0x0)) {
            (**(code **)(*plVar9 + 0x1d8))(plVar9,cameraController,*(undefined8 *)(*plVar9 + 0x1e0))
            ;
            this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            object = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
            this_02 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_02,(Object *)object,
                       MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                       ,(MethodInfo *)0x0);
            if (this_01 != (MainCameraManager *)0x0) {
              MainCameraManager::MainCameraManager_remove_OnIgnoreInputTypes
                        (this_01,(EventHandler_1_OnIgnoreInputTypesArgs_ *)this_02,(MethodInfo *)0x0
                        );
              pLVar3 = (this->fields).activeCameras;
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
                pLVar3 = (this->fields).activeCameras;
                if ((pLVar3 != (List_1_MVCameraBase_ *)0x0) &&
                   (plVar9 = (longlong *)FUN_?(pLVar3,index - 1), plVar9 != (longlong *)0x0)
                   ) {
                  (**(code **)(*plVar9 + 0x1f8))
                            (plVar9,cameraController,*(undefined8 *)(*plVar9 + 0x200));
                  return;
                }
              }
            }
          }
          goto code_?;
        }
        if (pOVar2 == (Object *)0x0) {
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
          bVar10 = pOVar2[1].klass == (Object__Class *)0x0;
        }
        else {
          bVar10 = pOVar8 == pOVar2;
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
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RemoveCamera(MVCameraBase, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::
     MVCameraController_CameraStack_RemoveCamera_1
               (MVCameraController_CameraStack *this,MVCameraBase *cameraBase,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
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
  pLVar1 = (this->fields).activeCameras;
  if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
    uVar2 = (pLVar1->fields)._size - 1;
    if (-1 < (int)uVar2) {
      lVar3 = (longlong)(int)uVar2;
      lVar4 = lVar3 * 8 + 0x20;
      index = uVar2;
      do {
        pLVar1 = (this->fields).activeCameras;
        if (pLVar1 == (List_1_MVCameraBase_ *)0x0) goto code_?;
        if ((uint)(pLVar1->fields)._size <= index) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pMVar6 = (pLVar1->fields)._items;
        if (pMVar6 == (MVCameraBase__Array *)0x0) goto code_?;
        if ((uint)pMVar6->max_length <= index) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pMVar7 = *(MVCameraBase **)((longlong)pMVar6->vector + lVar4 + -0x20);
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
          pLVar1 = (this->fields).activeCameras;
          if ((pLVar1 != (List_1_MVCameraBase_ *)0x0) &&
             (plVar8 = (longlong *)FUN_?(pLVar1,index), plVar8 != (longlong *)0x0)) {
            (**(code **)(*plVar8 + 0x1d8))(plVar8,cameraController,*(undefined8 *)(*plVar8 + 0x1e0))
            ;
            this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            pMVar7 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
            this_01 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_01,(Object *)pMVar7,
                       MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                       ,(MethodInfo *)0x0);
            if (this_00 != (MainCameraManager *)0x0) {
              MainCameraManager::MainCameraManager_remove_OnIgnoreInputTypes
                        (this_00,(EventHandler_1_OnIgnoreInputTypesArgs_ *)this_01,(MethodInfo *)0x0
                        );
              pLVar1 = (this->fields).activeCameras;
              if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__RemoveAt
                          ((List_1_System_Object_ *)pLVar1,index,
                           MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_
                          );
                if (index != uVar2) {
                  return;
                }
                if ((int)index < 1) {
                  return;
                }
                pLVar1 = (this->fields).activeCameras;
                if ((pLVar1 != (List_1_MVCameraBase_ *)0x0) &&
                   (plVar8 = (longlong *)FUN_?(pLVar1,index - 1), plVar8 != (longlong *)0x0)
                   ) {
                  (**(code **)(*plVar8 + 0x1f8))
                            (plVar8,cameraController,*(undefined8 *)(*plVar8 + 0x200));
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
        lVar4 = lVar4 + -8;
        lVar3 = lVar3 + -1;
      } while (-1 < lVar3);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetCamera(CameraType, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_SetCamera
               (MVCameraController_CameraStack *this,CameraType__Enum cameraType,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_02 = (this->fields).cameras;
  if (this_02 == (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__get_Item
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,cameraType,
             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
            );
  MVCameraController_CameraStack_ClearStack(this,cameraController,(MethodInfo *)0x0);
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
  if ((this->fields).activeCameras == (List_1_MVCameraBase_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_?();
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  pMVar3 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
  this_04 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_04,(Object *)pMVar3,
             MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
             ,(MethodInfo *)0x0);
  if (pMVar2 == (MainCameraManager *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar4 = &(pMVar2->fields).OnIgnoreInputTypes;
  a = (pMVar2->fields).OnIgnoreInputTypes;
  do {
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_04,(MethodInfo *)0x0);
    pEVar6 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
    if (pDVar5 == (Delegate *)0x0) {
      pEVar7 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0;
    }
    else {
      pEVar7 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)FUN_?(pDVar5);
      if (pEVar7 == (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0) {
        FUN_?(pDVar5,pEVar6);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pEVar8 = *ppEVar4;
    bVar9 = a == pEVar8;
    if (bVar9) {
      *ppEVar4 = pEVar7;
      pEVar8 = a;
    }
    UNLOCK();
    pEVar7 = a;
    if (!bVar9) {
      pEVar7 = pEVar8;
    }
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)ppEVar4 >> 0xc);
      uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      do {
        uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar12 == *puVar13;
        if (bVar9) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    bVar9 = pEVar7 != a;
    a = pEVar7;
  } while (bVar9);
  pMVar3 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
  if (pMVar3 == (MVCameraBase *)0x0) goto code_?;
  (*(pMVar3->klass->vtable).Enter.methodPtr)();
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar2 == (MainCameraManager *)0x0) goto code_?;
  pMVar14 = (pMVar2->fields).cameraController;
  if (pMVar14 == (MVCameraController *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar15 = (pMVar14->fields).cameraStack;
  if (pMVar15 == (MVCameraController_CameraStack *)0x0) goto code_?;
  pMVar3 = MVCameraController_CameraStack_get_CurCamera(pMVar15,(MethodInfo *)0x0);
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
  if (pMVar3 == (MVCameraBase *)0x0) {
code_?:
    bVar9 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar3->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar15 = (pMVar14->fields).cameraStack;
    if ((pMVar15 == (MVCameraController_CameraStack *)0x0) ||
       (pMVar3 = MVCameraController_CameraStack_get_CurCamera(pMVar15,(MethodInfo *)0x0),
       pMVar3 == (MVCameraBase *)0x0)) goto code_?;
    uVar10 = (*(pMVar3->klass->vtable).__unknown.methodPtr)
                       (pMVar3,(pMVar3->klass->vtable).__unknown.method);
    if ((uVar10 < 0x15) && ((0x100441U >> (uVar10 & 0x1f) & 1) != 0)) {
      bVar9 = true;
    }
    else {
      bVar9 = uVar10 == 0x13;
    }
  }
  this_00 = (pMVar2->fields).audioListener;
  if (this_00 != (AudioListener *)0x0) {
    method_00 = (MethodInfo *)0x0;
    player = (MVPlayer *)(ulonglong)(bVar9 ^ 1U);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,bVar9 ^ 1U,(MethodInfo *)0x0);
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
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_01 = pAVar17[1].fields._.m_CancellationTokenSource;
        if (this_01 != (CancellationTokenSource *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)this_01,bVar9,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::
     MVCameraController_CameraStack_UpdateCamera
               (MVCameraController_CameraStack *this,MVCameraController *cameraController,
               ProtectedTransform *protectedTransform,MethodInfo *method)

{
  pMVar1 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
  if (pMVar1 != (MVCameraBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar1->klass->vtable).UpdateCamera.methodPtr)
              (pMVar1,cameraController,protectedTransform,
               (pMVar1->klass->vtable).UpdateCamera.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVCameraController+CameraStack(List`1[MVCameraBase], MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack__ctor
               (MVCameraController_CameraStack *this,List_1_MVCameraBase_ *camerasList,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCameraBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCameraBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCameraBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVCameraBase>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (List_1_MVCameraBase_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVCameraBase>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<MVCameraBase>__List__);
  (this->fields).activeCameras = this_01;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  this_02 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Dictionary__
            );
  (this->fields).cameras = (Dictionary_2_CameraType_MVCameraBase_ *)this_02;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).cameras >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (camerasList == (List_1_MVCameraBase_ *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&uStack_7 >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(camerasList->fields)._version << 0x20);
  uStack_9 = 0;
  LStack_10._8_8_ = pLStack_8;
  LStack_10._current = (Object *)0x0;
  uStack_7 = 0;
  pLStack_8 = &LStack_10;
  LStack_10._list = (List_1_System_Object_ *)camerasList;
  while( true ) {
    bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_10,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCameraBase>__MoveNext__
                      );
    value = LStack_10._current;
    if (bVar11 == 0) {
      return;
    }
    this_00 = (this->fields).cameras;
    if (LStack_10._current == (Object *)0x0) break;
    key = (*(code *)(LStack_10._current)->klass[1]._0.image)
                    (LStack_10._current,(LStack_10._current)->klass[1]._0.gc_desc);
    if (this_00 == (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      FUN_?();
      break;
    }
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                ->klass->rgctx_data[0x22].method;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),2),method_00);
  }
  FUN_?();
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVCameraBase get_CurCamera() */

MVCameraBase *
Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
          (MVCameraController_CameraStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).activeCameras;
  if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return (MVCameraBase *)0x0;
    }
    iVar2 = (pLVar1->fields)._size;
    if ((uint)(pLVar1->fields)._size <= iVar2 - 1U) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pMVar4 = (MVCameraBase *)(*pcVar3)();
      return pMVar4;
    }
    pMVar5 = (pLVar1->fields)._items;
    if (pMVar5 != (MVCameraBase__Array *)0x0) {
      if (iVar2 - 1U < (uint)pMVar5->max_length) {
        return pMVar5->vector[(longlong)iVar2 + -1];
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      pMVar4 = (MVCameraBase *)(*pcVar3)();
      return pMVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pMVar4 = (MVCameraBase *)(*pcVar3)();
  return pMVar4;
}

