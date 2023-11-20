
/* Void AddWinnerConditionToNode(WinningCondition, WinningCondition) */

void MVWorldObject.dll::WinningConditionManager::WinningConditionManager_AddWinnerConditionToNode
               (WinningConditionManager *this,WinningCondition *parent,
               WinningCondition *winnerCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WinningConditionGroup);
    cRam_? = '\x01';
  }
  if (parent == (WinningCondition *)0x0) {
    uVar1 = func_?(&TypeInfo__System__Collections__Generic__KeyNotFoundException);
    this_01 = (KeyNotFoundException *)func_?(uVar1);
    pMVar2 = (MethodInfo *)0x0;
    pSVar3 = (String *)func_?(&StringLiteral_Could_not_find_winner_condition_);
    mscorlib.dll::System::Collections::Generic::KeyNotFoundException::KeyNotFoundException__ctor_1
              (this_01,pSVar3,pMVar2);
    uVar1 = func_?(&
                            MethodInfo__WinningConditionManager__AddWinnerConditionToNode_WinningCondition__WinningCondition_
                           );
    func_?(this_01,uVar1);
code_?:
    func_?();
    pWVar4 = extraout_EDX;
  }
  else {
    pWVar5 = parent->klass;
    if (((pWVar5->_1).naturalAligment < (TypeInfo__WinningConditionGroup->_1).naturalAligment) ||
       ((pWVar5->_1).typeHierarchy[(TypeInfo__WinningConditionGroup->_1).naturalAligment - 1] !=
        (Il2CppClass *)TypeInfo__WinningConditionGroup)) goto code_?;
    pWVar4 = TypeInfo__WinningConditionGroup;
    if (((TypeInfo__WinningConditionGroup->_1).naturalAligment <= (pWVar5->_1).naturalAligment) &&
       ((pWVar5->_1).typeHierarchy[(TypeInfo__WinningConditionGroup->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__WinningConditionGroup)) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Add_int__IWinningCondition_
                       );
        func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
        cRam_? = '\x01';
      }
      if ((winnerCondition != (WinningCondition *)0x0) &&
         (parent[1].klass != (WinningCondition__Class *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)parent[1].klass,
                   (winnerCondition->fields).id,(Object *)winnerCondition,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Add_int__IWinningCondition_
                  );
        this_00 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(TypeInfo__System__EventHandler<System::EventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_00,(Object *)parent,parent->klass[1]._0.name,(MethodInfo *)0x0);
        WinningCondition::WinningCondition_add_OnWinningConditionChanged
                  (winnerCondition,(EventHandler_1_EventArgs_ *)this_00,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?(parent,pWVar4);
code_?:
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_02 = (Exception *)func_?(uVar1);
  pMVar2 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(&StringLiteral_Type_not_winnerConditionGroup);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_02,pSVar3,pMVar2);
  uVar1 = func_?(&
                          MethodInfo__WinningConditionManager__AddWinnerConditionToNode_WinningCondition__WinningCondition_
                         );
  func_?(this_02,uVar1);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean CanPlaceWinningCondition[Object]() */

bool MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CanPlaceWinningCondition
               (WinningConditionManager *this,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__System__Func<IWinningCondition,_bool>);
    func_?(&MethodInfo__WinningConditionManager__IsTimeLimit_IWinningCondition_);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  pWVar1 = (WinningConditionGroup *)(this->fields).winnerConditionsRoot;
  if (pWVar1 != (WinningConditionGroup *)0x0) {
    iVar2 = WinningConditionGroup::WinningConditionGroup_get_Length(pWVar1,(MethodInfo *)0x0);
    if ((iVar2 < 1) ||
       (pOVar3 = WinningConditionManager_GetSingletonWinnerConditionByType
                           (this,((method->field7_0x1c).rgctx_data)->method),
       pOVar3 != (Object *)0x0)) {
      return 1;
    }
    pWVar1 = (WinningConditionGroup *)(this->fields).winnerConditionsRoot;
    if (pWVar1 != (WinningConditionGroup *)0x0) {
      iVar2 = WinningConditionGroup::WinningConditionGroup_get_Length(pWVar1,(MethodInfo *)0x0);
      if (iVar2 == 1) {
        pWVar4 = (this->fields).winnerConditionsRoot;
        this_00 = (Func_2_Object_Boolean_ *)func_?();
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  (this_00,(Object *)this,
                   MethodInfo__WinningConditionManager__IsTimeLimit_IWinningCondition_,
                   (MethodInfo *)0x0);
        if (pWVar4 == (WinningConditionOr *)0x0) goto code_?;
        cVar5 = (*(code *)(pWVar4->klass->vtable).Traverse_1.method)
                          (pWVar4,this_00,(pWVar4->klass->vtable).Reset_1.methodPtr);
        if (cVar5 != '\0') {
          return 1;
        }
      }
      return 0;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Object CreateInstance[Object](WinningCondition, Object[]) */

Object * MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateInstance
                   (WinningConditionManager *this,WinningCondition *parent,Object__Array *args,
                   MethodInfo *method)

{
  pMVar1 = method;
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__AddRange_System__Collections__Generic__IEnumerable<System::Object>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::Object>);
    if ((pMVar1->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(pMVar1);
    }
  }
  pWVar2 = this;
  method = (MethodInfo *)(this->fields).winnerConditionIDCounter;
  (this->fields).winnerConditionIDCounter = (int32_t)((int)&method->methodPointer + 1);
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<System::Object>__List__);
  if (this_00 !=
      (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)parent,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    this = (WinningConditionManager *)method;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,pOVar3,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)(pWVar2->fields).gameCounterManager,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__AddRange
              ((List_1_System_Object_ *)this_00,(IEnumerable_1_System_Object_ *)args,
               MethodInfo__System__Collections__Generic__List<System::Object>__AddRange_System__Collections__Generic__IEnumerable<System::Object>_
              );
    pMVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__);
    pMStack5 = ((pMVar1->field7_0x1c).rgctx_data)->method;
    pIStack6 = (&(pWVar2->klass->vtable).Finalize)[pMStack5->slot].methodPtr;
    puStack7 = (undefined *)func_?();
    pWStack8 = pWVar2;
    pMStack9 = pMVar4;
    pOVar3 = (Object *)(**(code **)((int)puStack7 + 4))();
    return pOVar3;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar10)();
  return pOVar3;
}


/* Object CreateWinnerCondition[Object](Object[]) */

Object * MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateWinnerCondition
                   (WinningConditionManager *this,Object__Array *args,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(method);
  }
  pOVar1 = WinningConditionManager_CreateWinnerConditionWithParent
                     (this,(WinningCondition *)(this->fields).winnerConditionsRoot,args,
                      ((method->field7_0x1c).rgctx_data)->method);
  return pOVar1;
}


/* Object CreateWinnerConditionWithParent[Object](WinningCondition, Object[]) */

Object * MVWorldObject.dll::WinningConditionManager::
         WinningConditionManager_CreateWinnerConditionWithParent
                   (WinningConditionManager *this,WinningCondition *parent,Object__Array *args,
                   MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__System__EventArgs);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  pOVar1 = WinningConditionManager_GetSingletonWinnerConditionByType
                     (this,((method->field7_0x1c).rgctx_data)->method);
  if (pOVar1 != (Object *)0x0) {
    cVar2 = (*(code *)pOVar1->klass[1]._1.cctor_finished_or_no_cctor)
                      (pOVar1,pOVar1->klass[1]._1.cctor_thread);
    if (cVar2 != '\0') {
      return pOVar1;
    }
  }
  pMVar3 = (method->field7_0x1c).rgctx_data[3].method;
  if ((pMVar3->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__AddRange_System__Collections__Generic__IEnumerable<System::Object>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::Object>);
    if ((pMVar3->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(pMVar3);
    }
  }
  (this->fields).winnerConditionIDCounter = (this->fields).winnerConditionIDCounter + 1;
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<System::Object>__List__);
  if (this_00 !=
      (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)parent,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,pOVar1,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)(this->fields).gameCounterManager,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__AddRange
              ((List_1_System_Object_ *)this_00,(IEnumerable_1_System_Object_ *)args,
               MethodInfo__System__Collections__Generic__List<System::Object>__AddRange_System__Collections__Generic__IEnumerable<System::Object>_
              );
    pMVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__);
    pMStack5 = ((pMVar3->field7_0x1c).rgctx_data)->method;
    pIStack6 = (&(this->klass->vtable).Finalize)[pMStack5->slot].methodPtr;
    puStack7 = (undefined *)func_?();
    pWStack8 = this;
    pMStack9 = pMVar4;
    parent_00 = (WinningCondition *)(**(code **)((int)puStack7 + 4))();
    WinningConditionManager_AddWinnerConditionToNode(this,parent_00,parent_00,(MethodInfo *)0x0);
    if ((this->fields).OnWinningConditionAddedOrRemoved != (EventHandler_1_EventArgs_ *)0x0) {
      pEStack10 = TypeInfo__System__EventArgs;
      pEVar11 = (this->fields).OnWinningConditionAddedOrRemoved;
      this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
      pWStack12 = this;
      pMStack5 = (pEVar11->fields)._._.method_code;
      (*(pEVar11->fields)._._.invoke_impl)();
    }
    return (Object *)parent_00;
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar13)();
  return pOVar1;
}


