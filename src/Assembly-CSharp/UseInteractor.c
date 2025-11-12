
/* Void AddRequirement(UseRequirement) */

void Assembly-CSharp.dll::UseInteractor::UseInteractor_AddRequirement
               (UseInteractor *this,UseRequirement *useRequirement,MethodInfo *method)

{
  this_00 = (this->fields).useInteractorVisuals;
  if (this_00 == (UseInteractorVisualization *)0x0) {
code_?:
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_;
  pLVar4 = (this_00->fields).useRequirements;
  if (pLVar4 == (List_1_UseRequirement_ *)0x0) goto code_?;
  piVar5 = &(pLVar4->fields)._version;
  *piVar5 = *piVar5 + 1;
  pUVar6 = (pLVar4->fields)._items;
  if (pUVar6 == (UseRequirement__Array *)0x0) goto code_?;
  uVar7 = (pLVar4->fields)._size;
  if (uVar7 < (uint)pUVar6->max_length) {
    (pLVar4->fields)._size = uVar7 + 1;
    auStack_1._0_8_ = &UNK_?;
    FUN_?(pUVar6,(longlong)(int)uVar7,useRequirement);
  }
  else {
    auStack_1._0_8_ = &UNK_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__AddWithResize
              ((List_1_System_Object_ *)pLVar4,(Object *)useRequirement,
               pMVar3->klass->rgctx_data[0xe].method);
  }
  if ((this_00->fields).hasInputBlockingRequirement == 0) {
    if (useRequirement == (UseRequirement *)0x0) goto code_?;
    auStack_1._0_8_ = &UNK_?;
    cVar8 = (*(useRequirement->klass->vtable).get_IsInputBlocking.methodPtr)
                       (useRequirement,(useRequirement->klass->vtable).get_IsInputBlocking.method);
  }
  else {
    cVar8 = '\x01';
  }
  (this_00->fields).hasInputBlockingRequirement = cVar8 != '\0';
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this_00->fields).active = 0;
  (this_00->fields).dist = 1.3;
  pLVar4 = (this_00->fields).useRequirements;
  if (pLVar4 == (List_1_UseRequirement_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&pLStack_9 >> 0xc);
    uVar10 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar13 = uVar11 == *puVar12;
      if (bVar13) {
        *puVar12 = uVar11 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar13);
  }
  puStack_14 = (undefined1 *)((ulonglong)(uint)(pLVar4->fields)._version << 0x20);
  uStack_15 = 0;
  auStack_1._8_8_ = puStack_14;
  pOStack_16 = (Object *)0x0;
  uStack_17 = 0;
  puStack_18 = auStack_1;
  pLStack_9 = pLVar4;
  auStack_1._0_8_ = pLVar4;
  while (bVar19 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), bVar19 != 0) {
    if (pOStack_16 == (Object *)0x0) goto code_?;
    cVar8 = (*(code *)pOStack_16->klass[1]._0.interopData)
                       (pOStack_16,pOStack_16->klass[1]._0.klass);
    if (cVar8 != '\0') {
      piVar5 = &(this_00->fields).active;
      *piVar5 = *piVar5 + 1;
    }
  }
  if ((this_00->fields).active == 1) {
    (this_00->fields).dist = 0.01;
  }
  bVar13 = (this_00->fields).active == 0;
  if (!bVar13) {
    (this_00->fields).spacing = (float)(int)(0x168 / (longlong)(this_00->fields).active);
    bVar13 = (this_00->fields).active == 0;
  }
  (this_00->fields)._HasUseRequirements_k__BackingField = !bVar13;
  fVar20 = 0.0;
  pLVar4 = (this_00->fields).useRequirements;
  if (pLVar4 == (List_1_UseRequirement_ *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&pLStack_9 >> 0xc);
    uVar10 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar13 = uVar11 == *puVar12;
      if (bVar13) {
        *puVar12 = uVar11 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar13);
  }
  puStack_14 = (undefined1 *)((ulonglong)(uint)(pLVar4->fields)._version << 0x20);
  uStack_15 = 0;
  auStack_1._8_8_ = puStack_14;
  pOStack_16 = (Object *)0x0;
  pLStack_9 = (List_1_UseRequirement_ *)0x0;
  puStack_14 = auStack_1;
  auStack_1._0_8_ = pLVar4;
  while (bVar19 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), pOVar21 = pOStack_16, bVar19 != 0) {
    if (pOStack_16 == (Object *)0x0) goto code_?;
    cVar8 = (*(code *)pOStack_16->klass[1]._0.interopData)
                       (pOStack_16,pOStack_16->klass[1]._0.klass);
    if (cVar8 != '\0') {
      pOVar22 = pOVar21->klass;
      uStack_17._0_4_ = (this_00->fields).pivot.x;
      uStack_17._4_4_ = (this_00->fields).pivot.y;
      puStack_18 = (undefined1 *)CONCAT44(puStack_18._4_4_,(this_00->fields).pivot.z);
      (*(code *)pOVar22[1]._0.fields)
                (pOVar21,&uStack_17,fVar20,(this_00->fields).dist,pOVar22[1]._0.events);
      fVar20 = fVar20 + (this_00->fields).spacing;
    }
  }
  if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) {
    if ((this_00->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
      UseInteractorVisualization::UseInteractorVisualization_SetupCulling(this_00,(MethodInfo *)0x0)
      ;
      goto code_?;
    }
    if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) goto code_?;
  }
  if ((this_00->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    UseInteractorVisualization::UseInteractorVisualization_RemoveCulling(this_00,(MethodInfo *)0x0);
  }
code_?:
  bVar19 = (this_00->fields)._HasUseRequirements_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar23 = (this_00->fields)._._._._.m_CachedPtr;
  if (pvVar23 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar24 = func_?(&UNK_?);
    FUN_?(uVar24,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar23,bVar19);
  return;
}


/* UseGUIResult EvaluateRequirementsUsability() */

UseGUIResult__Enum
Assembly-CSharp.dll::UseInteractor::UseInteractor_EvaluateRequirementsUsability
          (UseInteractor *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useInteractorVisuals;
  if (pUVar1 == (UseInteractorVisualization *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    UVar3 = (*pcVar2)();
    return UVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar4 = (pUVar1->fields).useRequirements;
  if (pLVar4 == (List_1_UseRequirement_ *)0x0) {
    FUN_?();
  }
  else {
    if ((pLVar4->fields)._size == 0) {
      return UseGUIResult__Enum_NoCost;
    }
    UVar3 = 0;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar4->fields)._version << 0x20);
    puStack_11 = (undefined *)0x0;
    LStack_12._8_8_ = pLStack_10;
    LStack_12._current = (Object *)0x0;
    uStack_6 = 0;
    pLStack_10 = &LStack_12;
    LStack_12._list = (List_1_System_Object_ *)pLVar4;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_12,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                        );
      if (bVar13 == 0) {
        return UVar3;
      }
      if (LStack_12._current == (Object *)0x0) break;
      UVar14 = (*(code *)(LStack_12._current)->klass[1]._0.image)
                        (LStack_12._current,(LStack_12._current)->klass[1]._0.gc_desc);
      UVar3 = UVar3 | UVar14;
    }
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  UVar3 = (*pcVar2)();
  return UVar3;
}


