
/* Void AddUseInteractor(UseInteractor) */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_AddUseInteractor
               (UseInteractorHandler *this,UseInteractor *useInteractor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Add_int__UseInteractor_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((useInteractor != (UseInteractor *)0x0) &&
     (this_00 = (this->fields).useInteractors,
     this_00 != (Dictionary_2_System_Int32_UseInteractor_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,(useInteractor->fields).woOwnerID
               ,(Object *)useInteractor,CONCAT31((int3)((uint)in_R9D >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Add_int__UseInteractor_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean ClosestUseInteractorHasUseIconInVehicle() */

bool Assembly-CSharp.dll::UseInteractorHandler::
     UseInteractorHandler_ClosestUseInteractorHasUseIconInVehicle
               (UseInteractorHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseInteractor>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).useInteractors;
  if (pDVar1 != (Dictionary_2_System_Int32_UseInteractor_ *)0x0) {
    if ((pDVar1->fields)._count == (pDVar1->fields)._freeCount) {
      return 0;
    }
    pLVar2 = UseInteractorHandler_SortByDistance(this,(MethodInfo *)0x0);
    if (pLVar2 != (List_1_UseInteractor_ *)0x0) {
      if ((pLVar2->fields)._size == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      pUVar5 = (pLVar2->fields)._items;
      if (pUVar5 != (UseInteractor__Array *)0x0) {
        if ((int)pUVar5->max_length == 0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          bVar4 = (*pcVar3)();
          return bVar4;
        }
        pUVar6 = pUVar5->vector[0];
        if (pUVar6 != (UseInteractor *)0x0) {
          if ((pUVar6->fields).checkCanUseFunction !=
              (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0) {
            pFVar7 = (pUVar6->fields).checkCanUseFunction;
            cVar8 = (*(pFVar7->fields)._._.invoke_impl)
                              ((pFVar7->fields)._._.method_code,(this->fields).ownerWoId,
                               (this->fields).interactionBase,(pFVar7->fields)._._.method);
            if (cVar8 == '\0') {
              return 0;
            }
          }
          pUVar9 = (pUVar6->fields).useInteractorVisuals;
          if (pUVar9 != (UseInteractorVisualization *)0x0) {
            UVar10 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                              (pUVar9,(MethodInfo *)0x0);
            if (((byte)UVar10 & 0xf) < 2) {
              return 0;
            }
            if ((pUVar6->fields)._UsedInVehicles_k__BackingField == 0) {
              return 0;
            }
            if ((pUVar6->fields)._UsedDirectlyInVehicles_k__BackingField == 0) {
              return 1;
            }
            pUVar9 = (pUVar6->fields).useInteractorVisuals;
            if (pUVar9 != (UseInteractorVisualization *)0x0) {
              return (pUVar9->fields)._HasUseRequirements_k__BackingField;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void Init(Int32, Collider) */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_Init
               (UseInteractorHandler *this,int32_t ownerWoId,Collider *baseCollider,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__Tools__ColliderCollection);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).ownerWoId = ownerWoId;
  pCVar1 = (ColliderCollection *)FUN_?(TypeInfo__Assets__Scripts__Tools__ColliderCollection)
  ;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__AddLast_UnityEngine__Collider_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__LinkedList__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar2 = (LinkedList_1_UnityEngine_Collider_ *)
           FUN_?(TypeInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>);
  bVar3 = iRam_? != 0;
  (pCVar1->fields).colliders = pLVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&pCVar1->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pLVar2 = (pCVar1->fields).colliders;
  if (pLVar2 != (LinkedList_1_UnityEngine_Collider_ *)0x0) {
    System.dll::System::Collections::Generic::LinkedList`1[System::Object]::
    LinkedList_1_System_Object__AddLast
              ((LinkedList_1_System_Object_ *)pLVar2,(Object *)baseCollider,
               MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__AddLast_UnityEngine__Collider_
              );
    iVar8 = iRam_?;
    (pCVar1->fields).baseCollider = baseCollider;
    if (iVar8 != 0) {
      uVar4 = (uint)((ulonglong)&(pCVar1->fields).baseCollider >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
        iVar8 = iRam_?;
      } while (!bVar3);
    }
    (pCVar1->fields).activeCollider = baseCollider;
    iVar9 = 0;
    if (iVar8 != 0) {
      uVar4 = (uint)((ulonglong)&(pCVar1->fields).activeCollider >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
        iVar9 = iRam_?;
      } while (!bVar3);
    }
    (this->fields).triggingColliders = pCVar1;
    if (iVar9 != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields).triggingColliders >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      pMVar10 = (MVInteractableBase *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (this_00,
                          MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                         );
      bVar3 = iRam_? != 0;
      (this->fields).interactionBase = pMVar10;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).interactionBase >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      return;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void RemoveUseInteractor(UseInteractor) */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_RemoveUseInteractor
               (UseInteractorHandler *this,UseInteractor *useInteractor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Remove_int_;
  if ((useInteractor == (UseInteractor *)0x0) ||
     (pDVar2 = (this->fields).useInteractors,
     pDVar2 == (Dictionary_2_System_Int32_UseInteractor_ *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = (useInteractor->fields).woOwnerID;
  if ((pDVar2->fields)._buckets != (Int32__Array *)0x0) {
    pIVar5 = (pDVar2->fields)._comparer;
    uVar6 = uVar4;
    if (pIVar5 != (IEqualityComparer_1_System_Int32_ *)0x0) {
      pvVar7 = MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Remove_int_
                ->klass->rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
        pvVar7 = (void *)FUN_?(pvVar7);
      }
      uVar6 = FUN_?(1,pvVar7,pIVar5,uVar4);
    }
    pIVar8 = (pDVar2->fields)._buckets;
    if (pIVar8 == (Int32__Array *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar9 = (int)(uVar6 & 0x7fffffff) % (int)pIVar8->max_length;
    if ((uint)pIVar8->max_length <= uVar9) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar10 = pIVar8->vector[(int)uVar9] - 1;
    uVar11 = 0xffffffff;
    while (uVar12 = uVar10, -1 < (int)uVar12) {
      pDVar13 = (pDVar2->fields)._entries;
      if (pDVar13 == (Dictionary_2_TKey_TValue_Entry_System_Int32_UseInteractor___Array *)0x0)
      goto code_?;
      if ((uint)pDVar13->max_length <= uVar12) goto code_?;
      if (pDVar13->vector[(int)uVar12].hashCode == (uVar6 & 0x7fffffff)) {
        pIVar14 = pMVar1->klass->rgctx_data;
        if ((pDVar2->fields)._comparer == (IEqualityComparer_1_System_Int32_ *)0x0) {
          pEVar15 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32]::
                    EqualityComparer_1_System_Int32__get_Default(pIVar14[3].method);
          if (pEVar15 == (EqualityComparer_1_System_Int32_ *)0x0) goto code_?;
          cVar16 = (*(pEVar15->klass->vtable).__unknown.methodPtr)
                             (pEVar15,(ulonglong)(uint)pDVar13->vector[(int)uVar12].key,
                              (ulonglong)uVar4,(pEVar15->klass->vtable).__unknown.method);
        }
        else {
          pvVar7 = pIVar14[1].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
            FUN_?(pvVar7);
          }
          cVar16 = FUN_?();
        }
        if (cVar16 != '\0') {
          if ((int)uVar11 < 0) {
            pIVar8 = (pDVar2->fields)._buckets;
            if (pIVar8 == (Int32__Array *)0x0) goto code_?;
            if ((uint)pIVar8->max_length <= uVar9) goto code_?;
            pIVar8->vector[(int)uVar9] = pDVar13->vector[(int)uVar12].next + 1;
          }
          else {
            pDVar17 = (pDVar2->fields)._entries;
            if (pDVar17 == (Dictionary_2_TKey_TValue_Entry_System_Int32_UseInteractor___Array *)0x0)
            goto code_?;
            if ((uint)pDVar17->max_length <= uVar11) goto code_?;
            pDVar17->vector[(int)uVar11].next = pDVar13->vector[(int)uVar12].next;
          }
          pDVar13->vector[(int)uVar12].hashCode = -1;
          pDVar13->vector[(int)uVar12].next = (pDVar2->fields)._freeList;
          pDVar13->vector[(int)uVar12].value = (UseInteractor *)0x0;
          piVar18 = &(pDVar2->fields)._freeCount;
          *piVar18 = *piVar18 + 1;
          piVar18 = &(pDVar2->fields)._version;
          *piVar18 = *piVar18 + 1;
          (pDVar2->fields)._freeList = uVar12;
          return;
        }
      }
      uVar11 = uVar12;
      uVar10 = pDVar13->vector[(int)uVar12].next;
    }
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_Reset
               (UseInteractorHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Clear__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).useInteractors;
  if (pDVar1 != (Dictionary_2_System_Int32_UseInteractor_ *)0x0) {
    length = (pDVar1->fields)._count;
    if (0 < length) {
      pIVar2 = (pDVar1->fields)._buckets;
      if (pIVar2 == (Int32__Array *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pDVar1->fields)._buckets,0,(int32_t)pIVar2->max_length,(MethodInfo *)0x0)
      ;
      (pDVar1->fields)._count = 0;
      (pDVar1->fields)._freeCount = 0;
      (pDVar1->fields)._freeList = -1;
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pDVar1->fields)._entries,0,length,(MethodInfo *)0x0);
    }
    piVar4 = &(pDVar1->fields)._version;
    *piVar4 = *piVar4 + 1;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* List`1[UseInteractor] SortByDistance() */

List_1_UseInteractor_ *
Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_SortByDistance
          (UseInteractorHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Linq__IOrderedEnumerable<UseInteractor>_MethodInfo__System__Linq__Enumerable__OrderBy<UseInteractor,_float>_System__Collections__Generic__IEnumerable<UseInteractor>__System__Func<UseInteractor,_float>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<UseInteractor>_MethodInfo__System__Linq__Enumerable__ToList<UseInteractor>_System__Collections__Generic__IEnumerable<UseInteractor>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<UseInteractor,_float>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractorHandler____c__DisplayClass14_0___SortByDistance_b__0_UseInteractor_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractorHandler____c__DisplayClass14_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__UseInteractorHandler____c__DisplayClass14_0);
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).useInteractors;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 TypeConverterRegistry+ConverterKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                           (this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Values__
                           );
    pMVar1 = 
    System__Collections__Generic__List<UseInteractor>_MethodInfo__System__Linq__Enumerable__ToList<UseInteractor>_System__Collections__Generic__IEnumerable<UseInteractor>_
    ;
    if ((
        System__Collections__Generic__List<UseInteractor>_MethodInfo__System__Linq__Enumerable__ToList<UseInteractor>_System__Collections__Generic__IEnumerable<UseInteractor>_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   System__Collections__Generic__List<UseInteractor>_MethodInfo__System__Linq__Enumerable__ToList<UseInteractor>_System__Collections__Generic__IEnumerable<UseInteractor>_
                   );
    }
    if (collection ==
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
         *)0x0) {
      pSVar2 = (String *)func_?(&StringLiteral_source);
      pEVar3 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(pSVar2,(MethodInfo *)0x0);
      FUN_?(pEVar3,pMVar1);
      pcVar4 = (code *)swi(3);
      pLVar5 = (List_1_UseInteractor_ *)(*pcVar4)();
      return pLVar5;
    }
    pvVar6 = (pMVar1->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
      pvVar6 = (void *)FUN_?(pvVar6);
    }
    this_01 = (List_1_System_Object_ *)FUN_?(pvVar6);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              (this_01,(IEnumerable_1_System_Object_ *)collection,
               (pMVar1->field7_0x38).rgctx_data[2].method);
    pCVar7 = (this->fields).triggingColliders;
    if ((pCVar7 != (ColliderCollection *)0x0) &&
       (obj = (pCVar7->fields).activeCollider, obj != (Collider *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOStack_8 = (Object__Class *)0x0;
      uStack_9 = 0;
      uStack_10 = 0;
      pvVar6 = (obj->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pLVar5 = (List_1_UseInteractor_ *)(*pcVar4)();
        return pLVar5;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar4 = (code *)swi(3);
        pLVar5 = (List_1_UseInteractor_ *)(*pcVar4)();
        return pLVar5;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar6,&pOStack_8);
      if (object != (Object *)0x0) {
        object[1].klass = pOStack_8;
        *(int *)&object[1].monitor = (int)uStack_9;
        this_02 = (Func_2_Object_Single_ *)
                  FUN_?(TypeInfo__System__Func<UseInteractor,_float>);
        mscorlib.dll::System::Func`2[Object,Single]::Func_2_Object_Single___ctor
                  (this_02,object,
                   MethodInfo__UseInteractorHandler____c__DisplayClass14_0___SortByDistance_b__0_UseInteractor_
                   ,(MethodInfo *)0x0);
        collection_00 =
             System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_6
                       ((IEnumerable_1_System_Object_ *)this_01,this_02,
                        System__Linq__IOrderedEnumerable<UseInteractor>_MethodInfo__System__Linq__Enumerable__OrderBy<UseInteractor,_float>_System__Collections__Generic__IEnumerable<UseInteractor>__System__Func<UseInteractor,_float>_
                       );
        pMVar1 = 
        System__Collections__Generic__List<UseInteractor>_MethodInfo__System__Linq__Enumerable__ToList<UseInteractor>_System__Collections__Generic__IEnumerable<UseInteractor>_
        ;
        if ((
            System__Collections__Generic__List<UseInteractor>_MethodInfo__System__Linq__Enumerable__ToList<UseInteractor>_System__Collections__Generic__IEnumerable<UseInteractor>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       System__Collections__Generic__List<UseInteractor>_MethodInfo__System__Linq__Enumerable__ToList<UseInteractor>_System__Collections__Generic__IEnumerable<UseInteractor>_
                       );
        }
        if (collection_00 == (IOrderedEnumerable_1_System_Object_ *)0x0) {
          pSVar2 = (String *)func_?(&StringLiteral_source);
          pEVar3 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull
                             (pSVar2,(MethodInfo *)0x0);
          FUN_?(pEVar3,pMVar1);
          pcVar4 = (code *)swi(3);
          pLVar5 = (List_1_UseInteractor_ *)(*pcVar4)();
          return pLVar5;
        }
        pvVar6 = (pMVar1->field7_0x38).rgctx_data[1].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
          pvVar6 = (void *)FUN_?(pvVar6);
        }
        pLVar5 = (List_1_UseInteractor_ *)FUN_?(pvVar6);
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object___ctor_1
                  ((List_1_System_Object_ *)pLVar5,(IEnumerable_1_System_Object_ *)collection_00,
                   (pMVar1->field7_0x38).rgctx_data[2].method);
        return pLVar5;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pLVar5 = (List_1_UseInteractor_ *)(*pcVar4)();
  return pLVar5;
}


/* Void Update() */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_Update
               (UseInteractorHandler *this,MethodInfo *method)

{
  UseInteractorHandler_UpdateInteractorsWOID(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Count__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if ((pSVar1 == (SpawnRoleDataMediator *)0x0) ||
     (pSVar2 = (pSVar1->fields).SpawnRoleModeTypeWrapper, pSVar2 == (SpawnRoleModeTypeWrapper *)0x0
     )) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = (pSVar2->fields).spawnRoleType;
  if ((pSVar3 == (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) ||
     (pSVar4 = (pSVar3->fields).subscribableVariable,
     pSVar4 == (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0))
  goto code_?;
  if (((pSVar4->fields)._.value & 1) == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
      (IPlayModeUI *)0x0) goto code_?;
  cVar5 = FUN_?(0xb);
  if (cVar5 != '\0') {
    return;
  }
  pDVar6 = (this->fields).useInteractors;
  if (pDVar6 == (Dictionary_2_System_Int32_UseInteractor_ *)0x0) goto code_?;
  if (0 < (pDVar6->fields)._count - (pDVar6->fields)._freeCount) {
    pLVar7 = UseInteractorHandler_SortByDistance(this,(MethodInfo *)0x0);
    if (pLVar7 == (List_1_UseInteractor_ *)0x0) goto code_?;
    lVar8 = FUN_?(pLVar7);
    if (lVar8 == 0) goto code_?;
    if (*(longlong *)(lVar8 + 0x38) != 0) {
      lVar9 = *(longlong *)(lVar8 + 0x38);
      cVar5 = (**(code **)(lVar9 + 0x18))
                         (*(undefined8 *)(lVar9 + 0x40),(this->fields).ownerWoId,
                          (this->fields).interactionBase,*(undefined8 *)(lVar9 + 0x28));
      if (cVar5 == '\0') goto code_?;
    }
    if (*(UseInteractorVisualization **)(lVar8 + 0x10) == (UseInteractorVisualization *)0x0)
    goto code_?;
    SVar10 = UseInteractorVisualization::UseInteractorVisualization_GetShowOptions
                       (*(UseInteractorVisualization **)(lVar8 + 0x10),(MethodInfo *)0x0);
    if (*(UseInteractorVisualization **)(lVar8 + 0x10) == (UseInteractorVisualization *)0x0)
    goto code_?;
    UVar11 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                       (*(UseInteractorVisualization **)(lVar8 + 0x10),(MethodInfo *)0x0);
    if (1 < ((byte)UVar11 & 0xf)) {
      if ((*(char *)(lVar8 + 0x40) == '\0') || (*(char *)(lVar8 + 0x41) == '\0')) {
        bVar12 = false;
      }
      else {
        if (*(longlong *)(lVar8 + 0x10) == 0) goto code_?;
        bVar12 = *(char *)(*(longlong *)(lVar8 + 0x10) + 0x50) == '\0';
      }
      uVar13 = *(undefined4 *)(lVar8 + 0x18);
      if (!bVar12) {
        lVar8 = FUN_?();
        if (lVar8 != 0) {
          LStack_14._current = (Object *)CONCAT44(LStack_14._current._4_4_,uVar13);
          FUN_?(0,TypeInfo__IPlayModeUI,lVar8,SVar10);
          return;
        }
        goto code_?;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__Dispose__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UseInteractor>__GetEnumerator__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      UseInteractorHandler_UpdateInteractorsWOID(this,(MethodInfo *)0x0);
      pDVar6 = (this->fields).useInteractors;
      if (pDVar6 != (Dictionary_2_System_Int32_UseInteractor_ *)0x0) {
        if ((pDVar6->fields)._count == (pDVar6->fields)._freeCount) {
          return;
        }
        pLVar7 = UseInteractorHandler_SortByDistance(this,(MethodInfo *)0x0);
        if (pLVar7 != (List_1_UseInteractor_ *)0x0) {
          if (iRam_? != 0) {
            uVar15 = (uint)((ulonglong)&puStack_16 >> 0xc);
            puVar17 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar18 = *puVar17;
              LOCK();
              uVar19 = *puVar17;
              if (uVar18 == uVar19) {
                *puVar17 = uVar18 | 1L << (uVar15 & 0x3f);
              }
              UNLOCK();
            } while (uVar18 != uVar19);
          }
          pLStack_20 = (List_1_T_Enumerator_System_Object_ *)
                       ((ulonglong)(uint)(pLVar7->fields)._version << 0x20);
          puStack_21 = (undefined *)0x0;
          LStack_14._8_8_ = pLStack_20;
          LStack_14._current = (Object *)0x0;
          puStack_16 = (undefined *)0x0;
          pLStack_20 = &LStack_14;
          LStack_14._list = (List_1_System_Object_ *)pLVar7;
code_?:
          do {
            bVar22 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_14,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__MoveNext__
                               );
            this_02 = LStack_14._current;
            if (bVar22 == 0) {
              return;
            }
            if ((UseInteractor *)LStack_14._current == (UseInteractor *)0x0)
            goto code_?;
            if (((UseInteractor__Fields *)((longlong)LStack_14._current + 0x10))->
                checkCanUseFunction != (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0) {
              pFVar23 = ((UseInteractor__Fields *)((longlong)LStack_14._current + 0x10))->
                        checkCanUseFunction;
              cVar5 = (*(pFVar23->fields)._._.invoke_impl)
                                 ((pFVar23->fields)._._.method_code,(this->fields).ownerWoId,
                                  (this->fields).interactionBase,(pFVar23->fields)._._.method);
              if (cVar5 == '\0') goto code_?;
            }
            pMVar24 = (this->fields)._.worldObjectParent;
            if (pMVar24 == (MVWorldObjectClient *)0x0) goto code_?;
            bVar22 = UseInteractor::UseInteractor_Use
                               ((UseInteractor *)this_02,(pMVar24->fields)._.id,(MethodInfo *)0x0);
          } while (bVar22 == 0);
          this_00 = ((UseInteractor__Fields *)((longlong)this_02 + 0x10))->useInteractorVisuals;
          if (this_00 == (UseInteractorVisualization *)0x0) goto code_?;
          UseInteractorVisualization::UseInteractorVisualization_PayUseCost
                    (this_00,(MethodInfo *)0x0);
          if ((UseInteractor *)this_02 == (UseInteractor *)0x0) {
            return;
          }
          if (((UseInteractor__Fields *)((longlong)this_02 + 0x10))->reset == 0) {
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Clear__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)(this->fields).useInteractors;
          if (this_01 !=
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            TypeConverterRegistry+ConverterKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                      (this_01,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Clear__
                      );
            return;
          }
        }
      }
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
code_?:
  plVar25 = (longlong *)FUN_?();
  if (plVar25 != (longlong *)0x0) {
    uVar26 = 0;
    lVar8 = *plVar25;
    if (*(ushort *)(lVar8 + 0x12e) != 0) {
      do {
        if (*(IPlayModeUI__Class **)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar26 * 0x10) ==
            TypeInfo__IPlayModeUI) {
          puVar27 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar26 * 0x10) + 1) *
                     0x10 + 0x138 + lVar8);
          UNRECOVERED_JUMPTABLE = (code *)*puVar27;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(plVar25,puVar27[1],UNRECOVERED_JUMPTABLE);
          return;
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < *(ushort *)(lVar8 + 0x12e));
    }
    puVar27 = (undefined8 *)FUN_?(plVar25);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar27)(plVar25,puVar27[1],(code *)*puVar27);
    return;
  }
code_?:
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void UpdateInteractorsWOID() */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_UpdateInteractorsWOID
               (UseInteractorHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_UseInteractor>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_UseInteractor>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_UseInteractor>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_UseInteractor>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_UseInteractor>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._0_8_ = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  auStack_1._8_4_ = 0;
  auStack_1._12_4_ = 0;
  auStack_1._16_8_ = 0;
  pLVar2 = (this->fields).removeList;
  if (pLVar2 != (List_1_System_Int32_ *)0x0) {
    piVar3 = &(pLVar2->fields)._version;
    *piVar3 = *piVar3 + 1;
    (pLVar2->fields)._size = 0;
    pDVar4 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).useInteractors;
    if (pDVar4 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)(auStack_1 + 0x18) >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      uStack_10 = (ulonglong)(uint)(pDVar4->fields)._version;
      uStack_11 = 2;
      uStack_12 = 0;
      uStack_13 = 0;
      DStack_14._version = (undefined4)uStack_10;
      DStack_14._index = uStack_10._4_4_;
      DStack_14._current._0_8_ = 0;
      DStack_14._current.value = (Object *)0x0;
      DStack_14._getEnumeratorRetType = 2;
      DStack_14._36_4_ = 0;
      uStack_15 = 0;
      pDStack_16 = &DStack_14;
      auStack_1._24_8_ = pDVar4;
      DStack_14._dictionary = pDVar4;
code_?:
      do {
        bVar17 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                 Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                           (&DStack_14,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_UseInteractor>__MoveNext__
                           );
        pOVar18 = DStack_14._current.value;
        uVar19 = DStack_14._current._0_8_;
        if (bVar17 == 0) goto code_?;
        key = DStack_14._current.key;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar20 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar20 == (MVGameControllerBase *)0x0) {
code_?:
          FUN_?();
          FUN_?();
          goto code_?;
        }
        pMVar21 = (pMVar20->fields).game;
        if (pMVar21 == (MVNetworkGame *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        if (((pMVar21->fields).worldNetwork == (WorldNetwork *)0x0) ||
           (pMVar22 = (((pMVar21->fields).worldNetwork)->fields)._.worldObjectClientManager,
           pMVar22 == (MVWorldObjectClientManagerNetwork *)0x0)) {
code_?:
          FUN_?();
          goto code_?;
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        apOStackX_18[0] = (Object *)0x0;
        this_00 = (pMVar22->fields)._.worldObjects;
        if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,apOStackX_18,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                  );
        if ((apOStackX_18[0] == (Object *)0x0) || (pOVar18 == (Object *)0x0)) {
          pLVar2 = (this->fields).removeList;
          if (pLVar2 == (List_1_System_Int32_ *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          FUN_?(pLVar2,uVar19 & 0xffffffff,
                        MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          goto code_?;
        }
        pMVar23 = pOVar18[2].monitor;
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
        if (pMVar23 != (MonitorData *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (*(longlong *)(pMVar23 + 0x10) == 0) goto code_?;
          if ((Collider *)pOVar18[2].monitor != (Collider *)0x0) {
            pBVar24 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                                (&BStack_25,(Collider *)pOVar18[2].monitor,(MethodInfo *)0x0);
            BStack_26.m_Center.x = (pBVar24->m_Center).x;
            BStack_26.m_Center.y = (pBVar24->m_Center).y;
            BStack_26.m_Center.z = (pBVar24->m_Center).z;
            BStack_26.m_Extents.x = (pBVar24->m_Extents).x;
            BStack_26.m_Extents.y = (pBVar24->m_Extents).y;
            BStack_26.m_Extents.z = (pBVar24->m_Extents).z;
            pCVar27 = (this->fields).triggingColliders;
            if (pCVar27 != (ColliderCollection *)0x0) {
              this_01 = (pCVar27->fields).activeCollider;
              if (this_01 != (Collider *)0x0) {
                method_00 = (MethodInfo *)0x0;
                pBVar24 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                                    ((Bounds *)(auStack_1 + 0x18),this_01,(MethodInfo *)0x0);
                BStack_25.m_Center.x = (pBVar24->m_Center).x;
                BStack_25.m_Center.y = (pBVar24->m_Center).y;
                BStack_25._8_8_ = *(undefined8 *)&(pBVar24->m_Center).z;
                BStack_25.m_Extents.y = (pBVar24->m_Extents).y;
                BStack_25.m_Extents.z = (pBVar24->m_Extents).z;
                bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Intersects
                                   (&BStack_26,&BStack_25,method_00);
                if (bVar17 != 0) goto code_?;
                pLVar2 = (this->fields).removeList;
                if (pLVar2 != (List_1_System_Int32_ *)0x0) {
                  FUN_?(pLVar2,uVar19 & 0xffffffff,
                                MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                  goto code_?;
                }
                FUN_?();
              }
              FUN_?();
            }
            FUN_?();
          }
          FUN_?();
code_?:
          FUN_?();
          goto code_?;
        }
code_?:
        pLVar2 = (this->fields).removeList;
        if (pLVar2 == (List_1_System_Int32_ *)0x0) goto code_?;
        FUN_?(pLVar2,uVar19 & 0xffffffff,
                      MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      } while( true );
    }
  }
code_?:
  FUN_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
code_?:
  pDVar4 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).removeList;
  if (pDVar4 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_15 >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    auStack_1._12_4_ = *(int32_t *)((longlong)&(pDVar4->fields)._entries + 4);
    uStack_29 = 0;
    auStack_1._8_4_ = 0;
    auStack_1._16_8_ = 0;
    uStack_15 = 0;
    pDStack_16 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)auStack_1;
    auStack_1._0_8_ = pDVar4;
    while ((Dictionary_2_System_UInt32_System_Object_ *)auStack_1._0_8_ !=
           (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      if ((auStack_1._12_4_ !=
           *(int32_t *)
            ((longlong)
             &((Dictionary_2_System_UInt32_System_Object___Fields *)(auStack_1._0_8_ + 0x10))->
              _entries + 4)) ||
         (lVar6 = (longlong)(int)auStack_1._8_4_,
         *(uint *)&((Dictionary_2_System_UInt32_System_Object___Fields *)(auStack_1._0_8_ + 0x10))
                   ->_entries <= (uint)auStack_1._8_4_)) {
        if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__->klass
             ->field_0x135 & 1) == 0) {
          FUN_?();
        }
        if ((Dictionary_2_System_UInt32_System_Object_ *)auStack_1._0_8_ ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        if (auStack_1._12_4_ ==
            *(int32_t *)
             ((longlong)
              &((Dictionary_2_System_UInt32_System_Object___Fields *)(auStack_1._0_8_ + 0x10))->
               _entries + 4)) {
          return;
        }
        goto code_?;
      }
      pIVar30 = ((Dictionary_2_System_UInt32_System_Object___Fields *)(auStack_1._0_8_ + 0x10))->
                _buckets;
      if (pIVar30 == (Int32__Array *)0x0) goto code_?;
      if ((uint)pIVar30->max_length <= (uint)auStack_1._8_4_) goto code_?;
      auStack_1._16_4_ = pIVar30->vector[lVar6];
      auStack_1._8_4_ = auStack_1._8_4_ + 1;
      this_02 = (this->fields).useInteractors;
      if (this_02 == (Dictionary_2_System_Int32_UseInteractor_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Remove
                ((Dictionary_2_System_Int32_System_Object_ *)this_02,pIVar30->vector[lVar6],
                 MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Remove_int_
                );
    }
    goto code_?;
  }
  goto code_?;
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Void UpdateUseVisuals() */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_UpdateUseVisuals
               (UseInteractorHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if ((pSVar1 == (SpawnRoleDataMediator *)0x0) ||
     (pSVar2 = (pSVar1->fields).SpawnRoleModeTypeWrapper, pSVar2 == (SpawnRoleModeTypeWrapper *)0x0
     )) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = (pSVar2->fields).spawnRoleType;
  if ((pSVar3 == (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) ||
     (pSVar4 = (pSVar3->fields).subscribableVariable,
     pSVar4 == (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0))
  goto code_?;
  if (((pSVar4->fields)._.value & 1) == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
      (IPlayModeUI *)0x0) goto code_?;
  cVar5 = FUN_?(0xb);
  if (cVar5 != '\0') {
    return;
  }
  pDVar6 = (this->fields).useInteractors;
  if (pDVar6 == (Dictionary_2_System_Int32_UseInteractor_ *)0x0) goto code_?;
  if (0 < (pDVar6->fields)._count - (pDVar6->fields)._freeCount) {
    pLVar7 = UseInteractorHandler_SortByDistance(this,(MethodInfo *)0x0);
    if (pLVar7 == (List_1_UseInteractor_ *)0x0) goto code_?;
    lVar8 = FUN_?(pLVar7);
    if (lVar8 == 0) goto code_?;
    if (*(longlong *)(lVar8 + 0x38) != 0) {
      lVar9 = *(longlong *)(lVar8 + 0x38);
      cVar5 = (**(code **)(lVar9 + 0x18))
                         (*(undefined8 *)(lVar9 + 0x40),(this->fields).ownerWoId,
                          (this->fields).interactionBase,*(undefined8 *)(lVar9 + 0x28));
      if (cVar5 == '\0') goto code_?;
    }
    if (*(UseInteractorVisualization **)(lVar8 + 0x10) == (UseInteractorVisualization *)0x0)
    goto code_?;
    SVar10 = UseInteractorVisualization::UseInteractorVisualization_GetShowOptions
                       (*(UseInteractorVisualization **)(lVar8 + 0x10),(MethodInfo *)0x0);
    if (*(UseInteractorVisualization **)(lVar8 + 0x10) == (UseInteractorVisualization *)0x0)
    goto code_?;
    UVar11 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                       (*(UseInteractorVisualization **)(lVar8 + 0x10),(MethodInfo *)0x0);
    if (1 < ((byte)UVar11 & 0xf)) {
      if ((*(char *)(lVar8 + 0x40) == '\0') || (*(char *)(lVar8 + 0x41) == '\0')) {
        bVar12 = false;
      }
      else {
        if (*(longlong *)(lVar8 + 0x10) == 0) goto code_?;
        bVar12 = *(char *)(*(longlong *)(lVar8 + 0x10) + 0x50) == '\0';
      }
      uVar13 = *(undefined4 *)(lVar8 + 0x18);
      if (!bVar12) {
        lVar8 = FUN_?();
        if (lVar8 != 0) {
          LStack_14._current = (Object *)CONCAT44(LStack_14._current._4_4_,uVar13);
          FUN_?(0,TypeInfo__IPlayModeUI,lVar8,SVar10);
          return;
        }
        goto code_?;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__Dispose__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UseInteractor>__GetEnumerator__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      UseInteractorHandler_UpdateInteractorsWOID(this,(MethodInfo *)0x0);
      pDVar6 = (this->fields).useInteractors;
      if (pDVar6 != (Dictionary_2_System_Int32_UseInteractor_ *)0x0) {
        if ((pDVar6->fields)._count == (pDVar6->fields)._freeCount) {
          return;
        }
        pLVar7 = UseInteractorHandler_SortByDistance(this,(MethodInfo *)0x0);
        if (pLVar7 != (List_1_UseInteractor_ *)0x0) {
          if (iRam_? != 0) {
            uVar15 = (uint)((ulonglong)&puStack_16 >> 0xc);
            puVar17 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar18 = *puVar17;
              LOCK();
              uVar19 = *puVar17;
              if (uVar18 == uVar19) {
                *puVar17 = uVar18 | 1L << (uVar15 & 0x3f);
              }
              UNLOCK();
            } while (uVar18 != uVar19);
          }
          pLStack_20 = (List_1_T_Enumerator_System_Object_ *)
                       ((ulonglong)(uint)(pLVar7->fields)._version << 0x20);
          puStack_21 = (undefined *)0x0;
          LStack_14._8_8_ = pLStack_20;
          LStack_14._current = (Object *)0x0;
          puStack_16 = (undefined *)0x0;
          pLStack_20 = &LStack_14;
          LStack_14._list = (List_1_System_Object_ *)pLVar7;
code_?:
          do {
            bVar22 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_14,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__MoveNext__
                               );
            this_02 = LStack_14._current;
            if (bVar22 == 0) {
              return;
            }
            if ((UseInteractor *)LStack_14._current == (UseInteractor *)0x0)
            goto code_?;
            if (((UseInteractor__Fields *)((longlong)LStack_14._current + 0x10))->
                checkCanUseFunction != (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0) {
              pFVar23 = ((UseInteractor__Fields *)((longlong)LStack_14._current + 0x10))->
                        checkCanUseFunction;
              cVar5 = (*(pFVar23->fields)._._.invoke_impl)
                                 ((pFVar23->fields)._._.method_code,(this->fields).ownerWoId,
                                  (this->fields).interactionBase,(pFVar23->fields)._._.method);
              if (cVar5 == '\0') goto code_?;
            }
            pMVar24 = (this->fields)._.worldObjectParent;
            if (pMVar24 == (MVWorldObjectClient *)0x0) goto code_?;
            bVar22 = UseInteractor::UseInteractor_Use
                               ((UseInteractor *)this_02,(pMVar24->fields)._.id,(MethodInfo *)0x0);
          } while (bVar22 == 0);
          this_00 = ((UseInteractor__Fields *)((longlong)this_02 + 0x10))->useInteractorVisuals;
          if (this_00 == (UseInteractorVisualization *)0x0) goto code_?;
          UseInteractorVisualization::UseInteractorVisualization_PayUseCost
                    (this_00,(MethodInfo *)0x0);
          if ((UseInteractor *)this_02 == (UseInteractor *)0x0) {
            return;
          }
          if (((UseInteractor__Fields *)((longlong)this_02 + 0x10))->reset == 0) {
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Clear__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)(this->fields).useInteractors;
          if (this_01 !=
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            TypeConverterRegistry+ConverterKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                      (this_01,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Clear__
                      );
            return;
          }
        }
      }
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
code_?:
  plVar25 = (longlong *)FUN_?();
  if (plVar25 != (longlong *)0x0) {
    uVar26 = 0;
    lVar8 = *plVar25;
    if (*(ushort *)(lVar8 + 0x12e) != 0) {
      do {
        if (*(IPlayModeUI__Class **)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar26 * 0x10) ==
            TypeInfo__IPlayModeUI) {
          puVar27 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar26 * 0x10) + 1) *
                     0x10 + 0x138 + lVar8);
          UNRECOVERED_JUMPTABLE = (code *)*puVar27;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(plVar25,puVar27[1],UNRECOVERED_JUMPTABLE);
          return;
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < *(ushort *)(lVar8 + 0x12e));
    }
    puVar27 = (undefined8 *)FUN_?(plVar25);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar27)(plVar25,puVar27[1],(code *)*puVar27);
    return;
  }
code_?:
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Boolean Use() */

bool Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_Use
               (UseInteractorHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseInteractor>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UseInteractorHandler_UpdateInteractorsWOID(this,(MethodInfo *)0x0);
  pDVar1 = (this->fields).useInteractors;
  if (pDVar1 != (Dictionary_2_System_Int32_UseInteractor_ *)0x0) {
    if ((pDVar1->fields)._count == (pDVar1->fields)._freeCount) {
      return 0;
    }
    pLVar2 = UseInteractorHandler_SortByDistance(this,(MethodInfo *)0x0);
    if (pLVar2 != (List_1_UseInteractor_ *)0x0) {
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
      pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pLVar2->fields)._version << 0x20);
      uStack_9 = 0;
      LStack_10._8_8_ = pLStack_8;
      LStack_10._current = (Object *)0x0;
      uStack_4 = 0;
      pLStack_8 = &LStack_10;
      LStack_10._list = (List_1_System_Object_ *)pLVar2;
code_?:
      do {
        bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_10,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__MoveNext__
                          );
        this_02 = LStack_10._current;
        if (bVar11 == 0) {
          return 0;
        }
        if ((UseInteractor *)LStack_10._current == (UseInteractor *)0x0) goto code_?;
        if (((UseInteractor__Fields *)((longlong)LStack_10._current + 0x10))->checkCanUseFunction !=
            (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0) {
          pFVar12 = ((UseInteractor__Fields *)((longlong)LStack_10._current + 0x10))->
                   checkCanUseFunction;
          cVar13 = (*(pFVar12->fields)._._.invoke_impl)
                            ((pFVar12->fields)._._.method_code,(this->fields).ownerWoId,
                             (this->fields).interactionBase,(pFVar12->fields)._._.method);
          if (cVar13 == '\0') goto code_?;
        }
        pMVar14 = (this->fields)._.worldObjectParent;
        if (pMVar14 == (MVWorldObjectClient *)0x0) goto code_?;
        bVar11 = UseInteractor::UseInteractor_Use
                          ((UseInteractor *)this_02,(pMVar14->fields)._.id,(MethodInfo *)0x0);
      } while (bVar11 == 0);
      this_00 = ((UseInteractor__Fields *)((longlong)this_02 + 0x10))->useInteractorVisuals;
      if (this_00 == (UseInteractorVisualization *)0x0) goto code_?;
      UseInteractorVisualization::UseInteractorVisualization_PayUseCost(this_00,(MethodInfo *)0x0);
      if ((UseInteractor *)this_02 == (UseInteractor *)0x0) {
        return 0;
      }
      if (((UseInteractor__Fields *)((longlong)this_02 + 0x10))->reset == 0) {
        return 1;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Clear__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(this->fields).useInteractors;
      if (this_01 !=
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        TypeConverterRegistry+ConverterKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Clear__
                  );
        return 1;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar11 = (*pcVar15)();
  return bVar11;
}


/* UseInteractorHandler() */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler__ctor
               (UseInteractorHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Dictionary__)
  ;
  bVar1 = iRam_? != 0;
  (this->fields).useInteractors = (Dictionary_2_System_Int32_UseInteractor_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).useInteractors >> 0xc);
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
  pLVar6 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(pLVar6,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).removeList = pLVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).removeList >> 0xc);
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
  bVar1 = cRam_? == '\0';
  (this->fields).ownerWoId = -1;
  (this->fields)._.findWorldObjectParent = 1;
  if (bVar1) {
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

