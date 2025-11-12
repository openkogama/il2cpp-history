
/* Void Initialize() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBase::MVEditablePickupItemBase_Initialize
               (MVEditablePickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    auStack_1._0_8_ = &UNK_?;
    FUN_?(&
                  TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._0_8_ = &UNK_?;
  MVPickupItemBase::MVPickupItemBase_Initialize((MVPickupItemBase *)this,(MethodInfo *)0x0);
  auStack_1._0_8_ = &UNK_?;
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_03 == (MVWorldObjectClientManager *)0x0) {
code_?:
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  auStack_1._0_8_ = &UNK_?;
  pMVar3 = (MVEditablePickupItemBaseBlueprint *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (this_03,(this->fields)._._._._.groupId,(MethodInfo *)0x0);
  if (pMVar3 == (MVEditablePickupItemBaseBlueprint *)0x0) {
    (this->fields).blueprint = (MVEditablePickupItemBaseBlueprint *)0x0;
  }
  else {
    bVar4 = (
            TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
            ->_1).naturalAligment;
    if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
       ((MVEditablePickupItemBaseBlueprint__Class *)
        (pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
        TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
       )) {
      auStack_1._0_8_ = &UNK_?;
      FUN_?(pMVar3);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->fields).blueprint = pMVar3;
    bVar4 = (
            TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
            ->_1).naturalAligment;
    if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
       ((MVEditablePickupItemBaseBlueprint__Class *)
        (pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
        TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseBlueprint
       )) {
      auStack_1._0_8_ = &UNK_?;
      FUN_?(pMVar3);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields).blueprint >> 0xc);
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
  auStack_1._0_8_ = &UNK_?;
  MVEditablePickupItemBase_SetupUseInteractor(this,(MethodInfo *)0x0);
  auStack_1._0_8_ = &UNK_?;
  (*(this->klass->vtable).OnDataUpdate.methodPtr)(this,(this->klass->vtable).OnDataUpdate.method);
  pMVar3 = (this->fields).blueprint;
  if (((pMVar3 == (MVEditablePickupItemBaseBlueprint *)0x0) ||
      (pUVar9 = (this->fields)._.useInteractor, pUVar9 == (UseInteractor *)0x0)) ||
     (this_00 = (pUVar9->fields).useInteractorVisuals, this_00 == (UseInteractorVisualization *)0x0)
     ) goto code_?;
  iVar10 = (pUVar9->fields).woOwnerID;
  pOVar11 = (Object__Class *)(pMVar3->fields)._._._._.data;
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
  pOVar12 = (Object *)FUN_?(TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
  if (pOVar12 == (Object *)0x0) {
code_?:
    auStack_1._0_8_ = &UNK_?;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar13 = iRam_? != 0;
  pOVar12[1].klass = pOVar11;
  if (bVar13) {
    uVar5 = (uint)((ulonglong)(pOVar12 + 1) >> 0xc);
    lVar14 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar14 + 0xADDR);
      puVar6 = (ulonglong *)(lVar14 + 0xADDR);
      LOCK();
      bVar13 = uVar8 == *puVar6;
      if (bVar13) {
        *puVar6 = uVar8 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar13);
  }
  *(int32_t *)&pOVar12[1].monitor = iVar10;
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
      uVar5 = (uint)((ulonglong)
                      &TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 >> 0xc);
      lVar14 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar14 + 0xADDR);
        puVar6 = (ulonglong *)(lVar14 + 0xADDR);
        LOCK();
        bVar13 = uVar8 == *puVar6;
        if (bVar13) {
          *puVar6 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
  }
  auStack_1._0_8_ = &UNK_?;
  this_02 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  auStack_1._0_8_ = &UNK_?;
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_02,pOVar12,
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
  pLVar15 = (this_00->fields).useRequirements;
  if (pLVar15 == (List_1_UseRequirement_ *)0x0) {
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
    uVar5 = (uint)((ulonglong)&pLStack_16 >> 0xc);
    uVar8 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar13 = uVar7 == *puVar6;
      if (bVar13) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar13);
  }
  puStack_17 = (undefined1 *)((ulonglong)(uint)(pLVar15->fields)._version << 0x20);
  uStack_18 = 0;
  auStack_1._8_8_ = puStack_17;
  pOStack_19 = (Object *)0x0;
  uStack_20 = 0;
  puStack_21 = auStack_1;
  pLStack_16 = pLVar15;
  auStack_1._0_8_ = pLVar15;
  while (bVar22 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), bVar22 != 0) {
    if (pOStack_19 == (Object *)0x0) goto code_?;
    cVar23 = (*(code *)pOStack_19->klass[1]._0.interopData)
                       (pOStack_19,pOStack_19->klass[1]._0.klass);
    if (cVar23 != '\0') {
      piVar24 = &(this_00->fields).active;
      *piVar24 = *piVar24 + 1;
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
  fVar25 = 0.0;
  pLVar15 = (this_00->fields).useRequirements;
  if (pLVar15 == (List_1_UseRequirement_ *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pLStack_16 >> 0xc);
    uVar8 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar13 = uVar7 == *puVar6;
      if (bVar13) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar13);
  }
  puStack_17 = (undefined1 *)((ulonglong)(uint)(pLVar15->fields)._version << 0x20);
  uStack_18 = 0;
  auStack_1._8_8_ = puStack_17;
  pOStack_19 = (Object *)0x0;
  pLStack_16 = (List_1_UseRequirement_ *)0x0;
  puStack_17 = auStack_1;
  auStack_1._0_8_ = pLVar15;
  while (bVar22 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_1,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), pOVar12 = pOStack_19, bVar22 != 0) {
    if (pOStack_19 == (Object *)0x0) goto code_?;
    cVar23 = (*(code *)pOStack_19->klass[1]._0.interopData)
                       (pOStack_19,pOStack_19->klass[1]._0.klass);
    if (cVar23 != '\0') {
      pOVar11 = pOVar12->klass;
      uStack_20._0_4_ = (this_00->fields).pivot.x;
      uStack_20._4_4_ = (this_00->fields).pivot.y;
      puStack_21 = (undefined1 *)CONCAT44(puStack_21._4_4_,(this_00->fields).pivot.z);
      (*(code *)pOVar11[1]._0.fields)
                (pOVar12,&uStack_20,fVar25,(this_00->fields).dist,pOVar11[1]._0.events);
      fVar25 = fVar25 + (this_00->fields).spacing;
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
  bVar22 = (this_00->fields)._HasUseRequirements_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar26 = (this_00->fields)._._._._.m_CachedPtr;
  if (pvVar26 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar27 = func_?(&UNK_?);
    FUN_?(uVar27,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar26,bVar22);
  return;
}


/* Boolean IsSameWeapon(PickupItem) */

