
/* Void AddTarget(Collider) */

void Assembly-CSharp.dll::AdvancedGhostTriggerBase::AdvancedGhostTriggerBase_AddTarget
               (AdvancedGhostTriggerBase *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_10[0] = 0;
  bVar1 = AdvancedGhostTriggerBase_TryGetValidWorldObjectID
                    (this,other,aiStackX_10,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    this_00 = (this->fields).attackTargets;
    if (this_00 == (HashSet_1_System_Int32_ *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32__AddIfNotPresent
              (this_00,aiStackX_10[0],
               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->rgctx_data
               [0x15].method);
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AdvancedGhostTriggerBase::AdvancedGhostTriggerBase_OnDestroy
               (AdvancedGhostTriggerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (this->fields).attackTargets;
  if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
    if (0 < (pHVar1->fields)._lastIndex) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pHVar1->fields)._slots,0,(pHVar1->fields)._lastIndex,(MethodInfo *)0x0);
      pIVar2 = (pHVar1->fields)._buckets;
      if (pIVar2 == (Int32__Array *)0x0) goto code_?;
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pHVar1->fields)._buckets,0,(int32_t)pIVar2->max_length,(MethodInfo *)0x0)
      ;
      (pHVar1->fields)._freeList = -1;
      (pHVar1->fields)._count = 0;
      (pHVar1->fields)._lastIndex = 0;
    }
    piVar3 = &(pHVar1->fields)._version;
    *piVar3 = *piVar3 + 1;
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnTriggerStay(Collider) */

void Assembly-CSharp.dll::AdvancedGhostTriggerBase::AdvancedGhostTriggerBase_OnTriggerStay
               (AdvancedGhostTriggerBase *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (AdvancedGhostTriggerBase *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  cVar4 = (*pcRam_?)(pvVar2);
  if (cVar4 != '\0') {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aiStackX_8[0] = 0;
    bVar5 = AdvancedGhostTriggerBase_TryGetValidWorldObjectID
                      (this,other,aiStackX_8,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      this_00 = (this->fields).attackTargets;
      if (this_00 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
      HashSet_1_System_Int32__AddIfNotPresent
                (this_00,aiStackX_8[0],
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->rgctx_data
                 [0x15].method);
    }
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::AdvancedGhostTriggerBase::AdvancedGhostTriggerBase_Reset
               (AdvancedGhostTriggerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (this->fields).attackTargets;
  if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
    if (0 < (pHVar1->fields)._lastIndex) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pHVar1->fields)._slots,0,(pHVar1->fields)._lastIndex,(MethodInfo *)0x0);
      pIVar2 = (pHVar1->fields)._buckets;
      if (pIVar2 == (Int32__Array *)0x0) goto code_?;
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pHVar1->fields)._buckets,0,(int32_t)pIVar2->max_length,(MethodInfo *)0x0)
      ;
      (pHVar1->fields)._freeList = -1;
      (pHVar1->fields)._count = 0;
      (pHVar1->fields)._lastIndex = 0;
    }
    piVar3 = &(pHVar1->fields)._version;
    *piVar3 = *piVar3 + 1;
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean TryGetValidWorldObjectID(Collider, Int32 ByRef) */

bool Assembly-CSharp.dll::AdvancedGhostTriggerBase::
     AdvancedGhostTriggerBase_TryGetValidWorldObjectID
               (AdvancedGhostTriggerBase *this,Collider *collider,int32_t *woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  *woID = -1;
  if ((collider != (Collider *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)collider,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (obj->fields)._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    pcRam_? = pcVar2;
    iVar5 = (*pcRam_?)(pvVar1);
    iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Player,(MethodInfo *)0x0);
    if (iVar5 == iVar6) {
      t = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)collider,(MethodInfo *)0x0);
      this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                          (t,(MethodInfo *)0x0);
      if (this_00 == (MVWorldObjectClient *)0x0) goto code_?;
      pIVar7 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                         (this_00,(MethodInfo *)0x0);
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
      if (pIVar7 != (InteractionDataHandlerBase *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pIVar7->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          *woID = (this_00->fields)._.id;
          return 1;
        }
      }
    }
    return 0;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* AdvancedGhostTriggerBase() */

void Assembly-CSharp.dll::AdvancedGhostTriggerBase::AdvancedGhostTriggerBase__ctor
               (AdvancedGhostTriggerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  bVar2 = iRam_? != 0;
  (this->fields).attackTargets = pHVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).attackTargets >> 0xc);
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


/* Int32[] get_AttackTargets() */

Int32__Array *
Assembly-CSharp.dll::AdvancedGhostTriggerBase::AdvancedGhostTriggerBase_get_AttackTargets
          (AdvancedGhostTriggerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Int32__MethodInfo__System__Linq__Enumerable__ToArray<int>_System__Collections__Generic__IEnumerable<int>_____
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  System__Int32__MethodInfo__System__Linq__Enumerable__ToArray<int>_System__Collections__Generic__IEnumerable<int>_____
  ;
  source = (this->fields).attackTargets;
  if ((
      System__Int32__MethodInfo__System__Linq__Enumerable__ToArray<int>_System__Collections__Generic__IEnumerable<int>_____
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 System__Int32__MethodInfo__System__Linq__Enumerable__ToArray<int>_System__Collections__Generic__IEnumerable<int>_____
                 );
  }
  if (source != (HashSet_1_System_Int32_ *)0x0) {
    BStack_2.items = (Int32__Array *)0x0;
    BStack_2.count = 0;
    BStack_2._12_4_ = 0;
    System.Core.dll::System::Linq::Buffer`1[System::Int32]::Buffer_1_System_Int32___ctor
              (&BStack_2,(IEnumerable_1_System_Int32_ *)source,
               (pMVar1->field7_0x38).rgctx_data[2].method);
    uStack_3 = BStack_2.items._0_4_;
    uStack_4 = BStack_2.items._4_4_;
    iStack_5 = BStack_2.count;
    uStack_6 = BStack_2._12_4_;
    pIVar7 = (Int32__Array *)
             FUN_?(&uStack_3,(pMVar1->field7_0x38).rgctx_data[3].rgctxDataDummy);
    return pIVar7;
  }
  s = (String *)func_?(&StringLiteral_source);
  pEVar8 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
  FUN_?(pEVar8,pMVar1);
  pcVar9 = (code *)swi(3);
  pIVar7 = (Int32__Array *)(*pcVar9)();
  return pIVar7;
}

