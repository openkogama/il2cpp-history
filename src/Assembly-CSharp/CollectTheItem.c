
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
  if ((in_stack_1->fields).hasInitializedReferences != 0) {
    return;
  }
  this_00 = (in_stack_1->fields)._._._._.data;
  (in_stack_1->fields).hasInitializedReferences = 1;
  if ((this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (unaff_EDI = (CollectTheItemCollectable__Class *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (this_00,(Object *)StringLiteral_BlueprintData,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), unaff_EDI == (CollectTheItemCollectable__Class *)0x0))
  goto code_?;
  pIVar2 = (unaff_EDI->_0).image;
  pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
  if ((*(byte *)&pIVar2[4].nameNoExt <
       (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       typeHierarchyDepth) ||
     (*(Dictionary_2_System_Object_System_Object___Class **)
       ((pIVar2[2].typeCount - 4) +
       (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth * 4) !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
  goto code_?;
  this_01 = (CollectTheItemCollectable__Class *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                       (Object *)StringLiteral_ChildrenMap,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  key = StringLiteral_CollectTheItemDropOff;
  if (this_01 == (CollectTheItemCollectable__Class *)0x0) {
    this_01 = (CollectTheItemCollectable__Class *)0x0;
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
    unaff_EBX = (CollectTheItemDropOff__Class *)key;
    unaff_EDI = this_01;
    if (this_01 == (CollectTheItemCollectable__Class *)0x0) goto code_?;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_01,
                       (Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar4 == 0) {
code_?:
      (in_stack_1->fields).dropOff = (CollectTheItemDropOff *)0x0;
      pCVar5 = (CollectTheItemDropOff *)0x0;
code_?:
      func_?(&(in_stack_1->fields).dropOff,pCVar5);
      unaff_EBX = (CollectTheItemDropOff__Class *)StringLiteral_CollectTheItemCollectable;
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
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_01,
                         (Object *)unaff_EBX,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar4 != 0) {
        unaff_EDI = (CollectTheItemCollectable__Class *)
                    MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)unaff_EBX
                            ,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar7 = CONCAT44(TypeInfo__System__Int32,pOVar6);
        if ((unaff_EDI == (CollectTheItemCollectable__Class *)0x0) || (pOVar6 == (Object *)0x0))
        goto code_?;
        if ((pOVar6->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar8 = (int32_t *)func_?(pOVar6);
        pCVar9 = (CollectTheItemCollectable *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            ((MVWorldObjectClientManager *)unaff_EDI,*piVar8,(MethodInfo *)0x0);
        if ((pCVar9 == (CollectTheItemCollectable *)0x0) ||
           ((((pCVar9->klass->_1).typeHierarchyDepth <
              (TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth ||
             ((CollectTheItemDropOff__Class *)
              (pCVar9->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth - 1] !=
              TypeInfo__CollectTheItemDropOff)) &&
            (((pCVar9->klass->_1).typeHierarchyDepth <
              (TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth ||
             ((CollectTheItemCollectable__Class *)
              (pCVar9->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth - 1] !=
              TypeInfo__CollectTheItemCollectable)))))) goto code_?;
        unaff_EDI = TypeInfo__CollectTheItemCollectable;
        if (((TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth <=
             (pCVar9->klass->_1).typeHierarchyDepth) &&
           ((CollectTheItemCollectable__Class *)
            (pCVar9->klass->_1).typeHierarchy
            [(TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth - 1] ==
            TypeInfo__CollectTheItemCollectable)) {
          (in_stack_1->fields).collectable = pCVar9;
          unaff_EDI = TypeInfo__CollectTheItemCollectable;
          if (((TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth <=
               (pCVar9->klass->_1).typeHierarchyDepth) &&
             ((CollectTheItemCollectable__Class *)
              (pCVar9->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth - 1] ==
              TypeInfo__CollectTheItemCollectable)) goto code_?;
        }
        goto code_?;
      }
code_?:
      (in_stack_1->fields).collectable = (CollectTheItemCollectable *)0x0;
      pCVar9 = (CollectTheItemCollectable *)0x0;
code_?:
      func_?(&(in_stack_1->fields).collectable,pCVar9);
      if ((in_stack_1->fields).dropOff != (CollectTheItemDropOff *)0x0) {
        unaff_EBX = (CollectTheItemDropOff__Class *)(in_stack_1->fields).dropOff;
        pDVar10 = (Delegate *)(unaff_EBX->_1).initializationExceptionGCHandle;
        pUVar11 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                 );
        unaff_EDI = (CollectTheItemCollectable__Class *)0x0;
        if (pUVar11 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar11,(Object *)in_stack_1,
                   MethodInfo__CollectTheItem__OnDropOffPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   ,(MethodInfo *)0x0);
        unaff_EDI = (CollectTheItemCollectable__Class *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              (pDVar10,(Delegate *)pUVar11,(MethodInfo *)0x0);
        if (unaff_EDI != (CollectTheItemCollectable__Class *)0x0) {
          uVar12 = func_?();
          if (uVar12 != 0) {
            (unaff_EBX->_1).initializationExceptionGCHandle = uVar12;
            iVar13 = func_?();
            if (iVar13 != 0) goto code_?;
          }
          goto code_?;
        }
        (unaff_EBX->_1).initializationExceptionGCHandle = 0;
code_?:
        func_?();
        pCVar14 = (in_stack_1->fields).objectPrefab;
        if (pCVar14 != (CollectTheItemLineObject *)0x0) {
          unaff_EDI = (CollectTheItemCollectable__Class *)(pCVar14->fields).lineRenderer;
          pCVar5 = (in_stack_1->fields).dropOff;
          if (((pCVar5 != (CollectTheItemDropOff *)0x0) &&
              (pTVar15 = (pCVar5->fields)._._._.transform, pTVar15 != (Transform *)0x0)) &&
             (pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xfffffff4,pTVar15,(MethodInfo *)0x0),
             unaff_EDI != (CollectTheItemCollectable__Class *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                      ((LineRenderer *)unaff_EDI,0,*pVVar16,(MethodInfo *)0x0);
            pCVar5 = (in_stack_1->fields).dropOff;
            if (pCVar5 != (CollectTheItemDropOff *)0x0) {
              (pCVar5->fields).controller = in_stack_1;
              func_?(&(pCVar5->fields).controller,in_stack_1);
              goto code_?;
            }
          }
        }
code_?:
        func_?();
        pCVar5 = extraout_EDX;
code_?:
        uVar7 = func_?(pCVar5,unaff_EBX);
        goto code_?;
      }
code_?:
      if ((in_stack_1->fields).collectable == (CollectTheItemCollectable *)0x0) {
        return;
      }
      unaff_EBX = (CollectTheItemDropOff__Class *)(in_stack_1->fields).collectable;
      pDVar10 = (Delegate *)(unaff_EBX->_1).initializationExceptionGCHandle;
      pUVar11 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
      unaff_EDI = (CollectTheItemCollectable__Class *)0x0;
      if (pUVar11 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar11,(Object *)in_stack_1,
                 MethodInfo__CollectTheItem__OnCollectablePositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      unaff_EDI = (CollectTheItemCollectable__Class *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar10,(Delegate *)pUVar11,(MethodInfo *)0x0);
      if (unaff_EDI == (CollectTheItemCollectable__Class *)0x0) {
        (unaff_EBX->_1).initializationExceptionGCHandle = 0;
code_?:
        func_?();
        pCVar14 = (in_stack_1->fields).objectPrefab;
        if (pCVar14 != (CollectTheItemLineObject *)0x0) {
          unaff_EDI = (CollectTheItemCollectable__Class *)(pCVar14->fields).lineRenderer;
          pCVar9 = (in_stack_1->fields).collectable;
          if (((pCVar9 != (CollectTheItemCollectable *)0x0) &&
              (pTVar15 = (pCVar9->fields)._._._.transform, pTVar15 != (Transform *)0x0)) &&
             (pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xfffffff4,pTVar15,(MethodInfo *)0x0),
             unaff_EDI != (CollectTheItemCollectable__Class *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                      ((LineRenderer *)unaff_EDI,1,*pVVar16,(MethodInfo *)0x0);
            pCVar9 = (in_stack_1->fields).collectable;
            if (pCVar9 != (CollectTheItemCollectable *)0x0) {
              CollectTheItemCollectable::CollectTheItemCollectable_InitializeWithController
                        (pCVar9,in_stack_1,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
      uVar12 = func_?();
      if (uVar12 != 0) {
        (unaff_EBX->_1).initializationExceptionGCHandle = uVar12;
        iVar13 = func_?();
        if (iVar13 != 0) goto code_?;
      }
    }
    else {
      unaff_EBX = (CollectTheItemDropOff__Class *)
                  MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar7 = CONCAT44(TypeInfo__System__Int32,pOVar6);
      if ((unaff_EBX == (CollectTheItemDropOff__Class *)0x0) || (pOVar6 == (Object *)0x0))
      goto code_?;
      if ((pOVar6->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar8 = (int32_t *)func_?();
        pCVar5 = (CollectTheItemDropOff *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           ((MVWorldObjectClientManager *)unaff_EBX,*piVar8,(MethodInfo *)0x0);
        if ((pCVar5 == (CollectTheItemDropOff *)0x0) ||
           ((((pCVar5->klass->_1).typeHierarchyDepth <
              (TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth ||
             ((CollectTheItemDropOff__Class *)
              (pCVar5->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth - 1] !=
              TypeInfo__CollectTheItemDropOff)) &&
            (((pCVar5->klass->_1).typeHierarchyDepth <
              (TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth ||
             ((CollectTheItemCollectable__Class *)
              (pCVar5->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth - 1] !=
              TypeInfo__CollectTheItemCollectable)))))) goto code_?;
        unaff_EBX = TypeInfo__CollectTheItemDropOff;
        if (((((TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth <=
               (pCVar5->klass->_1).typeHierarchyDepth) &&
             ((CollectTheItemDropOff__Class *)
              (pCVar5->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth - 1] ==
              TypeInfo__CollectTheItemDropOff)) &&
            ((in_stack_1->fields).dropOff = pCVar5,
            unaff_EBX = TypeInfo__CollectTheItemDropOff,
            (TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth <=
            (pCVar5->klass->_1).typeHierarchyDepth)) &&
           ((CollectTheItemDropOff__Class *)
            (pCVar5->klass->_1).typeHierarchy
            [(TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth - 1] ==
            TypeInfo__CollectTheItemDropOff)) goto code_?;
        goto code_?;
      }
code_?:
      func_?(uVar7);
      pCVar9 = extraout_EDX_00;
code_?:
      func_?(pCVar9,unaff_EDI);
    }
code_?:
    func_?();
  }
  else {
    unaff_EDI = (CollectTheItemCollectable__Class *)(this_01->_0).image;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth <= (unaff_EDI->_1).typeHierarchyDepth) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (unaff_EDI->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
  }
  func_?();
  pDVar3 = extraout_EDX_01;
code_?:
  func_?(unaff_EDI,pDVar3);
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
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)table,(Object *)id,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return (MVWorldObjectClient *)0x0;
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (table,(Object *)id,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((this_00 != (MVWorldObjectClientManager *)0x0) && (pOVar2 != (Object *)0x0)) {
      if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar3 = (int32_t *)func_?();
        pMVar4 = (MVWorldObjectClient *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,*piVar3,(MethodInfo *)0x0);
        if (pMVar4 == (MVWorldObjectClient *)0x0) {
          return (MVWorldObjectClient *)0x0;
        }
        if (((pMVar4->klass->_1).typeHierarchyDepth <
             (TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth) ||
           ((CollectTheItemDropOff__Class *)
            (pMVar4->klass->_1).typeHierarchy
            [(TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth - 1] !=
            TypeInfo__CollectTheItemDropOff)) {
          if ((pMVar4->klass->_1).typeHierarchyDepth <
              (TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth) {
            return (MVWorldObjectClient *)0x0;
          }
          if ((CollectTheItemCollectable__Class *)
              (pMVar4->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth - 1] !=
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
  this_00 = (this->fields)._._._._.data;
  (this->fields).hasInitializedReferences = 1;
  a = (CollectTheItemDropOff__Class *)this;
  if ((this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (unaff_EDI = (CollectTheItemDropOff__Class *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (this_00,(Object *)StringLiteral_BlueprintData,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), unaff_EDI == (CollectTheItemDropOff__Class *)0x0))
  goto code_?;
  pIVar1 = (unaff_EDI->_0).image;
  pDVar2 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
  if ((*(byte *)&pIVar1[4].nameNoExt <
       (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       typeHierarchyDepth) ||
     (*(Dictionary_2_System_Object_System_Object___Class **)
       ((pIVar1[2].typeCount - 4) +
       (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth * 4) !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
  goto code_?;
  this_02 = (CollectTheItemDropOff__Class *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                       (Object *)StringLiteral_ChildrenMap,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  unaff_EBX = (CollectTheItemDropOff__Class *)StringLiteral_CollectTheItemDropOff;
  if (this_02 == (CollectTheItemDropOff__Class *)0x0) {
    this_02 = (CollectTheItemDropOff__Class *)0x0;
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
    unaff_EDI = this_02;
    if (this_02 == (CollectTheItemDropOff__Class *)0x0) goto code_?;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_02,
                       (Object *)unaff_EBX,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar4 == 0) {
code_?:
      (this->fields).dropOff = (CollectTheItemDropOff *)0x0;
      pCVar5 = (CollectTheItemDropOff *)0x0;
code_?:
      func_?(&(this->fields).dropOff,pCVar5);
      unaff_EBX = (CollectTheItemDropOff__Class *)StringLiteral_CollectTheItemCollectable;
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
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_02,
                         (Object *)unaff_EBX,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar4 != 0) {
        unaff_EDI = (CollectTheItemDropOff__Class *)
                    MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)unaff_EBX
                            ,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar7 = CONCAT44(TypeInfo__System__Int32,pOVar6);
        a = unaff_EDI;
        if ((unaff_EDI == (CollectTheItemDropOff__Class *)0x0) || (pOVar6 == (Object *)0x0))
        goto code_?;
        this_02 = unaff_EDI;
        if ((pOVar6->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar8 = (int32_t *)func_?(pOVar6);
        pCVar9 = (CollectTheItemCollectable *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            ((MVWorldObjectClientManager *)unaff_EDI,*piVar8,(MethodInfo *)0x0);
        if ((pCVar9 == (CollectTheItemCollectable *)0x0) ||
           ((((pCVar9->klass->_1).typeHierarchyDepth <
              (TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth ||
             ((CollectTheItemDropOff__Class *)
              (pCVar9->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth - 1] !=
              TypeInfo__CollectTheItemDropOff)) &&
            (((pCVar9->klass->_1).typeHierarchyDepth <
              (TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth ||
             ((CollectTheItemCollectable__Class *)
              (pCVar9->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth - 1] !=
              TypeInfo__CollectTheItemCollectable)))))) goto code_?;
        unaff_EBX = (CollectTheItemDropOff__Class *)pCVar9->klass;
        this_02 = (CollectTheItemDropOff__Class *)TypeInfo__CollectTheItemCollectable;
        if (((TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth <=
             (unaff_EBX->_1).typeHierarchyDepth) &&
           ((CollectTheItemCollectable__Class *)
            (unaff_EBX->_1).typeHierarchy
            [(TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth - 1] ==
            TypeInfo__CollectTheItemCollectable)) {
          (this->fields).collectable = pCVar9;
          unaff_EBX = (CollectTheItemDropOff__Class *)pCVar9->klass;
          this_02 = (CollectTheItemDropOff__Class *)TypeInfo__CollectTheItemCollectable;
          if (((TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth <=
               (unaff_EBX->_1).typeHierarchyDepth) &&
             ((CollectTheItemCollectable__Class *)
              (unaff_EBX->_1).typeHierarchy
              [(TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth - 1] ==
              TypeInfo__CollectTheItemCollectable)) goto code_?;
        }
        goto code_?;
      }
code_?:
      (this->fields).collectable = (CollectTheItemCollectable *)0x0;
      pCVar9 = (CollectTheItemCollectable *)0x0;
code_?:
      func_?(&(this->fields).collectable,pCVar9);
      if ((this->fields).dropOff != (CollectTheItemDropOff *)0x0) {
        unaff_EBX = (CollectTheItemDropOff__Class *)(this->fields).dropOff;
        a = (CollectTheItemDropOff__Class *)(unaff_EBX->_1).initializationExceptionGCHandle;
        pUVar10 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                 );
        unaff_EDI = (CollectTheItemDropOff__Class *)0x0;
        if (pUVar10 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar10,(Object *)this,
                   MethodInfo__CollectTheItem__OnDropOffPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   ,(MethodInfo *)0x0);
        unaff_EDI = (CollectTheItemDropOff__Class *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a,(Delegate *)pUVar10,(MethodInfo *)0x0);
        this = (CollectTheItem *)
               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
        ;
        if (unaff_EDI != (CollectTheItemDropOff__Class *)0x0) {
          pCStack_11 = (CollectTheItemDropOff__Class *)
                      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
          ;
          VStack_3.y = (float)&UNK_?;
          VStack_3.z = (float)unaff_EDI;
          uVar12 = func_?();
          if (uVar12 != 0) {
            (unaff_EBX->_1).initializationExceptionGCHandle = uVar12;
            pCStack_11 = (CollectTheItemDropOff__Class *)
                        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
            ;
            this = (CollectTheItem *)
                   TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
            ;
            VStack_3.y = (float)&UNK_?;
            VStack_3.z = (float)unaff_EDI;
            pCStack_11 = (CollectTheItemDropOff__Class *)func_?();
            if (pCStack_11 != (CollectTheItemDropOff__Class *)0x0) goto code_?;
          }
          goto code_?;
        }
        (unaff_EBX->_1).initializationExceptionGCHandle = 0;
        pCStack_11 = (CollectTheItemDropOff__Class *)0x0;
code_?:
        VStack_3.z = (float)&(unaff_EBX->_1).initializationExceptionGCHandle;
        VStack_3.y = (float)&UNK_?;
        func_?();
        pCVar13 = (controller->fields).objectPrefab;
        a = (CollectTheItemDropOff__Class *)this;
        if (pCVar13 != (CollectTheItemLineObject *)0x0) {
          unaff_EDI = (CollectTheItemDropOff__Class *)(pCVar13->fields).lineRenderer;
          pCVar5 = (controller->fields).dropOff;
          if (((pCVar5 != (CollectTheItemDropOff *)0x0) &&
              (pTVar14 = (pCVar5->fields)._._._.transform, pTVar14 != (Transform *)0x0)) &&
             (pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_3,pTVar14,(MethodInfo *)0x0),
             unaff_EDI != (CollectTheItemDropOff__Class *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                      ((LineRenderer *)unaff_EDI,0,*pVVar15,(MethodInfo *)0x0);
            pCVar5 = (controller->fields).dropOff;
            if (pCVar5 != (CollectTheItemDropOff *)0x0) {
              (pCVar5->fields).controller = controller;
              func_?(&(pCVar5->fields).controller,controller);
              goto code_?;
            }
          }
        }
code_?:
        this = (CollectTheItem *)a;
        func_?();
        pCVar5 = extraout_EDX;
        this_02 = unaff_EDI;
code_?:
        uVar7 = func_?(pCVar5,unaff_EBX);
        unaff_EDI = (CollectTheItemDropOff__Class *)this;
        goto code_?;
      }
code_?:
      if ((controller->fields).collectable == (CollectTheItemCollectable *)0x0) {
        return;
      }
      unaff_EBX = (CollectTheItemDropOff__Class *)(controller->fields).collectable;
      a = (CollectTheItemDropOff__Class *)(unaff_EBX->_1).initializationExceptionGCHandle;
      pUVar10 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
      unaff_EDI = (CollectTheItemDropOff__Class *)0x0;
      if (pUVar10 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar10,(Object *)controller,
                 MethodInfo__CollectTheItem__OnCollectablePositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      unaff_EDI = (CollectTheItemDropOff__Class *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)a,(Delegate *)pUVar10,(MethodInfo *)0x0);
      this = (CollectTheItem *)
             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      if (unaff_EDI == (CollectTheItemDropOff__Class *)0x0) {
        (unaff_EBX->_1).initializationExceptionGCHandle = 0;
        pCStack_11 = (CollectTheItemDropOff__Class *)0x0;
code_?:
        VStack_3.z = (float)&(unaff_EBX->_1).initializationExceptionGCHandle;
        VStack_3.y = (float)&UNK_?;
        func_?();
        pCVar13 = (controller->fields).objectPrefab;
        a = (CollectTheItemDropOff__Class *)this;
        if (pCVar13 != (CollectTheItemLineObject *)0x0) {
          unaff_EDI = (CollectTheItemDropOff__Class *)(pCVar13->fields).lineRenderer;
          pCVar9 = (controller->fields).collectable;
          if (((pCVar9 != (CollectTheItemCollectable *)0x0) &&
              (pTVar14 = (pCVar9->fields)._._._.transform, pTVar14 != (Transform *)0x0)) &&
             (pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_3,pTVar14,(MethodInfo *)0x0),
             unaff_EDI != (CollectTheItemDropOff__Class *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                      ((LineRenderer *)unaff_EDI,1,*pVVar15,(MethodInfo *)0x0);
            pCVar9 = (controller->fields).collectable;
            if (pCVar9 != (CollectTheItemCollectable *)0x0) {
              CollectTheItemCollectable::CollectTheItemCollectable_InitializeWithController
                        (pCVar9,controller,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
      pCStack_11 = (CollectTheItemDropOff__Class *)
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      VStack_3.y = (float)&UNK_?;
      VStack_3.z = (float)unaff_EDI;
      uVar12 = func_?();
      if (uVar12 != 0) {
        (unaff_EBX->_1).initializationExceptionGCHandle = uVar12;
        pCStack_11 = (CollectTheItemDropOff__Class *)
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
        ;
        this = (CollectTheItem *)
               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
        ;
        VStack_3.y = (float)&UNK_?;
        VStack_3.z = (float)unaff_EDI;
        pCStack_11 = (CollectTheItemDropOff__Class *)func_?();
        if (pCStack_11 != (CollectTheItemDropOff__Class *)0x0) goto code_?;
      }
    }
    else {
      pCStack_11 = (CollectTheItemDropOff__Class *)
                  MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      pCVar16 = (CollectTheItemDropOff__Class *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)unaff_EBX,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      this_01 = pCStack_11;
      uVar7 = CONCAT44(TypeInfo__System__Int32,pCVar16);
      unaff_EBX = pCStack_11;
      if ((pCStack_11 == (CollectTheItemDropOff__Class *)0x0) ||
         (pCVar16 == (CollectTheItemDropOff__Class *)0x0)) goto code_?;
      unaff_EDI = (CollectTheItemDropOff__Class *)this;
      if ((Il2CppClass *)((pCVar16->_0).image)->codeGenModule ==
          (TypeInfo__System__Int32->_0).element_class) {
        VStack_3.z = (float)&UNK_?;
        pCStack_11 = pCVar16;
        piVar8 = (int32_t *)func_?();
        pCVar5 = (CollectTheItemDropOff *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           ((MVWorldObjectClientManager *)this_01,*piVar8,(MethodInfo *)0x0);
        if ((pCVar5 == (CollectTheItemDropOff *)0x0) ||
           ((((pCVar5->klass->_1).typeHierarchyDepth <
              (TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth ||
             ((CollectTheItemDropOff__Class *)
              (pCVar5->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth - 1] !=
              TypeInfo__CollectTheItemDropOff)) &&
            (((pCVar5->klass->_1).typeHierarchyDepth <
              (TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth ||
             ((CollectTheItemCollectable__Class *)
              (pCVar5->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth - 1] !=
              TypeInfo__CollectTheItemCollectable)))))) goto code_?;
        unaff_EBX = TypeInfo__CollectTheItemDropOff;
        if (((((TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth <=
               (pCVar5->klass->_1).typeHierarchyDepth) &&
             ((CollectTheItemDropOff__Class *)
              (pCVar5->klass->_1).typeHierarchy
              [(TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth - 1] ==
              TypeInfo__CollectTheItemDropOff)) &&
            ((this->fields).dropOff = pCVar5, unaff_EBX = TypeInfo__CollectTheItemDropOff,
            (TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth <=
            (pCVar5->klass->_1).typeHierarchyDepth)) &&
           ((CollectTheItemDropOff__Class *)
            (pCVar5->klass->_1).typeHierarchy
            [(TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth - 1] ==
            TypeInfo__CollectTheItemDropOff)) goto code_?;
        goto code_?;
      }
code_?:
      this = (CollectTheItem *)unaff_EDI;
      func_?(uVar7);
      pCVar9 = extraout_EDX_00;
      unaff_EDI = (CollectTheItemDropOff__Class *)this;
code_?:
      this = (CollectTheItem *)unaff_EDI;
      func_?(pCVar9,this_02);
      unaff_EDI = this_02;
    }
code_?:
    pCStack_11 = (CollectTheItemDropOff__Class *)this;
    VStack_3.y = (float)&UNK_?;
    VStack_3.z = (float)unaff_EDI;
    func_?();
    pDVar2 = extraout_EDX_01;
    this_02 = unaff_EBX;
  }
  else {
    unaff_EDI = (CollectTheItemDropOff__Class *)(this_02->_0).image;
    pDVar2 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth <= (unaff_EDI->_1).typeHierarchyDepth) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (unaff_EDI->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
  }
  VStack_3.x = (float)&UNK_?;
  VStack_3.y = (float)this_02;
  VStack_3.z = (float)pDVar2;
  func_?();
  pDVar2 = extraout_EDX_02;
code_?:
  func_?(unaff_EDI,pDVar2);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
    if (((TypeInfo__CollectTheItemLineObject->_1).typeHierarchyDepth <=
         (((ObjectPrefab__Class *)pCVar2->klass)->_1).typeHierarchyDepth) &&
       ((((ObjectPrefab__Class *)pCVar2->klass)->_1).typeHierarchy
        [(TypeInfo__CollectTheItemLineObject->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__CollectTheItemLineObject)) {
      (this->fields).objectPrefab = pCVar2;
      if (((TypeInfo__CollectTheItemLineObject->_1).typeHierarchyDepth <=
           (((ObjectPrefab__Class *)pCVar2->klass)->_1).typeHierarchyDepth) &&
         ((((ObjectPrefab__Class *)pCVar2->klass)->_1).typeHierarchy
          [(TypeInfo__CollectTheItemLineObject->_1).typeHierarchyDepth - 1] ==
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


/* Void set_WoKeyInstance(Int32) */

void Assembly-CSharp.dll::CollectTheItem::CollectTheItem_set_WoKeyInstance
               (CollectTheItem *this,int32_t value,MethodInfo *method)

{
  (this->fields)._WoKeyInstance_k__BackingField = value;
  return;
}