bool Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBase::MVEditablePickupItemBase_IsSameWeapon
               (MVEditablePickupItemBase *this,PickupItem *pickupItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PickupItemEditable);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pickupItem != (PickupItem *)0x0) {
    iVar1 = (*(pickupItem->klass->vtable).__unknown.methodPtr)
                      (pickupItem,(pickupItem->klass->vtable).__unknown.method);
    if (iVar1 == (this->fields)._.pickupItemType) {
      pPVar2 = pickupItem->klass;
      bVar3 = (TypeInfo__PickupItemEditable->_1).naturalAligment;
      if ((bVar3 <= (pPVar2->_1).naturalAligment) &&
         ((PickupItemEditable__Class *)(pPVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
          TypeInfo__PickupItemEditable)) {
        bVar3 = (TypeInfo__PickupItemEditable->_1).naturalAligment;
        if (((pPVar2->_1).naturalAligment < bVar3) ||
           ((PickupItemEditable__Class *)(pPVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
            TypeInfo__PickupItemEditable)) {
          FUN_?(pickupItem);
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        pMVar6 = (this->fields).blueprint;
        if (pMVar6 != (MVEditablePickupItemBaseBlueprint *)0x0) {
          if (pickupItem[1].fields.originalScale.y != (float)(pMVar6->fields).cubeModelPid) {
            return 0;
          }
          this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)(this->fields)._._._._.data;
          if (this_00 !=
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) {
            iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                              (this_00,(Object *)StringLiteral_itemData,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                               ->klass->rgctx_data[0x21].method);
            if (iVar7 < 0) {
              return 0;
            }
            this_01 = (this->fields)._._._._.data;
            if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (this_01,(Object *)StringLiteral_itemData,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (pOVar8 != (Object *)0x0) {
                bVar3 = (
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).naturalAligment;
                if (((pOVar8->klass->_1).naturalAligment < bVar3) ||
                   ((Dictionary_2_System_Object_System_Object___Class *)
                    (pOVar8->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   )) {
                  FUN_?(pOVar8);
                  pcVar4 = (code *)swi(3);
                  bVar5 = (*pcVar4)();
                  return bVar5;
                }
              }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              bVar5 = (*(code *)pickupItem->klass[1]._0.fields)
                                (pickupItem,pOVar8,pickupItem->klass[1]._0.events);
              return bVar5;
            }
          }
        }
        goto code_?;
      }
    }
    return 0;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBase::MVEditablePickupItemBase_OnDataUpdate
               (MVEditablePickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarItemType);
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
    FUN_?(&StringLiteral_variantId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields)._._._._.data;
  if (pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (pDVar1,(Object *)StringLiteral_variantId,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (-1 < iVar3) {
    pDVar4 = (this->fields)._._._._.data;
    if ((pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar4,(Object *)StringLiteral_variantId,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pOVar5 == (Object *)0x0)) goto code_?;
    if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar5,lRam_?);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->fields)._.pickupVariantId = *(int32_t *)&pOVar5[1].klass;
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields)._._._._.data;
  if (pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) goto code_?;
  iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (pDVar1,(Object *)StringLiteral_itemType,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (-1 < iVar3) {
    pDVar4 = (this->fields)._._._._.data;
    if ((pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar4,(Object *)StringLiteral_itemType,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pOVar5 == (Object *)0x0)) goto code_?;
    if ((pOVar5->klass->_0).element_class !=
        (TypeInfo__MV__Common__AvatarItemType->_0).element_class) {
      FUN_?(pOVar5,TypeInfo__MV__Common__AvatarItemType);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->fields)._.pickupItemType = *(int32_t *)&pOVar5[1].klass;
  }
  if ((this->fields).blueprint == (MVEditablePickupItemBaseBlueprint *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CubeModelId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar4 = (this->fields)._._._._.data;
  apDStackX_18[0] = (Dictionary_2_System_Object_System_Object_ *)0x0;
  if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (pDVar4,(Object *)StringLiteral_itemData,(Object **)apDStackX_18,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  pDVar4 = apDStackX_18[0];
  if ((bVar6 != 0) && (apDStackX_18[0] != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    pDVar7 = apDStackX_18[0]->klass;
    bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((bVar8 <= (pDVar7->_1).naturalAligment) &&
       (((Dictionary_2_System_Object_System_Object___Class *)
         (pDVar7->_1).typeHierarchy[(ulonglong)bVar8 - 1] ==
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object> &&
        (apDStackX_18[0] != (Dictionary_2_System_Object_System_Object_ *)0x0)))) {
      pMVar9 = (this->fields).blueprint;
      if (pMVar9 == (MVEditablePickupItemBaseBlueprint *)0x0) goto code_?;
      aiStackX_8[0] = (pMVar9->fields).cubeModelId;
      pOVar5 = (Object *)FUN_?(lRam_?,aiStackX_8);
      uVar10 = CONCAT71((int7)((ulonglong)pDVar7 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar4,(Object *)StringLiteral_CubeModelId,pOVar5,(InsertionBehavior__Enum)uVar10,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      this_00 = (this->fields)._._._._.data;
      if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (this_00,(Object *)StringLiteral_itemData,(Object *)pDVar4,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar10 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
  }
  if ((this->fields)._.useInteractor == (UseInteractor *)0x0) {
    return;
  }
  pMVar9 = (this->fields).blueprint;
  if (pMVar9 != (MVEditablePickupItemBaseBlueprint *)0x0) {
    pUVar11 = (this->fields)._.useInteractor;
    this_01 = (pUVar11->fields).useInteractorVisuals;
    if (this_01 != (UseInteractorVisualization *)0x0) {
      UseInteractorVisualization::UseInteractorVisualization_UpdateData
                (this_01,(pMVar9->fields)._._._._.data,(pUVar11->fields).woOwnerID,(MethodInfo *)0x0)
      ;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDataUpdateBlueprintReq() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBase::MVEditablePickupItemBase_OnDataUpdateBlueprintReq
               (MVEditablePickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CubeModelId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._._._.data;
  apDStackX_18[0] = (Dictionary_2_System_Object_System_Object_ *)0x0;
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (pDVar1,(Object *)StringLiteral_itemData,(Object **)apDStackX_18,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  pDVar1 = apDStackX_18[0];
  if ((bVar2 != 0) && (apDStackX_18[0] != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    pDVar3 = apDStackX_18[0]->klass;
    bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((bVar4 <= (pDVar3->_1).naturalAligment) &&
       (((Dictionary_2_System_Object_System_Object___Class *)
         (pDVar3->_1).typeHierarchy[(ulonglong)bVar4 - 1] ==
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object> &&
        (apDStackX_18[0] != (Dictionary_2_System_Object_System_Object_ *)0x0)))) {
      pMVar5 = (this->fields).blueprint;
      if (pMVar5 == (MVEditablePickupItemBaseBlueprint *)0x0) goto code_?;
      aiStackX_8[0] = (pMVar5->fields).cubeModelId;
      value = (Object *)FUN_?(uRam_?,aiStackX_8);
      uVar6 = CONCAT71((int7)((ulonglong)pDVar3 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar1,(Object *)StringLiteral_CubeModelId,value,(InsertionBehavior__Enum)uVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      this_00 = (this->fields)._._._._.data;
      if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (this_00,(Object *)StringLiteral_itemData,(Object *)pDVar1,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
  }
  if ((this->fields)._.useInteractor == (UseInteractor *)0x0) {
    return;
  }
  pMVar5 = (this->fields).blueprint;
  if (pMVar5 != (MVEditablePickupItemBaseBlueprint *)0x0) {
    pUVar7 = (this->fields)._.useInteractor;
    this_01 = (pUVar7->fields).useInteractorVisuals;
    if (this_01 != (UseInteractorVisualization *)0x0) {
      UseInteractorVisualization::UseInteractorVisualization_UpdateData
                (this_01,(pMVar5->fields)._._._._.data,(pUVar7->fields).woOwnerID,(MethodInfo *)0x0)
      ;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBase::MVEditablePickupItemBase_SetupUseInteractor
               (MVEditablePickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameCoinLogic);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameRankRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelBasedUseRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVPickupItemBase__CheckCanUse_int__MVInteractableBase_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVPickupItemBase__DoPickup_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.useInteractor != (UseInteractor *)0x0) {
    pMVar1 = MVEditablePickupItemBase_get_BaseObject(this,(MethodInfo *)0x0);
    if (pMVar1 == (MVEditablePickupItemBaseObject *)0x0) goto code_?;
    pTVar2 = (pMVar1->fields)._.triggerBoxEvents;
    pUVar3 = (this->fields)._.useInteractor;
    pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar4,(Object *)pUVar3,
               MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar2 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
              (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
    pMVar1 = MVEditablePickupItemBase_get_BaseObject(this,(MethodInfo *)0x0);
    if (pMVar1 == (MVEditablePickupItemBaseObject *)0x0) goto code_?;
    pTVar2 = (pMVar1->fields)._.triggerBoxEvents;
    pUVar3 = (this->fields)._.useInteractor;
    pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar4,(Object *)pUVar3,
               MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar2 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
              (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
    pUVar3 = (this->fields)._.useInteractor;
    if ((pUVar3 == (UseInteractor *)0x0) ||
       (this_00 = (pUVar3->fields).useInteractorVisuals,
       this_00 == (UseInteractorVisualization *)0x0)) goto code_?;
    UseInteractorVisualization::UseInteractorVisualization_DestroyRequirementObjects
              (this_00,(this->fields)._._._._.data,(MethodInfo *)0x0);
    bVar5 = iRam_? != 0;
    (this->fields)._.useInteractor = (UseInteractor *)0x0;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields)._.useInteractor >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  wo = (this->fields).blueprint;
  pMVar1 = MVEditablePickupItemBase_get_BaseObject(this,(MethodInfo *)0x0);
  if (pMVar1 != (MVEditablePickupItemBaseObject *)0x0) {
    pGVar10 = (pMVar1->fields)._.useInteractionRotator;
    pMVar1 = MVEditablePickupItemBase_get_BaseObject(this,(MethodInfo *)0x0);
    if ((pMVar1 != (MVEditablePickupItemBaseObject *)0x0) &&
       (pTVar2 = (pMVar1->fields)._.triggerBoxEvents, pTVar2 != (TriggerBoxEvents *)0x0)) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar2,(MethodInfo *)0x0);
      useFunction = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
      FUN_?(useFunction,this,MethodInfo__MVPickupItemBase__DoPickup_int_);
      checkCanUseFunction =
           (Func_3_Int32_MVInteractableBase_Boolean_ *)
           FUN_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
      FUN_?(checkCanUseFunction,this,
                    MethodInfo__MVPickupItemBase__CheckCanUse_int__MVInteractableBase_);
      pUVar3 = (UseInteractor *)FUN_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar3,(MVWorldObjectClient *)wo,pGVar10,0,triggerCollider,useFunction,
                 checkCanUseFunction,_UNK_?,0,1,(MethodInfo *)0x0);
      bVar5 = iRam_? != 0;
      (this->fields)._.useInteractor = pUVar3;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields)._.useInteractor >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pMVar1 = MVEditablePickupItemBase_get_BaseObject(this,(MethodInfo *)0x0);
      if (pMVar1 != (MVEditablePickupItemBaseObject *)0x0) {
        pGVar10 = (pMVar1->fields)._.useInteractionRotator;
        pUVar11 = (UseRequirement *)FUN_?(TypeInfo__GameCoinLogic);
        bVar5 = iRam_? != 0;
        pUVar11[1].monitor = (MonitorData *)0x0;
        *(undefined4 *)&pUVar11[1].fields = 0;
        *(undefined4 *)((longlong)&pUVar11[1].klass + 4) = 1;
        *(undefined1 *)&pUVar11[3].klass = 1;
        *(GameObject **)&pUVar11[2].fields = pGVar10;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&pUVar11[2].fields >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        pUVar3 = (this->fields)._.useInteractor;
        if (pUVar3 != (UseInteractor *)0x0) {
          UseInteractor::UseInteractor_AddRequirement(pUVar3,pUVar11,(MethodInfo *)0x0);
          pMVar1 = MVEditablePickupItemBase_get_BaseObject(this,(MethodInfo *)0x0);
          if (pMVar1 != (MVEditablePickupItemBaseObject *)0x0) {
            pGVar10 = (pMVar1->fields)._.useInteractionRotator;
            pUVar11 = (UseRequirement *)FUN_?(TypeInfo__LevelBasedUseRequirement);
            bVar5 = iRam_? != 0;
            *(undefined8 *)&pUVar11[1].fields = 0;
            *(undefined4 *)&pUVar11[2].klass = 0;
            *(undefined1 *)((longlong)&pUVar11[1].klass + 4) = 1;
            pUVar11[2].monitor = (MonitorData *)pGVar10;
            if (bVar5) {
              uVar6 = (uint)((ulonglong)&pUVar11[2].monitor >> 0xc);
              uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
              do {
                uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                LOCK();
                bVar5 = uVar8 == *puVar9;
                if (bVar5) {
                  *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (!bVar5);
            }
            pUVar3 = (this->fields)._.useInteractor;
            if (pUVar3 != (UseInteractor *)0x0) {
              UseInteractor::UseInteractor_AddRequirement(pUVar3,pUVar11,(MethodInfo *)0x0);
              pMVar1 = MVEditablePickupItemBase_get_BaseObject(this,(MethodInfo *)0x0);
              if (pMVar1 != (MVEditablePickupItemBaseObject *)0x0) {
                pGVar10 = (pMVar1->fields)._.useInteractionRotator;
                this_01 = (GameRankRequirement *)FUN_?(TypeInfo__GameRankRequirement);
                GameRankRequirement::GameRankRequirement__ctor
                          (this_01,pGVar10,(MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
                pUVar3 = (this->fields)._.useInteractor;
                if (pUVar3 != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_AddRequirement
                            (pUVar3,(UseRequirement *)this_01,(MethodInfo *)0x0);
                  pMVar1 = MVEditablePickupItemBase_get_BaseObject(this,(MethodInfo *)0x0);
                  if (pMVar1 != (MVEditablePickupItemBaseObject *)0x0) {
                    pGVar10 = (pMVar1->fields)._.useInteractionRotator;
                    this_02 = (RewardedAdRequirement *)
                              FUN_?(
                                           TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement
                                           );
                    WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
                    RewardedAdRequirement__ctor(this_02,pGVar10,(MethodInfo *)0x0);
                    pUVar3 = (this->fields)._.useInteractor;
                    if (pUVar3 != (UseInteractor *)0x0) {
                      UseInteractor::UseInteractor_AddRequirement
                                (pUVar3,(UseRequirement *)this_02,(MethodInfo *)0x0);
                      pMVar1 = MVEditablePickupItemBase_get_BaseObject(this,(MethodInfo *)0x0);
                      if (pMVar1 != (MVEditablePickupItemBaseObject *)0x0) {
                        pTVar2 = (pMVar1->fields)._.triggerBoxEvents;
                        pUVar3 = (this->fields)._.useInteractor;
                        pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
                                  FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                        Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                  (pUVar4,(Object *)pUVar3,
                                   MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                                   ,(MethodInfo *)0x0);
                        if (pTVar2 != (TriggerBoxEvents *)0x0) {
                          TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                                    (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar4,
                                     (MethodInfo *)0x0);
                          pMVar1 = MVEditablePickupItemBase_get_BaseObject(this,(MethodInfo *)0x0);
                          if (pMVar1 != (MVEditablePickupItemBaseObject *)0x0) {
                            pTVar2 = (pMVar1->fields)._.triggerBoxEvents;
                            pUVar3 = (this->fields)._.useInteractor;
                            pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
                                      FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>
                                                   );
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                            Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                      (pUVar4,(Object *)pUVar3,
                                       MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                                       ,(MethodInfo *)0x0);
                            if (pTVar2 != (TriggerBoxEvents *)0x0) {
                              if (cRam_? == '\0') {
                                FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              ppEVar12 = &(pTVar2->fields).TriggerExit;
                              a = (pTVar2->fields).TriggerExit;
                              do {
                                pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                   ((Delegate *)a,(Delegate *)pUVar4,
                                                    (MethodInfo *)0x0);
                                pEVar14 = TypeInfo__System__EventHandler<TriggerEventArgs>;
                                if (pDVar13 == (Delegate *)0x0) {
                                  pEVar15 = (EventHandler_1_TriggerEventArgs_ *)0x0;
                                }
                                else {
                                  pEVar15 = (EventHandler_1_TriggerEventArgs_ *)
                                           FUN_?(pDVar13,
                                                  TypeInfo__System__EventHandler<TriggerEventArgs>);
                                  if (pEVar15 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
                                    FUN_?(pDVar13,pEVar14);
                                    pcVar16 = (code *)swi(3);
                                    (*pcVar16)();
                                    return;
                                  }
                                }
                                LOCK();
                                pEVar17 = *ppEVar12;
                                bVar5 = a == pEVar17;
                                if (bVar5) {
                                  *ppEVar12 = pEVar15;
                                  pEVar17 = a;
                                }
                                UNLOCK();
                                pEVar15 = a;
                                if (!bVar5) {
                                  pEVar15 = pEVar17;
                                }
                                if (iRam_? != 0) {
                                  uVar6 = (uint)((ulonglong)ppEVar12 >> 0xc);
                                  uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
                                  do {
                                    uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                                    puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                                    LOCK();
                                    bVar5 = uVar8 == *puVar9;
                                    if (bVar5) {
                                      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar5);
                                }
                                bVar5 = pEVar15 != a;
                                a = pEVar15;
                              } while (bVar5);
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
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void UpdateUseInteractor(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBase::MVEditablePickupItemBase_UpdateUseInteractor
               (MVEditablePickupItemBase *this,
               Dictionary_2_System_Object_System_Object_ *useInteractorData,MethodInfo *method)

{
  pUVar1 = (this->fields)._.useInteractor;
  if ((pUVar1 == (UseInteractor *)0x0) ||
     (this_00 = (pUVar1->fields).useInteractorVisuals, this_00 == (UseInteractorVisualization *)0x0)
     ) {
    auStack_2._0_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = (pUVar1->fields).woOwnerID;
  if (cRam_? == '\0') {
    auStack_2._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    LOCK();
    UNLOCK();
    auStack_2._0_8_ = &UNK_?;
    FUN_?(&MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_)
    ;
    LOCK();
    UNLOCK();
    auStack_2._0_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    auStack_2._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
    LOCK();
    UNLOCK();
    auStack_2._0_8_ = &UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_2._0_8_ = &UNK_?;
  pOVar5 = (Object *)FUN_?(TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
  if (pOVar5 == (Object *)0x0) {
code_?:
    auStack_2._0_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar6 = iRam_? != 0;
  pOVar5[1].klass = (Object__Class *)useInteractorData;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
    lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
      puVar10 = (ulonglong *)(lVar8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  *(int32_t *)&pOVar5[1].monitor = iVar4;
  if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
    auStack_2._0_8_ = &UNK_?;
    FUN_?();
  }
  this_01 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0;
  if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
      auStack_2._0_8_ = &UNK_?;
      FUN_?();
    }
    object = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    auStack_2._0_8_ = &UNK_?;
    this_01 = (Func_2_UseRequirement_Boolean_ *)
              FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
    auStack_2._0_8_ = &UNK_?;
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_01,(Object *)object,
               MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 = this_01;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)
                      &TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 >> 0xc);
      lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar6 = uVar9 == *puVar10;
        if (bVar6) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  auStack_2._0_8_ = &UNK_?;
  this_02 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  auStack_2._0_8_ = &UNK_?;
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_02,pOVar5,
             MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
             ,(MethodInfo *)0x0);
  if (this_00 == (UseInteractorVisualization *)0x0) goto code_?;
  auStack_2._0_8_ = &UNK_?;
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
  pLVar11 = (this_00->fields).useRequirements;
  if (pLVar11 == (List_1_UseRequirement_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&pLStack_12 >> 0xc);
    uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar13 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar13 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  puStack_14 = (undefined1 *)((ulonglong)(uint)(pLVar11->fields)._version << 0x20);
  uStack_15 = 0;
  auStack_2._8_8_ = puStack_14;
  pOStack_16 = (Object *)0x0;
  uStack_17 = 0;
  puStack_18 = auStack_2;
  pLStack_12 = pLVar11;
  auStack_2._0_8_ = pLVar11;
  while (bVar19 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_2,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), bVar19 != 0) {
    if (pOStack_16 == (Object *)0x0) goto code_?;
    cVar20 = (*(code *)pOStack_16->klass[1]._0.interopData)
                       (pOStack_16,pOStack_16->klass[1]._0.klass);
    if (cVar20 != '\0') {
      piVar21 = &(this_00->fields).active;
      *piVar21 = *piVar21 + 1;
    }
  }
  if ((this_00->fields).active == 1) {
    (this_00->fields).dist = 0.01;
  }
  bVar6 = (this_00->fields).active == 0;
  if (!bVar6) {
    (this_00->fields).spacing = (float)(int)(0x168 / (longlong)(this_00->fields).active);
    bVar6 = (this_00->fields).active == 0;
  }
  (this_00->fields)._HasUseRequirements_k__BackingField = !bVar6;
  fVar22 = 0.0;
  pLVar11 = (this_00->fields).useRequirements;
  if (pLVar11 == (List_1_UseRequirement_ *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&pLStack_12 >> 0xc);
    uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar13 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar13 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  puStack_14 = (undefined1 *)((ulonglong)(uint)(pLVar11->fields)._version << 0x20);
  uStack_15 = 0;
  auStack_2._8_8_ = puStack_14;
  pOStack_16 = (Object *)0x0;
  pLStack_12 = (List_1_UseRequirement_ *)0x0;
  puStack_14 = auStack_2;
  auStack_2._0_8_ = pLVar11;
  while (bVar19 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)auStack_2,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), pOVar5 = pOStack_16, bVar19 != 0) {
    if (pOStack_16 == (Object *)0x0) goto code_?;
    cVar20 = (*(code *)pOStack_16->klass[1]._0.interopData)
                       (pOStack_16,pOStack_16->klass[1]._0.klass);
    if (cVar20 != '\0') {
      pOVar23 = pOVar5->klass;
      uStack_17._0_4_ = (this_00->fields).pivot.x;
      uStack_17._4_4_ = (this_00->fields).pivot.y;
      puStack_18 = (undefined1 *)CONCAT44(puStack_18._4_4_,(this_00->fields).pivot.z);
      (*(code *)pOVar23[1]._0.fields)
                (pOVar5,&uStack_17,fVar22,(this_00->fields).dist,pOVar23[1]._0.events);
      fVar22 = fVar22 + (this_00->fields).spacing;
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
  pvVar24 = (this_00->fields)._._._._.m_CachedPtr;
  if (pvVar24 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar25 = func_?(&UNK_?);
    FUN_?(uVar25,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar24,bVar19);
  return;
}


/* MVEditablePickupItemBase(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBase::MVEditablePickupItemBase__ctor
               (MVEditablePickupItemBase *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPickupItemBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVPickupItemBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVPickupItemBase::MVPickupItemBase__ctor
            ((MVPickupItemBase *)this,data,worldObjects,(MethodInfo *)0x0);
  piVar1 = &(this->fields)._._._.interactionFlags;
  *piVar1 = *piVar1 | 0x8010;
  return;
}


/* MVEditablePickupItemBaseObject get_BaseObject() */

MVEditablePickupItemBaseObject *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::MVEditablePickupItemBase
::MVEditablePickupItemBase_get_BaseObject(MVEditablePickupItemBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseObject
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVEditablePickupItemBaseObject *)(this->fields)._._BaseObject_k__BackingField;
  if (pMVar1 != (MVEditablePickupItemBaseObject *)0x0) {
    bVar2 = (
            TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseObject
            ->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)
        TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseObject
       )) {
      FUN_?(pMVar1,
                    TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBaseObject
                   );
      pcVar3 = (code *)swi(3);
      pMVar1 = (MVEditablePickupItemBaseObject *)(*pcVar3)();
      return pMVar1;
    }
  }
  return pMVar1;
}