/* ShowUseOption GetGUIShowOptions() */

ShowUseOption__Enum
Assembly-CSharp.dll::UseInteractor::UseInteractor_GetGUIShowOptions
          (UseInteractor *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useInteractorVisuals;
  if (pUVar1 == (UseInteractorVisualization *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    SVar3 = (*pcVar2)();
    return SVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar4 = (pUVar1->fields).useRequirements;
  if (pLVar4 == (List_1_UseRequirement_ *)0x0) {
    FUN_?();
  }
  else {
    if ((pLVar4->fields)._size == 0) {
      return ShowUseOption__Enum_Normal;
    }
    SVar3 = ShowUseOption__Enum_Normal;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar4->fields)._version << 0x20);
    puStack_11 = (undefined *)0x0;
    LStack_12._8_8_ = pLStack_10;
    LStack_12._current = (Object *)0x0;
    uStack_6 = 0;
    pLStack_10 = &LStack_12;
    LStack_12._list = (List_1_System_Object_ *)pLVar4;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_12,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                        );
      if (bVar13 == 0) {
        return SVar3;
      }
      if (LStack_12._current == (Object *)0x0) break;
      SVar14 = (*(code *)(LStack_12._current)->klass[1]._0.element_class)
                        (LStack_12._current,(LStack_12._current)->klass[1]._0.castClass);
      SVar3 = SVar3 | SVar14;
    }
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  SVar3 = (*pcVar2)();
  return SVar3;
}


