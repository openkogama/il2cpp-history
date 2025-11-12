
/* Void DeSelect() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_DeSelect
               (MVEditablePickupItemBaseBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields).itemBase;
  if (pMVar1 != (MVEditablePickupItemBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar1->klass->vtable).DeSelect.methodPtr)(pMVar1,(pMVar1->klass->vtable).DeSelect.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_Initialize
               (MVEditablePickupItemBaseBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
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
    FUN_?(&TypeInfo__EditableCubeModelWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CubeModelId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ItemCubeModel);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ItemBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pMVar1 = (MVEditablePickupItemBase *)
            MVBlueprintBase::MVBlueprintBase_GetChild
                      ((MVBlueprintBase *)this,StringLiteral_ItemBase,(MethodInfo *)0x0);
  if (pMVar1 == (MVEditablePickupItemBase *)0x0) {
    (this->fields).itemBase = (MVEditablePickupItemBase *)0x0;
  }
  else {
    bVar2 = (
            TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
            ->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVEditablePickupItemBase__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1]
        != TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
       )) {
      FUN_?(pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).itemBase = pMVar1;
    bVar2 = (
            TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
            ->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVEditablePickupItemBase__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1]
        != TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
       )) {
      FUN_?(pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).itemBase >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pMVar1 = (this->fields).itemBase;
  if (pMVar1 == (MVEditablePickupItemBase *)0x0) goto code_?;
  obj = (pMVar1->fields)._._._.transform;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  if (obj == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_10._0_4_ = (pVVar9->zeroVector).x;
  uStack_10._4_4_ = (pVVar9->zeroVector).y;
  LStack_11._list = (List_1_System_Object_ *)CONCAT44(LStack_11._list._4_4_,(pVVar9->zeroVector).z);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar12 = (obj->fields)._._.m_CachedPtr;
  if (pvVar12 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar12);
  pMVar1 = (this->fields).itemBase;
  if ((pMVar1 == (MVEditablePickupItemBase *)0x0) ||
     (pMVar14 = MVEditablePickupItemBase::MVEditablePickupItemBase_get_BaseObject
                          (pMVar1,(MethodInfo *)0x0),
     pMVar14 == (MVEditablePickupItemBaseObject *)0x0)) goto code_?;
  bVar8 = iRam_? != 0;
  (this->fields).cubeModelBaseParent = (pMVar14->fields).cubeModelParent;
  if (bVar8) {
    uVar4 = (uint)((ulonglong)&(this->fields).cubeModelBaseParent >> 0xc);
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
  pMVar15 = (MVCubeModelInstance *)
            MVBlueprintBase::MVBlueprintBase_GetChild
                      ((MVBlueprintBase *)this,StringLiteral_ItemCubeModel,(MethodInfo *)0x0);
  if (pMVar15 == (MVCubeModelInstance *)0x0) goto code_?;
  pMVar16 = pMVar15->klass;
  bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
  if (((pMVar16->_1).naturalAligment < bVar2) ||
     ((MVCubeModelInstance__Class *)(pMVar16->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
      TypeInfo__MVCubeModelInstance)) {
    FUN_?(pMVar15);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*(pMVar16->vtable).set_Visible.methodPtr)
            (pMVar15,CONCAT71((int7)((ulonglong)TypeInfo__MVCubeModelInstance >> 8),1),
             (pMVar16->vtable).set_Visible.method);
  pMVar1 = (this->fields).itemBase;
  if (pMVar1 == (MVEditablePickupItemBase *)0x0) goto code_?;
  puVar17 = (undefined8 *)
            (*(pMVar1->klass->vtable).__unknown.methodPtr)
                      (auStack_18,pMVar1,(pMVar1->klass->vtable).__unknown.method);
  uVar13 = *puVar17;
  LStack_11._index = (int32_t)uVar13;
  LStack_11._version._0_2_ = (int16_t)((ulonglong)uVar13 >> 0x20);
  LStack_11._version._2_2_ = (undefined2)((ulonglong)uVar13 >> 0x30);
  LStack_11._current._0_2_ = (undefined2)*(undefined4 *)(puVar17 + 1);
  LStack_11._current._2_2_ = (int16_t)((uint)*(undefined4 *)(puVar17 + 1) >> 0x10);
  pEVar19 = (EditableCubeModelWrapper *)FUN_?(TypeInfo__EditableCubeModelWrapper);
  bVar8 = iRam_? != 0;
  (pEVar19->fields).cubeModelBase = pMVar15;
  if (bVar8) {
    uVar4 = (uint)((ulonglong)&pEVar19->fields >> 0xc);
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
  piVar20 = &(pMVar15->fields)._._.interactionFlags;
  *piVar20 = *piVar20 | 0x10;
  IStackX_18 = (IntVector)
               CONCAT24(LStack_11._current._2_2_,
                        CONCAT22(LStack_11._current._0_2_,LStack_11._version._2_2_));
  uStack_10._0_6_ = (IntVector)CONCAT24((int16_t)LStack_11._version,LStack_11._index);
  EditableCubeModelWrapper::EditableCubeModelWrapper_SetConstraints
            (pEVar19,(IntVector *)&uStack_10,&IStackX_18,10,(MethodInfo *)0x0);
  iVar21 = iRam_?;
  (this->fields).editableCubeModelWrapper = pEVar19;
  if (iVar21 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).editableCubeModelWrapper >> 0xc);
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
      iVar21 = iRam_?;
    } while (!bVar8);
  }
  pEVar19 = (this->fields).editableCubeModelWrapper;
  if (pEVar19 == (EditableCubeModelWrapper *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->fields).editableCubeModel = (pEVar19->fields).cubeModelBase;
  if (iVar21 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).editableCubeModel >> 0xc);
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
  pMVar15 = (this->fields).editableCubeModel;
  if (pMVar15 == (MVCubeModelInstance *)0x0) goto code_?;
  (this->fields).cubeModelId = (pMVar15->fields)._._._.id;
  pMVar15 = (this->fields).editableCubeModel;
  if ((pMVar15 == (MVCubeModelInstance *)0x0) ||
     (pRVar22 = (pMVar15->fields)._.prototypeCubeModel, pRVar22 == (RuntimePrototypeCubeModel *)0x0)
     ) goto code_?;
  pMVar23 = this->klass;
  (this->fields).cubeModelPid = (pRVar22->fields).prototypeId;
  (*(pMVar23->vtable).OnEndEditing.methodPtr)(this,(pMVar23->vtable).OnEndEditing.method);
  (*(this->klass->vtable).SetCubeSize.methodPtr)(this);
  pMVar15 = (this->fields).editableCubeModel;
  if (pMVar15 == (MVCubeModelInstance *)0x0) goto code_?;
  MVCubeModelInstance::MVCubeModelInstance_EnableCulling(pMVar15,(MethodInfo *)0x0);
  MVEditablePickupItemBaseBlueprint_ToggleCubeModelColliders(this,0,(MethodInfo *)0x0);
  pMVar1 = (this->fields).itemBase;
  if (((pMVar1 == (MVEditablePickupItemBase *)0x0) ||
      (pMVar14 = MVEditablePickupItemBase::MVEditablePickupItemBase_get_BaseObject
                           (pMVar1,(MethodInfo *)0x0),
      pMVar14 == (MVEditablePickupItemBaseObject *)0x0)) ||
     (this_00 = (pMVar14->fields)._.pickupItem, this_00 == (GreyOutObjectScript *)0x0))
  goto code_?;
  GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials(this_00,(MethodInfo *)0x0);
  pMVar1 = (this->fields).itemBase;
  if ((pMVar1 == (MVEditablePickupItemBase *)0x0) ||
     (pDVar24 = (pMVar1->fields)._._._._.data,
     pDVar24 == (Dictionary_2_System_Object_System_Object_ *)0x0)) goto code_?;
  pDVar24 = (Dictionary_2_System_Object_System_Object_ *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (pDVar24,(Object *)StringLiteral_itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  pMVar15 = (this->fields).editableCubeModel;
  if (pMVar15 == (MVCubeModelInstance *)0x0) goto code_?;
  _IStackX_18 = CONCAT44(stack0x0000001c,(pMVar15->fields)._._._.id);
  pOVar25 = (Object *)FUN_?(uRam_?,&IStackX_18);
  if (pDVar24 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment;
  if (((pDVar24->klass->_1).naturalAligment < bVar2) ||
     ((Dictionary_2_System_Object_System_Object___Class *)
      (pDVar24->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
    FUN_?(pDVar24,
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (pDVar24,(Object *)StringLiteral_CubeModelId,pOVar25,
             (InsertionBehavior__Enum)
             CONCAT71((int7)((ulonglong)
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            >> 8),1),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  pMVar1 = (this->fields).itemBase;
  if (pMVar1 == (MVEditablePickupItemBase *)0x0) goto code_?;
  piVar20 = &(pMVar1->fields)._._._.interactionFlags;
  *piVar20 = *piVar20 | 0x30;
  pMVar15 = (this->fields).editableCubeModel;
  if (pMVar15 == (MVCubeModelInstance *)0x0) goto code_?;
  piVar20 = &(pMVar15->fields)._._.interactionFlags;
  *piVar20 = *piVar20 | 0x30;
  pMVar1 = (this->fields).itemBase;
  if (((pMVar1 == (MVEditablePickupItemBase *)0x0) ||
      (pUVar26 = (pMVar1->fields)._.useInteractor, pUVar26 == (UseInteractor *)0x0)) ||
     (this_01 = (pUVar26->fields).useInteractorVisuals, this_01 == (UseInteractorVisualization *)0x0
     )) goto code_?;
  iVar27 = (pUVar26->fields).woOwnerID;
  pOVar28 = (Object__Class *)(this->fields)._._._._.data;
  if (cRam_? == '\0') {
    LStack_11._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    LOCK();
    UNLOCK();
    LStack_11._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?(&MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_)
    ;
    LOCK();
    UNLOCK();
    LStack_11._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?(&
                  MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
                 );
    LOCK();
    UNLOCK();
    LStack_11._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
    LOCK();
    UNLOCK();
    LStack_11._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?(&TypeInfo__UseInteractorVisualization____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_11._list = (List_1_System_Object_ *)&UNK_?;
  pOVar25 = (Object *)FUN_?(TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
  if (pOVar25 == (Object *)0x0) {
code_?:
    LStack_11._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar8 = iRam_? != 0;
  pOVar25[1].klass = pOVar28;
  if (bVar8) {
    uVar4 = (uint)((ulonglong)(pOVar25 + 1) >> 0xc);
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
  *(int32_t *)&pOVar25[1].monitor = iVar27;
  if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
    LStack_11._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?();
  }
  this_02 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0;
  if (this_02 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__UseInteractorVisualization____c->_1).field_0x1c == 0) {
      LStack_11._list = (List_1_System_Object_ *)&UNK_?;
      FUN_?();
    }
    object = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    LStack_11._list = (List_1_System_Object_ *)&UNK_?;
    this_02 = (Func_2_UseRequirement_Boolean_ *)
              FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
    LStack_11._list = (List_1_System_Object_ *)&UNK_?;
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_02,(Object *)object,
               MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 = this_02;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)
                      &TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 >> 0xc);
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
  LStack_11._list = (List_1_System_Object_ *)&UNK_?;
  this_03 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<UseRequirement,_bool>);
  LStack_11._list = (List_1_System_Object_ *)&UNK_?;
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_03,pOVar25,
             MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
             ,(MethodInfo *)0x0);
  if (this_01 == (UseInteractorVisualization *)0x0) goto code_?;
  LStack_11._list = (List_1_System_Object_ *)&UNK_?;
  UseInteractorVisualization::UseInteractorVisualization_ChangeUseRequirements
            (this_01,this_02,(Func_2_UseRequirement_Boolean_ *)this_03,(MethodInfo *)0x0);
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
  (this_01->fields).active = 0;
  (this_01->fields).dist = 1.3;
  pLVar29 = (this_01->fields).useRequirements;
  if (pLVar29 == (List_1_UseRequirement_ *)0x0) {
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
    uVar4 = (uint)((ulonglong)&stack0xffffffffffffffb8 >> 0xc);
    uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar30 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar30 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar30 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  iVar27 = (pLVar29->fields)._version;
  uStack_10 = 0;
  LStack_11._index = 0;
  LStack_11._version._0_2_ = (int16_t)iVar27;
  LStack_11._version._2_2_ = (undefined2)((uint)iVar27 >> 0x10);
  LStack_11._current._0_2_ = 0;
  LStack_11._current._2_2_ = 0;
  LStack_11._current._4_4_ = 0;
  uStack_31 = 0;
  pLStack_32 = &LStack_11;
  LStack_11._list = (List_1_System_Object_ *)pLVar29;
  while (bVar33 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_11,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), bVar33 != 0) {
    plVar34 = (longlong *)
              CONCAT44(LStack_11._current._4_4_,
                       CONCAT22(LStack_11._current._2_2_,LStack_11._current._0_2_));
    if (plVar34 == (longlong *)0x0) goto code_?;
    cVar35 = (**(code **)(*plVar34 + 0x1e8))(plVar34,*(undefined8 *)(*plVar34 + 0x1f0));
    if (cVar35 != '\0') {
      piVar36 = &(this_01->fields).active;
      *piVar36 = *piVar36 + 1;
    }
  }
  if ((this_01->fields).active == 1) {
    (this_01->fields).dist = 0.01;
  }
  bVar8 = (this_01->fields).active == 0;
  if (!bVar8) {
    (this_01->fields).spacing = (float)(int)(0x168 / (longlong)(this_01->fields).active);
    bVar8 = (this_01->fields).active == 0;
  }
  (this_01->fields)._HasUseRequirements_k__BackingField = !bVar8;
  fVar37 = 0.0;
  pLVar29 = (this_01->fields).useRequirements;
  if (pLVar29 == (List_1_UseRequirement_ *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&stack0xffffffffffffffb8 >> 0xc);
    uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar30 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar30 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar30 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  iVar27 = (pLVar29->fields)._version;
  uStack_10 = 0;
  LStack_11._index = 0;
  LStack_11._version._0_2_ = (int16_t)iVar27;
  LStack_11._version._2_2_ = (undefined2)((uint)iVar27 >> 0x10);
  LStack_11._current._0_2_ = 0;
  LStack_11._current._2_2_ = 0;
  LStack_11._current._4_4_ = 0;
  LStack_11._list = (List_1_System_Object_ *)pLVar29;
  while (bVar33 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_11,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), bVar33 != 0) {
    plVar34 = (longlong *)
              CONCAT44(LStack_11._current._4_4_,
                       CONCAT22(LStack_11._current._2_2_,LStack_11._current._0_2_));
    if (plVar34 == (longlong *)0x0) goto code_?;
    cVar35 = (**(code **)(*plVar34 + 0x1e8))(plVar34,*(undefined8 *)(*plVar34 + 0x1f0));
    if (cVar35 != '\0') {
      uStack_31._0_4_ = (this_01->fields).pivot.x;
      uStack_31._4_4_ = (this_01->fields).pivot.y;
      pLStack_32 = (List_1_T_Enumerator_System_Object_ *)
                   CONCAT44(pLStack_32._4_4_,(this_01->fields).pivot.z);
      (**(code **)(*plVar34 + 0x1f8))
                (plVar34,&uStack_31,fVar37,(this_01->fields).dist,*(undefined8 *)(*plVar34 + 0x200))
      ;
      fVar37 = fVar37 + (this_01->fields).spacing;
    }
  }
  if ((this_01->fields)._HasUseRequirements_k__BackingField != 0) {
    if ((this_01->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
      UseInteractorVisualization::UseInteractorVisualization_SetupCulling(this_01,(MethodInfo *)0x0)
      ;
      goto code_?;
    }
    if ((this_01->fields)._HasUseRequirements_k__BackingField != 0) goto code_?;
  }
  if ((this_01->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    UseInteractorVisualization::UseInteractorVisualization_RemoveCulling(this_01,(MethodInfo *)0x0);
  }
code_?:
  bVar33 = (this_01->fields)._HasUseRequirements_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar12 = (this_01->fields)._._._._.m_CachedPtr;
  if (pvVar12 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar12,bVar33);
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_InitializeInventory
               (MVEditablePickupItemBaseBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ItemBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  pMVar1 = (MVEditablePickupItemBase *)
           MVBlueprintBase::MVBlueprintBase_GetChild
                     ((MVBlueprintBase *)this,StringLiteral_ItemBase,(MethodInfo *)0x0);
  if (pMVar1 == (MVEditablePickupItemBase *)0x0) {
    (this->fields).itemBase = (MVEditablePickupItemBase *)0x0;
  }
  else {
    bVar2 = (
            TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
            ->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVEditablePickupItemBase__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1]
        != TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
       )) {
      FUN_?(pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).itemBase = pMVar1;
    bVar2 = (
            TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
            ->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVEditablePickupItemBase__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1]
        != TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
       )) {
      FUN_?(pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).itemBase >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_OnDataUpdate
               (MVEditablePickupItemBaseBlueprint *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_MapDataToFields((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).itemBase;
  if (pMVar1 != (MVEditablePickupItemBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar1->klass->vtable).OnDataUpdate.methodPtr)
              (pMVar1,(pMVar1->klass->vtable).OnDataUpdate.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEndEditing() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_OnEndEditing
               (MVEditablePickupItemBaseBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields).editableCubeModel;
  if ((pMVar1 == (MVCubeModelInstance *)0x0) ||
     (this_00 = (pMVar1->fields)._._.transform, this_00 == (Transform *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
            (this_00,(this->fields).cubeModelBaseParent,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar3->zeroVector).x;
  uStack_4._4_4_ = (pVVar3->zeroVector).y;
  fStack_5 = (pVVar3->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar6 = (this_00->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar6);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fStack_9 = (pQVar8->identityQuaternion).x;
  fStack_10 = (pQVar8->identityQuaternion).y;
  fStack_11 = (pQVar8->identityQuaternion).z;
  fStack_12 = (pQVar8->identityQuaternion).w;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar6 = (this_00->fields)._._.m_CachedPtr;
  if (pvVar6 != (void *)0x0) {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar6,&fStack_9);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar13 = (pVVar3->oneVector).x;
    uVar14 = (pVVar3->oneVector).y;
    fVar15 = (pVVar3->oneVector).z;
    fVar16 = (float)(*(this->klass->vtable).get_CubeModelScale.methodPtr)(this);
    fStack_5 = fVar15 * fVar16;
    uStack_4 = CONCAT44((float)uVar14 * fVar16,(float)uVar13 * fVar16);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (this_00->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar6,&uStack_4);
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_OnEnterObject
               (MVEditablePickupItemBaseBlueprint *this,EditorStateMachine *e,MethodInfo *method)

{
  this_00 = (this->fields).itemBase;
  if (this_00 != (MVEditablePickupItemBase *)0x0) {
    pMVar1 = MVEditablePickupItemBase::MVEditablePickupItemBase_get_BaseObject
                       (this_00,(MethodInfo *)0x0);
    if ((pMVar1 != (MVEditablePickupItemBaseObject *)0x0) &&
       (this_01 = (pMVar1->fields)._._.mainCollider, this_01 != (Collider *)0x0)) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_01,(MethodInfo *)0x0);
      if (this_02 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,0,(MethodInfo *)0x0);
        MVEditablePickupItemBaseBlueprint_ToggleCubeModelColliders(this,1,(MethodInfo *)0x0);
        (*(this->klass->vtable).OnStartEditing.methodPtr)
                  (this,(this->klass->vtable).OnStartEditing.method);
        pEVar2 = (this->fields).editableCubeModelWrapper;
        if (pEVar2 != (EditableCubeModelWrapper *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          bVar3 = (*(pEVar2->klass->vtable).OnEnterObject.methodPtr)
                            (pEVar2,e,(pEVar2->klass->vtable).OnEnterObject.method);
          return bVar3;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_OnExitObject
               (MVEditablePickupItemBaseBlueprint *this,EditorStateMachine *e,MethodInfo *method)

{
  this_00 = (this->fields).itemBase;
  if (this_00 != (MVEditablePickupItemBase *)0x0) {
    pMVar1 = MVEditablePickupItemBase::MVEditablePickupItemBase_get_BaseObject
                       (this_00,(MethodInfo *)0x0);
    if ((pMVar1 != (MVEditablePickupItemBaseObject *)0x0) &&
       (this_01 = (pMVar1->fields)._._.mainCollider, this_01 != (Collider *)0x0)) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_01,(MethodInfo *)0x0);
      if (this_02 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,1,(MethodInfo *)0x0);
        MVEditablePickupItemBaseBlueprint_ToggleCubeModelColliders(this,0,(MethodInfo *)0x0);
        (*(this->klass->vtable).OnEndEditing.methodPtr)
                  (this,(this->klass->vtable).OnEndEditing.method);
        (*(this->klass->vtable).SetCubeSize.methodPtr)
                  (this,(this->klass->vtable).SetCubeSize.method);
        pEVar2 = (this->fields).editableCubeModelWrapper;
        if (pEVar2 != (EditableCubeModelWrapper *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          bVar3 = (*(pEVar2->klass->vtable).OnExitObject.methodPtr)
                            (pEVar2,e,(pEVar2->klass->vtable).OnExitObject.method);
          return bVar3;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void OnStartEditing() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_OnStartEditing
               (MVEditablePickupItemBaseBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields).editableCubeModel;
  if ((pMVar1 == (MVCubeModelInstance *)0x0) ||
     (this_00 = (pMVar1->fields)._._.transform, this_00 == (Transform *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
            (this_00,(this->fields)._._._.transform,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (this_00->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar3);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uStack_6._0_4_ = (pQVar5->identityQuaternion).x;
  uStack_6._4_4_ = (pQVar5->identityQuaternion).y;
  fStack_7 = (pQVar5->identityQuaternion).z;
  fStack_8 = (pQVar5->identityQuaternion).w;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (this_00->fields)._._.m_CachedPtr;
  if (pvVar3 != (void *)0x0) {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar3,&uStack_6);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar10 = (pVVar9->oneVector).x;
    uVar11 = (pVVar9->oneVector).y;
    fVar12 = (pVVar9->oneVector).z;
    fVar13 = (float)(*(this->klass->vtable).get_CubeModelScale.methodPtr)(this);
    fStack_7 = fVar12 * fVar13;
    uStack_6 = CONCAT44((float)uVar11 * fVar13,(float)uVar10 * fVar13);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (this_00->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar3,&uStack_6);
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Select(Color) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_Select
               (MVEditablePickupItemBaseBlueprint *this,Color *color,MethodInfo *method)

{
  pMVar1 = (this->fields).itemBase;
  if (pMVar1 != (MVEditablePickupItemBase *)0x0) {
    fStack_2 = color->r;
    fStack_3 = color->g;
    fStack_4 = color->b;
    fStack_5 = color->a;
    (*(pMVar1->klass->vtable).Select_1.methodPtr)
              (pMVar1,&fStack_2,(pMVar1->klass->vtable).Select_1.method);
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetCubeSize() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_SetCubeSize
               (MVEditablePickupItemBaseBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).editableCubeModel;
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    pBVar2 = MVCubeModelBase::MVCubeModelBase_GetBounds
                       (aBStack_3,(MVCubeModelBase *)pMVar1,(MethodInfo *)0x0);
    aBStack_3[0].m_Extents.y = (pBVar2->m_Extents).y;
    aBStack_3[0].m_Extents.z = (pBVar2->m_Extents).z;
    fVar4 = (pBVar2->m_Extents).x;
    lVar5 = FUN_?(TypeInfo__System__Single,3);
    if (lVar5 != 0) {
      if ((*(int *)(lVar5 + 0x18) != 0) &&
         (*(float *)(lVar5 + 0x20) = fVar4, 1 < *(uint *)(lVar5 + 0x18))) {
        *(float *)(lVar5 + 0x24) = aBStack_3[0].m_Extents.y;
        if (2 < *(uint *)(lVar5 + 0x18)) {
          *(float *)(lVar5 + 0x28) = aBStack_3[0].m_Extents.z;
          iVar6 = *(int *)(lVar5 + 0x18);
          if (iVar6 == 0) {
            fVar4 = 0.0;
          }
          else {
            if (*(int *)(lVar5 + 0x18) == 0) goto code_?;
            uVar7 = 1;
            if (1 < iVar6) {
              lVar8 = 1;
              pfVar9 = (float *)(lVar5 + 0x24);
              do {
                if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_?;
                if (fVar4 < *pfVar9) {
                  fVar4 = *pfVar9;
                }
                uVar7 = uVar7 + 1;
                lVar8 = lVar8 + 1;
                pfVar9 = pfVar9 + 1;
              } while (lVar8 < iVar6);
            }
          }
          fVar4 = fVar4 * _UNK_?;
          pMVar1 = (this->fields).editableCubeModel;
          if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
             (pTVar10 = (pMVar1->fields)._._.transform, pTVar10 != (Transform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            aBStack_3[0].m_Center.x = 0.0;
            aBStack_3[0].m_Center.y = 0.0;
            aBStack_3[0].m_Center.z = 0.0;
            pvVar11 = (pTVar10->fields)._._.m_CachedPtr;
            if (pvVar11 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcVar12 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
              uVar13 = func_?(&UNK_?);
              FUN_?(uVar13,0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcRam_? = pcVar12;
            (*pcRam_?)(pvVar11);
            fVar14 = aBStack_3[0].m_Center.x * fVar4;
            fVar15 = aBStack_3[0].m_Center.x * fVar4;
            fVar4 = aBStack_3[0].m_Center.x * fVar4;
            pMVar16 = (this->fields).itemBase;
            if (((pMVar16 != (MVEditablePickupItemBase *)0x0) &&
                (pMVar17 = MVEditablePickupItemBase::MVEditablePickupItemBase_get_BaseObject
                                    (pMVar16,(MethodInfo *)0x0),
                pMVar17 != (MVEditablePickupItemBaseObject *)0x0)) &&
               (this_00 = (pMVar17->fields)._._.mainCollider, this_00 != (Collider *)0x0)) {
              pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_00,(MethodInfo *)0x0);
              fVar4 = fVar4 + fVar4;
              if (pTVar10 != (Transform *)0x0) {
                aBStack_3[0].m_Center.y = fVar15 + fVar15;
                aBStack_3[0].m_Center.x = fVar14 + fVar14;
                aBStack_3[0].m_Center.z = fVar4;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar11 = (pTVar10->fields)._._.m_CachedPtr;
                if (pvVar11 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pcVar12 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                  uVar13 = func_?(&UNK_?);
                  FUN_?(uVar13,0);
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pcRam_? = pcVar12;
                (*pcRam_?)(pvVar11);
                pMVar16 = (this->fields).itemBase;
                if (pMVar16 != (MVEditablePickupItemBase *)0x0) {
                  MVLogicObject::MVLogicObject_SetLocalBounds
                            ((MVLogicObject *)pMVar16,(MethodInfo *)0x0);
                  return;
                }
              }
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
          goto code_?;
        }
      }
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ToggleCubeModelColliders(Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_ToggleCubeModelColliders
               (MVEditablePickupItemBaseBlueprint *this,bool state,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).editableCubeModel;
  if ((pMVar1 == (MVCubeModelInstance *)0x0) ||
     ((pMVar1->fields)._.chunkInstances == (ChunkInstances *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar3 = (longlong *)FUN_?(0,TypeInfo__System__Collections__IEnumerable);
  do {
    if (plVar3 == (longlong *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar4 == '\0') {
      lVar5 = FUN_?(plVar3,TypeInfo__System__IDisposable);
      if (lVar5 != 0) {
        FUN_?(0,TypeInfo__System__IDisposable,lVar5);
      }
      return;
    }
    if (plVar3 == (longlong *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    lVar5 = *plVar3;
    uVar6 = 0;
    if (*(ushort *)(lVar5 + 0x12e) != 0) {
      do {
        if (*(IEnumerator__Class **)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar6 * 0x10) ==
            TypeInfo__System__Collections__IEnumerator) {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar6 * 0x10) + 1) *
                    0x10 + 0x138 + lVar5);
          goto code_?;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(lVar5 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_?(plVar3,TypeInfo__System__Collections__IEnumerator,1);
code_?:
    plVar8 = (longlong *)(*(code *)*puVar7)(plVar3,puVar7[1]);
    if (plVar8 == (longlong *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pKVar9 = 
    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
    ;
    if (*(Il2CppClass **)(*plVar8 + 0x40) !=
        (
        TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
        ->_0).element_class) {
code_?:
      FUN_?(plVar8,pKVar9);
      goto code_?;
    }
    obj = (Object *)plVar8[6];
    if (obj == (Object *)0x0) {
code_?:
      plVar8 = (longlong *)FUN_?();
      goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar10 = obj[1].klass;
    if (pOVar10 == (Object__Class *)0x0) {
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
      goto code_?;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11);
code_?:
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11);
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
      goto code_?;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pOVar10);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar10 = obj[1].klass;
    if (pOVar10 == (Object__Class *)0x0) goto code_?;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0))
    goto code_?;
    pcRam_? = pcVar2;
    (*pcRam_?)(pOVar10,1);
  } while( true );
}


/* Int32 get_CubeModelPid() */

int32_t Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
        MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_get_CubeModelPid
                  (MVEditablePickupItemBaseBlueprint *this,MethodInfo *method)

{
  return (this->fields).cubeModelPid;
}