/* Object Factory[Object](Object[]) */

Object * MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Factory
                   (WinningConditionManager *this,Object__Array *args,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeRef__AllCollectiblesCollected);
    func_?(&TypeInfo__AllCollectiblesCollected);
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeRef__CaptureTheFlag);
    func_?(&TypeInfo__CaptureTheFlag);
    func_?(&TypeRef__FlagReached);
    func_?(&TypeInfo__FlagReached);
    func_?(&TypeInfo__GameStatCounterManager);
    func_?(&TypeInfo__GameStatCounterType);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeRef__KillLimit);
    func_?(&TypeInfo__KillLimit);
    func_?(&TypeRef__OculusKillLimit);
    func_?(&TypeInfo__OculusKillLimit);
    func_?(&TypeRef__TargetAssasinatedGroup);
    func_?(&TypeInfo__TargetAssasinatedGroup);
    func_?(&TypeRef__TargetAssasinated);
    func_?(&TypeInfo__TargetAssasinated);
    func_?(&TypeRef__TimeAttackFlagReached);
    func_?(&TypeInfo__TimeAttackFlagReached);
    func_?(&TypeRef__TimeLimit);
    func_?(&TypeInfo__TimeLimit);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeRef__WinningConditionAnd);
    func_?(&TypeInfo__WinningConditionAnd);
    func_?(&TypeRef__WinningConditionOr);
    func_?(&TypeInfo__WinningConditionOr);
    func_?(&TypeInfo__WinningConditionPresentStyle);
    func_?(&TypeInfo__WinningCondition);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  handle.value = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  pTVar1 = (TargetAssasinatedGroup__Class *)
           mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  pTVar2 = (TargetAssasinatedGroup__Class *)
           mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)TypeRef__AllCollectiblesCollected,(MethodInfo *)0x0);
  pIVar3 = TypeRef__WinningConditionOr;
  pTVar4 = (TargetAssasinated *)method;
  if (pTVar1 == pTVar2) {
    if (args != (Object__Array *)0x0) {
      if (((args->max_length == 0) || (handle.value = args->vector[0], args->max_length < 2)) ||
         (pTVar1 = (TargetAssasinatedGroup__Class *)args->vector[1], args->max_length < 3))
      goto code_?;
      gameCounterManager = (GameStatCounterManager *)args->vector[2];
      pTVar4 = (TargetAssasinated *)func_?(TypeInfo__AllCollectiblesCollected);
      if ((gameCounterManager != (GameStatCounterManager *)0x0) &&
         ((pIVar5 = (Int32__Class *)TypeInfo__GameStatCounterManager,
          (gameCounterManager->klass->_1).naturalAligment <
          (TypeInfo__GameStatCounterManager->_1).naturalAligment ||
          ((gameCounterManager->klass->_1).typeHierarchy
           [(TypeInfo__GameStatCounterManager->_1).naturalAligment - 1] !=
           (Il2CppClass *)TypeInfo__GameStatCounterManager)))) goto code_?;
      if (pTVar1 != (TargetAssasinatedGroup__Class *)0x0) {
        pIVar5 = TypeInfo__System__Int32;
        pTVar2 = pTVar1;
        if ((Il2CppClass *)((pTVar1->_0).image)->codeGenModule ==
            (TypeInfo__System__Int32->_0).element_class) {
          func_?(pTVar1);
          if ((handle.value == (Il2CppClass *)0x0) ||
             ((pTVar2 = (TargetAssasinatedGroup__Class *)((Il2CppClass *)handle.value)->image,
              pWVar6 = TypeInfo__WinningCondition,
              (TypeInfo__WinningCondition->_1).naturalAligment <= (pTVar2->_1).naturalAligment &&
              ((pTVar2->_1).typeHierarchy[(TypeInfo__WinningCondition->_1).naturalAligment - 1] ==
               (Il2CppClass *)TypeInfo__WinningCondition)))) {
            AllCollectiblesCollected::AllCollectiblesCollected__ctor
                      ((AllCollectiblesCollected *)pTVar4,handle.value,0,gameCounterManager,
                       (MethodInfo *)0x0);
            this_00 = pTVar4;
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
    goto code_?;
  }
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  pTVar2 = (TargetAssasinatedGroup__Class *)
           mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
  pIVar7 = TypeRef__WinningConditionAnd;
  if (pTVar1 == pTVar2) {
    handle.value = pIVar3;
    if (args == (Object__Array *)0x0) goto code_?;
    if (((((args->max_length == 0) ||
          (pIVar8 = (Il2CppClass *)args->vector[0], args->max_length < 2)) ||
         (gameCounterManager = (GameStatCounterManager *)args->vector[1], args->max_length < 3)) ||
        ((pTVar2 = (TargetAssasinatedGroup__Class *)args->vector[2], args->max_length < 4 ||
         (args->max_length < 5)))) || (handle.value = args->vector[4], args->max_length < 6))
    goto code_?;
    pTVar1 = (TargetAssasinatedGroup__Class *)args->vector[5];
    pWVar9 = TypeInfo__WinningConditionOr;
    pTVar4 = (TargetAssasinated *)func_?();
    if (pTVar1 == (TargetAssasinatedGroup__Class *)0x0) goto code_?;
    pWVar10 = TypeInfo__WinningConditionPresentStyle;
    if ((Il2CppClass *)((pTVar1->_0).image)->codeGenModule ==
        (TypeInfo__WinningConditionPresentStyle->_0).element_class) {
      puVar11 = (undefined1 *)func_?(pTVar1);
      uVar12 = *puVar11;
      if (handle.value == (Il2CppClass *)0x0) goto code_?;
      pGVar13 = TypeInfo__GameStatCounterType;
      if ((((WinningCondition__Class *)((Il2CppClass *)handle.value)->image)->_0).element_class ==
          (TypeInfo__GameStatCounterType->_0).element_class) {
        puVar14 = (undefined1 *)func_?(handle.value);
        uVar15 = *puVar14;
        if (pWVar9 == (WinningConditionOr__Class *)0x0) {
code_?:
          func_?();
          pTVar2 = pTVar1;
code_?:
          func_?(pTVar4,handle.value);
          pWVar6 = extraout_EDX;
          goto code_?;
        }
        pIVar5 = (Int32__Class *)TypeInfo__System__Boolean;
        if ((Il2CppClass *)((pWVar9->_0).image)->codeGenModule ==
            (TypeInfo__System__Boolean->_0).element_class) {
          func_?(pWVar9);
          if ((pTVar2 != (TargetAssasinatedGroup__Class *)0x0) &&
             ((handle.value = (pTVar2->_0).image, pGVar16 = TypeInfo__GameStatCounterManager,
              ((Il2CppClass *)handle.value)->naturalAligment <
              (TypeInfo__GameStatCounterManager->_1).naturalAligment ||
              (((Il2CppClass *)handle.value)->typeHierarchy
               [(TypeInfo__GameStatCounterManager->_1).naturalAligment - 1] !=
               (Il2CppClass *)TypeInfo__GameStatCounterManager)))) goto code_?;
          pTVar1 = pTVar2;
          if (gameCounterManager != (GameStatCounterManager *)0x0) {
            pIVar5 = TypeInfo__System__Int32;
            if ((gameCounterManager->klass->_0).element_class ==
                (TypeInfo__System__Int32->_0).element_class) {
              handle.value = pIVar8;
              piVar17 = (int32_t *)func_?();
              if ((handle.value == (Il2CppClass *)0x0) ||
                 ((pWVar6 = TypeInfo__WinningCondition,
                  (TypeInfo__WinningCondition->_1).naturalAligment <=
                  *(byte *)&((Il2CppClass *)handle.value)->image[4].assembly &&
                  (*(WinningCondition__Class **)
                    ((((Il2CppClass *)handle.value)->image[2].typeCount - 4) +
                    (uint)(TypeInfo__WinningCondition->_1).naturalAligment * 4) ==
                   TypeInfo__WinningCondition)))) {
                WinningConditionOr::WinningConditionOr__ctor
                          ((WinningConditionOr *)pTVar4,handle.value,*piVar17,
                           (GameStatCounterManager *)pTVar2,(bool)gameCounterManager,
                           CONCAT31((int3)((uint)puVar14 >> 8),uVar15),
                           CONCAT31((int3)((uint)puVar11 >> 8),uVar12),(MethodInfo *)0x0);
                this_00 = pTVar4;
                goto code_?;
              }
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar2 = (TargetAssasinatedGroup__Class *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar7,(MethodInfo *)0x0);
    handle.value = TypeRef__CaptureTheFlag;
    if (pTVar1 == pTVar2) {
      handle.value = pIVar7;
      if (args == (Object__Array *)0x0) goto code_?;
      if (((args->max_length == 0) || (handle.value = args->vector[0], args->max_length < 2)) ||
         (pTVar1 = (TargetAssasinatedGroup__Class *)args->vector[1], args->max_length < 3))
      goto code_?;
      gameCounterManager = (GameStatCounterManager *)args->vector[2];
      pTVar4 = (TargetAssasinated *)func_?(TypeInfo__WinningConditionAnd);
      if ((gameCounterManager == (GameStatCounterManager *)0x0) ||
         ((pIVar5 = (Int32__Class *)TypeInfo__GameStatCounterManager,
          (TypeInfo__GameStatCounterManager->_1).naturalAligment <=
          (gameCounterManager->klass->_1).naturalAligment &&
          ((gameCounterManager->klass->_1).typeHierarchy
           [(TypeInfo__GameStatCounterManager->_1).naturalAligment - 1] ==
           (Il2CppClass *)TypeInfo__GameStatCounterManager)))) {
        if (pTVar1 == (TargetAssasinatedGroup__Class *)0x0) goto code_?;
        pIVar5 = TypeInfo__System__Int32;
        pTVar2 = pTVar1;
        if ((Il2CppClass *)((pTVar1->_0).image)->codeGenModule !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar17 = (int32_t *)func_?(pTVar1);
        if ((handle.value == (Il2CppClass *)0x0) ||
           ((pTVar2 = (TargetAssasinatedGroup__Class *)((Il2CppClass *)handle.value)->image,
            pWVar6 = TypeInfo__WinningCondition,
            (TypeInfo__WinningCondition->_1).naturalAligment <= (pTVar2->_1).naturalAligment &&
            ((pTVar2->_1).typeHierarchy[(TypeInfo__WinningCondition->_1).naturalAligment - 1] ==
             (Il2CppClass *)TypeInfo__WinningCondition)))) {
          WinningConditionAnd::WinningConditionAnd__ctor
                    ((WinningConditionAnd *)pTVar4,handle.value,*piVar17,gameCounterManager,
                     (MethodInfo *)0x0);
          this_00 = pTVar4;
code_?:
          handle.value = (method->field7_0x1c).rgctx_data[1].klass;
          if (((uint)((Il2CppClass *)handle.value)->vtable[0].methodPtr & 0x100) == 0) {
            handle.value = (void *)func_?(handle.value);
          }
          if (this_00 == (TargetAssasinated *)0x0) {
            return (Object *)0x0;
          }
          goto code_?;
        }
code_?:
        func_?(handle.value,pWVar6);
        pIVar5 = extraout_ECX;
        goto code_?;
      }
    }
    else {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      pTVar2 = (TargetAssasinatedGroup__Class *)
               mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
      pIVar3 = TypeRef__FlagReached;
      if (pTVar1 == pTVar2) {
        if (args == (Object__Array *)0x0) goto code_?;
        if (((args->max_length == 0) || (handle.value = args->vector[0], args->max_length < 2)) ||
           (pTVar1 = (TargetAssasinatedGroup__Class *)args->vector[1], args->max_length < 3))
        goto code_?;
        gameCounterManager = (GameStatCounterManager *)args->vector[2];
        pTVar4 = (TargetAssasinated *)func_?(TypeInfo__CaptureTheFlag);
        if ((gameCounterManager != (GameStatCounterManager *)0x0) &&
           ((pIVar5 = (Int32__Class *)TypeInfo__GameStatCounterManager,
            (gameCounterManager->klass->_1).naturalAligment <
            (TypeInfo__GameStatCounterManager->_1).naturalAligment ||
            ((gameCounterManager->klass->_1).typeHierarchy
             [(TypeInfo__GameStatCounterManager->_1).naturalAligment - 1] !=
             (Il2CppClass *)TypeInfo__GameStatCounterManager)))) goto code_?;
        if (pTVar1 == (TargetAssasinatedGroup__Class *)0x0) goto code_?;
        pIVar5 = TypeInfo__System__Int32;
        pTVar2 = pTVar1;
        if ((Il2CppClass *)((pTVar1->_0).image)->codeGenModule ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar17 = (int32_t *)func_?(pTVar1);
          if ((handle.value == (Il2CppClass *)0x0) ||
             ((pTVar2 = (TargetAssasinatedGroup__Class *)((Il2CppClass *)handle.value)->image,
              pWVar6 = TypeInfo__WinningCondition,
              (TypeInfo__WinningCondition->_1).naturalAligment <= (pTVar2->_1).naturalAligment &&
              ((pTVar2->_1).typeHierarchy[(TypeInfo__WinningCondition->_1).naturalAligment - 1] ==
               (Il2CppClass *)TypeInfo__WinningCondition)))) {
            CaptureTheFlag::CaptureTheFlag__ctor
                      ((CaptureTheFlag *)pTVar4,handle.value,*piVar17,gameCounterManager,
                       (MethodInfo *)0x0);
            this_00 = pTVar4;
            goto code_?;
          }
          goto code_?;
        }
code_?:
        func_?(pTVar2,pIVar5);
        pGVar16 = extraout_EDX_00;
code_?:
        func_?(pTVar4,pGVar16);
        pWVar9 = extraout_ECX_00;
        pIVar5 = extraout_EDX_01;
        pTVar1 = pTVar2;
code_?:
        pIVar5 = (Int32__Class *)func_?(pWVar9,pIVar5);
        pTVar2 = pTVar1;
code_?:
        func_?(pTVar4,pIVar5);
        pIVar5 = extraout_ECX_01;
code_?:
        func_?(pTVar4,pIVar5);
        pGVar16 = extraout_EDX_02;
code_?:
        uVar18 = func_?(pTVar2,pGVar16);
      }
      else {
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        pTVar2 = (TargetAssasinatedGroup__Class *)
                 mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
        pIVar7 = TypeRef__KillLimit;
        if (pTVar1 == pTVar2) {
          handle.value = pIVar3;
          if (args != (Object__Array *)0x0) {
            if (((args->max_length == 0) || (handle.value = args->vector[0], args->max_length < 2))
               || (pTVar2 = (TargetAssasinatedGroup__Class *)args->vector[1], args->max_length < 3))
            goto code_?;
            pTVar4 = (TargetAssasinated *)args->vector[2];
            this_00 = (TargetAssasinated *)func_?(TypeInfo__FlagReached);
            if ((pTVar4 != (TargetAssasinated *)0x0) &&
               ((pGVar16 = TypeInfo__GameStatCounterManager,
                (((TargetAssasinatedGroup__Class *)pTVar4->klass)->_1).naturalAligment <
                (TypeInfo__GameStatCounterManager->_1).naturalAligment ||
                ((((TargetAssasinatedGroup__Class *)pTVar4->klass)->_1).typeHierarchy
                 [(TypeInfo__GameStatCounterManager->_1).naturalAligment - 1] !=
                 (Il2CppClass *)TypeInfo__GameStatCounterManager)))) goto code_?;
            pTVar1 = pTVar2;
            if (pTVar2 != (TargetAssasinatedGroup__Class *)0x0) {
              pIVar5 = TypeInfo__System__Int32;
              if ((Il2CppClass *)((pTVar2->_0).image)->codeGenModule ==
                  (TypeInfo__System__Int32->_0).element_class) {
                piVar17 = (int32_t *)func_?(pTVar2);
                if ((handle.value == (Il2CppClass *)0x0) ||
                   ((pTVar2 = (TargetAssasinatedGroup__Class *)((Il2CppClass *)handle.value)->image,
                    pWVar6 = TypeInfo__WinningCondition,
                    (TypeInfo__WinningCondition->_1).naturalAligment <= (pTVar2->_1).naturalAligment
                    && ((pTVar2->_1).typeHierarchy
                        [(TypeInfo__WinningCondition->_1).naturalAligment - 1] ==
                        (Il2CppClass *)TypeInfo__WinningCondition)))) {
                  FlagReached::FlagReached__ctor
                            ((FlagReached *)this_00,handle.value,*piVar17,
                             (GameStatCounterManager *)pTVar4,(MethodInfo *)0x0);
                  handle.value = (void *)func_?((method->field7_0x1c).rgctx_data,1);
                  if (this_00 == (TargetAssasinated *)0x0) {
                    return (Object *)0x0;
                  }
                  goto code_?;
                }
                goto code_?;
              }
              goto code_?;
            }
          }
          goto code_?;
        }
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        pTVar2 = (TargetAssasinatedGroup__Class *)
                 mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar7,(MethodInfo *)0x0);
        handle.value = TypeRef__OculusKillLimit;
        if (pTVar1 != pTVar2) {
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Type);
          }
          pTVar2 = (TargetAssasinatedGroup__Class *)
                   mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
          pIVar3 = TypeRef__TargetAssasinated;
          if (pTVar1 == pTVar2) {
            if (args != (Object__Array *)0x0) {
              if ((((args->max_length == 0) ||
                   (handle.value = args->vector[0], args->max_length < 2)) ||
                  (pTVar4 = (TargetAssasinated *)args->vector[1], args->max_length < 3)) ||
                 (pTVar2 = (TargetAssasinatedGroup__Class *)args->vector[2], args->max_length < 4))
              goto code_?;
              pOVar19 = args->vector[3];
              this_00 = (TargetAssasinated *)func_?();
              uVar18 = CONCAT44(TypeInfo__System__Int32,pOVar19);
              pTVar1 = pTVar2;
              if (pOVar19 != (Object *)0x0) {
                if ((pOVar19->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class
                   ) goto code_?;
                piVar17 = (int32_t *)func_?(pOVar19);
                iVar20 = *piVar17;
                if ((pTVar2 != (TargetAssasinatedGroup__Class *)0x0) &&
                   ((pGVar16 = TypeInfo__GameStatCounterManager,
                    *(byte *)&(pTVar2->_0).image[4].assembly <
                    (TypeInfo__GameStatCounterManager->_1).naturalAligment ||
                    (*(GameStatCounterManager__Class **)
                      (((pTVar2->_0).image[2].typeCount - 4) +
                      (uint)(TypeInfo__GameStatCounterManager->_1).naturalAligment * 4) !=
                     TypeInfo__GameStatCounterManager)))) goto code_?;
                if (pTVar4 != (TargetAssasinated *)0x0) {
                  pIVar5 = TypeInfo__System__Int32;
                  if ((((TargetAssasinatedGroup__Class *)pTVar4->klass)->_0).element_class !=
                      (TypeInfo__System__Int32->_0).element_class) goto code_?;
                  piVar17 = (int32_t *)func_?(pTVar4);
                  if ((handle.value == (Il2CppClass *)0x0) ||
                     ((pTVar4 = (TargetAssasinated *)((Il2CppClass *)handle.value)->image,
                      pWVar6 = TypeInfo__WinningCondition,
                      (TypeInfo__WinningCondition->_1).naturalAligment <=
                      *(byte *)&pTVar4[3].fields._.gameCounterManager &&
                      (*(WinningCondition__Class **)
                        (pTVar4[1].fields.assassineeActorNumber +
                        (uint)(TypeInfo__WinningCondition->_1).naturalAligment * 4 + -4) ==
                       TypeInfo__WinningCondition)))) {
                    OculusKillLimit::OculusKillLimit__ctor
                              ((OculusKillLimit *)this_00,handle.value,*piVar17,
                               (GameStatCounterManager *)pTVar2,iVar20,(MethodInfo *)0x0);
                    handle.value = (void *)func_?((method->field7_0x1c).rgctx_data,1);
                    if (this_00 == (TargetAssasinated *)0x0) {
                      return (Object *)0x0;
                    }
                    goto code_?;
                  }
                  goto code_?;
                }
              }
            }
            goto code_?;
          }
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Type);
          }
          pTVar2 = (TargetAssasinatedGroup__Class *)
                   mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
          pIVar7 = TypeRef__TargetAssasinatedGroup;
          if (pTVar1 != pTVar2) {
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Type);
            }
            pTVar2 = (TargetAssasinatedGroup__Class *)
                     mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar7,(MethodInfo *)0x0);
            handle.value = TypeRef__TimeLimit;
            if (pTVar1 == pTVar2) {
              handle.value = pIVar7;
              if (args != (Object__Array *)0x0) {
                if (((args->max_length == 0) ||
                    (handle.value = args->vector[0], args->max_length < 2)) ||
                   (pTVar2 = (TargetAssasinatedGroup__Class *)args->vector[1], args->max_length < 3)
                   ) goto code_?;
                pTVar4 = (TargetAssasinated *)args->vector[2];
                this_00 = (TargetAssasinated *)func_?(TypeInfo__TargetAssasinatedGroup);
                if ((pTVar4 != (TargetAssasinated *)0x0) &&
                   ((pGVar16 = TypeInfo__GameStatCounterManager,
                    (((TargetAssasinatedGroup__Class *)pTVar4->klass)->_1).naturalAligment <
                    (TypeInfo__GameStatCounterManager->_1).naturalAligment ||
                    ((((TargetAssasinatedGroup__Class *)pTVar4->klass)->_1).typeHierarchy
                     [(TypeInfo__GameStatCounterManager->_1).naturalAligment - 1] !=
                     (Il2CppClass *)TypeInfo__GameStatCounterManager)))) goto code_?;
                pTVar1 = pTVar2;
                if (pTVar2 != (TargetAssasinatedGroup__Class *)0x0) {
                  pIVar5 = TypeInfo__System__Int32;
                  if ((Il2CppClass *)((pTVar2->_0).image)->codeGenModule ==
                      (TypeInfo__System__Int32->_0).element_class) {
                    piVar17 = (int32_t *)func_?(pTVar2);
                    if ((handle.value == (Il2CppClass *)0x0) ||
                       ((pTVar2 = (TargetAssasinatedGroup__Class *)
                                  ((Il2CppClass *)handle.value)->image,
                        pWVar6 = TypeInfo__WinningCondition,
                        (TypeInfo__WinningCondition->_1).naturalAligment <=
                        (pTVar2->_1).naturalAligment &&
                        ((pTVar2->_1).typeHierarchy
                         [(TypeInfo__WinningCondition->_1).naturalAligment - 1] ==
                         (Il2CppClass *)TypeInfo__WinningCondition)))) {
                      TargetAssasinatedGroup::TargetAssasinatedGroup__ctor
                                ((TargetAssasinatedGroup *)this_00,handle.value,*piVar17,
                                 (GameStatCounterManager *)pTVar4,(MethodInfo *)0x0);
                      handle.value = (void *)func_?((method->field7_0x1c).rgctx_data,1);
                      if (this_00 == (TargetAssasinated *)0x0) {
                        return (Object *)0x0;
                      }
                      goto code_?;
                    }
                    goto code_?;
                  }
                  goto code_?;
                }
              }
              goto code_?;
            }
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Type);
            }
            pTVar2 = (TargetAssasinatedGroup__Class *)
                     mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
            pIVar3 = TypeRef__TimeAttackFlagReached;
            if (pTVar1 == pTVar2) {
              if (args != (Object__Array *)0x0) {
                if (((args->max_length == 0) ||
                    (handle.value = args->vector[0], args->max_length < 2)) ||
                   (pTVar2 = (TargetAssasinatedGroup__Class *)args->vector[1], args->max_length < 3)
                   ) goto code_?;
                pTVar4 = (TargetAssasinated *)args->vector[2];
                this_00 = (TargetAssasinated *)func_?(TypeInfo__TimeLimit);
                if ((pTVar4 != (TargetAssasinated *)0x0) &&
                   ((pGVar16 = TypeInfo__GameStatCounterManager,
                    (((TargetAssasinatedGroup__Class *)pTVar4->klass)->_1).naturalAligment <
                    (TypeInfo__GameStatCounterManager->_1).naturalAligment ||
                    ((((TargetAssasinatedGroup__Class *)pTVar4->klass)->_1).typeHierarchy
                     [(TypeInfo__GameStatCounterManager->_1).naturalAligment - 1] !=
                     (Il2CppClass *)TypeInfo__GameStatCounterManager)))) goto code_?;
                pTVar1 = pTVar2;
                if (pTVar2 != (TargetAssasinatedGroup__Class *)0x0) {
                  pIVar5 = TypeInfo__System__Int32;
                  if ((Il2CppClass *)((pTVar2->_0).image)->codeGenModule ==
                      (TypeInfo__System__Int32->_0).element_class) {
                    piVar17 = (int32_t *)func_?(pTVar2);
                    if ((handle.value == (Il2CppClass *)0x0) ||
                       ((pTVar2 = (TargetAssasinatedGroup__Class *)
                                  ((Il2CppClass *)handle.value)->image,
                        pWVar6 = TypeInfo__WinningCondition,
                        (TypeInfo__WinningCondition->_1).naturalAligment <=
                        (pTVar2->_1).naturalAligment &&
                        ((pTVar2->_1).typeHierarchy
                         [(TypeInfo__WinningCondition->_1).naturalAligment - 1] ==
                         (Il2CppClass *)TypeInfo__WinningCondition)))) {
                      TimeLimit::TimeLimit__ctor
                                ((TimeLimit *)this_00,handle.value,*piVar17,
                                 (GameStatCounterManager *)pTVar4,(MethodInfo *)0x0);
                      handle.value = (void *)func_?((method->field7_0x1c).rgctx_data,1);
                      if (this_00 == (TargetAssasinated *)0x0) {
                        return (Object *)0x0;
                      }
                      goto code_?;
                    }
                    goto code_?;
                  }
                  goto code_?;
                }
              }
              goto code_?;
            }
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Type);
            }
            pTVar2 = (TargetAssasinatedGroup__Class *)
                     mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
            if (pTVar1 != pTVar2) {
              return (Object *)0x0;
            }
            handle.value = pIVar3;
            if (args == (Object__Array *)0x0) goto code_?;
            if (((args->max_length == 0) || (handle.value = args->vector[0], args->max_length < 2))
               || (pTVar2 = (TargetAssasinatedGroup__Class *)args->vector[1], args->max_length < 3))
            goto code_?;
            pTVar4 = (TargetAssasinated *)args->vector[2];
            this_00 = (TargetAssasinated *)func_?(TypeInfo__TimeAttackFlagReached);
            if ((pTVar4 == (TargetAssasinated *)0x0) ||
               ((pGVar16 = TypeInfo__GameStatCounterManager,
                (TypeInfo__GameStatCounterManager->_1).naturalAligment <=
                (((TargetAssasinatedGroup__Class *)pTVar4->klass)->_1).naturalAligment &&
                ((((TargetAssasinatedGroup__Class *)pTVar4->klass)->_1).typeHierarchy
                 [(TypeInfo__GameStatCounterManager->_1).naturalAligment - 1] ==
                 (Il2CppClass *)TypeInfo__GameStatCounterManager)))) {
              pTVar1 = pTVar2;
              if (pTVar2 == (TargetAssasinatedGroup__Class *)0x0) goto code_?;
              pIVar5 = TypeInfo__System__Int32;
              if ((Il2CppClass *)((pTVar2->_0).image)->codeGenModule !=
                  (TypeInfo__System__Int32->_0).element_class) goto code_?;
              piVar17 = (int32_t *)func_?(pTVar2);
              if ((handle.value != (Il2CppClass *)0x0) &&
                 ((pTVar2 = (TargetAssasinatedGroup__Class *)((Il2CppClass *)handle.value)->image,
                  pWVar6 = TypeInfo__WinningCondition,
                  (pTVar2->_1).naturalAligment < (TypeInfo__WinningCondition->_1).naturalAligment ||
                  ((pTVar2->_1).typeHierarchy[(TypeInfo__WinningCondition->_1).naturalAligment - 1]
                   != (Il2CppClass *)TypeInfo__WinningCondition)))) goto code_?;
              TimeAttackFlagReached::TimeAttackFlagReached__ctor
                        ((TimeAttackFlagReached *)this_00,handle.value,*piVar17,
                         (GameStatCounterManager *)pTVar4,(MethodInfo *)0x0);
              handle.value = (void *)func_?((method->field7_0x1c).rgctx_data,1);
              if (this_00 == (TargetAssasinated *)0x0) {
                return (Object *)0x0;
              }
code_?:
              pOVar19 = (Object *)func_?(this_00,handle.value);
              pTVar4 = this_00;
              if (pOVar19 != (Object *)0x0) {
                return pOVar19;
              }
              goto code_?;
            }
            goto code_?;
          }
          handle.value = pIVar3;
          if (args == (Object__Array *)0x0) goto code_?;
          if ((((args->max_length == 0) || (handle.value = args->vector[0], args->max_length < 2))
              || (pWVar9 = (WinningConditionOr__Class *)args->vector[1], args->max_length < 3)) ||
             ((pTVar21 = (TargetAssasinated *)args->vector[2], args->max_length < 4 ||
              (pTVar2 = (TargetAssasinatedGroup__Class *)args->vector[3], args->max_length < 5))))
          goto code_?;
          pTVar4 = (TargetAssasinated *)args->vector[4];
          this_00 = (TargetAssasinated *)func_?(TypeInfo__TargetAssasinated);
          pTVar1 = pTVar2;
          if (pTVar4 == (TargetAssasinated *)0x0) goto code_?;
          pIVar5 = TypeInfo__System__Int32;
          if ((((TargetAssasinatedGroup__Class *)pTVar4->klass)->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar17 = (int32_t *)func_?(pTVar4);
            iVar20 = *piVar17;
            if (pTVar2 != (TargetAssasinatedGroup__Class *)0x0) {
              pIVar5 = TypeInfo__System__Int32;
              if ((Il2CppClass *)((pTVar2->_0).image)->codeGenModule !=
                  (TypeInfo__System__Int32->_0).element_class) goto code_?;
              pTVar4 = pTVar21;
              piVar17 = (int32_t *)func_?(pTVar2);
              assassinatorActorNumber = *piVar17;
              if ((pTVar4 != (TargetAssasinated *)0x0) &&
                 ((pTVar2 = (TargetAssasinatedGroup__Class *)pTVar4->klass,
                  pGVar16 = TypeInfo__GameStatCounterManager,
                  (pTVar2->_1).naturalAligment <
                  (TypeInfo__GameStatCounterManager->_1).naturalAligment ||
                  ((pTVar2->_1).typeHierarchy
                   [(TypeInfo__GameStatCounterManager->_1).naturalAligment - 1] !=
                   (Il2CppClass *)TypeInfo__GameStatCounterManager)))) goto code_?;
              pTVar1 = pTVar2;
              if (pWVar9 != (WinningConditionOr__Class *)0x0) {
                pIVar5 = TypeInfo__System__Int32;
                if ((Il2CppClass *)((pWVar9->_0).image)->codeGenModule !=
                    (TypeInfo__System__Int32->_0).element_class) goto code_?;
                piVar17 = (int32_t *)func_?(pWVar9);
                if ((handle.value == (Il2CppClass *)0x0) ||
                   ((pTVar2 = (TargetAssasinatedGroup__Class *)((Il2CppClass *)handle.value)->image,
                    pWVar6 = TypeInfo__WinningCondition,
                    (TypeInfo__WinningCondition->_1).naturalAligment <= (pTVar2->_1).naturalAligment
                    && ((pTVar2->_1).typeHierarchy
                        [(TypeInfo__WinningCondition->_1).naturalAligment - 1] ==
                        (Il2CppClass *)TypeInfo__WinningCondition)))) {
                  TargetAssasinated::TargetAssasinated__ctor
                            (this_00,handle.value,*piVar17,(GameStatCounterManager *)pTVar4,
                             assassinatorActorNumber,iVar20,(MethodInfo *)0x0);
                  handle.value = (void *)func_?((method->field7_0x1c).rgctx_data,1);
                  if (this_00 == (TargetAssasinated *)0x0) {
                    return (Object *)0x0;
                  }
                  goto code_?;
                }
                goto code_?;
              }
            }
            goto code_?;
          }
          goto code_?;
        }
        handle.value = pIVar7;
        if (args == (Object__Array *)0x0) goto code_?;
        if ((((args->max_length == 0) || (handle.value = args->vector[0], args->max_length < 2)) ||
            (pTVar4 = (TargetAssasinated *)args->vector[1], args->max_length < 3)) ||
           (pTVar2 = (TargetAssasinatedGroup__Class *)args->vector[2], args->max_length < 4))
        goto code_?;
        pOVar19 = args->vector[3];
        this_00 = (TargetAssasinated *)func_?();
        uVar18 = CONCAT44(TypeInfo__System__Int32,pOVar19);
        pTVar1 = pTVar2;
        if (pOVar19 == (Object *)0x0) goto code_?;
        if ((pOVar19->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          piVar17 = (int32_t *)func_?(pOVar19);
          iVar20 = *piVar17;
          if ((pTVar2 == (TargetAssasinatedGroup__Class *)0x0) ||
             ((pGVar16 = TypeInfo__GameStatCounterManager,
              (TypeInfo__GameStatCounterManager->_1).naturalAligment <=
              *(byte *)&(pTVar2->_0).image[4].assembly &&
              (*(GameStatCounterManager__Class **)
                (((pTVar2->_0).image[2].typeCount - 4) +
                (uint)(TypeInfo__GameStatCounterManager->_1).naturalAligment * 4) ==
               TypeInfo__GameStatCounterManager)))) {
            if (pTVar4 == (TargetAssasinated *)0x0) goto code_?;
            pIVar5 = TypeInfo__System__Int32;
            if ((((TargetAssasinatedGroup__Class *)pTVar4->klass)->_0).element_class ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar17 = (int32_t *)func_?(pTVar4);
              if ((handle.value == (Il2CppClass *)0x0) ||
                 ((pTVar4 = (TargetAssasinated *)((Il2CppClass *)handle.value)->image,
                  pWVar6 = TypeInfo__WinningCondition,
                  (TypeInfo__WinningCondition->_1).naturalAligment <=
                  *(byte *)&pTVar4[3].fields._.gameCounterManager &&
                  (*(WinningCondition__Class **)
                    (pTVar4[1].fields.assassineeActorNumber +
                    (uint)(TypeInfo__WinningCondition->_1).naturalAligment * 4 + -4) ==
                   TypeInfo__WinningCondition)))) {
                KillLimit::KillLimit__ctor
                          ((KillLimit *)this_00,handle.value,*piVar17,
                           (GameStatCounterManager *)pTVar2,iVar20,(MethodInfo *)0x0);
                handle.value = (void *)func_?((method->field7_0x1c).rgctx_data,1);
                if (this_00 == (TargetAssasinated *)0x0) {
                  return (Object *)0x0;
                }
                goto code_?;
              }
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
      }
code_?:
      func_?(uVar18);
      pIVar5 = (Int32__Class *)TypeInfo__GameStatCounterManager;
      gameCounterManager = extraout_EDX_03;
      pTVar1 = pTVar2;
    }
code_?:
    func_?(gameCounterManager,pIVar5);
    pGVar13 = extraout_ECX_02;
code_?:
    pWVar10 = (WinningConditionPresentStyle__Enum__Class *)func_?(handle.value,pGVar13);
  }
  func_?(pTVar1,pWVar10);
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  pOVar19 = (Object *)(*pcVar22)();
  return pOVar19;
}


/* List`1[IWinningCondition] GetForfilledWinningConditions() */

List_1_IWinningCondition_ *
MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetForfilledWinningConditions
          (WinningConditionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WinningConditionManager__ForfilledWinnerConditionGenerator);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__WinningConditionManager__ForfilledWinnerConditionGenerator);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__WinningConditionManager__ForfilledWinnerConditionGenerator__HandleWinningConditionForReport_IWinningCondition_
                   );
    func_?(&TypeInfo__System__Func<IWinningCondition,_bool>);
    func_?(&MethodInfo__System__Collections__Generic__List<IWinningCondition>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<IWinningCondition>);
    cRam_? = '\x01';
  }
  this_00 = (Object__Class *)
            func_?(TypeInfo__System__Collections__Generic__List<IWinningCondition>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<IWinningCondition>__List__);
  method_00 = (MethodInfo *)(value + 1);
  value[1].klass = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,method_00);
  this_01 = (Func_2_Object_Boolean_ *)
            func_?(TypeInfo__System__Func<IWinningCondition,_bool>);
  mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
            (this_01,value,
             MethodInfo__WinningConditionManager__ForfilledWinnerConditionGenerator__HandleWinningConditionForReport_IWinningCondition_
             ,(MethodInfo *)0x0);
  if ((this != (WinningConditionManager *)0x0) &&
     (pWVar1 = (this->fields).winnerConditionsRoot, pWVar1 != (WinningConditionOr *)0x0)) {
    pWVar2 = pWVar1->klass;
    pIStack3 = (pWVar2->vtable).Reset_1.methodPtr;
    pFStack4 = this_01;
    (*(code *)(pWVar2->vtable).Traverse_1.method)();
    return (List_1_IWinningCondition_ *)value[1].klass;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pLVar6 = (List_1_IWinningCondition_ *)(*pcVar5)();
  return pLVar6;
}