/* Boolean GetInteractorCanBeUsed(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::UseInteractor::UseInteractor_GetInteractorCanBeUsed
               (UseInteractor *this,int32_t woId,MVInteractableBase *avatarInteractable,
               MethodInfo *method)

{
  if ((this->fields).checkCanUseFunction == (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0) {
    return 1;
  }
  pFVar1 = (this->fields).checkCanUseFunction;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar2 = (*(pFVar1->fields)._._.invoke_impl)
                    ((pFVar1->fields)._._.method_code,woId,avatarInteractable,
                     (pFVar1->fields)._._.method);
  return bVar2;
}


/* UseInteractorHandler GetUseInteractorHandler(Int32) */

UseInteractorHandler *
Assembly-CSharp.dll::UseInteractor::UseInteractor_GetUseInteractorHandler
          (UseInteractor *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UseInteractorHandler_MethodInfo__UnityEngine__GameObject__GetComponent<UseInteractorHandler>__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
  pMVar1 = (MVAvatar *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                     (this_02,woID,(MethodInfo *)0x0);
  if (pMVar1 == (MVAvatar *)0x0) {
    return (UseInteractorHandler *)0x0;
  }
  if ((this->fields)._UsedInVehicles_k__BackingField != 0) {
    bVar2 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
    if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVVehicleBase__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
        TypeInfo__MVVehicleBase)) {
      this_00 = (VehicleSeatManager *)(pMVar1->fields).CurrentItem;
      if (this_00 == (VehicleSeatManager *)0x0) goto code_?;
      pVVar3 = VehicleSeatManager::VehicleSeatManager_get_DriverSeat(this_00,(MethodInfo *)0x0);
      if (pVVar3 == (VehicleSeatBase *)0x0) goto code_?;
      pMVar4 = (pVVar3->fields).owner;
      if (pMVar4 != (MVAvatar *)0x0) {
        pMVar1 = pMVar4;
      }
    }
  }
  pMVar5 = 
  UseInteractorHandler_MethodInfo__UnityEngine__GameObject__GetComponent<UseInteractorHandler>__;
  this_01 = (pMVar1->fields)._._.gameObject;
  if (this_01 != (GameObject *)0x0) {
    if ((
        UseInteractorHandler_MethodInfo__UnityEngine__GameObject__GetComponent<UseInteractorHandler>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UseInteractorHandler_MethodInfo__UnityEngine__GameObject__GetComponent<UseInteractorHandler>__
                   );
    }
    uStack_6 = 0;
    pvVar7 = (pMVar5->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pvVar7 == (void *)0x0) {
      type = (Type *)0x0;
    }
    else {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar8 = FUN_?(pvVar7,1);
      type = (Type *)FUN_?(lVar8 + 0x20);
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentFastPath
              (this_01,type,&uStack_6,(MethodInfo *)0x0);
    return (UseInteractorHandler *)0x0;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  pUVar10 = (UseInteractorHandler *)(*pcVar9)();
  return pUVar10;
}


/* Boolean HasUseRequirements() */

bool Assembly-CSharp.dll::UseInteractor::UseInteractor_HasUseRequirements
               (UseInteractor *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useInteractorVisuals;
  if (pUVar1 != (UseInteractorVisualization *)0x0) {
    return (pUVar1->fields)._HasUseRequirements_k__BackingField;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void OnDestroy(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UseInteractor::UseInteractor_OnDestroy
               (UseInteractor *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  pUVar1 = (this->fields).useInteractorVisuals;
  if (pUVar1 == (UseInteractorVisualization *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>,data,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c___DestroyRequirementObjects_b__42_0_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c__DisplayClass42_0___DestroyRequirementObjects_b__1_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass42_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractorVisualization____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar3 = (Object *)FUN_?(TypeInfo__UseInteractorVisualization____c__DisplayClass42_0);
  if (pOVar3 != (Object *)0x0) {
    bVar4 = iRam_? != 0;
    pOVar3[1].klass = (Object__Class *)data;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__42_0;
    if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) {
      if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      object = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
      this_00 = (Func_2_UseRequirement_Boolean_ *)
                FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
      mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                ((Predicate_1_Object_ *)this_00,(Object *)object,
                 MethodInfo__UseInteractorVisualization____c___DestroyRequirementObjects_b__42_0_UseRequirement_
                 ,(MethodInfo *)0x0);
      TypeInfo__UseInteractorVisualization____c->static_fields->__9__42_0 = this_00;
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)
                        &TypeInfo__UseInteractorVisualization____c->static_fields->__9__42_0 >> 0xc)
        ;
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
    }
    this_01 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_01,pOVar3,
               MethodInfo__UseInteractorVisualization____c__DisplayClass42_0___DestroyRequirementObjects_b__1_UseRequirement_
               ,(MethodInfo *)0x0);
    if (pUVar1 != (UseInteractorVisualization *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                      ,this_00,this_01,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      LStack_9._list = (List_1_System_Object_ *)(pUVar1->fields).useRequirements;
      if ((List_1_UseRequirement_ *)LStack_9._list == (List_1_UseRequirement_ *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&uStack_10 >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar8;
          LOCK();
          uVar7 = *puVar8;
          if (uVar11 == uVar7) {
            *puVar8 = uVar11 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar7);
      }
      puStack_12 = (undefined1 *)
                   ((ulonglong)(uint)(((List_1_UseRequirement_ *)LStack_9._list)->fields)._version
                   << 0x20);
      puStack_13 = (undefined *)0x0;
      LStack_9._8_8_ = puStack_12;
      LStack_9._current = (Object *)0x0;
      uStack_10 = 0;
      puStack_12 = (undefined1 *)&LStack_9;
      while( true ) {
        do {
          bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_9,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            );
          pOVar3 = LStack_9._current;
          if (bVar14 == 0) {
            return;
          }
          if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) goto code_?;
          cVar15 = (*(this_00->fields)._._.invoke_impl)
                            ((this_00->fields)._._.method_code,LStack_9._current,
                             (this_00->fields)._._.method);
        } while (cVar15 == '\0');
        if (this_01 == (Predicate_1_Object_ *)0x0) break;
        (*(this_01->fields)._._.invoke_impl)
                  ((this_01->fields)._._.method_code,pOVar3,(this_01->fields)._._.method);
      }
      FUN_?();
code_?:
      FUN_?();
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


/* Void PayUseCost() */

void Assembly-CSharp.dll::UseInteractor::UseInteractor_PayUseCost
               (UseInteractor *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useInteractorVisuals;
  if (pUVar1 == (UseInteractorVisualization *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UseInteractorVisualization____c___PayUseCost_b__41_0_UseRequirement_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UseInteractorVisualization____c___PayUseCost_b__41_1_UseRequirement_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractorVisualization____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_0;
  if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    pUVar3 = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    this_00 = (Func_2_UseRequirement_Boolean_ *)
              FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_00,(Object *)pUVar3,
               MethodInfo__UseInteractorVisualization____c___PayUseCost_b__41_0_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_0 = this_00;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)
                      &TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_0 >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_01 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_1;
  if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    pUVar3 = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    this_01 = (Func_2_UseRequirement_Boolean_ *)
              FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_01,(Object *)pUVar3,
               MethodInfo__UseInteractorVisualization____c___PayUseCost_b__41_1_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_1 = this_01;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)
                      &TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_1 >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  if (pUVar1 == (UseInteractorVisualization *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,this_00,this_01,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_9._list = (List_1_System_Object_ *)(pUVar1->fields).useRequirements;
  if ((List_1_UseRequirement_ *)LStack_9._list == (List_1_UseRequirement_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&uStack_10 >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar11 = *puVar7;
      LOCK();
      uVar6 = *puVar7;
      if (uVar11 == uVar6) {
        *puVar7 = uVar11 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar11 != uVar6);
  }
  puStack_12 = (undefined1 *)
               ((ulonglong)(uint)(((List_1_UseRequirement_ *)LStack_9._list)->fields)._version <<
               0x20);
  puStack_13 = (undefined *)0x0;
  LStack_9._8_8_ = puStack_12;
  LStack_9._current = (Object *)0x0;
  uStack_10 = 0;
  puStack_12 = (undefined1 *)&LStack_9;
  while( true ) {
    do {
      bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                        );
      pOVar15 = LStack_9._current;
      if (bVar14 == 0) {
        return;
      }
      if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) goto code_?;
      cVar16 = (*(this_00->fields)._._.invoke_impl)
                         ((this_00->fields)._._.method_code,LStack_9._current,
                          (this_00->fields)._._.method);
    } while (cVar16 == '\0');
    if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) break;
    (*(this_01->fields)._._.invoke_impl)
              ((this_01->fields)._._.method_code,pOVar15,(this_01->fields)._._.method);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void TriggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::UseInteractor::UseInteractor_TriggerBoxEvents_TriggerEnter
               (UseInteractor *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,sender,e,uVar1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (TriggerEventArgs *)0x0) {
    pUVar2 = UseInteractor_GetUseInteractorHandler
                       (this,(e->fields).instigatorWOID,(MethodInfo *)0x0);
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
    if (pUVar2 != (UseInteractorHandler *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pUVar2->fields)._._._._._.m_CachedPtr != (void *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Add_int__UseInteractor_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((this == (UseInteractor *)0x0) ||
           (this_00 = (pUVar2->fields).useInteractors,
           this_00 == (Dictionary_2_System_Int32_UseInteractor_ *)0x0)) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,(this->fields).woOwnerID,
                   (Object *)this,CONCAT31((int3)((uint)uVar1 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Add_int__UseInteractor_
                   ->klass->rgctx_data[0x22].method);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void TriggerBoxEvents_TriggerExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::UseInteractor::UseInteractor_TriggerBoxEvents_TriggerExit
               (UseInteractor *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (TriggerEventArgs *)0x0) {
    pUVar1 = UseInteractor_GetUseInteractorHandler
                       (this,(e->fields).instigatorWOID,(MethodInfo *)0x0);
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
    if (pUVar1 != (UseInteractorHandler *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pUVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Remove_int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((this == (UseInteractor *)0x0) ||
           (this_00 = (pUVar1->fields).useInteractors,
           this_00 == (Dictionary_2_System_Int32_UseInteractor_ *)0x0)) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,(this->fields).woOwnerID,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Remove_int_
                  );
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UseInteractor::UseInteractor_UpdateData
               (UseInteractor *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  this_00 = (this->fields).useInteractorVisuals;
  if (this_00 == (UseInteractorVisualization *)0x0) {
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = (this->fields).woOwnerID;
  if (cRam_? == '\0') {
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_)
    ;
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
    LOCK();
    UNLOCK();
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._0_8_ = &UNK_?;
  pOVar4 = (Object *)FUN_?(TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
  if (pOVar4 == (Object *)0x0) {
code_?:
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar5 = iRam_? != 0;
  pOVar4[1].klass = (Object__Class *)data;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)(pOVar4 + 1) >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  *(int32_t *)&pOVar4[1].monitor = iVar3;
  if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
  }
  this_01 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0;
  if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
      auStack_1._0_8_ = &UNK_?;
      FUN_?();
    }
    object = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    auStack_1._0_8_ = &UNK_?;
    this_01 = (Func_2_UseRequirement_Boolean_ *)
              FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
    auStack_1._0_8_ = &UNK_?;
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_01,(Object *)object,
               MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 = this_01;
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)
                      &TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  auStack_1._0_8_ = &UNK_?;
  this_02 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  auStack_1._0_8_ = &UNK_?;
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_02,pOVar4,
             MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
             ,(MethodInfo *)0x0);
  if (this_00 == (UseInteractorVisualization *)0x0) goto code_?;
  auStack_1._0_8_ = &UNK_?;
  UseInteractorVisualization::UseInteractorVisualization_ChangeUseRequirements
            (this_00,this_01,(Func_2_UseRequirement_Boolean_ *)this_02,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this_00->fields).active = 0;
  (this_00->fields).dist = 1.3;
  pLVar10 = (this_00->fields).useRequirements;
  if (pLVar10 == (List_1_UseRequirement_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&pLStack_11 >> 0xc);
    uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar12 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar12 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar12 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  puStack_13 = (undefined1 *)((ulonglong)(uint)(pLVar10->fields)._version << 0x20);
  uStack_14 = 0;
  auStack_1._8_8_ = puStack_13;
  pOStack_15 = (Object *)0x0;
  uStack_16 = 0;
  puStack_17 = auStack_1;
  pLStack_11 = pLVar10;
  auStack_1._0_8_ = pLVar10;
  while (bVar18 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                           ), bVar18 != 0) {
    if (pOStack_15 == (Object *)0x0) goto code_?;
    cVar19 = (*(code *)pOStack_15->klass[1]._0.interopData)
                       (pOStack_15,pOStack_15->klass[1]._0.klass);
    if (cVar19 != '\0') {
      piVar20 = &(this_00->fields).active;
      *piVar20 = *piVar20 + 1;
    }
  }
  if ((this_00->fields).active == 1) {
    (this_00->fields).dist = 0.01;
  }
  bVar5 = (this_00->fields).active == 0;
  if (!bVar5) {
    (this_00->fields).spacing = (float)(int)(0x168 / (longlong)(this_00->fields).active);
    bVar5 = (this_00->fields).active == 0;
  }
  (this_00->fields)._HasUseRequirements_k__BackingField = !bVar5;
  fVar21 = 0.0;
  pLVar10 = (this_00->fields).useRequirements;
  if (pLVar10 == (List_1_UseRequirement_ *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&pLStack_11 >> 0xc);
    uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar12 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar12 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar12 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  puStack_13 = (undefined1 *)((ulonglong)(uint)(pLVar10->fields)._version << 0x20);
  uStack_14 = 0;
  auStack_1._8_8_ = puStack_13;
  pOStack_15 = (Object *)0x0;
  pLStack_11 = (List_1_UseRequirement_ *)0x0;
  puStack_13 = auStack_1;
  auStack_1._0_8_ = pLVar10;
  while (bVar18 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                           ), pOVar4 = pOStack_15, bVar18 != 0) {
    if (pOStack_15 == (Object *)0x0) goto code_?;
    cVar19 = (*(code *)pOStack_15->klass[1]._0.interopData)
                       (pOStack_15,pOStack_15->klass[1]._0.klass);
    if (cVar19 != '\0') {
      pOVar22 = pOVar4->klass;
      uStack_16._0_4_ = (this_00->fields).pivot.x;
      uStack_16._4_4_ = (this_00->fields).pivot.y;
      puStack_17 = (undefined1 *)CONCAT44(puStack_17._4_4_,(this_00->fields).pivot.z);
      (*(code *)pOVar22[1]._0.fields)
                (pOVar4,&uStack_16,fVar21,(this_00->fields).dist,pOVar22[1]._0.events);
      fVar21 = fVar21 + (this_00->fields).spacing;
    }
  }
  if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) {
    if ((this_00->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
      UseInteractorVisualization::UseInteractorVisualization_SetupCulling(this_00,(MethodInfo *)0x0)
      ;
      goto code_?;
    }
    if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) goto code_?;
  }
  if ((this_00->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    UseInteractorVisualization::UseInteractorVisualization_RemoveCulling(this_00,(MethodInfo *)0x0);
  }
code_?:
  bVar18 = (this_00->fields)._HasUseRequirements_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar23 = (this_00->fields)._._._._.m_CachedPtr;
  if (pvVar23 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar24 = func_?(&UNK_?);
    FUN_?(uVar24,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar23,bVar18);
  return;
}


/* Boolean Use(Int32) */

bool Assembly-CSharp.dll::UseInteractor::UseInteractor_Use
               (UseInteractor *this,int32_t userWoID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).useInteractorVisuals;
  if (pUVar1 != (UseInteractorVisualization *)0x0) {
    UVar2 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                      (pUVar1,(MethodInfo *)0x0);
    if ((UVar2 & UseGUIResult__Enum_CannotAfford) == 0) {
      pFVar3 = (this->fields).useFunction;
      if (pFVar3 != (Func_2_Int32_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        bVar4 = (*(pFVar3->fields)._._.invoke_impl)
                          ((pFVar3->fields)._._.method_code,userWoID,(pFVar3->fields)._._.method);
        return bVar4;
      }
    }
    else {
      pUVar1 = (this->fields).useInteractorVisuals;
      if (pUVar1 != (UseInteractorVisualization *)0x0) {
        UVar2 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                          (pUVar1,(MethodInfo *)0x0);
        if ((UVar2 & UseGUIResult__Enum_CannotAfford) != 0) {
          this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)FUN_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
          Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                    (this_00,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,10);
          key = (Object *)FUN_?(uRam_?,aiStackX_8);
          aiStackX_8[0] = (this->fields).woOwnerID;
          value = (Object *)FUN_?(uRam_?,aiStackX_8);
          if (this_00 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,key,value,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__NotificationController);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__NotificationsManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
            if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
              FUN_?();
            }
            this_01 = NotificationController::NotificationController_get_NotificationsManager
                                ((MethodInfo *)0x0);
            if (this_01 == (NotificationsManager *)0x0) goto code_?;
            NotificationsManager::NotificationsManager_InstantiateNotification
                      (this_01,NotificationType__Enum_Requirement,
                       (Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0);
          }
        }
        return 0;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* UseInteractor(MVWorldObjectClient, GameObject, Boolean, Collider, Func`2[Int32,Boolean],
   Func`3[Int32,MVInteractableBase,Boolean], Single, Boolean, Boolean) */

void Assembly-CSharp.dll::UseInteractor::UseInteractor__ctor
               (UseInteractor *this,MVWorldObjectClient *wo,GameObject *owner,bool reset,
               Collider *triggerCollider,Func_2_Int32_Boolean_ *useFunction,
               Func_3_Int32_MVInteractableBase_Boolean_ *checkCanUseFunction,float yOffset,
               bool usedInVehicles,bool usedDirectlyInVehicles,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UseInteractorVisualization_MethodInfo__UnityEngine__GameObject__AddComponent<UseInteractorVisualization>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (owner != (GameObject *)0x0) {
    pUVar1 = (UseInteractorVisualization *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (owner,
                        UseInteractorVisualization_MethodInfo__UnityEngine__GameObject__AddComponent<UseInteractorVisualization>__
                       );
    (this->fields).useInteractorVisuals = pUVar1;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    iVar7 = iRam_?;
    pUVar1 = (this->fields).useInteractorVisuals;
    if (pUVar1 != (UseInteractorVisualization *)0x0) {
      (pUVar1->fields).wo = wo;
      if (iVar7 != 0) {
        uVar2 = (uint)((ulonglong)&(pUVar1->fields).wo >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      (pUVar1->fields).pivot.y = yOffset;
      UseInteractorVisualization::UseInteractorVisualization_CalculateSpacing
                (pUVar1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MainCameraManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MainCameraManager);
      }
      fVar8 = (TypeInfo__MainCameraManager->static_fields->DistanceToAvatarBase - _UNK_?) /
               _UNK_?;
      if (fVar8 < 0.0) {
        fVar8 = 0.0;
      }
      else if (_UNK_? < fVar8) {
        fVar8 = _UNK_?;
      }
      if (fVar8 < 0.0) {
        fVar8 = 0.0;
      }
      else if (_UNK_? < fVar8) {
        fVar8 = _UNK_?;
      }
      (pUVar1->fields).scale = fVar8 + fVar8 + _UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pUVar1,0,(MethodInfo *)0x0);
      iVar7 = iRam_?;
      if (wo != (MVWorldObjectClient *)0x0) {
        (this->fields).woOwnerID = (wo->fields)._.id;
        (this->fields).useFunction = useFunction;
        if (iVar7 != 0) {
          uVar2 = (uint)((ulonglong)&(this->fields).useFunction >> 0xc);
          uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
            puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar4 == *puVar5;
            if (bVar6) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
            iVar7 = iRam_?;
          } while (!bVar6);
        }
        (this->fields).triggerCollider = triggerCollider;
        iVar9 = 0;
        if (iVar7 != 0) {
          uVar2 = (uint)((ulonglong)&(this->fields).triggerCollider >> 0xc);
          uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
            puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar4 == *puVar5;
            if (bVar6) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
            iVar9 = iRam_?;
          } while (!bVar6);
        }
        (this->fields)._UsedInVehicles_k__BackingField = usedInVehicles;
        (this->fields)._UsedDirectlyInVehicles_k__BackingField = usedDirectlyInVehicles;
        (this->fields).checkCanUseFunction = checkCanUseFunction;
        (this->fields).reset = reset;
        if (iVar9 != 0) {
          uVar2 = (uint)((ulonglong)&(this->fields).checkCanUseFunction >> 0xc);
          uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
            puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar4 == *puVar5;
            if (bVar6) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

