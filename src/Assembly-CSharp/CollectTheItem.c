
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
    do {
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
      if (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <= (byte)pMVar3->methodPointer[0xb8])
         && (*(MVCubeModelInstance__Class **)
              (*(int *)(pMVar3->methodPointer + 100) + -4 +
              (uint)(TypeInfo__MVCubeModelInstance->_1).naturalAligment * 4) ==
             TypeInfo__MVCubeModelInstance)) {
        if (pMVar3 == (MethodInfo *)0x0) break;
        if ((((in_stack_2->fields)._.interactionFlags & 0x4000) != 0) &&
           (uVar6._0_2_ = pMVar3[3].flags, uVar6._2_2_ = pMVar3[3].iflags, (uVar6 & 0x4000) == 0)) {
          uVar7 = *(undefined4 *)((int)&(in_stack_2->fields)._.interactionFlags + 4);
          piVar8 = &(in_stack_2->fields)._.interactionFlags;
          *(uint *)piVar8 = (uint)*piVar8 & 0xffffbfff;
          *(undefined4 *)((int)&(in_stack_2->fields)._.interactionFlags + 4) = uVar7;
        }
      }
      if (pMVar3 == (MethodInfo *)0x0) break;
      uVar9._0_2_ = pMVar3[3].flags;
      uVar9._2_2_ = pMVar3[3].iflags;
      pMVar3[3].flags = (short)(uVar9 & 0xffffbfff);
      pMVar3[3].iflags = (short)((uVar9 & 0xffffbfff) >> 0x10);
      pMVar3[3].slot = pMVar3[3].slot;
      pMVar3[3].parameters_count = pMVar3[3].parameters_count;
      pMVar3[3].field_0x2f = pMVar3[3].field_0x2f;
    } while( true );
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
  controller = this;
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
  pCVar1 = (CollectTheItemCollectable__Class *)this;
  if ((this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
     (unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_00,(Object *)StringLiteral_BlueprintData,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), unaff_ESI.m_Index == 0)) {
code_?:
    this = (CollectTheItem *)pCVar1;
    func_?();
    pCVar2 = extraout_EDX;
    this_01.m_Index = unaff_ESI.m_Index;
code_?:
    uVar3 = func_?(pCVar2,unaff_EDI);
    unaff_ESI.m_Index = (int32_t)this;
code_?:
    this = (CollectTheItem *)unaff_ESI.m_Index;
    func_?(uVar3);
    pCVar4 = extraout_EDX_00;
    unaff_ESI.m_Index = (int32_t)this;
code_?:
    this = (CollectTheItem *)unaff_ESI.m_Index;
    func_?(pCVar4,this_01.m_Index);
    unaff_ESI.m_Index = this_01.m_Index;
code_?:
    func_?(unaff_ESI.m_Index,this);
    pCVar5 = unaff_EDI;
  }
  else {
    pDVar6 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((*(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) <
          (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment) ||
        (*(Dictionary_2_System_Object_System_Object___Class **)
          (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
          (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment * 4) !=
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) ||
       ((this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             (unaff_ESI.m_Index,(Object *)StringLiteral_ChildrenMap,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ),
        unaff_EDI = (CollectTheItemDropOff__Class *)StringLiteral_CollectTheItemDropOff,
        unaff_ESI = this_01, this_01.m_Index != 0 &&
        ((pDVar6 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
         *(byte *)(*(int *)this_01.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)this_01.m_Index + 100) + -4 +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))))
    goto code_?;
    if (cRam_? == '\0') {
      VStack_7.z = (float)&TypeInfo__CollectTheItemCollectable;
      VStack_7.y = (float)&UNK_?;
      func_?();
      VStack_7.y = (float)&TypeInfo__CollectTheItemDropOff;
      VStack_7.x = (float)&UNK_?;
      func_?();
      VStack_7.x = (float)&
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
      ;
      func_?();
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&TypeInfo__System__Int32);
      cRam_? = '\x01';
    }
    if (this_01.m_Index == 0) goto code_?;
    bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       this_01.m_Index,(Object *)unaff_EDI,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar8 != 0) {
      pCStack_9 = (CollectTheItemDropOff__Class *)
                  MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_01.m_Index,(Object *)unaff_EDI,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      pCVar5 = pCStack_9;
      uVar3 = CONCAT44(TypeInfo__System__Int32,TVar10.m_Index);
      unaff_EDI = pCStack_9;
      if ((pCStack_9 == (CollectTheItemDropOff__Class *)0x0) || (TVar10.m_Index == 0))
      goto code_?;
      unaff_ESI.m_Index = (int32_t)this;
      if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        VStack_7.z = (float)&UNK_?;
        pCStack_9 = (CollectTheItemDropOff__Class *)TVar10;
        piVar11 = (int32_t *)func_?();
        pCVar2 = (CollectTheItemDropOff *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           ((MVWorldObjectClientManager *)pCVar5,*piVar11,(MethodInfo *)0x0);
        if ((pCVar2 == (CollectTheItemDropOff *)0x0) ||
           ((((pCVar2->klass->_1).naturalAligment <
              (TypeInfo__CollectTheItemDropOff->_1).naturalAligment ||
             ((CollectTheItemDropOff__Class *)
              (pCVar2->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemDropOff->_1).naturalAligment - 1] !=
              TypeInfo__CollectTheItemDropOff)) &&
            (((pCVar2->klass->_1).naturalAligment <
              (TypeInfo__CollectTheItemCollectable->_1).naturalAligment ||
             ((CollectTheItemCollectable__Class *)
              (pCVar2->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemCollectable->_1).naturalAligment - 1] !=
              TypeInfo__CollectTheItemCollectable)))))) goto code_?;
        unaff_EDI = TypeInfo__CollectTheItemDropOff;
        if (((((TypeInfo__CollectTheItemDropOff->_1).naturalAligment <=
               (pCVar2->klass->_1).naturalAligment) &&
             ((CollectTheItemDropOff__Class *)
              (pCVar2->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemDropOff->_1).naturalAligment - 1] ==
              TypeInfo__CollectTheItemDropOff)) &&
            ((this->fields).dropOff = pCVar2, unaff_EDI = TypeInfo__CollectTheItemDropOff,
            (TypeInfo__CollectTheItemDropOff->_1).naturalAligment <=
            (pCVar2->klass->_1).naturalAligment)) &&
           ((CollectTheItemDropOff__Class *)
            (pCVar2->klass->_1).typeHierarchy
            [(TypeInfo__CollectTheItemDropOff->_1).naturalAligment - 1] ==
            TypeInfo__CollectTheItemDropOff)) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
