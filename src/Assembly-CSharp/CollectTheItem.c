
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
               &stack0xffffffd0,this_00,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__)
    ;
    while( true ) {
      pMVar3 = 
      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
      ;
      bVar4 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar4 == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc0,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   ,in_stack_5);
        *unaff_FS_OFFSET = uVar1;
        return;
      }
      if (pMVar3 == (MethodInfo *)0x0) break;
      cVar6 = (code)(TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if ((((byte)cVar6 <= (byte)pMVar3->methodPointer[0xb8]) &&
          (*(MVCubeModelInstance__Class **)
            (*(int *)(pMVar3->methodPointer + 100) + -4 + (uint)(byte)cVar6 * 4) ==
           TypeInfo__MVCubeModelInstance)) && (pMVar3 != (MethodInfo *)0x0)) {
        uVar7 = (uint)(in_stack_2->fields)._.interactionFlags;
        uVar8 = *(undefined4 *)((int)&(in_stack_2->fields)._.interactionFlags + 4);
        if (((uVar7 & 0x4000) != 0) &&
           (uVar9._0_2_ = pMVar3[3].flags, uVar9._2_2_ = pMVar3[3].iflags, (uVar9 & 0x4000) == 0)) {
          *(uint *)&(in_stack_2->fields)._.interactionFlags = uVar7 & 0xffffbfff;
          *(undefined4 *)((int)&(in_stack_2->fields)._.interactionFlags + 4) = uVar8;
        }
      }
      uVar7._0_2_ = pMVar3[3].flags;
      uVar7._2_2_ = pMVar3[3].iflags;
      pMVar3[3].flags = (short)(uVar7 & 0xffffbfff);
      pMVar3[3].iflags = (short)((uVar7 & 0xffffbfff) >> 0x10);
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
        pMVar5 = pMVar4->klass;
        bVar6 = (TypeInfo__CollectTheItemDropOff->_1).naturalAligment;
        if (((pMVar5->_1).naturalAligment < bVar6) ||
           ((CollectTheItemDropOff__Class *)(pMVar5->_1).typeHierarchy[bVar6 - 1] !=
            TypeInfo__CollectTheItemDropOff)) {
          bVar6 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
          if ((pMVar5->_1).naturalAligment < bVar6) {
            return (MVWorldObjectClient *)0x0;
          }
          if ((CollectTheItemCollectable__Class *)(pMVar5->_1).typeHierarchy[bVar6 - 1] !=
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
  pcVar7 = (code *)swi(3);
  pMVar4 = (MVWorldObjectClient *)(*pcVar7)();
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
  this_02 = (CollectTheItemCollectable__Class *)this;
  if ((this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
     (TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)StringLiteral_BlueprintData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ),
     unaff_ESI.m_Index =
          (int32_t)
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
     TVar1.m_Index == 0)) goto code_?;
  bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment;
  pCVar3 = (CollectTheItemDropOff__Class *)
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
  if ((*(byte *)(*(int *)TVar1.m_Index + 0xb8) < bVar2) ||
     (*(Dictionary_2_System_Object_System_Object___Class **)
       (*(int *)(*(int *)TVar1.m_Index + 100) + -4 + (uint)bVar2 * 4) !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
code_?:
    func_?(TVar1.m_Index,pCVar3);
code_?:
    func_?(pCVar3,pCStack_4);
  }
  else {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (TVar1.m_Index,(Object *)StringLiteral_ChildrenMap,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    unaff_EBX = (CollectTheItemDropOff__Class *)StringLiteral_CollectTheItemDropOff;
    if (TVar1.m_Index == 0) {
      unaff_ESI.m_Index = (int32_t)(CollectTheItemDropOff__Class *)0x0;
    }
    else {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      pCVar3 = (CollectTheItemDropOff__Class *)
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if ((*(byte *)(*(int *)TVar1.m_Index + 0xb8) < bVar2) ||
         (unaff_ESI = TVar1,
         *(Dictionary_2_System_Object_System_Object___Class **)
          (*(int *)(*(int *)TVar1.m_Index + 100) + -4 + (uint)bVar2 * 4) !=
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
    }
    if (cRam_? == '\0') {
      VStack_5.z = (float)&TypeInfo__CollectTheItemCollectable;
      VStack_5.y = (float)&UNK_?;
      func_?();
      VStack_5.y = (float)&TypeInfo__CollectTheItemDropOff;
      VStack_5.x = (float)&UNK_?;
      func_?();
      VStack_5.x = (float)&
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
      ;
      func_?();
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&TypeInfo__System__Int32);
      cRam_? = '\x01';
    }
    if ((CollectTheItemDropOff__Class *)unaff_ESI.m_Index == (CollectTheItemDropOff__Class *)0x0)
    goto code_?;
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       unaff_ESI.m_Index,(Object *)unaff_EBX,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar6 != 0) {
      pCStack_4 = (CollectTheItemDropOff__Class *)
                   MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (unaff_ESI.m_Index,(Object *)unaff_EBX,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      pCVar3 = pCStack_4;
      uVar7 = CONCAT44(TypeInfo__System__Int32,TVar1.m_Index);
      unaff_EBX = pCStack_4;
      if ((pCStack_4 == (CollectTheItemDropOff__Class *)0x0) ||
         (unaff_EBX = pCStack_4, TVar1.m_Index == 0)) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        VStack_5.z = (float)&UNK_?;
        pCStack_4 = (CollectTheItemDropOff__Class *)TVar1;
        piVar8 = (int32_t *)func_?();
        pCVar9 = (CollectTheItemDropOff *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            ((MVWorldObjectClientManager *)pCVar3,*piVar8,(MethodInfo *)0x0);
        if (pCVar9 == (CollectTheItemDropOff *)0x0) goto code_?;
        pCVar3 = pCVar9->klass;
        bVar2 = (TypeInfo__CollectTheItemDropOff->_1).naturalAligment;
        if ((pCVar3->_1).naturalAligment < bVar2) {
code_?:
          bVar2 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
          if (((pCVar3->_1).naturalAligment < bVar2) ||
             ((CollectTheItemCollectable__Class *)(pCVar3->_1).typeHierarchy[bVar2 - 1] !=
              TypeInfo__CollectTheItemCollectable)) goto code_?;
        }
        else if ((CollectTheItemDropOff__Class *)(pCVar3->_1).typeHierarchy[bVar2 - 1] !=
                 TypeInfo__CollectTheItemDropOff) {
          pCVar3 = pCVar9->klass;
          goto code_?;
        }
        bVar2 = (TypeInfo__CollectTheItemDropOff->_1).naturalAligment;
        unaff_EBX = TypeInfo__CollectTheItemDropOff;
        if ((bVar2 <= (pCVar9->klass->_1).naturalAligment) &&
           ((CollectTheItemDropOff__Class *)(pCVar9->klass->_1).typeHierarchy[bVar2 - 1] ==
            TypeInfo__CollectTheItemDropOff)) {
          (this->fields).dropOff = pCVar9;
          bStack_10 = (TypeInfo__CollectTheItemDropOff->_1).naturalAligment;
          unaff_EBX = (CollectTheItemDropOff__Class *)&(this->fields).dropOff;
          if ((bStack_10 <= (pCVar9->klass->_1).naturalAligment) &&
             ((CollectTheItemDropOff__Class *)(pCVar9->klass->_1).typeHierarchy[bStack_10 - 1] ==
              TypeInfo__CollectTheItemDropOff)) goto code_?;
          goto code_?;
        }
code_?:
        uVar7 = func_?(pCVar9,unaff_EBX);
      }
code_?:
      func_?(uVar7);
      TVar1.m_Index = (int32_t)extraout_EDX_01;
code_?:
      func_?(TVar1.m_Index,this_02);
      TVar1.m_Index = (int32_t)extraout_EDX_02;
      pCVar3 = (CollectTheItemDropOff__Class *)unaff_ESI.m_Index;
      goto code_?;
    }
code_?:
    pCVar9 = (CollectTheItemDropOff *)0x0;
    (this->fields).dropOff = (CollectTheItemDropOff *)0x0;
code_?:
    unaff_EBX = (CollectTheItemDropOff__Class *)&(this->fields).dropOff;
    func_?(unaff_EBX,pCVar9);
    pCStack_11 = (CollectTheItemDropOff__Class *)StringLiteral_CollectTheItemCollectable;
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
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       unaff_ESI.m_Index,(Object *)pCStack_11,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar6 != 0) {
      pCStack_4 = (CollectTheItemDropOff__Class *)
                   MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (unaff_ESI.m_Index,(Object *)pCStack_11,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      pCVar3 = pCStack_4;
      uVar7 = CONCAT44(TypeInfo__System__Int32,TVar1.m_Index);
      unaff_ESI.m_Index = (int32_t)pCStack_4;
      if ((pCStack_4 == (CollectTheItemDropOff__Class *)0x0) || (TVar1.m_Index == 0))
      goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar8 = (int32_t *)func_?(TVar1.m_Index);
      TVar1.m_Index =
           (int32_t)MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              ((MVWorldObjectClientManager *)pCVar3,*piVar8,(MethodInfo *)0x0);
      if ((CollectTheItemCollectable *)TVar1.m_Index == (CollectTheItemCollectable *)0x0)
      goto code_?;
      pCVar12 = ((CollectTheItemCollectable *)TVar1.m_Index)->klass;
      bVar2 = (TypeInfo__CollectTheItemDropOff->_1).naturalAligment;
      if ((pCVar12->_1).naturalAligment < bVar2) {
code_?:
        bVar2 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
        if (((pCVar12->_1).naturalAligment < bVar2) ||
           ((CollectTheItemCollectable__Class *)(pCVar12->_1).typeHierarchy[bVar2 - 1] !=
            TypeInfo__CollectTheItemCollectable)) goto code_?;
      }
      else if ((CollectTheItemDropOff__Class *)(pCVar12->_1).typeHierarchy[bVar2 - 1] !=
               TypeInfo__CollectTheItemDropOff) {
        pCVar12 = ((CollectTheItemCollectable *)TVar1.m_Index)->klass;
        goto code_?;
      }
      bVar2 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
      pCVar3 = (CollectTheItemDropOff__Class *)TypeInfo__CollectTheItemCollectable;
      if (((((CollectTheItemCollectable *)TVar1.m_Index)->klass->_1).naturalAligment < bVar2) ||
         (pCVar3 = (CollectTheItemDropOff__Class *)TypeInfo__CollectTheItemCollectable,
         (CollectTheItemCollectable__Class *)
         (((CollectTheItemCollectable *)TVar1.m_Index)->klass->_1).typeHierarchy[bVar2 - 1] !=
         TypeInfo__CollectTheItemCollectable)) goto code_?;
      unaff_ESI.m_Index = (int32_t)&(this->fields).collectable;
      *(int32_t *)unaff_ESI.m_Index = TVar1.m_Index;
      bVar2 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
      this_02 = TypeInfo__CollectTheItemCollectable;
      pCStack_11 = (CollectTheItemDropOff__Class *)unaff_ESI.m_Index;
      if ((bVar2 <= (((CollectTheItemCollectable *)TVar1.m_Index)->klass->_1).naturalAligment) &&
         ((CollectTheItemCollectable__Class *)
          (((CollectTheItemCollectable *)TVar1.m_Index)->klass->_1).typeHierarchy[bVar2 - 1] ==
          TypeInfo__CollectTheItemCollectable)) goto code_?;
      goto code_?;
    }
code_?:
    TVar1.m_Index = 0;
    (this->fields).collectable = (CollectTheItemCollectable *)0x0;
code_?:
    unaff_ESI.m_Index = (int32_t)&(this->fields).collectable;
    pCStack_11 = (CollectTheItemDropOff__Class *)unaff_ESI.m_Index;
    func_?(unaff_ESI.m_Index,TVar1.m_Index);
    pCStack_4 = *(CollectTheItemDropOff__Class **)unaff_EBX;
    if (pCStack_4 != (CollectTheItemDropOff__Class *)0x0) {
      pDVar13 = (Delegate *)(pCStack_4->_1).initializationExceptionGCHandle;
      pUVar14 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar14,(Object *)this,
                 MethodInfo__CollectTheItem__OnDropOffPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pCVar3 = (CollectTheItemDropOff__Class *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          (pDVar13,(Delegate *)pUVar14,(MethodInfo *)0x0);
      this_02 = (CollectTheItemCollectable__Class *)
                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      if (pCVar3 == (CollectTheItemDropOff__Class *)0x0) {
        this_02 = (CollectTheItemCollectable__Class *)
                  &(pCStack_4->_1).initializationExceptionGCHandle;
        *(uint32_t *)this_02 = 0;
        iVar15 = 0;
code_?:
        unaff_ESI.m_Index = (int32_t)pCStack_11;
        func_?(this_02,iVar15);
        pCVar16 = (this->fields).objectPrefab;
        this_02 = (CollectTheItemCollectable__Class *)this;
        if (pCVar16 != (CollectTheItemLineObject *)0x0) {
          pCStack_4 = (CollectTheItemDropOff__Class *)(pCVar16->fields).lineRenderer;
          if (((*(CollectTheItemDropOff **)unaff_EBX != (CollectTheItemDropOff *)0x0) &&
              (pTVar17 = ((*(CollectTheItemDropOff **)unaff_EBX)->fields)._._._.transform,
              pTVar17 != (Transform *)0x0)) &&
             (pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_5,pTVar17,(MethodInfo *)0x0),
             pCStack_4 != (CollectTheItemDropOff__Class *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                      ((LineRenderer *)pCStack_4,0,*pVVar18,(MethodInfo *)0x0);
            if (*(CollectTheItemDropOff **)unaff_EBX != (CollectTheItemDropOff *)0x0) {
              ppCVar19 = &((*(CollectTheItemDropOff **)unaff_EBX)->fields).controller;
              *ppCVar19 = this;
              func_?(ppCVar19,this);
              goto code_?;
            }
          }
        }
        goto code_?;
      }
      uVar20 = func_?(pCVar3,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
      if (uVar20 == 0) goto code_?;
      this_02 = (CollectTheItemCollectable__Class *)
                &(pCStack_4->_1).initializationExceptionGCHandle;
      *(uint32_t *)this_02 = uVar20;
      pCStack_4 = (CollectTheItemDropOff__Class *)
                   TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      iVar15 = func_?(pCVar3,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
      if (iVar15 != 0) goto code_?;
      goto code_?;
    }
code_?:
    pCStack_4 = (CollectTheItemDropOff__Class *)
                 (((CollectTheItemDropOff__Class *)unaff_ESI.m_Index)->_0).image;
    if (pCStack_4 == (CollectTheItemDropOff__Class *)0x0) {
      return;
    }
    pDVar13 = (Delegate *)(pCStack_4->_1).initializationExceptionGCHandle;
    pUVar14 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar14,(Object *)this,
               MethodInfo__CollectTheItem__OnCollectablePositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pCVar3 = (CollectTheItemDropOff__Class *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar13,(Delegate *)pUVar14,(MethodInfo *)0x0);
    this_02 = (CollectTheItemCollectable__Class *)
              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
    ;
    if (pCVar3 == (CollectTheItemDropOff__Class *)0x0) {
      this_02 = (CollectTheItemCollectable__Class *)
                &(pCStack_4->_1).initializationExceptionGCHandle;
      *(uint32_t *)this_02 = 0;
      iVar15 = 0;
code_?:
      unaff_ESI.m_Index = (int32_t)pCStack_11;
      func_?(this_02,iVar15);
      pCVar16 = (controller->fields).objectPrefab;
      unaff_EBX = (CollectTheItemDropOff__Class *)controller;
      if (pCVar16 != (CollectTheItemLineObject *)0x0) {
        this_02 = (CollectTheItemCollectable__Class *)(pCVar16->fields).lineRenderer;
        pIVar21 = (((CollectTheItemDropOff__Class *)unaff_ESI.m_Index)->_0).image;
        if (((pIVar21 != (Il2CppImage *)0x0) &&
            (pTVar17 = (Transform *)pIVar21[3].typeCount, pTVar17 != (Transform *)0x0)) &&
           (pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_5,pTVar17,(MethodInfo *)0x0),
           this_02 != (CollectTheItemCollectable__Class *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                    ((LineRenderer *)this_02,1,*pVVar18,(MethodInfo *)0x0);
          this_01 = (CollectTheItemCollectable *)
                    (((CollectTheItemDropOff__Class *)unaff_ESI.m_Index)->_0).image;
          if (this_01 != (CollectTheItemCollectable *)0x0) {
            CollectTheItemCollectable::CollectTheItemCollectable_InitializeWithController
                      (this_01,controller,(MethodInfo *)0x0);
            return;
          }
        }
      }
code_?:
      func_?();
      pCVar9 = extraout_EDX;
code_?:
      func_?(pCVar9,TypeInfo__CollectTheItemDropOff);
      pCVar9 = extraout_EDX_00;
      goto code_?;
    }
    uVar20 = func_?(pCVar3,
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
    if (uVar20 != 0) {
      this_02 = (CollectTheItemCollectable__Class *)
                &(pCStack_4->_1).initializationExceptionGCHandle;
      *(uint32_t *)this_02 = uVar20;
      this = (CollectTheItem *)
             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      iVar15 = func_?(pCVar3,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
      if (iVar15 == 0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?(pCVar3,this_02);
code_?:
  func_?(pCVar3,this);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
    bVar5 = (TypeInfo__CollectTheItemLineObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pCVar2->klass)->_1).naturalAligment < bVar5) ||
       ((((ObjectPrefab__Class *)pCVar2->klass)->_1).typeHierarchy[bVar5 - 1] !=
        (Il2CppClass *)TypeInfo__CollectTheItemLineObject)) goto code_?;
    (this->fields).objectPrefab = pCVar2;
    bVar5 = (TypeInfo__CollectTheItemLineObject->_1).naturalAligment;
    if ((bVar5 <= (((ObjectPrefab__Class *)pCVar2->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pCVar2->klass)->_1).typeHierarchy[bVar5 - 1] ==
        (Il2CppClass *)TypeInfo__CollectTheItemLineObject)) goto code_?;
  }
  func_?(pCVar2);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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