/* Object GetSingletonWinnerConditionByType[Object]() */

Object * MVWorldObject.dll::WinningConditionManager::
         WinningConditionManager_GetSingletonWinnerConditionByType
                   (WinningConditionManager *this,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(method);
  }
  iVar1 = *(int *)(method->field7_0x1c).methodMetadataHandle;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_?(&TypeInfo__System__Func<IWinningCondition,_bool>);
    if (*(int *)(iVar1 + 0x1c) == 0) {
      func_?(iVar1);
    }
  }
  iVar2 = **(int **)(iVar1 + 0x1c);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_?(iVar2);
  }
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?(iVar2);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            (this_00,*(MethodInfo **)(*(int *)(iVar1 + 0x1c) + 4));
  iVar2 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_?(iVar2);
  }
  this_01 = (List_1_System_Object_ *)func_?(iVar2);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             *(MethodInfo **)(*(int *)(iVar1 + 0x1c) + 0xc));
  if (this_00 == (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
code_?:
    func_?();
    pIVar3 = extraout_ECX;
  }
  else {
    (this_00->fields)._._defaultValue_k__BackingField = this_01;
    func_?(&this_00->fields,this_01);
    pWVar4 = (this->fields).winnerConditionsRoot;
    this_02 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<IWinningCondition,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              (this_02,(Object *)this_00,*(void **)(*(int *)(iVar1 + 0x1c) + 0x10),(MethodInfo *)0x0
              );
    if (pWVar4 == (WinningConditionOr *)0x0) goto code_?;
    (*(code *)(pWVar4->klass->vtable).Traverse_1.method)
              (pWVar4,(pWVar4->klass->vtable).Reset_1.methodPtr);
    this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this_00->fields)._._defaultValue_k__BackingField;
    if (this_03 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    if ((this_03->fields)._size == 0) {
      return (Object *)0x0;
    }
    pIVar3 = (method->field7_0x1c).rgctx_data;
    if (1 < (this_03->fields)._size) goto code_?;
    RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_03,0,pIVar3[5].method);
    if (RVar5 == (RegexCharClass_SingleRange)0x0) goto code_?;
    cVar6 = (**(code **)(*(int *)RVar5 + 0x150))(RVar5,*(undefined4 *)(*(int *)RVar5 + 0x154));
    pIVar3 = (method->field7_0x1c).rgctx_data;
    if (cVar6 != '\0') {
      RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_03,0,pIVar3[5].method);
      return (Object *)RVar5;
    }
  }
  RVar7.value = (void *)func_?(pIVar3,4);
  uVar8 = func_?(&TypeInfo__System__Type);
  func_?(uVar8);
  pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar7,(MethodInfo *)0x0);
  pMVar10 = (MethodInfo *)0x0;
  pSVar11 = (String *)func_?(&StringLiteral_Type_is_not_singleton__0_);
  this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            mscorlib.dll::System::String::String_Format(pSVar11,(Object *)pTVar9,pMVar10);
  uVar8 = func_?();
  pEVar12 = (Exception *)func_?(uVar8);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar12,(String *)this_03,(MethodInfo *)0x0);
  pIVar3 = (Il2CppRGCTXData *)func_?();