code_?:
    (this->fields).dropOff = (CollectTheItemDropOff *)0x0;
    pCVar2 = (CollectTheItemDropOff *)0x0;
code_?:
    func_?(&(this->fields).dropOff,pCVar2);
    unaff_EDI = (CollectTheItemDropOff__Class *)StringLiteral_CollectTheItemCollectable;
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
    bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       this_01.m_Index,(Object *)unaff_EDI,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar8 != 0) {
      unaff_ESI.m_Index =
           (int32_t)MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_01.m_Index,(Object *)unaff_EDI,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__System__Int32,TVar10.m_Index);
      pCVar1 = (CollectTheItemCollectable__Class *)unaff_ESI.m_Index;
      if (((CollectTheItemCollectable__Class *)unaff_ESI.m_Index ==
           (CollectTheItemCollectable__Class *)0x0) || (TVar10.m_Index == 0)) goto code_?;
      this_01.m_Index = unaff_ESI.m_Index;
      if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar11 = (int32_t *)func_?(TVar10.m_Index);
      pCVar4 = (CollectTheItemCollectable *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          ((MVWorldObjectClientManager *)unaff_ESI.m_Index,*piVar11,(MethodInfo *)0x0
                          );
      if ((pCVar4 == (CollectTheItemCollectable *)0x0) ||
         ((((pCVar4->klass->_1).naturalAligment <
            (TypeInfo__CollectTheItemDropOff->_1).naturalAligment ||
           ((CollectTheItemDropOff__Class *)
            (pCVar4->klass->_1).typeHierarchy
            [(TypeInfo__CollectTheItemDropOff->_1).naturalAligment - 1] !=
            TypeInfo__CollectTheItemDropOff)) &&
          (((pCVar4->klass->_1).naturalAligment <
            (TypeInfo__CollectTheItemCollectable->_1).naturalAligment ||
           ((CollectTheItemCollectable__Class *)
            (pCVar4->klass->_1).typeHierarchy
            [(TypeInfo__CollectTheItemCollectable->_1).naturalAligment - 1] !=
            TypeInfo__CollectTheItemCollectable)))))) goto code_?;
      unaff_EDI = (CollectTheItemDropOff__Class *)pCVar4->klass;
      this_01.m_Index = (int32_t)TypeInfo__CollectTheItemCollectable;
      if (((TypeInfo__CollectTheItemCollectable->_1).naturalAligment <=
           (unaff_EDI->_1).naturalAligment) &&
         ((CollectTheItemCollectable__Class *)
          (unaff_EDI->_1).typeHierarchy
          [(TypeInfo__CollectTheItemCollectable->_1).naturalAligment - 1] ==
          TypeInfo__CollectTheItemCollectable)) {
        (this->fields).collectable = pCVar4;
        unaff_EDI = (CollectTheItemDropOff__Class *)pCVar4->klass;
        this_01.m_Index = (int32_t)TypeInfo__CollectTheItemCollectable;
        if (((TypeInfo__CollectTheItemCollectable->_1).naturalAligment <=
             (unaff_EDI->_1).naturalAligment) &&
           ((CollectTheItemCollectable__Class *)
            (unaff_EDI->_1).typeHierarchy
            [(TypeInfo__CollectTheItemCollectable->_1).naturalAligment - 1] ==
            TypeInfo__CollectTheItemCollectable)) goto code_?;
      }
      goto code_?;
    }
