
/* Boolean GetDoesWoFitDropOff(Int32) */

bool Assembly-CSharp.dll::CollectTheItem::CollectTheItem_GetDoesWoFitDropOff
               (CollectTheItem *this,int32_t keyId,MethodInfo *method)

{
  return (this->fields)._WoKeyInstance_k__BackingField == keyId;
}


/* Void Initialize() */

void Assembly-CSharp.dll::CollectTheItem::CollectTheItem_Initialize
               (CollectTheItem *this,MethodInfo *method)

{
  CollectTheItem_SetupReferences(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_Initialize((MVGroup *)this,(MethodInfo *)0x0);
  LStack_1._list =
       (List_1_System_Object_ *)MVGroup::MVGroup_get_Children((MVGroup *)this,(MethodInfo *)0x0);
  if ((List_1_MVWorldObjectClient_ *)LStack_1._list == (List_1_MVWorldObjectClient_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
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
               ((ulonglong)(uint)(((List_1_MVWorldObjectClient_ *)LStack_1._list)->fields)._version
               << 0x20);
  puStack_9 = (undefined *)0x0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    bVar11 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if ((((bVar11 <= ((LStack_1._current)->klass->_1).naturalAligment) &&
         ((MVCubeModelInstance__Class *)
          ((LStack_1._current)->klass->_1).typeHierarchy[(ulonglong)bVar11 - 1] ==
          TypeInfo__MVCubeModelInstance)) && (LStack_1._current != (Object *)0x0)) &&
       ((((uint)(this->fields)._._._.interactionFlags >> 0xe & 1) != 0 &&
        ((*(uint *)&LStack_1._current[0x11].monitor >> 0xe & 1) == 0)))) {
      piVar12 = &(this->fields)._._._.interactionFlags;
      *piVar12 = *piVar12 & 0xffffffffffffbfff;
    }
    LStack_1._current[0x11].monitor =
         (MonitorData *)((ulonglong)LStack_1._current[0x11].monitor & 0xffffffffffffbfff);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnCollectablePositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::CollectTheItem::CollectTheItem_OnCollectablePositionChanged
               (CollectTheItem *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  pCVar1 = (this->fields).objectPrefab;
  if (((pCVar1 == (CollectTheItemLineObject *)0x0) ||
      (positionChangedEventArgs == (PositionChangedEventArgs *)0x0)) ||
     (obj = (pCVar1->fields).lineRenderer, obj == (LineRenderer *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3._0_4_ = (positionChangedEventArgs->fields).NewPos.x;
  uStack_3._4_4_ = (positionChangedEventArgs->fields).NewPos.y;
  fStack_4 = (positionChangedEventArgs->fields).NewPos.z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar5,1,&uStack_3);
  return;
}


/* Void OnDropOffPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::CollectTheItem::CollectTheItem_OnDropOffPositionChanged
               (CollectTheItem *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  pCVar1 = (this->fields).objectPrefab;
  if (((pCVar1 == (CollectTheItemLineObject *)0x0) ||
      (positionChangedEventArgs == (PositionChangedEventArgs *)0x0)) ||
     (obj = (pCVar1->fields).lineRenderer, obj == (LineRenderer *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3._0_4_ = (positionChangedEventArgs->fields).NewPos.x;
  uStack_3._4_4_ = (positionChangedEventArgs->fields).NewPos.y;
  fStack_4 = (positionChangedEventArgs->fields).NewPos.z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar5,0,&uStack_3);
  return;
}


/* MVWorldObjectClient RetrieveWorldObject(Dictionary`2[System.Object,System.Object], String) */

MVWorldObjectClient *
Assembly-CSharp.dll::CollectTheItem::CollectTheItem_RetrieveWorldObject
          (CollectTheItem *this,Dictionary_2_System_Object_System_Object_ *table,String *id,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CollectTheItemCollectable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollectTheItemDropOff);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (table == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pMVar2 = (MVWorldObjectClient *)(*pcVar1)();
    return pMVar2;
  }
  iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)table,(Object *)id,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (-1 < iVar3) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (table,(Object *)id,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((this_00 == (MVWorldObjectClientManager *)0x0) || (pOVar4 == (Object *)0x0))
    goto code_?;
    if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar4,lRam_?);
      pcVar1 = (code *)swi(3);
      pMVar2 = (MVWorldObjectClient *)(*pcVar1)();
      return pMVar2;
    }
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,*(int32_t *)&pOVar4[1].klass,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      pMVar5 = pMVar2->klass;
      bVar6 = (TypeInfo__CollectTheItemDropOff->_1).naturalAligment;
      if (((pMVar5->_1).naturalAligment < bVar6) ||
         ((CollectTheItemDropOff__Class *)(pMVar5->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
          TypeInfo__CollectTheItemDropOff)) {
        bVar6 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
        if ((pMVar5->_1).naturalAligment < bVar6) {
          return (MVWorldObjectClient *)0x0;
        }
        if ((CollectTheItemCollectable__Class *)(pMVar5->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
            TypeInfo__CollectTheItemCollectable) {
          return (MVWorldObjectClient *)0x0;
        }
      }
      return pMVar2;
    }
  }
  return (MVWorldObjectClient *)0x0;
}


/* Void SetupReferences() */

void Assembly-CSharp.dll::CollectTheItem::CollectTheItem_SetupReferences
               (CollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CollectTheItemCollectable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollectTheItemDropOff);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CollectTheItem__OnCollectablePositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CollectTheItem__OnDropOffPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChildrenMap);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CollectTheItemCollectable);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CollectTheItemDropOff);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).hasInitializedReferences == 0) {
    pDVar1 = (this->fields)._._._._.data;
    (this->fields).hasInitializedReferences = 1;
    if ((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       (pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar1,(Object *)StringLiteral_BlueprintData,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0))
    goto DAT_?;
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar1->klass->_1).naturalAligment < bVar2) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pDVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar1,(Object *)StringLiteral_ChildrenMap,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar4->klass->_1).naturalAligment < bVar2) ||
         (pDVar1 = pDVar4,
         (Dictionary_2_System_Object_System_Object___Class *)
         (pDVar4->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pDVar4);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar5 = (CollectTheItemDropOff *)
              CollectTheItem_RetrieveWorldObject
                        (this,pDVar1,StringLiteral_CollectTheItemDropOff,(MethodInfo *)0x0);
    if (pCVar5 == (CollectTheItemDropOff *)0x0) {
      (this->fields).dropOff = (CollectTheItemDropOff *)0x0;
    }
    else {
      bVar2 = (TypeInfo__CollectTheItemDropOff->_1).naturalAligment;
      if (((pCVar5->klass->_1).naturalAligment < bVar2) ||
         ((CollectTheItemDropOff__Class *)(pCVar5->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1]
          != TypeInfo__CollectTheItemDropOff)) {
        FUN_?(pCVar5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->fields).dropOff = pCVar5;
      bVar2 = (TypeInfo__CollectTheItemDropOff->_1).naturalAligment;
      if (((pCVar5->klass->_1).naturalAligment < bVar2) ||
         ((CollectTheItemDropOff__Class *)(pCVar5->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1]
          != TypeInfo__CollectTheItemDropOff)) {
        FUN_?(pCVar5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(this->fields).dropOff >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pCVar11 = (CollectTheItemCollectable *)
              CollectTheItem_RetrieveWorldObject
                        (this,pDVar1,StringLiteral_CollectTheItemCollectable,(MethodInfo *)0x0);
    if (pCVar11 == (CollectTheItemCollectable *)0x0) {
      (this->fields).collectable = (CollectTheItemCollectable *)0x0;
    }
    else {
      bVar2 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
      if (((pCVar11->klass->_1).naturalAligment < bVar2) ||
         ((CollectTheItemCollectable__Class *)
          (pCVar11->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__CollectTheItemCollectable)) {
        FUN_?(pCVar11);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->fields).collectable = pCVar11;
      bVar2 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
      if (((pCVar11->klass->_1).naturalAligment < bVar2) ||
         ((CollectTheItemCollectable__Class *)
          (pCVar11->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__CollectTheItemCollectable)) {
        FUN_?(pCVar11);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(this->fields).collectable >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    if ((this->fields).dropOff != (CollectTheItemDropOff *)0x0) {
      pCVar5 = (this->fields).dropOff;
      pUVar12 = (pCVar5->fields)._._._.PositionChanged;
      pUVar13 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar13,(Object *)this,
                 MethodInfo__CollectTheItem__OnDropOffPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar12,(Delegate *)pUVar13,(MethodInfo *)0x0);
      pUVar15 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (pDVar14 == (Delegate *)0x0) {
        (pCVar5->fields)._._._.PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      }
      else {
        pUVar12 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                  FUN_?(pDVar14,
                                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
        if (pUVar12 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
          FUN_?(pDVar14,pUVar15);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (pCVar5->fields)._._._.PositionChanged = pUVar12;
        pUVar15 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        lVar7 = FUN_?();
        if (lVar7 == 0) {
          FUN_?(pDVar14,pUVar15);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(pCVar5->fields)._._._.PositionChanged >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pCVar16 = (this->fields).objectPrefab;
      if (pCVar16 == (CollectTheItemLineObject *)0x0) goto DAT_?;
      pCVar5 = (this->fields).dropOff;
      pLVar17 = (pCVar16->fields).lineRenderer;
      if ((pCVar5 == (CollectTheItemDropOff *)0x0) ||
         (pTVar18 = (pCVar5->fields)._._._.transform, pTVar18 == (Transform *)0x0))
      goto DAT_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar19 = (pTVar18->fields)._._.m_CachedPtr;
      if (pvVar19 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar18,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar20 = func_?(&UNK_?);
        FUN_?(uVar20,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar19);
      if (pLVar17 == (LineRenderer *)0x0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uStack_21 = 0;
      uStack_22 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar19 = (pLVar17->fields)._._._.m_CachedPtr;
      if (pvVar19 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar17,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar20 = func_?(&UNK_?);
        FUN_?(uVar20,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar19,0,&uStack_21);
      pCVar5 = (this->fields).dropOff;
      if (pCVar5 == (CollectTheItemDropOff *)0x0) goto code_?;
      bVar10 = iRam_? != 0;
      (pCVar5->fields).controller = this;
      if (bVar10) {
        uVar6 = (uint)((ulonglong)&(pCVar5->fields).controller >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    if ((this->fields).collectable != (CollectTheItemCollectable *)0x0) {
      pCVar11 = (this->fields).collectable;
      pUVar12 = (pCVar11->fields)._._._.PositionChanged;
      pUVar13 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar13,(Object *)this,
                 MethodInfo__CollectTheItem__OnCollectablePositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar12,(Delegate *)pUVar13,(MethodInfo *)0x0);
      pUVar15 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (pDVar14 == (Delegate *)0x0) {
        (pCVar11->fields)._._._.PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      }
      else {
        pUVar12 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                  FUN_?(pDVar14,
                                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
        if (pUVar12 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
          FUN_?(pDVar14,pUVar15);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (pCVar11->fields)._._._.PositionChanged = pUVar12;
        pUVar15 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        lVar7 = FUN_?();
        if (lVar7 == 0) {
          FUN_?(pDVar14,pUVar15);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(pCVar11->fields)._._._.PositionChanged >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pCVar16 = (this->fields).objectPrefab;
      if (pCVar16 != (CollectTheItemLineObject *)0x0) {
        pCVar11 = (this->fields).collectable;
        pLVar17 = (pCVar16->fields).lineRenderer;
        if ((pCVar11 != (CollectTheItemCollectable *)0x0) &&
           (pTVar18 = (pCVar11->fields)._._._.transform, pTVar18 != (Transform *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar19 = (pTVar18->fields)._._.m_CachedPtr;
          if (pvVar19 != (void *)0x0) {
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar20 = func_?(&UNK_?);
              FUN_?(uVar20,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
            (*pcRam_?)(pvVar19);
            if (pLVar17 != (LineRenderer *)0x0) {
              uStack_21 = 0;
              uStack_22 = 0;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar19 = (pLVar17->fields)._._._.m_CachedPtr;
              if (pvVar19 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar17,(MethodInfo *)0x0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcVar3 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                uVar20 = func_?(&UNK_?);
                FUN_?(uVar20,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcRam_? = pcVar3;
              (*pcRam_?)(pvVar19,1);
              pCVar11 = (this->fields).collectable;
              if (pCVar11 != (CollectTheItemCollectable *)0x0) {
                CollectTheItemCollectable::CollectTheItemCollectable_InitializeWithController
                          (pCVar11,this,(MethodInfo *)0x0);
                return;
              }
            }
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar18,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
DAT_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}


/* CollectTheItem(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::CollectTheItem::CollectTheItem__ctor
               (CollectTheItem *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CollectTheItemLineObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 == (PrefabPool *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  MVBlueprintBase::MVBlueprintBase__ctor_1
            ((MVBlueprintBase *)this,data,(ObjectPrefab *)(pPVar1->fields).collectTheItem,
             worldObjects,(MethodInfo *)0x0);
  pCVar3 = (CollectTheItemLineObject *)(this->fields)._._._.component;
  if (pCVar3 == (CollectTheItemLineObject *)0x0) {
    (this->fields).objectPrefab = (CollectTheItemLineObject *)0x0;
  }
  else {
    bVar4 = (TypeInfo__CollectTheItemLineObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pCVar3->klass)->_1).naturalAligment < bVar4) ||
       ((((ObjectPrefab__Class *)pCVar3->klass)->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
        (Il2CppClass *)TypeInfo__CollectTheItemLineObject)) {
      FUN_?(pCVar3);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->fields).objectPrefab = pCVar3;
    bVar4 = (TypeInfo__CollectTheItemLineObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pCVar3->klass)->_1).naturalAligment < bVar4) ||
       ((((ObjectPrefab__Class *)pCVar3->klass)->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
        (Il2CppClass *)TypeInfo__CollectTheItemLineObject)) {
      FUN_?(pCVar3);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields).objectPrefab >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  (this->fields)._._._.interactionFlags =
       (this->fields)._._._.interactionFlags & 0xffffffffffffdfffU | 0x40;
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::CollectTheItem::CollectTheItem_get_DocumentationType
          (CollectTheItem *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_CollectTheItem;
}


/* Int32 get_DropOffId() */

int32_t Assembly-CSharp.dll::CollectTheItem::CollectTheItem_get_DropOffId
                  (CollectTheItem *this,MethodInfo *method)

{
  pCVar1 = (this->fields).dropOff;
  if (pCVar1 != (CollectTheItemDropOff *)0x0) {
    return (pCVar1->fields)._._._._.id;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Boolean get_HasDropOff() */

bool Assembly-CSharp.dll::CollectTheItem::CollectTheItem_get_HasDropOff
               (CollectTheItem *this,MethodInfo *method)

{
  return (this->fields).dropOff != (CollectTheItemDropOff *)0x0;
}


/* Void set_WoKeyInstance(Int32) */

void Assembly-CSharp.dll::CollectTheItem::CollectTheItem_set_WoKeyInstance
               (CollectTheItem *this,int32_t value,MethodInfo *method)

{
  (this->fields)._WoKeyInstance_k__BackingField = value;
  return;
}