code_?:
  RVar7.value = (void *)func_?(pIVar3,4);
  uVar8 = func_?(&TypeInfo__System__Type);
  func_?(uVar8);
  pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar7,(MethodInfo *)0x0);
  func_?(this_03);
  uVar8 = func_?((method->field7_0x1c).rgctx_data,2);
  func_?(this_03,uVar8);
  uVar8 = func_?(&TypeInfo__System__Int32);
  pOVar13 = (Object *)func_?(uVar8);
  pMVar10 = (MethodInfo *)0x0;
  pSVar11 = (String *)func_?(&StringLiteral_Singleton_count_of_type__0__is__);
  pSVar11 = mscorlib.dll::System::String::String_Format_1(pSVar11,(Object *)pTVar9,pOVar13,pMVar10);
  uVar8 = func_?();
  pEVar12 = (Exception *)func_?(uVar8);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar12,pSVar11,(MethodInfo *)0x0);
  pMStack14 = method;
  func_?();
  pcVar15 = (code *)swi(3);
  pOVar13 = (Object *)(*pcVar15)();
  return pOVar13;
}


/* List`1[System.Object] GetWinnerConditionsByType[Object]() */

List_1_System_Object_ *
MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetWinnerConditionsByType
          (WinningConditionManager *this,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&TypeInfo__System__Func<IWinningCondition,_bool>);
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
    }
  }
  pIVar1 = ((method->field7_0x1c).rgctx_data)->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?(pIVar1);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            (this_00,(method->field7_0x1c).rgctx_data[1].method);
  pIVar1 = (method->field7_0x1c).rgctx_data[2].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pLVar2 = (List_1_System_Object_ *)func_?(pIVar1);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             (method->field7_0x1c).rgctx_data[3].method);
  if (this_00 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
    (this_00->fields)._._defaultValue_k__BackingField = pLVar2;
    func_?(&this_00->fields,pLVar2);
    pWVar3 = (this->fields).winnerConditionsRoot;
    this_01 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<IWinningCondition,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              (this_01,(Object *)this_00,(method->field7_0x1c).rgctx_data[4].rgctxDataDummy,
               (MethodInfo *)0x0);
    if (pWVar3 != (WinningConditionOr *)0x0) {
      (*(code *)(pWVar3->klass->vtable).Traverse_1.method)
                (pWVar3,this_01,(pWVar3->klass->vtable).Reset_1.methodPtr);
      return (this_00->fields)._._defaultValue_k__BackingField;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pLVar2 = (List_1_System_Object_ *)(*pcVar4)();
  return pLVar2;
}


/* Void Initialize(GameStatCounterManager) */

void MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Initialize
               (WinningConditionManager *this,GameStatCounterManager *gameStatCounterManager,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    func_?(&TypeInfo__GameStatCounterType);
    func_?(&TypeInfo__System__Object);
    func_?(&
                    WinningConditionOr_MethodInfo__WinningConditionManager__CreateInstance<WinningConditionOr>_WinningCondition__System__Object____
                   );
    func_?(&
                    MethodInfo__WinningConditionManager__winnerConditionsRoot_OnWinningConditionChanged_System__Object__System__EventArgs_
                   );
    func_?(&TypeInfo__WinningConditionPresentStyle);
    cRam_? = '\x01';
  }
  this_00 = this;
  (this->fields).gameCounterManager = gameStatCounterManager;
  func_?(&(this->fields).gameCounterManager,gameStatCounterManager);
  args = (Object__Array *)func_?(TypeInfo__System__Object,3);
  gameStatCounterManager = (GameStatCounterManager *)((uint)gameStatCounterManager & 0xffffff);
  pOVar1 = (Object *)func_?(TypeInfo__System__Boolean,(int)&gameStatCounterManager + 3);
  if (args == (Object__Array *)0x0) {
code_?:
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    if (pOVar1 != (Object *)0x0) {
      iVar3 = func_?(pOVar1,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar1;
    func_?(args->vector,pOVar1);
    this = (WinningConditionManager *)((uint)this & 0xffffff);
    pOVar1 = (Object *)func_?(TypeInfo__GameStatCounterType,(int)&this + 3);
    if (pOVar1 != (Object *)0x0) {
      iVar3 = func_?(pOVar1,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar1;
    func_?(args->vector + 1,pOVar1);
    uStack_4 = uStack_4 & 0xffffff;
    pOVar1 = (Object *)func_?(TypeInfo__WinningConditionPresentStyle,(int)&uStack_4 + 3);
    if (pOVar1 == (Object *)0x0) {
code_?:
      if (args->max_length < 3) goto code_?;
      args->vector[2] = pOVar1;
      func_?(args->vector + 2,pOVar1);
      pWVar5 = (WinningConditionOr *)
               WinningConditionManager_CreateInstance
                         (this_00,(WinningCondition *)0x0,args,
                          WinningConditionOr_MethodInfo__WinningConditionManager__CreateInstance<WinningConditionOr>_WinningCondition__System__Object____
                         );
      (this_00->fields).winnerConditionsRoot = pWVar5;
      func_?(&this_00->fields,pWVar5);
      pWVar5 = (this_00->fields).winnerConditionsRoot;
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(TypeInfo__System__EventHandler<System::EventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this_00,
                 MethodInfo__WinningConditionManager__winnerConditionsRoot_OnWinningConditionChanged_System__Object__System__EventArgs_
                 ,(MethodInfo *)0x0);
      if (pWVar5 != (WinningConditionOr *)0x0) {
        WinningCondition::WinningCondition_add_OnWinningConditionChanged
                  ((WinningCondition *)pWVar5,(EventHandler_1_EventArgs_ *)this_01,(MethodInfo *)0x0
                  );
        return;
      }
      goto code_?;
    }
    iVar3 = func_?(pOVar1,(args->klass->_0).element_class);
    if (iVar3 != 0) goto code_?;
  }
  uVar2 = func_?(0);
  func_?(uVar2);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean IsTimeLimit(IWinningCondition) */

bool MVWorldObject.dll::WinningConditionManager::WinningConditionManager_IsTimeLimit
               (WinningConditionManager *this,IWinningCondition *winningCondition,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TimeLimit);
    cRam_? = '\x01';
  }
  if (winningCondition != (IWinningCondition *)0x0) {
    if (((TypeInfo__TimeLimit->_1).naturalAligment <= (winningCondition->klass->_1).naturalAligment)
       && ((winningCondition->klass->_1).typeHierarchy
           [(TypeInfo__TimeLimit->_1).naturalAligment - 1] == (Il2CppClass *)TypeInfo__TimeLimit)) {
      return 1;
    }
  }
  return 0;
}


/* Void RemoveWinnerCondition(Int32) */

void MVWorldObject.dll::WinningConditionManager::WinningConditionManager_RemoveWinnerCondition
               (WinningConditionManager *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventArgs);
    cRam_? = '\x01';
  }
  object = (this->fields).winnerConditionsRoot;
  if (object != (WinningConditionOr *)0x0) {
    pWVar1 = object;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Remove_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Item_int_
                     );
      func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
      func_?(&TypeInfo__IWinningCondition);
      cRam_? = '\x01';
    }
    pDVar2 = (object->fields)._.winnerConditions;
    if (pDVar2 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,id,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Item_int_
                         );
      this_00 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(TypeInfo__System__EventHandler<System::EventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_00,(Object *)object,object->klass[1]._0.image,(MethodInfo *)0x0);
      if (pOVar3 != (Object *)0x0) {
        uVar4 = 0;
        uVar5 = 0;
        pOVar6 = pOVar3->klass;
        uVar7._0_1_ = (pOVar6->_1).rank;
        uVar7._1_1_ = (pOVar6->_1).minimumAlignment;
        pWVar8 = pWVar1;
        if (uVar7 != 0) {
          do {
            if (pOVar6->interfaceOffsets[uVar4].interfaceType ==
                (Il2CppClass *)TypeInfo__IWinningCondition) {
              ppMVar9 = &(&(pOVar6->vtable).GetHashCode)[pOVar6->interfaceOffsets[uVar4].offset].
                         method;
              goto code_?;
            }
            uVar4 = uVar4 + 1;
            object = pWVar1;
          } while (uVar4 < uVar7);
        }
        ppMVar9 = (MethodInfo **)func_?(pOVar3,TypeInfo__IWinningCondition,2);
        pWVar1 = object;
code_?:
        (*(code *)*ppMVar9)(pOVar3,this_00,ppMVar9[1]);
        pDVar2 = (pWVar1->fields)._.winnerConditions;
        if (pDVar2 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Remove_int_
                    );
          if ((this->fields).OnWinningConditionAddedOrRemoved != (EventHandler_1_EventArgs_ *)0x0) {
            pEVar10 = (this->fields).OnWinningConditionAddedOrRemoved;
            this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                      func_?(TypeInfo__System__EventArgs,this_00,pWVar8,uVar5);
            UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            UxmlObjectListAttributeDescription`1[System::Object]::
            UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
            (*(pEVar10->fields)._._.invoke_impl)
                      ((pEVar10->fields)._._.method_code,this,this_01,(pEVar10->fields)._._.method);
          }
          return;
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Reset() */

void MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Reset
               (WinningConditionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventArgs);
    func_?(&TypeInfo__System__Func<IWinningCondition,_bool>);
    func_?(&MethodInfo__WinningConditionManager___Reset_b__0_IWinningCondition_);
    func_?(&TypeInfo__WinningConditionManager);
    cRam_? = '\x01';
  }
  (this->fields)._WinningConditionFound_k__BackingField = 0;
  if (TypeInfo__WinningConditionManager->static_fields->CS___9__CachedAnonymousMethodDelegate1 ==
      (Func_2_IWinningCondition_Boolean_ *)0x0) {
    this_02 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<IWinningCondition,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              (this_02,(Object *)0x0,
               MethodInfo__WinningConditionManager___Reset_b__0_IWinningCondition_,(MethodInfo *)0x0
              );
    TypeInfo__WinningConditionManager->static_fields->CS___9__CachedAnonymousMethodDelegate1 =
         (Func_2_IWinningCondition_Boolean_ *)this_02;
    func_?(TypeInfo__WinningConditionManager->static_fields,this_02);
  }
  pWVar1 = (this->fields).winnerConditionsRoot;
  if (pWVar1 != (WinningConditionOr *)0x0) {
    (*(code *)(pWVar1->klass->vtable).Traverse_1.method)
              (pWVar1,TypeInfo__WinningConditionManager->static_fields->
                      CS___9__CachedAnonymousMethodDelegate1,
               (pWVar1->klass->vtable).Reset_1.methodPtr);
    this_00 = (this->fields).gameCounterManager;
    if (this_00 != (GameStatCounterManager *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Clear__
                       );
        cRam_? = '\x01';
      }
      this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(this_00->fields).statTypeCounters;
      if (this_01 !=
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Clear__
                  );
        GameStatCounterManager::GameStatCounterManager_AddPersistentStats(this_00,(MethodInfo *)0x0)
        ;
        if ((this->fields).OnWinningConditionReset != (EventHandler_1_EventArgs_ *)0x0) {
          pEVar2 = (this->fields).OnWinningConditionReset;
          if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          (*(pEVar2->fields)._._.invoke_impl)
                    ((pEVar2->fields)._._.method_code,this,
                     TypeInfo__System__EventArgs->static_fields->Empty);
        }
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::WinningConditionManager::WinningConditionManager_ToString
                   (WinningConditionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&StringLiteral_WinningCondition_found___0__u000A);
    func_?(&StringLiteral_To_win___0_);
    cRam_? = '\x01';
  }
  pWVar1 = this;
  this = (WinningConditionManager *)
         CONCAT13((this->fields)._WinningConditionFound_k__BackingField,this._0_3_);
  arg0 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  pSVar2 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_WinningCondition_found___0__u000A,arg0,(MethodInfo *)0x0);
  str1 = mscorlib.dll::System::String::String_Format
                   (StringLiteral_To_win___0_,(Object *)(pWVar1->fields).winnerConditionsRoot,
                    (MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar2,str1,(MethodInfo *)0x0);
  return pSVar2;
}


/* Void Traverse(Func`2[IWinningCondition,Boolean]) */

void MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Traverse
               (WinningConditionManager *this,Func_2_IWinningCondition_Boolean_ *callBack,
               MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pWStack_2 = (this->fields).winnerConditionsRoot;
  if (pWStack_2 != (WinningConditionOr *)0x0) {
    pIStack_1 = (pWStack_2->klass->vtable).Reset_1.methodPtr;
    pFStack_3 = callBack;
    (*(code *)(pWStack_2->klass->vtable).Traverse_1.method)();
    return;
  }
  uVar4 = func_?(&pWStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean <Reset>b__0(IWinningCondition) */

bool MVWorldObject.dll::WinningConditionManager::WinningConditionManager__Reset_b__0
               (IWinningCondition *winnerCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IWinningCondition *)&TypeInfo__IWinningCondition;
    func_?();
    cRam_? = '\x01';
  }
  if (winnerCondition != (IWinningCondition *)0x0) {
    pIStack_1 = winnerCondition;
    pIStack_2 = TypeInfo__IWinningCondition;
    uStack_3 = 5;
    func_?();
    return 0;
  }
  pIStack_1 = (IWinningCondition *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void add_OnWinningConditionAddedOrRemoved(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningConditionManager::
     WinningConditionManager_add_OnWinningConditionAddedOrRemoved
               (WinningConditionManager *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnWinningConditionAddedOrRemoved;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<System::EventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<System::EventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)
             func_?(&(this->fields).OnWinningConditionAddedOrRemoved,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Void add_OnWinningConditionReset(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningConditionManager::WinningConditionManager_add_OnWinningConditionReset
               (WinningConditionManager *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnWinningConditionReset;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<System::EventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<System::EventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)
             func_?(&(this->fields).OnWinningConditionReset,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Void remove_OnWinningConditionAddedOrRemoved(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningConditionManager::
     WinningConditionManager_remove_OnWinningConditionAddedOrRemoved
               (WinningConditionManager *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnWinningConditionAddedOrRemoved;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<System::EventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<System::EventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)
             func_?(&(this->fields).OnWinningConditionAddedOrRemoved,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}


/* Void remove_OnWinningConditionReset(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningConditionManager::
     WinningConditionManager_remove_OnWinningConditionReset
               (WinningConditionManager *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnWinningConditionReset;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<System::EventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<System::EventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)
             func_?(&(this->fields).OnWinningConditionReset,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}


/* Void winnerConditionsRoot_OnWinningConditionChanged(Object, EventArgs) */

void MVWorldObject.dll::WinningConditionManager::
     WinningConditionManager_winnerConditionsRoot_OnWinningConditionChanged
               (WinningConditionManager *this,Object *sender,EventArgs *eventArgs,MethodInfo *method
               )

{
  if ((this->fields).OnWinningConditionChanged != (EventHandler_1_EventArgs_ *)0x0) {
    pEVar1 = (this->fields).OnWinningConditionChanged;
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,eventArgs,(pEVar1->fields)._._.method);
  }
  (this->fields)._WinningConditionFound_k__BackingField = 1;
  return;
}

