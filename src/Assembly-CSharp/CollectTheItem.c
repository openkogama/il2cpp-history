
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
  controller = in_stack_1;
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
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
  if (*(char *)&(in_stack_1->vtable).get_Scale.methodPtr != '\0') {
    return;
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            in_stack_1->interfaceOffsets;
  *(undefined1 *)&(in_stack_1->vtable).get_Scale.methodPtr = 1;
  pCVar2 = in_stack_1;
  if ((this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
     (unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_00,(Object *)StringLiteral_BlueprintData,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), unaff_ESI.m_Index == 0)) goto code_?;
  pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
  if ((*(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) <
       (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       naturalAligment) ||
     (*(Dictionary_2_System_Object_System_Object___Class **)
       (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
       (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment * 4) !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
  goto code_?;
  this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (unaff_ESI.m_Index,(Object *)StringLiteral_ChildrenMap,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  key = StringLiteral_CollectTheItemDropOff;
  if (this_02.m_Index == 0) {
    this_02.m_Index = 0;
code_?:
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&TypeInfo__System__Int32);
      cRam_? = '\x01';
    }
    unaff_ESI.m_Index = this_02.m_Index;
    unaff_EDI = (CollectTheItemDropOff__Class *)key;
    if ((CollectTheItemDropOff__Class *)this_02.m_Index == (CollectTheItemDropOff__Class *)0x0) {
code_?:
      in_stack_1 = pCVar2;
      func_?();
      pMVar4 = extraout_EDX;
      this_02.m_Index = unaff_ESI.m_Index;
code_?:
      uVar5 = func_?(pMVar4,unaff_EDI);
      unaff_ESI.m_Index = (int32_t)in_stack_1;
code_?:
      in_stack_1 = (CollectTheItemDropOff__Class *)unaff_ESI.m_Index;
      func_?(uVar5);
      pMVar4 = extraout_EDX_00;
      unaff_ESI.m_Index = (int32_t)in_stack_1;
code_?:
      in_stack_1 = (CollectTheItemDropOff__Class *)unaff_ESI.m_Index;
      func_?(pMVar4,this_02.m_Index);
      unaff_ESI.m_Index = this_02.m_Index;
code_?:
      func_?(unaff_ESI.m_Index,in_stack_1);
      pCVar2 = unaff_EDI;
    }
    else {
      bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         this_02.m_Index,(Object *)key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar6 != 0) {
        unaff_EDI = (CollectTheItemDropOff__Class *)
                    MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_02.m_Index,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        uVar5 = CONCAT44(TypeInfo__System__Int32,TVar7.m_Index);
        if ((unaff_EDI == (CollectTheItemDropOff__Class *)0x0) || (TVar7.m_Index == 0))
        goto code_?;
        unaff_ESI.m_Index = (int32_t)in_stack_1;
        if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar8 = (int32_t *)func_?();
          pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             ((MVWorldObjectClientManager *)unaff_EDI,*piVar8,(MethodInfo *)0x0);
          if ((pMVar4 == (MVWorldObject *)0x0) ||
             ((((pMVar4->klass->_1).naturalAligment <
                (TypeInfo__CollectTheItemDropOff->_1).naturalAligment ||
               ((CollectTheItemDropOff__Class *)
                (pMVar4->klass->_1).typeHierarchy
                [(TypeInfo__CollectTheItemDropOff->_1).naturalAligment - 1] !=
                TypeInfo__CollectTheItemDropOff)) &&
              (((pMVar4->klass->_1).naturalAligment <
                (TypeInfo__CollectTheItemCollectable->_1).naturalAligment ||
               ((CollectTheItemCollectable__Class *)
                (pMVar4->klass->_1).typeHierarchy
                [(TypeInfo__CollectTheItemCollectable->_1).naturalAligment - 1] !=
                TypeInfo__CollectTheItemCollectable)))))) goto code_?;
          unaff_EDI = TypeInfo__CollectTheItemDropOff;
          if (((((TypeInfo__CollectTheItemDropOff->_1).naturalAligment <=
                 (pMVar4->klass->_1).naturalAligment) &&
               ((CollectTheItemDropOff__Class *)
                (pMVar4->klass->_1).typeHierarchy
                [(TypeInfo__CollectTheItemDropOff->_1).naturalAligment - 1] ==
                TypeInfo__CollectTheItemDropOff)) &&
              ((in_stack_1->vtable).get_Rotation.method = (MethodInfo *)pMVar4,
              unaff_EDI = TypeInfo__CollectTheItemDropOff,
              (TypeInfo__CollectTheItemDropOff->_1).naturalAligment <=
              (pMVar4->klass->_1).naturalAligment)) &&
             ((CollectTheItemDropOff__Class *)
              (pMVar4->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemDropOff->_1).naturalAligment - 1] ==
              TypeInfo__CollectTheItemDropOff)) goto code_?;
          goto code_?;
        }
        goto code_?;
      }
code_?:
      (in_stack_1->vtable).get_Rotation.method = (MethodInfo *)0x0;
      pMVar4 = (MVWorldObject *)0x0;
code_?:
      func_?(&(in_stack_1->vtable).get_Rotation.method,pMVar4);
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
      bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         this_02.m_Index,(Object *)unaff_EDI,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar6 != 0) {
        unaff_ESI.m_Index =
             (int32_t)MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_02.m_Index,(Object *)unaff_EDI,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        uVar5 = CONCAT44(TypeInfo__System__Int32,TVar7.m_Index);
        pCVar2 = (CollectTheItemDropOff__Class *)unaff_ESI.m_Index;
        if (((CollectTheItemDropOff__Class *)unaff_ESI.m_Index ==
             (CollectTheItemDropOff__Class *)0x0) || (TVar7.m_Index == 0)) goto code_?;
        this_02.m_Index = unaff_ESI.m_Index;
        if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar8 = (int32_t *)func_?(TVar7.m_Index);
        pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           ((MVWorldObjectClientManager *)unaff_ESI.m_Index,*piVar8,
                            (MethodInfo *)0x0);
        if ((pMVar4 == (MVWorldObject *)0x0) ||
           ((((pMVar4->klass->_1).naturalAligment <
              (TypeInfo__CollectTheItemDropOff->_1).naturalAligment ||
             ((CollectTheItemDropOff__Class *)
              (pMVar4->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemDropOff->_1).naturalAligment - 1] !=
              TypeInfo__CollectTheItemDropOff)) &&
            (((pMVar4->klass->_1).naturalAligment <
              (TypeInfo__CollectTheItemCollectable->_1).naturalAligment ||
             ((CollectTheItemCollectable__Class *)
              (pMVar4->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemCollectable->_1).naturalAligment - 1] !=
              TypeInfo__CollectTheItemCollectable)))))) goto code_?;
        unaff_EDI = (CollectTheItemDropOff__Class *)pMVar4->klass;
        this_02.m_Index = (int32_t)TypeInfo__CollectTheItemCollectable;
        if (((TypeInfo__CollectTheItemCollectable->_1).naturalAligment <=
             (unaff_EDI->_1).naturalAligment) &&
           ((CollectTheItemCollectable__Class *)
            (unaff_EDI->_1).typeHierarchy
            [(TypeInfo__CollectTheItemCollectable->_1).naturalAligment - 1] ==
            TypeInfo__CollectTheItemCollectable)) {
          (in_stack_1->vtable).set_Rotation.methodPtr = (Il2CppMethodPointer)pMVar4;
          unaff_EDI = (CollectTheItemDropOff__Class *)pMVar4->klass;
          this_02.m_Index = (int32_t)TypeInfo__CollectTheItemCollectable;
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
      (in_stack_1->vtable).set_Rotation.methodPtr = (Il2CppMethodPointer)0x0;
      pMVar4 = (MVWorldObject *)0x0;
code_?:
      func_?(&(in_stack_1->vtable).set_Rotation,pMVar4);
      if ((in_stack_1->vtable).get_Rotation.method != (MethodInfo *)0x0) {
        unaff_EDI = (CollectTheItemDropOff__Class *)(in_stack_1->vtable).get_Rotation.method;
        pDVar9 = (Delegate *)(unaff_EDI->_1).initializationExceptionGCHandle;
        pUVar10 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                 );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar10,(Object *)in_stack_1,
                   MethodInfo__CollectTheItem__OnDropOffPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   ,(MethodInfo *)0x0);
        unaff_ESI.m_Index =
             (int32_t)mscorlib.dll::System::Delegate::Delegate_Combine
                                (pDVar9,(Delegate *)pUVar10,(MethodInfo *)0x0);
        pCVar2 = (CollectTheItemDropOff__Class *)
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
        ;
        if ((CollectTheItemDropOff__Class *)unaff_ESI.m_Index == (CollectTheItemDropOff__Class *)0x0
           ) {
          (unaff_EDI->_1).initializationExceptionGCHandle = 0;
          iVar11 = 0;
          in_stack_1 = unaff_EDI;
code_?:
          func_?(&(unaff_EDI->_1).initializationExceptionGCHandle,iVar11);
          pMVar12 = (controller->vtable).set_Rotation.method;
          pCVar2 = in_stack_1;
          if (pMVar12 != (MethodInfo *)0x0) {
            unaff_ESI.m_Index = (int32_t)pMVar12->parameters;
            pMVar12 = (controller->vtable).get_Rotation.method;
            if (((pMVar12 != (MethodInfo *)0x0) &&
                (pTVar13 = (Transform *)pMVar12[3].methodPointer, pTVar13 != (Transform *)0x0)) &&
               (pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xfffffff4,pTVar13,(MethodInfo *)0x0),
               (CollectTheItemDropOff__Class *)unaff_ESI.m_Index !=
               (CollectTheItemDropOff__Class *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                        ((LineRenderer *)unaff_ESI.m_Index,0,*pVVar14,(MethodInfo *)0x0);
              pMVar12 = (controller->vtable).get_Rotation.method;
              if (pMVar12 != (MethodInfo *)0x0) {
                pMVar12[5].name = (char *)controller;
                func_?(&pMVar12[5].name,controller);
                goto code_?;
              }
            }
          }
          goto code_?;
        }
        uVar15 = func_?(unaff_ESI.m_Index,
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                );
        if (uVar15 == 0) goto code_?;
        (unaff_EDI->_1).initializationExceptionGCHandle = uVar15;
        in_stack_1 =
             (CollectTheItemDropOff__Class *)
             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
        ;
        iVar11 = func_?(unaff_ESI.m_Index,
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                );
        if (iVar11 != 0) goto code_?;
        goto code_?;
      }
code_?:
      if ((controller->vtable).set_Rotation.methodPtr == (Il2CppMethodPointer)0x0) {
        return;
      }
      unaff_EDI = (CollectTheItemDropOff__Class *)(controller->vtable).set_Rotation.methodPtr;
      pDVar9 = (Delegate *)(unaff_EDI->_1).initializationExceptionGCHandle;
      pUVar10 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar10,(Object *)controller,
                 MethodInfo__CollectTheItem__OnCollectablePositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      unaff_ESI.m_Index =
           (int32_t)mscorlib.dll::System::Delegate::Delegate_Combine
                              (pDVar9,(Delegate *)pUVar10,(MethodInfo *)0x0);
      pCVar2 = (CollectTheItemDropOff__Class *)
                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      if ((CollectTheItemDropOff__Class *)unaff_ESI.m_Index == (CollectTheItemDropOff__Class *)0x0)
      {
        (unaff_EDI->_1).initializationExceptionGCHandle = 0;
        iVar11 = 0;
        in_stack_1 = unaff_EDI;
code_?:
        func_?(&(unaff_EDI->_1).initializationExceptionGCHandle,iVar11);
        pMVar12 = (controller->vtable).set_Rotation.method;
        pCVar2 = in_stack_1;
        if (pMVar12 != (MethodInfo *)0x0) {
          unaff_ESI.m_Index = (int32_t)pMVar12->parameters;
          pIVar16 = (controller->vtable).set_Rotation.methodPtr;
          if (((pIVar16 != (Il2CppMethodPointer)0x0) &&
              (pTVar13 = *(Transform **)(pIVar16 + 0x90), pTVar13 != (Transform *)0x0)) &&
             (pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xfffffff4,pTVar13,(MethodInfo *)0x0),
             (CollectTheItemDropOff__Class *)unaff_ESI.m_Index !=
             (CollectTheItemDropOff__Class *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                      ((LineRenderer *)unaff_ESI.m_Index,1,*pVVar14,(MethodInfo *)0x0);
            this_01 = (CollectTheItemCollectable *)(controller->vtable).set_Rotation.methodPtr;
            if (this_01 != (CollectTheItemCollectable *)0x0) {
              CollectTheItemCollectable::CollectTheItemCollectable_InitializeWithController
                        (this_01,(CollectTheItem *)controller,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
      uVar15 = func_?(unaff_ESI.m_Index,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
      if (uVar15 != 0) {
        (unaff_EDI->_1).initializationExceptionGCHandle = uVar15;
        in_stack_1 =
             (CollectTheItemDropOff__Class *)
             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
        ;
        iVar11 = func_?(unaff_ESI.m_Index,
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                );
        if (iVar11 == 0) goto code_?;
        goto code_?;
      }
    }
code_?:
    func_?(unaff_ESI.m_Index,pCVar2);
  }
  else {
                    /* WARNING: Load size is inaccurate */
    unaff_ESI.m_Index = *this_02.m_Index;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment <=
         (((CollectTheItemDropOff__Class *)unaff_ESI.m_Index)->_1).naturalAligment) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (((CollectTheItemDropOff__Class *)unaff_ESI.m_Index)->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
  }
  func_?();
  pDVar3 = extraout_EDX_01;
code_?:
  func_?(unaff_ESI.m_Index,pDVar3);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
                            ), unaff_ESI.m_Index == 0)) goto code_?;
  pDVar2 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
  if ((*(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) <
       (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       naturalAligment) ||
     (*(Dictionary_2_System_Object_System_Object___Class **)
       (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
       (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment * 4) !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
  goto code_?;
  this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (unaff_ESI.m_Index,(Object *)StringLiteral_ChildrenMap,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  unaff_EDI = (CollectTheItemDropOff__Class *)StringLiteral_CollectTheItemDropOff;
  if (this_02.m_Index == 0) {
    this_02.m_Index = 0;
code_?:
    if (cRam_? == '\0') {
      VStack_3.z = (float)&TypeInfo__CollectTheItemCollectable;
      VStack_3.y = (float)&UNK_?;
      func_?();
      VStack_3.y = (float)&TypeInfo__CollectTheItemDropOff;
      VStack_3.x = (float)&UNK_?;
      func_?();
      VStack_3.x = (float)&
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
      ;
      func_?();
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&TypeInfo__System__Int32);
      cRam_? = '\x01';
    }
    unaff_ESI.m_Index = this_02.m_Index;
    if ((CollectTheItemCollectable__Class *)this_02.m_Index ==
        (CollectTheItemCollectable__Class *)0x0) {
code_?:
      this = (CollectTheItem *)pCVar1;
      func_?();
      pCVar4 = extraout_EDX;
      this_02.m_Index = unaff_ESI.m_Index;
code_?:
      uVar5 = func_?(pCVar4,unaff_EDI);
      unaff_ESI.m_Index = (int32_t)this;
code_?:
      this = (CollectTheItem *)unaff_ESI.m_Index;
      func_?(uVar5);
      pCVar6 = extraout_EDX_00;
      unaff_ESI.m_Index = (int32_t)this;
code_?:
      this = (CollectTheItem *)unaff_ESI.m_Index;
      func_?(pCVar6,this_02.m_Index);
      unaff_ESI.m_Index = this_02.m_Index;
code_?:
      func_?(unaff_ESI.m_Index,this);
      this_02.m_Index = (int32_t)unaff_EDI;
    }
    else {
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         this_02.m_Index,(Object *)unaff_EDI,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar7 != 0) {
        pCStack_8 = (CollectTheItemDropOff__Class *)
                    MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        TVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_02.m_Index,(Object *)unaff_EDI,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        this_01 = pCStack_8;
        uVar5 = CONCAT44(TypeInfo__System__Int32,TVar9.m_Index);
        unaff_EDI = pCStack_8;
        if ((pCStack_8 == (CollectTheItemDropOff__Class *)0x0) || (TVar9.m_Index == 0))
        goto code_?;
        unaff_ESI.m_Index = (int32_t)this;
        if (*(Il2CppClass **)(*(int *)TVar9.m_Index + 0x20) ==
            (TypeInfo__System__Int32->_0).element_class) {
          VStack_3.z = (float)&UNK_?;
          pCStack_8 = (CollectTheItemDropOff__Class *)TVar9;
          piVar10 = (int32_t *)func_?();
          pCVar4 = (CollectTheItemDropOff *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             ((MVWorldObjectClientManager *)this_01,*piVar10,(MethodInfo *)0x0);
          if ((pCVar4 == (CollectTheItemDropOff *)0x0) ||
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
          unaff_EDI = TypeInfo__CollectTheItemDropOff;
          if (((((TypeInfo__CollectTheItemDropOff->_1).naturalAligment <=
                 (pCVar4->klass->_1).naturalAligment) &&
               ((CollectTheItemDropOff__Class *)
                (pCVar4->klass->_1).typeHierarchy
                [(TypeInfo__CollectTheItemDropOff->_1).naturalAligment - 1] ==
                TypeInfo__CollectTheItemDropOff)) &&
              ((this->fields).dropOff = pCVar4, unaff_EDI = TypeInfo__CollectTheItemDropOff,
              (TypeInfo__CollectTheItemDropOff->_1).naturalAligment <=
              (pCVar4->klass->_1).naturalAligment)) &&
             ((CollectTheItemDropOff__Class *)
              (pCVar4->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemDropOff->_1).naturalAligment - 1] ==
              TypeInfo__CollectTheItemDropOff)) goto code_?;
          goto code_?;
        }
        goto code_?;
      }
code_?:
      (this->fields).dropOff = (CollectTheItemDropOff *)0x0;
      pCVar4 = (CollectTheItemDropOff *)0x0;
code_?:
      func_?(&(this->fields).dropOff,pCVar4);
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
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         this_02.m_Index,(Object *)unaff_EDI,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar7 != 0) {
        unaff_ESI.m_Index =
             (int32_t)MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        TVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_02.m_Index,(Object *)unaff_EDI,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        uVar5 = CONCAT44(TypeInfo__System__Int32,TVar9.m_Index);
        pCVar1 = (CollectTheItemCollectable__Class *)unaff_ESI.m_Index;
        if (((CollectTheItemCollectable__Class *)unaff_ESI.m_Index ==
             (CollectTheItemCollectable__Class *)0x0) || (TVar9.m_Index == 0))
        goto code_?;
        this_02.m_Index = unaff_ESI.m_Index;
        if (*(Il2CppClass **)(*(int *)TVar9.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar10 = (int32_t *)func_?(TVar9.m_Index);
        pCVar6 = (CollectTheItemCollectable *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            ((MVWorldObjectClientManager *)unaff_ESI.m_Index,*piVar10,
                             (MethodInfo *)0x0);
        if ((pCVar6 == (CollectTheItemCollectable *)0x0) ||
           ((((pCVar6->klass->_1).naturalAligment <
              (TypeInfo__CollectTheItemDropOff->_1).naturalAligment ||
             ((CollectTheItemDropOff__Class *)
              (pCVar6->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemDropOff->_1).naturalAligment - 1] !=
              TypeInfo__CollectTheItemDropOff)) &&
            (((pCVar6->klass->_1).naturalAligment <
              (TypeInfo__CollectTheItemCollectable->_1).naturalAligment ||
             ((CollectTheItemCollectable__Class *)
              (pCVar6->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemCollectable->_1).naturalAligment - 1] !=
              TypeInfo__CollectTheItemCollectable)))))) goto code_?;
        unaff_EDI = (CollectTheItemDropOff__Class *)pCVar6->klass;
        this_02.m_Index = (int32_t)TypeInfo__CollectTheItemCollectable;
        if (((TypeInfo__CollectTheItemCollectable->_1).naturalAligment <=
             (unaff_EDI->_1).naturalAligment) &&
           ((CollectTheItemCollectable__Class *)
            (unaff_EDI->_1).typeHierarchy
            [(TypeInfo__CollectTheItemCollectable->_1).naturalAligment - 1] ==
            TypeInfo__CollectTheItemCollectable)) {
          (this->fields).collectable = pCVar6;
          unaff_EDI = (CollectTheItemDropOff__Class *)pCVar6->klass;
          this_02.m_Index = (int32_t)TypeInfo__CollectTheItemCollectable;
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
      pCVar6 = (CollectTheItemCollectable *)0x0;
code_?:
      func_?(&(this->fields).collectable,pCVar6);
      if ((this->fields).dropOff != (CollectTheItemDropOff *)0x0) {
        unaff_EDI = (CollectTheItemDropOff__Class *)(this->fields).dropOff;
        pDVar11 = (Delegate *)(unaff_EDI->_1).initializationExceptionGCHandle;
        pUVar12 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                 );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar12,(Object *)this,
                   MethodInfo__CollectTheItem__OnDropOffPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   ,(MethodInfo *)0x0);
        unaff_ESI.m_Index =
             (int32_t)mscorlib.dll::System::Delegate::Delegate_Combine
                                (pDVar11,(Delegate *)pUVar12,(MethodInfo *)0x0);
        this_02.m_Index =
             (int32_t)
             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
        ;
        if ((CollectTheItemCollectable__Class *)unaff_ESI.m_Index ==
            (CollectTheItemCollectable__Class *)0x0) {
          (unaff_EDI->_1).initializationExceptionGCHandle = 0;
          iVar13 = 0;
          this = (CollectTheItem *)unaff_EDI;
code_?:
          func_?(&(unaff_EDI->_1).initializationExceptionGCHandle,iVar13);
          pCVar14 = (controller->fields).objectPrefab;
          pCVar1 = (CollectTheItemCollectable__Class *)this;
          if (pCVar14 != (CollectTheItemLineObject *)0x0) {
            unaff_ESI.m_Index = (int32_t)(pCVar14->fields).lineRenderer;
            pCVar4 = (controller->fields).dropOff;
            if (((pCVar4 != (CollectTheItemDropOff *)0x0) &&
                (pTVar15 = (pCVar4->fields)._._._.transform, pTVar15 != (Transform *)0x0)) &&
               (pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    (&VStack_3,pTVar15,(MethodInfo *)0x0),
               (CollectTheItemCollectable__Class *)unaff_ESI.m_Index !=
               (CollectTheItemCollectable__Class *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                        ((LineRenderer *)unaff_ESI.m_Index,0,*pVVar16,(MethodInfo *)0x0);
              pCVar4 = (controller->fields).dropOff;
              if (pCVar4 != (CollectTheItemDropOff *)0x0) {
                (pCVar4->fields).controller = controller;
                func_?(&(pCVar4->fields).controller,controller);
                goto code_?;
              }
            }
          }
          goto code_?;
        }
        uVar17 = func_?(unaff_ESI.m_Index,
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                );
        if (uVar17 == 0) goto code_?;
        (unaff_EDI->_1).initializationExceptionGCHandle = uVar17;
        this = (CollectTheItem *)
               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
        ;
        iVar13 = func_?(unaff_ESI.m_Index,
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                );
        if (iVar13 != 0) goto code_?;
        goto code_?;
      }
code_?:
      if ((controller->fields).collectable == (CollectTheItemCollectable *)0x0) {
        return;
      }
      unaff_EDI = (CollectTheItemDropOff__Class *)(controller->fields).collectable;
      pDVar11 = (Delegate *)(unaff_EDI->_1).initializationExceptionGCHandle;
      pUVar12 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar12,(Object *)controller,
                 MethodInfo__CollectTheItem__OnCollectablePositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      unaff_ESI.m_Index =
           (int32_t)mscorlib.dll::System::Delegate::Delegate_Combine
                              (pDVar11,(Delegate *)pUVar12,(MethodInfo *)0x0);
      this_02.m_Index =
           (int32_t)
           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      if ((CollectTheItemCollectable__Class *)unaff_ESI.m_Index ==
          (CollectTheItemCollectable__Class *)0x0) {
        (unaff_EDI->_1).initializationExceptionGCHandle = 0;
        iVar13 = 0;
        this = (CollectTheItem *)unaff_EDI;
code_?:
        func_?(&(unaff_EDI->_1).initializationExceptionGCHandle,iVar13);
        pCVar14 = (controller->fields).objectPrefab;
        pCVar1 = (CollectTheItemCollectable__Class *)this;
        if (pCVar14 != (CollectTheItemLineObject *)0x0) {
          unaff_ESI.m_Index = (int32_t)(pCVar14->fields).lineRenderer;
          pCVar6 = (controller->fields).collectable;
          if (((pCVar6 != (CollectTheItemCollectable *)0x0) &&
              (pTVar15 = (pCVar6->fields)._._._.transform, pTVar15 != (Transform *)0x0)) &&
             (pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_3,pTVar15,(MethodInfo *)0x0),
             (CollectTheItemCollectable__Class *)unaff_ESI.m_Index !=
             (CollectTheItemCollectable__Class *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                      ((LineRenderer *)unaff_ESI.m_Index,1,*pVVar16,(MethodInfo *)0x0);
            pCVar6 = (controller->fields).collectable;
            if (pCVar6 != (CollectTheItemCollectable *)0x0) {
              CollectTheItemCollectable::CollectTheItemCollectable_InitializeWithController
                        (pCVar6,controller,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
      uVar17 = func_?(unaff_ESI.m_Index,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
      if (uVar17 != 0) {
        (unaff_EDI->_1).initializationExceptionGCHandle = uVar17;
        this = (CollectTheItem *)
               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
        ;
        iVar13 = func_?(unaff_ESI.m_Index,
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                );
        if (iVar13 == 0) goto code_?;
        goto code_?;
      }
    }
code_?:
    func_?(unaff_ESI.m_Index,this_02.m_Index);
    pDVar2 = extraout_EDX_01;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    unaff_ESI.m_Index = *this_02.m_Index;
    pDVar2 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment <=
         (((CollectTheItemCollectable__Class *)unaff_ESI.m_Index)->_1).naturalAligment) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (((CollectTheItemCollectable__Class *)unaff_ESI.m_Index)->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
  }
  VStack_3.x = (float)&UNK_?;
  VStack_3.y = (float)this_02.m_Index;
  VStack_3.z = (float)pDVar2;
  func_?();
  pDVar2 = extraout_EDX_02;
code_?:
  func_?(unaff_ESI.m_Index,pDVar2);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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