code_?:
    (this->fields).collectable = (CollectTheItemCollectable *)0x0;
    pCVar4 = (CollectTheItemCollectable *)0x0;
code_?:
    func_?(&(this->fields).collectable,pCVar4);
    if ((this->fields).dropOff != (CollectTheItemDropOff *)0x0) {
      unaff_EDI = (CollectTheItemDropOff__Class *)(this->fields).dropOff;
      pDVar12 = (Delegate *)(unaff_EDI->_1).initializationExceptionGCHandle;
      pUVar13 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar13,(Object *)this,
                 MethodInfo__CollectTheItem__OnDropOffPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      unaff_ESI.m_Index =
           (int32_t)mscorlib.dll::System::Delegate::Delegate_Combine
                              (pDVar12,(Delegate *)pUVar13,(MethodInfo *)0x0);
      pCVar5 = (CollectTheItemDropOff__Class *)
                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      if ((CollectTheItemCollectable__Class *)unaff_ESI.m_Index ==
          (CollectTheItemCollectable__Class *)0x0) {
        (unaff_EDI->_1).initializationExceptionGCHandle = 0;
        iVar14 = 0;
        this = (CollectTheItem *)unaff_EDI;
code_?:
        func_?(&(unaff_EDI->_1).initializationExceptionGCHandle,iVar14);
        pCVar15 = (controller->fields).objectPrefab;
        pCVar1 = (CollectTheItemCollectable__Class *)this;
        if (pCVar15 != (CollectTheItemLineObject *)0x0) {
          unaff_ESI.m_Index = (int32_t)(pCVar15->fields).lineRenderer;
          pCVar2 = (controller->fields).dropOff;
          if (((pCVar2 != (CollectTheItemDropOff *)0x0) &&
              (pTVar16 = (pCVar2->fields)._._._.transform, pTVar16 != (Transform *)0x0)) &&
             (pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_7,pTVar16,(MethodInfo *)0x0),
             (CollectTheItemCollectable__Class *)unaff_ESI.m_Index !=
             (CollectTheItemCollectable__Class *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                      ((LineRenderer *)unaff_ESI.m_Index,0,*pVVar17,(MethodInfo *)0x0);
            pCVar2 = (controller->fields).dropOff;
            if (pCVar2 != (CollectTheItemDropOff *)0x0) {
              (pCVar2->fields).controller = controller;
              func_?(&(pCVar2->fields).controller,controller);
              goto code_?;
            }
          }
        }
        goto code_?;
      }
      uVar18 = func_?(unaff_ESI.m_Index,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
      if (uVar18 == 0) goto code_?;
      (unaff_EDI->_1).initializationExceptionGCHandle = uVar18;
      this = (CollectTheItem *)
             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      iVar14 = func_?(unaff_ESI.m_Index,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
      if (iVar14 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if ((controller->fields).collectable == (CollectTheItemCollectable *)0x0) {
      return;
    }
    unaff_EDI = (CollectTheItemDropOff__Class *)(controller->fields).collectable;
    pDVar12 = (Delegate *)(unaff_EDI->_1).initializationExceptionGCHandle;
    pUVar13 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar13,(Object *)controller,
               MethodInfo__CollectTheItem__OnCollectablePositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    unaff_ESI.m_Index =
         (int32_t)mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar12,(Delegate *)pUVar13,(MethodInfo *)0x0);
    pCVar5 = (CollectTheItemDropOff__Class *)
              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
    ;
    if ((CollectTheItemCollectable__Class *)unaff_ESI.m_Index ==
        (CollectTheItemCollectable__Class *)0x0) {
      (unaff_EDI->_1).initializationExceptionGCHandle = 0;
      iVar14 = 0;
      this = (CollectTheItem *)unaff_EDI;
code_?:
      func_?(&(unaff_EDI->_1).initializationExceptionGCHandle,iVar14);
      pCVar15 = (controller->fields).objectPrefab;
      pCVar1 = (CollectTheItemCollectable__Class *)this;
      if (pCVar15 != (CollectTheItemLineObject *)0x0) {
        unaff_ESI.m_Index = (int32_t)(pCVar15->fields).lineRenderer;
        pCVar4 = (controller->fields).collectable;
        if (((pCVar4 != (CollectTheItemCollectable *)0x0) &&
            (pTVar16 = (pCVar4->fields)._._._.transform, pTVar16 != (Transform *)0x0)) &&
           (pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_7,pTVar16,(MethodInfo *)0x0),
           (CollectTheItemCollectable__Class *)unaff_ESI.m_Index !=
           (CollectTheItemCollectable__Class *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                    ((LineRenderer *)unaff_ESI.m_Index,1,*pVVar17,(MethodInfo *)0x0);
          pCVar4 = (controller->fields).collectable;
          if (pCVar4 != (CollectTheItemCollectable *)0x0) {
            CollectTheItemCollectable::CollectTheItemCollectable_InitializeWithController
                      (pCVar4,controller,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
    uVar18 = func_?(unaff_ESI.m_Index,
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
    if (uVar18 != 0) {
      (unaff_EDI->_1).initializationExceptionGCHandle = uVar18;
      this = (CollectTheItem *)
             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      iVar14 = func_?(unaff_ESI.m_Index,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
      if (iVar14 == 0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?(unaff_ESI.m_Index,pCVar5);
  pDVar6 = extraout_EDX_01;
code_?:
  VStack_7.x = (float)&UNK_?;
  VStack_7.y = (float)unaff_ESI.m_Index;
  VStack_7.z = (float)pDVar6;
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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

