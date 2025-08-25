
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
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&TypeInfo__MVCubeModelInstance);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_Initialize(in_stack_2,(MethodInfo *)0x0);
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            MVGroup::MVGroup_get_Children(in_stack_2,(MethodInfo *)0x0);
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
              ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               &stack0xffffffd8,this_00,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__)
    ;
    while( true ) {
      pMVar3 = 
      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
      ;
      bVar4 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar4 == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   ,in_stack_5);
        *unaff_FS_OFFSET = uVar1;
        return;
      }
      if (pMVar3 == (MethodInfo *)0x0) break;
      if (((((TypeInfo__MVCubeModelInstance->_1).naturalAligment <=
             (byte)pMVar3->methodPointer[0xb8]) &&
           (*(MVCubeModelInstance__Class **)
             (*(int *)(pMVar3->methodPointer + 100) + -4 +
             (uint)(TypeInfo__MVCubeModelInstance->_1).naturalAligment * 4) ==
            TypeInfo__MVCubeModelInstance)) && (pMVar3 != (MethodInfo *)0x0)) &&
         ((((in_stack_2->fields)._.interactionFlags & 0x4000) != 0 &&
          (uVar6._0_2_ = pMVar3[3].flags, uVar6._2_2_ = pMVar3[3].iflags, (uVar6 & 0x4000) == 0))))
      {
        uVar7 = *(undefined4 *)((int)&(in_stack_2->fields)._.interactionFlags + 4);
        piVar8 = &(in_stack_2->fields)._.interactionFlags;
        *(uint *)piVar8 = (uint)*piVar8 & 0xffffbfff;
        *(undefined4 *)((int)&(in_stack_2->fields)._.interactionFlags + 4) = uVar7;
      }
      if (pMVar3 == (MethodInfo *)0x0) break;
      uVar9._0_2_ = pMVar3[3].flags;
      uVar9._2_2_ = pMVar3[3].iflags;
      pMVar3[3].flags = (short)(uVar9 & 0xffffbfff);
      pMVar3[3].iflags = (short)((uVar9 & 0xffffbfff) >> 0x10);
      pMVar3[3].slot = pMVar3[3].slot;
      pMVar3[3].parameters_count = pMVar3[3].parameters_count;
      pMVar3[3].field_0x2f = pMVar3[3].field_0x2f;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnCollectablePositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::CollectTheItem::CollectTheItem_OnCollectablePositionChanged
               (CollectTheItem *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  pCVar1 = (this->fields).objectPrefab;
  if (((pCVar1 != (CollectTheItemLineObject *)0x0) &&
      (positionChangedEventArgs != (PositionChangedEventArgs *)0x0)) &&
     (this_00 = (pCVar1->fields).lineRenderer, this_00 != (LineRenderer *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
              (this_00,1,(positionChangedEventArgs->fields).NewPos,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDropOffPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::CollectTheItem::CollectTheItem_OnDropOffPositionChanged
               (CollectTheItem *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  pCVar1 = (this->fields).objectPrefab;
  if (((pCVar1 != (CollectTheItemLineObject *)0x0) &&
      (positionChangedEventArgs != (PositionChangedEventArgs *)0x0)) &&
     (this_00 = (pCVar1->fields).lineRenderer, this_00 != (LineRenderer *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
              (this_00,0,(positionChangedEventArgs->fields).NewPos,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVWorldObjectClient RetrieveWorldObject(Dictionary`2[System.Object,System.Object], String) */

MVWorldObjectClient *
Assembly-CSharp.dll::CollectTheItem::CollectTheItem_RetrieveWorldObject
          (CollectTheItem *this,Dictionary_2_System_Object_System_Object_ *table,String *id,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CollectTheItemCollectable);
    func_?(&TypeInfo__CollectTheItemDropOff);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  if (table != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)table,
                       (Object *)id,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return (MVWorldObjectClient *)0x0;
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)table,
                       (Object *)id,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if ((this_00 != (MVWorldObjectClientManager *)0x0) && (TVar2.m_Index != 0)) {
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar3 = (int32_t *)func_?();
        pMVar4 = (MVWorldObjectClient *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,*piVar3,(MethodInfo *)0x0);
        if (pMVar4 == (MVWorldObjectClient *)0x0) {
          return (MVWorldObjectClient *)0x0;
        }
        if (((pMVar4->klass->_1).naturalAligment <
             (TypeInfo__CollectTheItemDropOff->_1).naturalAligment) ||
           ((CollectTheItemDropOff__Class *)
            (pMVar4->klass->_1).typeHierarchy
            [(TypeInfo__CollectTheItemDropOff->_1).naturalAligment - 1] !=
            TypeInfo__CollectTheItemDropOff)) {
          if ((pMVar4->klass->_1).naturalAligment <
              (TypeInfo__CollectTheItemCollectable->_1).naturalAligment) {
            return (MVWorldObjectClient *)0x0;
          }
          if ((CollectTheItemCollectable__Class *)
              (pMVar4->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemCollectable->_1).naturalAligment - 1] !=
              TypeInfo__CollectTheItemCollectable) {
            return (MVWorldObjectClient *)0x0;
          }
        }
        return pMVar4;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pMVar4 = (MVWorldObjectClient *)(*pcVar5)();
  return pMVar4;
}


/* Void SetupReferences() */

void Assembly-CSharp.dll::CollectTheItem::CollectTheItem_SetupReferences
               (CollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CollectTheItemCollectable);
    func_?(&TypeInfo__CollectTheItemDropOff);
    func_?(&
                    MethodInfo__CollectTheItem__OnCollectablePositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&
                    MethodInfo__CollectTheItem__OnDropOffPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    func_?(&StringLiteral_ChildrenMap);
    func_?(&StringLiteral_CollectTheItemCollectable);
    func_?(&StringLiteral_CollectTheItemDropOff);
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  if ((this->fields).hasInitializedReferences != 0) {
    return;
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._._._._.data;
  (this->fields).hasInitializedReferences = 1;
  if ((this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
     (TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)StringLiteral_BlueprintData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar1.m_Index == 0)) goto code_?;
  if (((*(byte *)(*(int *)TVar1.m_Index + 0xb8) <
        (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
        naturalAligment) ||
      (*(Dictionary_2_System_Object_System_Object___Class **)
        (*(int *)(*(int *)TVar1.m_Index + 100) + -4 +
        (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment * 4) !=
       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) ||
     ((TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         (TVar1.m_Index,(Object *)StringLiteral_ChildrenMap,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), TVar1.m_Index != 0 &&
      ((*(byte *)(*(int *)TVar1.m_Index + 0xb8) <
        (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
        naturalAligment ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)TVar1.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))))
  goto code_?;
  pCVar2 = (CollectTheItemDropOff *)
           CollectTheItem_RetrieveWorldObject
                     (this,(Dictionary_2_System_Object_System_Object_ *)TVar1.m_Index,
                      StringLiteral_CollectTheItemDropOff,(MethodInfo *)0x0);
  if (pCVar2 == (CollectTheItemDropOff *)0x0) {
    (this->fields).dropOff = (CollectTheItemDropOff *)0x0;
code_?:
    func_?();
    pCVar3 = (CollectTheItemCollectable *)
             CollectTheItem_RetrieveWorldObject
                       (this,(Dictionary_2_System_Object_System_Object_ *)TVar1.m_Index,
                        StringLiteral_CollectTheItemCollectable,(MethodInfo *)0x0);
    if (pCVar3 == (CollectTheItemCollectable *)0x0) {
      (this->fields).collectable = (CollectTheItemCollectable *)0x0;
code_?:
      func_?();
      if ((this->fields).dropOff == (CollectTheItemDropOff *)0x0) {
code_?:
        if ((this->fields).collectable == (CollectTheItemCollectable *)0x0) {
          return;
        }
        pUVar4 = (((this->fields).collectable)->fields)._._._.PositionChanged;
        pUVar5 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar5,(Object *)this,
                   MethodInfo__CollectTheItem__OnCollectablePositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pUVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
        if (pDVar6 == (Delegate *)0x0) {
          _UNK_? = 0;
code_?:
          func_?();
          pCVar7 = (this->fields).objectPrefab;
          if (pCVar7 != (CollectTheItemLineObject *)0x0) {
            pLVar8 = (pCVar7->fields).lineRenderer;
            pCVar3 = (this->fields).collectable;
            if (((pCVar3 != (CollectTheItemCollectable *)0x0) &&
                (pTVar9 = (pCVar3->fields)._._._.transform, pTVar9 != (Transform *)0x0)) &&
               (pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xfffffff0,pTVar9,(MethodInfo *)0x0),
               pLVar8 != (LineRenderer *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                        (pLVar8,1,*pVVar10,(MethodInfo *)0x0);
              pCVar3 = (this->fields).collectable;
              if (pCVar3 != (CollectTheItemCollectable *)0x0) {
                CollectTheItemCollectable::CollectTheItemCollectable_InitializeWithController
                          (pCVar3,this,(MethodInfo *)0x0);
                return;
              }
            }
          }
code_?:
          func_?();
          goto code_?;
        }
        iVar11 = func_?();
        if (iVar11 != 0) {
          _UNK_? = iVar11;
          iVar11 = func_?();
          if (iVar11 == 0) goto code_?;
          goto code_?;
        }
      }
      else {
        pUVar4 = (((this->fields).dropOff)->fields)._._._.PositionChanged;
        pUVar5 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar5,(Object *)this,
                   MethodInfo__CollectTheItem__OnDropOffPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pUVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
        if (pDVar6 == (Delegate *)0x0) {
          _UNK_? = 0;
code_?:
          func_?();
          pCVar7 = (this->fields).objectPrefab;
          if (pCVar7 != (CollectTheItemLineObject *)0x0) {
            pLVar8 = (pCVar7->fields).lineRenderer;
            pCVar2 = (this->fields).dropOff;
            if (((pCVar2 != (CollectTheItemDropOff *)0x0) &&
                (pTVar9 = (pCVar2->fields)._._._.transform, pTVar9 != (Transform *)0x0)) &&
               (pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xfffffff0,pTVar9,(MethodInfo *)0x0),
               pLVar8 != (LineRenderer *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                        (pLVar8,0,*pVVar10,(MethodInfo *)0x0);
              pCVar2 = (this->fields).dropOff;
              if (pCVar2 != (CollectTheItemDropOff *)0x0) {
                (pCVar2->fields).controller = this;
                func_?(&(pCVar2->fields).controller,this);
                goto code_?;
              }
            }
          }
          goto code_?;
        }
        iVar11 = func_?();
        if (iVar11 == 0) goto code_?;
        _UNK_? = iVar11;
        iVar11 = func_?();
        if (iVar11 != 0) goto code_?;
code_?:
        func_?();
      }
code_?:
      func_?();
    }
    else if (((TypeInfo__CollectTheItemCollectable->_1).naturalAligment <=
              (pCVar3->klass->_1).naturalAligment) &&
            ((CollectTheItemCollectable__Class *)
             (pCVar3->klass->_1).typeHierarchy
             [(TypeInfo__CollectTheItemCollectable->_1).naturalAligment - 1] ==
             TypeInfo__CollectTheItemCollectable)) {
      (this->fields).collectable = pCVar3;
      if (((TypeInfo__CollectTheItemCollectable->_1).naturalAligment <=
           (pCVar3->klass->_1).naturalAligment) &&
         ((CollectTheItemCollectable__Class *)
          (pCVar3->klass->_1).typeHierarchy
          [(TypeInfo__CollectTheItemCollectable->_1).naturalAligment - 1] ==
          TypeInfo__CollectTheItemCollectable)) goto code_?;
    }
    func_?();
  }
  else if (((((TypeInfo__CollectTheItemDropOff->_1).naturalAligment <=
              (pCVar2->klass->_1).naturalAligment) &&
            ((CollectTheItemDropOff__Class *)
             (pCVar2->klass->_1).typeHierarchy
             [(TypeInfo__CollectTheItemDropOff->_1).naturalAligment - 1] ==
             TypeInfo__CollectTheItemDropOff)) &&
           ((this->fields).dropOff = pCVar2,
           (TypeInfo__CollectTheItemDropOff->_1).naturalAligment <=
           (pCVar2->klass->_1).naturalAligment)) &&
          ((CollectTheItemDropOff__Class *)
           (pCVar2->klass->_1).typeHierarchy
           [(TypeInfo__CollectTheItemDropOff->_1).naturalAligment - 1] ==
           TypeInfo__CollectTheItemDropOff)) goto code_?;
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* CollectTheItem(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::CollectTheItem::CollectTheItem__ctor
               (CollectTheItem *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CollectTheItemLineObject);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 == (PrefabPool *)0x0) {
    func_?();
    pCVar2 = extraout_EDX;
  }
  else {
    MVBlueprintBase::MVBlueprintBase__ctor_1
              ((MVBlueprintBase *)this,data,(ObjectPrefab *)(pPVar1->fields).collectTheItem,
               worldObjects,(MethodInfo *)0x0);
    pCVar2 = (CollectTheItemLineObject *)(this->fields)._._._.component;
    if (pCVar2 == (CollectTheItemLineObject *)0x0) {
      (this->fields).objectPrefab = (CollectTheItemLineObject *)0x0;
code_?:
      func_?();
      piVar3 = &(this->fields)._._._.interactionFlags;
      *(uint *)piVar3 = (uint)*piVar3 & 0xffffdfff;
      uVar4 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
      piVar3 = &(this->fields)._._._.interactionFlags;
      *(uint *)piVar3 = (uint)*piVar3 | 0x40;
      *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar4;
      return;
    }
    if (((TypeInfo__CollectTheItemLineObject->_1).naturalAligment <=
         (((ObjectPrefab__Class *)pCVar2->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pCVar2->klass)->_1).typeHierarchy
        [(TypeInfo__CollectTheItemLineObject->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__CollectTheItemLineObject)) {
      (this->fields).objectPrefab = pCVar2;
      if (((TypeInfo__CollectTheItemLineObject->_1).naturalAligment <=
           (((ObjectPrefab__Class *)pCVar2->klass)->_1).naturalAligment) &&
         ((((ObjectPrefab__Class *)pCVar2->klass)->_1).typeHierarchy
          [(TypeInfo__CollectTheItemLineObject->_1).naturalAligment - 1] ==
          (Il2CppClass *)TypeInfo__CollectTheItemLineObject)) goto code_?;
    }
  }
  func_?(pCVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::CollectTheItem::CollectTheItem_get_DocumentationType
          (CollectTheItem *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_CollectTheItem;
}


/* Boolean get_HasDropOff() */

bool Assembly-CSharp.dll::CollectTheItem::CollectTheItem_get_HasDropOff
               (CollectTheItem *this,MethodInfo *method)

{
  return (this->fields).dropOff != (CollectTheItemDropOff *)0x0;
}

