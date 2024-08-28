
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
    bVar6 = (TypeInfo__WinningConditionGroup->_1).naturalAligment;
    if (((pWVar5->_1).naturalAligment < bVar6) ||
       ((pWVar5->_1).typeHierarchy[bVar6 - 1] != (Il2CppClass *)TypeInfo__WinningConditionGroup))
    goto code_?;
    bVar6 = (TypeInfo__WinningConditionGroup->_1).naturalAligment;
    pWVar4 = TypeInfo__WinningConditionGroup;
    if ((bVar6 <= (pWVar5->_1).naturalAligment) &&
       ((pWVar5->_1).typeHierarchy[bVar6 - 1] == (Il2CppClass *)TypeInfo__WinningConditionGroup)) {
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
        this_00 = (EventHandler_1_Object_ *)
                  func_?(TypeInfo__System__EventHandler<System::EventArgs>);
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  pMVar3 = (method->field7_0x1c).rgctx_data[2].method;
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
    pEVar10 = (this->fields).OnWinningConditionAddedOrRemoved;
    if (pEVar10 != (EventHandler_1_EventArgs_ *)0x0) {
      pEStack11 = TypeInfo__System__EventArgs;
      this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
      pWStack12 = this;
      pMStack5 = (pEVar10->fields)._._.method_code;
      (*(pEVar10->fields)._._.invoke_impl)();
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
  this_00 = (WinningConditionAnd *)
            mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)TypeRef__AllCollectiblesCollected,(MethodInfo *)0x0);
  bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
          UnsafeUtility_EnumEquals
                    ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0);
  pIVar3 = TypeRef__WinningConditionOr;
  pTVar4 = (TargetAssasinated *)method;
  if (bVar2 != 0) {
    if (args != (Object__Array *)0x0) {
      uVar5 = args->max_length;
      if (((uVar5 == 0) || (handle.value = args->vector[0], uVar5 < 2)) ||
         (pWVar6 = (WinningConditionAnd *)args->vector[1], uVar5 < 3)) goto code_?;
      pTVar4 = (TargetAssasinated *)args->vector[2];
      this_00 = (WinningConditionAnd *)func_?(TypeInfo__AllCollectiblesCollected);
      if (pTVar4 != (TargetAssasinated *)0x0) {
        bVar7 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
        pGVar8 = TypeInfo__GameStatCounterManager;
        if (((pTVar4->klass->_1).naturalAligment < bVar7) ||
           ((pTVar4->klass->_1).typeHierarchy[bVar7 - 1] !=
            (Il2CppClass *)TypeInfo__GameStatCounterManager)) goto code_?;
      }
      if (pWVar6 != (WinningConditionAnd *)0x0) {
        pIVar9 = TypeInfo__System__Int32;
        if ((pWVar6->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          piVar10 = (int32_t *)func_?(pWVar6);
          if (handle.value == (Il2CppClass *)0x0) {
            AllCollectiblesCollected::AllCollectiblesCollected__ctor
                      ((AllCollectiblesCollected *)this_00,(WinningCondition *)0x0,*piVar10,
                       (GameStatCounterManager *)pTVar4,(MethodInfo *)0x0);
          }
          else {
            pWVar11 = (WinningCondition__Class *)
                     ((Il2CppClass_0 *)&((Il2CppClass *)handle.value)->image)->image;
            bVar7 = (TypeInfo__WinningCondition->_1).naturalAligment;
            pWVar12 = TypeInfo__WinningCondition;
            if (((pWVar11->_1).naturalAligment < bVar7) ||
               ((pWVar11->_1).typeHierarchy[bVar7 - 1] != (Il2CppClass *)TypeInfo__WinningCondition))
            goto code_?;
            AllCollectiblesCollected::AllCollectiblesCollected__ctor
                      ((AllCollectiblesCollected *)this_00,handle.value,*piVar10,
                       (GameStatCounterManager *)pTVar4,(MethodInfo *)0x0);
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
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
  bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
          UnsafeUtility_EnumEquals
                    ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0);
  handle.value = TypeRef__WinningConditionAnd;
  if (bVar2 == 0) {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_EnumEquals
                      ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0);
    pIVar3 = TypeRef__CaptureTheFlag;
    if (bVar2 == 0) {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
      bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
              UnsafeUtility_EnumEquals
                        ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0);
      handle.value = TypeRef__FlagReached;
      if (bVar2 == 0) {
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
        bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                UnsafeUtility_EnumEquals
                          ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0);
        pIVar3 = TypeRef__KillLimit;
        if (bVar2 != 0) {
          if (args == (Object__Array *)0x0) goto code_?;
          uVar5 = args->max_length;
          if (((uVar5 == 0) || (handle.value = args->vector[0], uVar5 < 2)) ||
             (this_00 = (WinningConditionAnd *)args->vector[1], uVar5 < 3)) goto code_?;
          this_01 = (TargetAssasinated *)args->vector[2];
          func_?();
          pTVar4 = this_01;
          if (this_01 != (TargetAssasinated *)0x0) {
            bVar7 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
            pGVar8 = TypeInfo__GameStatCounterManager;
            if (((this_01->klass->_1).naturalAligment < bVar7) ||
               ((this_01->klass->_1).typeHierarchy[bVar7 - 1] !=
                (Il2CppClass *)TypeInfo__GameStatCounterManager)) goto code_?;
          }
          if (this_00 == (WinningConditionAnd *)0x0) goto code_?;
          pIVar9 = TypeInfo__System__Int32;
          if ((this_00->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
            puVar13 = (undefined4 *)func_?(this_00);
            this_00 = (WinningConditionAnd *)*puVar13;
            if (handle.value != (Il2CppClass *)0x0) {
              pWVar11 = (WinningCondition__Class *)
                       ((Il2CppClass_0 *)&((Il2CppClass *)handle.value)->image)->image;
              bVar7 = (TypeInfo__WinningCondition->_1).naturalAligment;
              pWVar12 = TypeInfo__WinningCondition;
              if (((pWVar11->_1).naturalAligment < bVar7) ||
                 ((pWVar11->_1).typeHierarchy[bVar7 - 1] != (Il2CppClass *)TypeInfo__WinningCondition
                 )) goto code_?;
            }
            FlagReached::FlagReached__ctor
                      ((FlagReached *)this_01,handle.value,(int32_t)this_00,
                       (GameStatCounterManager *)this_01,(MethodInfo *)0x0);
            handle.value = (void *)func_?((method->field7_0x1c).rgctx_data,1);
            if (this_01 == (TargetAssasinated *)0x0) {
              return (Object *)0x0;
            }
code_?:
            pOVar14 = (Object *)func_?(this_01);
            pTVar4 = this_01;
            if (pOVar14 != (Object *)0x0) {
              return pOVar14;
            }
            goto code_?;
          }
          goto code_?;
        }
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
        bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                UnsafeUtility_EnumEquals
                          ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0);
        handle.value = TypeRef__OculusKillLimit;
        if (bVar2 == 0) {
          if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
          bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_EnumEquals
                            ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0);
          pIVar3 = TypeRef__TargetAssasinated;
          if (bVar2 == 0) {
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
            bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                    ::UnsafeUtility_EnumEquals
                              ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0);
            handle.value = TypeRef__TargetAssasinatedGroup;
            if (bVar2 == 0) {
              if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
              bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                      UnsafeUtility::UnsafeUtility_EnumEquals
                                ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0)
              ;
              pIVar3 = TypeRef__TimeLimit;
              if (bVar2 != 0) {
                if (args != (Object__Array *)0x0) {
                  uVar5 = args->max_length;
                  if (((uVar5 == 0) || (handle.value = args->vector[0], uVar5 < 2)) ||
                     (this_00 = (WinningConditionAnd *)args->vector[1], uVar5 < 3))
                  goto code_?;
                  pTVar4 = (TargetAssasinated *)args->vector[2];
                  this_01 = (TargetAssasinated *)func_?();
                  if (pTVar4 != (TargetAssasinated *)0x0) {
                    bVar7 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
                    pGVar8 = TypeInfo__GameStatCounterManager;
                    if (((pTVar4->klass->_1).naturalAligment < bVar7) ||
                       ((pTVar4->klass->_1).typeHierarchy[bVar7 - 1] !=
                        (Il2CppClass *)TypeInfo__GameStatCounterManager)) goto code_?;
                  }
                  if (this_00 != (WinningConditionAnd *)0x0) {
                    pIVar9 = TypeInfo__System__Int32;
                    if ((this_00->klass->_0).element_class ==
                        (TypeInfo__System__Int32->_0).element_class) {
                      piVar10 = (int32_t *)func_?(this_00);
                      this_00 = (WinningConditionAnd *)*piVar10;
                      if (handle.value != (Il2CppClass *)0x0) {
                        pWVar11 = (WinningCondition__Class *)
                                 ((Il2CppClass_0 *)&((Il2CppClass *)handle.value)->image)->image;
                        bVar7 = (TypeInfo__WinningCondition->_1).naturalAligment;
                        pWVar12 = TypeInfo__WinningCondition;
                        if (((pWVar11->_1).naturalAligment < bVar7) ||
                           ((pWVar11->_1).typeHierarchy[bVar7 - 1] !=
                            (Il2CppClass *)TypeInfo__WinningCondition)) goto code_?;
                      }
                      TargetAssasinatedGroup::TargetAssasinatedGroup__ctor
                                ((TargetAssasinatedGroup *)this_01,handle.value,(int32_t)this_00,
                                 (GameStatCounterManager *)pTVar4,(MethodInfo *)0x0);
                      handle.value = (void *)func_?((method->field7_0x1c).rgctx_data,1);
                      if (this_01 == (TargetAssasinated *)0x0) {
                        return (Object *)0x0;
                      }
                      goto code_?;
                    }
                    goto code_?;
                  }
                }
                goto code_?;
              }
              if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                 ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
              bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                      UnsafeUtility::UnsafeUtility_EnumEquals
                                ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,(MethodInfo *)0x0)
              ;
              handle.value = TypeRef__TimeAttackFlagReached;
              if (bVar2 == 0) {
                if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                   (handle,(MethodInfo *)0x0);
                bVar2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                        UnsafeUtility::UnsafeUtility_EnumEquals
                                  ((Int32Enum__Enum)this_00,(Int32Enum__Enum)pTVar1,
                                   (MethodInfo *)0x0);
                if (bVar2 == 0) {
                  return (Object *)0x0;
                }
                if (args != (Object__Array *)0x0) {
                  uVar5 = args->max_length;
                  if (((uVar5 == 0) || (handle.value = args->vector[0], uVar5 < 2)) ||
                     (this_00 = (WinningConditionAnd *)args->vector[1], uVar5 < 3))
                  goto code_?;
                  pTVar4 = (TargetAssasinated *)args->vector[2];
                  this_01 = (TargetAssasinated *)func_?();
                  if (pTVar4 != (TargetAssasinated *)0x0) {
                    bVar7 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
                    pGVar8 = TypeInfo__GameStatCounterManager;
                    if (((pTVar4->klass->_1).naturalAligment < bVar7) ||
                       ((pTVar4->klass->_1).typeHierarchy[bVar7 - 1] !=
                        (Il2CppClass *)TypeInfo__GameStatCounterManager)) goto code_?;
                  }
                  if (this_00 != (WinningConditionAnd *)0x0) {
                    pIVar9 = TypeInfo__System__Int32;
                    if ((this_00->klass->_0).element_class ==
                        (TypeInfo__System__Int32->_0).element_class) {
                      piVar10 = (int32_t *)func_?(this_00);
                      this_00 = (WinningConditionAnd *)*piVar10;
                      if (handle.value != (Il2CppClass *)0x0) {
                        pWVar11 = (WinningCondition__Class *)
                                 ((Il2CppClass_0 *)&((Il2CppClass *)handle.value)->image)->image;
                        bVar7 = (TypeInfo__WinningCondition->_1).naturalAligment;
                        pWVar12 = TypeInfo__WinningCondition;
                        if (((pWVar11->_1).naturalAligment < bVar7) ||
                           ((pWVar11->_1).typeHierarchy[bVar7 - 1] !=
                            (Il2CppClass *)TypeInfo__WinningCondition)) goto code_?;
                      }
                      TimeAttackFlagReached::TimeAttackFlagReached__ctor
                                ((TimeAttackFlagReached *)this_01,handle.value,(int32_t)this_00,
                                 (GameStatCounterManager *)pTVar4,(MethodInfo *)0x0);
                      handle.value = (void *)func_?((method->field7_0x1c).rgctx_data,1);
                      if (this_01 == (TargetAssasinated *)0x0) {
                        return (Object *)0x0;
                      }
                      goto code_?;
                    }
                    goto code_?;
                  }
                }
                goto code_?;
              }
              handle.value = pIVar3;
              if (args == (Object__Array *)0x0) goto code_?;
              uVar5 = args->max_length;
              if (((uVar5 == 0) || (handle.value = args->vector[0], uVar5 < 2)) ||
                 (this_00 = (WinningConditionAnd *)args->vector[1], uVar5 < 3))
              goto code_?;
              pTVar4 = (TargetAssasinated *)args->vector[2];
              this_01 = (TargetAssasinated *)func_?();
              if (pTVar4 == (TargetAssasinated *)0x0) {
code_?:
                if (this_00 != (WinningConditionAnd *)0x0) {
                  pIVar9 = TypeInfo__System__Int32;
                  if ((this_00->klass->_0).element_class ==
                      (TypeInfo__System__Int32->_0).element_class) {
                    piVar10 = (int32_t *)func_?(this_00);
                    this_00 = (WinningConditionAnd *)*piVar10;
                    if (handle.value != (Il2CppClass *)0x0) {
                      pWVar11 = (WinningCondition__Class *)
                               ((Il2CppClass_0 *)&((Il2CppClass *)handle.value)->image)->image;
                      bVar7 = (TypeInfo__WinningCondition->_1).naturalAligment;
                      pWVar12 = TypeInfo__WinningCondition;
                      if (((pWVar11->_1).naturalAligment < bVar7) ||
                         ((pWVar11->_1).typeHierarchy[bVar7 - 1] !=
                          (Il2CppClass *)TypeInfo__WinningCondition)) goto code_?;
                    }
                    TimeLimit::TimeLimit__ctor
                              ((TimeLimit *)this_01,handle.value,(int32_t)this_00,
                               (GameStatCounterManager *)pTVar4,(MethodInfo *)0x0);
                    handle.value = (void *)func_?((method->field7_0x1c).rgctx_data,1);
                    if (this_01 == (TargetAssasinated *)0x0) {
                      return (Object *)0x0;
                    }
                    goto code_?;
                  }
                  goto code_?;
                }
                goto code_?;
              }
              bVar7 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
              pGVar8 = TypeInfo__GameStatCounterManager;
              if ((bVar7 <= (pTVar4->klass->_1).naturalAligment) &&
                 ((pTVar4->klass->_1).typeHierarchy[bVar7 - 1] ==
                  (Il2CppClass *)TypeInfo__GameStatCounterManager)) goto code_?;
              goto code_?;
            }
            handle.value = pIVar3;
            if (args == (Object__Array *)0x0) goto code_?;
            uVar5 = args->max_length;
            if ((((uVar5 == 0) || (handle.value = args->vector[0], uVar5 < 2)) ||
                (pWVar6 = (WinningConditionAnd *)args->vector[1], uVar5 < 3)) ||
               ((gameCounterManager = (TargetAssasinated *)args->vector[2], uVar5 < 4 ||
                (this_00 = (WinningConditionAnd *)args->vector[3], uVar5 < 5))))
            goto code_?;
            pTVar4 = (TargetAssasinated *)args->vector[4];
            func_?();
            if (pTVar4 == (TargetAssasinated *)0x0) goto code_?;
            pIVar9 = TypeInfo__System__Int32;
            if ((pTVar4->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
              puVar13 = (undefined4 *)func_?(pTVar4);
              this_01 = (TargetAssasinated *)*puVar13;
              if (this_00 != (WinningConditionAnd *)0x0) {
                pIVar9 = TypeInfo__System__Int32;
                if ((this_00->klass->_0).element_class !=
                    (TypeInfo__System__Int32->_0).element_class) goto code_?;
                func_?(this_00);
                pTVar4 = gameCounterManager;
                if (gameCounterManager != (TargetAssasinated *)0x0) {
                  bVar7 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
                  pGVar8 = TypeInfo__GameStatCounterManager;
                  if (((gameCounterManager->klass->_1).naturalAligment < bVar7) ||
                     ((gameCounterManager->klass->_1).typeHierarchy[bVar7 - 1] !=
                      (Il2CppClass *)TypeInfo__GameStatCounterManager)) goto code_?;
                }
                if (pWVar6 != (WinningConditionAnd *)0x0) {
                  pIVar9 = TypeInfo__System__Int32;
                  if ((pWVar6->klass->_0).element_class !=
                      (TypeInfo__System__Int32->_0).element_class) goto code_?;
                  piVar10 = (int32_t *)func_?(pWVar6);
                  this_00 = (WinningConditionAnd *)*piVar10;
                  if (handle.value != (Il2CppClass *)0x0) {
                    pWVar11 = (WinningCondition__Class *)
                             ((Il2CppClass_0 *)&((Il2CppClass *)handle.value)->image)->image;
                    bVar7 = (TypeInfo__WinningCondition->_1).naturalAligment;
                    pWVar12 = TypeInfo__WinningCondition;
                    if (((pWVar11->_1).naturalAligment < bVar7) ||
                       ((pWVar11->_1).typeHierarchy[bVar7 - 1] !=
                        (Il2CppClass *)TypeInfo__WinningCondition)) goto code_?;
                  }
                  TargetAssasinated::TargetAssasinated__ctor
                            (this_01,handle.value,(int32_t)this_00,
                             (GameStatCounterManager *)gameCounterManager,0,(int32_t)this_01,
                             (MethodInfo *)0x0);
                  handle.value = (void *)func_?((method->field7_0x1c).rgctx_data,1);
                  if (this_01 == (TargetAssasinated *)0x0) {
                    return (Object *)0x0;
                  }
                  goto code_?;
                }
              }
              goto code_?;
            }
            goto code_?;
          }
          if (args == (Object__Array *)0x0) goto code_?;
          uVar5 = args->max_length;
          if ((((uVar5 == 0) || (handle.value = args->vector[0], uVar5 < 2)) ||
              (pTVar4 = (TargetAssasinated *)args->vector[1], uVar5 < 3)) ||
             (this_00 = (WinningConditionAnd *)args->vector[2], uVar5 < 4)) goto code_?;
          pOVar14 = args->vector[3];
          func_?();
          uVar15 = CONCAT44(TypeInfo__System__Int32,pOVar14);
          if (pOVar14 == (Object *)0x0) goto code_?;
          if ((pOVar14->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          func_?(pOVar14);
          if (this_00 != (WinningConditionAnd *)0x0) {
            bVar7 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
            pGVar8 = TypeInfo__GameStatCounterManager;
            if (((this_00->klass->_1).naturalAligment < bVar7) ||
               ((this_00->klass->_1).typeHierarchy[bVar7 - 1] !=
                (Il2CppClass *)TypeInfo__GameStatCounterManager)) goto code_?;
          }
          if (pTVar4 == (TargetAssasinated *)0x0) goto code_?;
          pIVar9 = TypeInfo__System__Int32;
          if ((pTVar4->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
            puVar16 = &UNK_?;
            puVar13 = (undefined4 *)func_?(pTVar4);
            pTVar4 = (TargetAssasinated *)*puVar13;
            if (handle.value == (Il2CppClass *)0x0) {
code_?:
              OculusKillLimit::OculusKillLimit__ctor
                        ((OculusKillLimit *)0x0,handle.value,(int32_t)pTVar4,
                         (GameStatCounterManager *)this_00,(int32_t)puVar16,(MethodInfo *)0x0);
              func_?((method->field7_0x1c).rgctx_data,1);
              return (Object *)0x0;
            }
            pWVar11 = (WinningCondition__Class *)
                     ((Il2CppClass_0 *)&((Il2CppClass *)handle.value)->image)->image;
            bVar7 = (TypeInfo__WinningCondition->_1).naturalAligment;
            pWVar12 = TypeInfo__WinningCondition;
            if ((bVar7 <= (pWVar11->_1).naturalAligment) &&
               ((pWVar11->_1).typeHierarchy[bVar7 - 1] == (Il2CppClass *)TypeInfo__WinningCondition))
            goto code_?;
            goto code_?;
          }
          goto code_?;
        }
        handle.value = pIVar3;
        if (args == (Object__Array *)0x0) goto code_?;
        uVar5 = args->max_length;
        if ((((uVar5 == 0) || (handle.value = args->vector[0], uVar5 < 2)) ||
            (pTVar4 = (TargetAssasinated *)args->vector[1], uVar5 < 3)) ||
           (this_00 = (WinningConditionAnd *)args->vector[2], uVar5 < 4)) goto code_?;
        pOVar14 = args->vector[3];
        func_?();
        uVar15 = CONCAT44(TypeInfo__System__Int32,pOVar14);
        if (pOVar14 == (Object *)0x0) goto code_?;
        if ((pOVar14->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          func_?(pOVar14);
          if (this_00 == (WinningConditionAnd *)0x0) {
code_?:
            if (pTVar4 == (TargetAssasinated *)0x0) goto code_?;
            pIVar9 = TypeInfo__System__Int32;
            if ((pTVar4->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
              puVar16 = &UNK_?;
              puVar13 = (undefined4 *)func_?(pTVar4);
              pTVar4 = (TargetAssasinated *)*puVar13;
              if (handle.value == (Il2CppClass *)0x0) {
code_?:
                KillLimit::KillLimit__ctor
                          ((KillLimit *)0x0,handle.value,(int32_t)pTVar4,
                           (GameStatCounterManager *)this_00,(int32_t)puVar16,(MethodInfo *)0x0);
                func_?((method->field7_0x1c).rgctx_data,1);
                return (Object *)0x0;
              }
              pWVar11 = (WinningCondition__Class *)
                       ((Il2CppClass_0 *)&((Il2CppClass *)handle.value)->image)->image;
              bVar7 = (TypeInfo__WinningCondition->_1).naturalAligment;
              pWVar12 = TypeInfo__WinningCondition;
              if ((bVar7 <= (pWVar11->_1).naturalAligment) &&
                 ((pWVar11->_1).typeHierarchy[bVar7 - 1] == (Il2CppClass *)TypeInfo__WinningCondition
                 )) goto code_?;
              goto code_?;
            }
            goto code_?;
          }
          bVar7 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
          pGVar8 = TypeInfo__GameStatCounterManager;
          if ((bVar7 <= (this_00->klass->_1).naturalAligment) &&
             ((this_00->klass->_1).typeHierarchy[bVar7 - 1] ==
              (Il2CppClass *)TypeInfo__GameStatCounterManager)) goto code_?;
          goto code_?;
        }
      }
      else {
        handle.value = pIVar3;
        if (args == (Object__Array *)0x0) goto code_?;
        uVar5 = args->max_length;
        if (((uVar5 == 0) || (handle.value = args->vector[0], uVar5 < 2)) ||
           (pWVar6 = (WinningConditionAnd *)args->vector[1], uVar5 < 3)) goto code_?;
        pTVar4 = (TargetAssasinated *)args->vector[2];
        this_00 = (WinningConditionAnd *)func_?();
        if (pTVar4 != (TargetAssasinated *)0x0) {
          bVar7 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
          pGVar8 = TypeInfo__GameStatCounterManager;
          if (((pTVar4->klass->_1).naturalAligment < bVar7) ||
             ((pTVar4->klass->_1).typeHierarchy[bVar7 - 1] !=
              (Il2CppClass *)TypeInfo__GameStatCounterManager)) goto code_?;
        }
        if (pWVar6 == (WinningConditionAnd *)0x0) goto code_?;
        pIVar9 = TypeInfo__System__Int32;
        if ((pWVar6->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          piVar10 = (int32_t *)func_?(pWVar6);
          if (handle.value != (Il2CppClass *)0x0) {
            pWVar11 = (WinningCondition__Class *)
                     ((Il2CppClass_0 *)&((Il2CppClass *)handle.value)->image)->image;
            bVar7 = (TypeInfo__WinningCondition->_1).naturalAligment;
            pWVar12 = TypeInfo__WinningCondition;
            if (((pWVar11->_1).naturalAligment < bVar7) ||
               ((pWVar11->_1).typeHierarchy[bVar7 - 1] != (Il2CppClass *)TypeInfo__WinningCondition))
            goto code_?;
          }
          CaptureTheFlag::CaptureTheFlag__ctor
                    ((CaptureTheFlag *)this_00,handle.value,*piVar10,
                     (GameStatCounterManager *)pTVar4,(MethodInfo *)0x0);
          goto code_?;
        }
code_?:
        pIVar9 = (Int32__Class *)func_?(pWVar6,pIVar9);
code_?:
        func_?(pTVar4,pIVar9);
        pIVar9 = extraout_ECX_01;
code_?:
        func_?(pTVar4,pIVar9);
        pGVar8 = extraout_EDX_02;
code_?:
        uVar15 = func_?(this_00,pGVar8);
      }
code_?:
      func_?(uVar15);
    }
    else {
      if (args == (Object__Array *)0x0) {
code_?:
        func_?();
code_?:
        func_?(pTVar4);
        pWVar12 = extraout_EDX;
code_?:
        func_?(handle.value,pWVar12);
        pIVar9 = extraout_ECX;
code_?:
        func_?(this_00,pIVar9);
        pGVar8 = extraout_EDX_00;
code_?:
        func_?(pTVar4,pGVar8);
        pWVar6 = extraout_ECX_00;
        pIVar9 = extraout_EDX_01;
        goto code_?;
      }
      uVar5 = args->max_length;
      if (((uVar5 == 0) || (handle.value = args->vector[0], uVar5 < 2)) ||
         (pWVar6 = (WinningConditionAnd *)args->vector[1], uVar5 < 3)) goto code_?;
      pTVar4 = (TargetAssasinated *)args->vector[2];
      this_00 = (WinningConditionAnd *)func_?();
      if (pTVar4 != (TargetAssasinated *)0x0) {
        bVar7 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
        pGVar8 = TypeInfo__GameStatCounterManager;
        if (((pTVar4->klass->_1).naturalAligment < bVar7) ||
           ((pTVar4->klass->_1).typeHierarchy[bVar7 - 1] !=
            (Il2CppClass *)TypeInfo__GameStatCounterManager)) goto code_?;
      }
      if (pWVar6 == (WinningConditionAnd *)0x0) goto code_?;
      pIVar9 = TypeInfo__System__Int32;
      if ((pWVar6->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar10 = (int32_t *)func_?(pWVar6);
      if (handle.value != (Il2CppClass *)0x0) {
        pWVar11 = (WinningCondition__Class *)
                 ((Il2CppClass_0 *)&((Il2CppClass *)handle.value)->image)->image;
        bVar7 = (TypeInfo__WinningCondition->_1).naturalAligment;
        pWVar12 = TypeInfo__WinningCondition;
        if ((bVar7 <= (pWVar11->_1).naturalAligment) &&
           ((pWVar11->_1).typeHierarchy[bVar7 - 1] == (Il2CppClass *)TypeInfo__WinningCondition)) {
          WinningConditionAnd::WinningConditionAnd__ctor
                    (this_00,handle.value,*piVar10,(GameStatCounterManager *)pTVar4,
                     (MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
      WinningConditionAnd::WinningConditionAnd__ctor
                (this_00,(WinningCondition *)0x0,*piVar10,(GameStatCounterManager *)pTVar4,
                 (MethodInfo *)0x0);
code_?:
      handle.value = (method->field7_0x1c).rgctx_data[1].klass;
      if (((uint)(((WinningCondition__VTable *)((Il2CppClass *)handle.value)->vtable)->Equals).
                 methodPtr & 0x100) == 0) {
        handle.value = (void *)func_?();
      }
      if (this_00 == (WinningConditionAnd *)0x0) {
        return (Object *)0x0;
      }
      pOVar14 = (Object *)func_?(this_00);
      if (pOVar14 != (Object *)0x0) {
        return pOVar14;
      }
    }
    func_?(this_00);
    parent = extraout_EDX_03;
code_?:
    func_?(parent,handle.value);
    pIVar9 = extraout_ECX_02;
    pOVar14 = extraout_EDX_04;
code_?:
    func_?(pOVar14,pIVar9);
    pGVar17 = extraout_ECX_03;
code_?:
    pWVar18 = (WinningConditionPresentStyle__Enum__Class *)func_?(handle.value,pGVar17);
  }
  else {
    handle.value = pIVar3;
    if (args == (Object__Array *)0x0) goto code_?;
    uVar5 = args->max_length;
    if (((((uVar5 == 0) || (parent = (WinningCondition *)args->vector[0], uVar5 < 2)) ||
         (pOVar14 = args->vector[1], uVar5 < 3)) || ((uVar5 < 4 || (uVar5 < 5)))) ||
       (handle.value = args->vector[4], uVar5 < 6)) goto code_?;
    this_00 = (WinningConditionAnd *)args->vector[5];
    this_01 = (TargetAssasinated *)func_?();
    pTVar4 = this_01;
    if (this_00 == (WinningConditionAnd *)0x0) goto code_?;
    pWVar18 = TypeInfo__WinningConditionPresentStyle;
    if ((this_00->klass->_0).element_class ==
        (TypeInfo__WinningConditionPresentStyle->_0).element_class) {
      puVar19 = (undefined1 *)func_?(this_00);
      uVar20 = *puVar19;
      if (handle.value == (Il2CppClass *)0x0) goto code_?;
      pGVar17 = TypeInfo__GameStatCounterType;
      if ((((WinningCondition__Class *)
           ((Il2CppClass_0 *)&((Il2CppClass *)handle.value)->image)->image)->_0).element_class ==
          (TypeInfo__GameStatCounterType->_0).element_class) {
        pWVar6 = (WinningConditionAnd *)&UNK_?;
        puVar21 = (undefined1 *)func_?(handle.value);
        gameStatCounterType = CONCAT31((int3)((uint)puVar21 >> 8),*puVar21);
        if (pWVar6 == (WinningConditionAnd *)0x0) goto code_?;
        pIVar9 = (Int32__Class *)TypeInfo__System__Boolean;
        if ((pWVar6->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
        goto code_?;
        this_00 = pWVar6;
        func_?();
        if (this_00 != (WinningConditionAnd *)0x0) {
          bVar7 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
          pGVar8 = TypeInfo__GameStatCounterManager;
          if (((this_00->klass->_1).naturalAligment < bVar7) ||
             ((this_00->klass->_1).typeHierarchy[bVar7 - 1] !=
              (Il2CppClass *)TypeInfo__GameStatCounterManager)) goto code_?;
        }
        if (pOVar14 == (Object *)0x0) goto code_?;
        pIVar9 = TypeInfo__System__Int32;
        if ((pOVar14->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          piVar10 = (int32_t *)func_?(pOVar14);
          if (parent == (WinningCondition *)0x0) {
code_?:
            WinningConditionOr::WinningConditionOr__ctor
                      ((WinningConditionOr *)this_01,parent,*piVar10,
                       (GameStatCounterManager *)this_00,0,gameStatCounterType,
                       CONCAT31((int3)((uint)puVar19 >> 8),uVar20),(MethodInfo *)0x0);
            handle.value = (method->field7_0x1c).rgctx_data[1].klass;
            if (((uint)(((WinningCondition__VTable *)((Il2CppClass *)handle.value)->vtable)->Equals)
                       .methodPtr & 0x100) == 0) {
              handle.value = (void *)func_?();
            }
            if (this_01 == (TargetAssasinated *)0x0) {
              return (Object *)0x0;
            }
            goto code_?;
          }
          bVar7 = (TypeInfo__WinningCondition->_1).naturalAligment;
          handle.value = TypeInfo__WinningCondition;
          if ((bVar7 <= (parent->klass->_1).naturalAligment) &&
             ((parent->klass->_1).typeHierarchy[bVar7 - 1] ==
              (Il2CppClass *)TypeInfo__WinningCondition)) goto code_?;
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?(this_00,pWVar18);
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  pOVar14 = (Object *)(*pcVar22)();
  return pOVar14;
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
  pMVar1 = (MethodInfo *)(value + 1);
  pMVar1->methodPointer = (Il2CppMethodPointer)this_00;
  method_00 = pMVar1;
  func_?(pMVar1,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,method_00);
  this_01 = (Func_2_Object_Boolean_ *)
            func_?(TypeInfo__System__Func<IWinningCondition,_bool>);
  mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
            (this_01,value,
             MethodInfo__WinningConditionManager__ForfilledWinnerConditionGenerator__HandleWinningConditionForReport_IWinningCondition_
             ,(MethodInfo *)0x0);
  if ((this != (WinningConditionManager *)0x0) &&
     (pWVar2 = (this->fields).winnerConditionsRoot, pWVar2 != (WinningConditionOr *)0x0)) {
    pWVar3 = pWVar2->klass;
    pIStack4 = (pWVar3->vtable).Reset_1.methodPtr;
    (*(code *)(pWVar3->vtable).Traverse_1.method)();
    return (List_1_IWinningCondition_ *)(Object__Class *)pMVar1->methodPointer;
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
    iVar1 = (this_03->fields)._size;
    if (iVar1 == 0) {
      return (Object *)0x0;
    }
    pIVar3 = (method->field7_0x1c).rgctx_data;
    if (1 < iVar1) goto code_?;
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
  func_?();
  pIVar3 = extraout_ECX_00;
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
  ppGVar1 = &(this->fields).gameCounterManager;
  *ppGVar1 = gameStatCounterManager;
  func_?(ppGVar1,gameStatCounterManager);
  args = (Object__Array *)func_?(TypeInfo__System__Object,3);
  this = (WinningConditionManager *)((uint)this & 0xffffff);
  pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  if (args == (Object__Array *)0x0) {
code_?:
    func_?();
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
  }
  else {
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar2;
    func_?(args->vector,pOVar2);
    gameStatCounterManager = (GameStatCounterManager *)((uint)gameStatCounterManager & 0xffffff);
    pOVar2 = (Object *)
             func_?(TypeInfo__GameStatCounterType,(int)&gameStatCounterManager + 3);
    if (pOVar2 != (Object *)0x0) {
      iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar2;
    func_?(args->vector + 1,pOVar2);
    uStack_5 = uStack_5 & 0xffffff;
    pOVar2 = (Object *)func_?(TypeInfo__WinningConditionPresentStyle,(int)&uStack_5 + 3);
    if (pOVar2 == (Object *)0x0) {
code_?:
      if (args->max_length < 3) goto code_?;
      args->vector[2] = pOVar2;
      func_?(args->vector + 2,pOVar2);
      pWVar6 = (WinningConditionOr *)
               WinningConditionManager_CreateInstance
                         (this_00,(WinningCondition *)0x0,args,
                          WinningConditionOr_MethodInfo__WinningConditionManager__CreateInstance<WinningConditionOr>_WinningCondition__System__Object____
                         );
      pWVar7 = &this_00->fields;
      pWVar7->winnerConditionsRoot = pWVar6;
      func_?(pWVar7,pWVar6);
      pWVar6 = pWVar7->winnerConditionsRoot;
      this_01 = (EventHandler_1_Object_ *)
                func_?(TypeInfo__System__EventHandler<System::EventArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (this_01,(Object *)this_00,
                 MethodInfo__WinningConditionManager__winnerConditionsRoot_OnWinningConditionChanged_System__Object__System__EventArgs_
                 ,(MethodInfo *)0x0);
      if (pWVar6 != (WinningConditionOr *)0x0) {
        WinningCondition::WinningCondition_add_OnWinningConditionChanged
                  ((WinningCondition *)pWVar6,(EventHandler_1_EventArgs_ *)this_01,(MethodInfo *)0x0
                  );
        return;
      }
      goto code_?;
    }
    iVar4 = func_?(pOVar2,(args->klass->_0).element_class);
    if (iVar4 != 0) goto code_?;
  }
  uVar3 = func_?(0);
  func_?(uVar3);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    bVar1 = (TypeInfo__TimeLimit->_1).naturalAligment;
    if ((bVar1 <= (winningCondition->klass->_1).naturalAligment) &&
       ((winningCondition->klass->_1).typeHierarchy[bVar1 - 1] == (Il2CppClass *)TypeInfo__TimeLimit
       )) {
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
    pDVar1 = (object->fields)._.winnerConditions;
    if (pDVar1 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,id,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Item_int_
                         );
      this_00 = (EventHandler_1_Object_ *)
                func_?(TypeInfo__System__EventHandler<System::EventArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (this_00,(Object *)object,object->klass[1]._0.image,(MethodInfo *)0x0);
      if (pOVar2 != (Object *)0x0) {
        pOVar3 = pOVar2->klass;
        uVar4 = 0;
        uVar5 = 0;
        uVar6._0_1_ = (pOVar3->_1).rank;
        uVar6._1_1_ = (pOVar3->_1).minimumAlignment;
        if (uVar6 != 0) {
          do {
            if (pOVar3->interfaceOffsets[uVar4].interfaceType ==
                (Il2CppClass *)TypeInfo__IWinningCondition) {
              ppMVar7 = &(&(pOVar3->vtable).GetHashCode)[pOVar3->interfaceOffsets[uVar4].offset].
                         method;
              goto code_?;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar6);
        }
        ppMVar7 = (MethodInfo **)func_?(pOVar2,TypeInfo__IWinningCondition,2);
code_?:
        (*(code *)*ppMVar7)(pOVar2,this_00,ppMVar7[1]);
        pDVar1 = (object->fields)._.winnerConditions;
        if (pDVar1 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Remove_int_
                    );
          pEVar8 = (this->fields).OnWinningConditionAddedOrRemoved;
          if (pEVar8 != (EventHandler_1_EventArgs_ *)0x0) {
            this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                      func_?(TypeInfo__System__EventArgs,this_00,pOVar3,uVar5);
            UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
            UxmlObjectListAttributeDescription`1[System::Object]::
            UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
            (*(pEVar8->fields)._._.invoke_impl)
                      ((pEVar8->fields)._._.method_code,this,this_01,(pEVar8->fields)._._.method);
          }
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Reset() */

void MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Reset
               (WinningConditionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventArgs);
    func_?(&TypeInfo__System__Func<IWinningCondition,_bool>);
    func_?(&MethodInfo__WinningConditionManager____c___Reset_b__21_0_IWinningCondition_);
    func_?(&TypeInfo__WinningConditionManager____c);
    cRam_? = '\x01';
  }
  (this->fields)._WinningConditionFound_k__BackingField = 0;
  if ((TypeInfo__WinningConditionManager____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WinningConditionManager____c);
  }
  this_02 = TypeInfo__WinningConditionManager____c->static_fields->__9__21_0;
  if (this_02 == (Func_2_IWinningCondition_Boolean_ *)0x0) {
    if ((TypeInfo__WinningConditionManager____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__WinningConditionManager____c);
    }
    object = TypeInfo__WinningConditionManager____c->static_fields->__9;
    this_02 = (Func_2_IWinningCondition_Boolean_ *)
              func_?(TypeInfo__System__Func<IWinningCondition,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              ((Func_2_Object_Boolean_ *)this_02,(Object *)object,
               MethodInfo__WinningConditionManager____c___Reset_b__21_0_IWinningCondition_,
               (MethodInfo *)0x0);
    TypeInfo__WinningConditionManager____c->static_fields->__9__21_0 = this_02;
    func_?(&TypeInfo__WinningConditionManager____c->static_fields->__9__21_0,this_02);
  }
  pWVar1 = (this->fields).winnerConditionsRoot;
  if (pWVar1 != (WinningConditionOr *)0x0) {
    (*(code *)(pWVar1->klass->vtable).Traverse_1.method)
              (pWVar1,this_02,(pWVar1->klass->vtable).Reset_1.methodPtr);
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
        pEVar2 = (this->fields).OnWinningConditionReset;
        if (pEVar2 != (EventHandler_1_EventArgs_ *)0x0) {
          if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__EventArgs);
          }
          (*(pEVar2->fields)._._.invoke_impl)
                    ((pEVar2->fields)._._.method_code,this,
                     TypeInfo__System__EventArgs->static_fields->Empty,(pEVar2->fields)._._.method);
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


/* Void add_OnWinningConditionAddedOrRemoved(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningConditionManager::
     WinningConditionManager_add_OnWinningConditionAddedOrRemoved
               (WinningConditionManager *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnWinningConditionAddedOrRemoved;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<System::EventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,iVar4,a);
    bVar7 = pEVar6 != a;
    a = pEVar6;
  } while (bVar7);
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
  ppEVar1 = &(this->fields).OnWinningConditionReset;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<System::EventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,iVar4,a);
    bVar7 = pEVar6 != a;
    a = pEVar6;
  } while (bVar7);
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
  ppEVar1 = &(this->fields).OnWinningConditionAddedOrRemoved;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<System::EventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,iVar4,source);
    bVar7 = pEVar6 != source;
    source = pEVar6;
  } while (bVar7);
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
  ppEVar1 = &(this->fields).OnWinningConditionReset;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<System::EventArgs>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
      if (iVar4 == 0) {
        func_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pEVar6 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,iVar4,source);
    bVar7 = pEVar6 != source;
    source = pEVar6;
  } while (bVar7);
  return;
}


/* Void set_WinningConditionFound(Boolean) */

void MVWorldObject.dll::WinningConditionManager::WinningConditionManager_set_WinningConditionFound
               (WinningConditionManager *this,bool value,MethodInfo *method)

{
  (this->fields)._WinningConditionFound_k__BackingField = value;
  return;
}


/* Void winnerConditionsRoot_OnWinningConditionChanged(Object, EventArgs) */

void MVWorldObject.dll::WinningConditionManager::
     WinningConditionManager_winnerConditionsRoot_OnWinningConditionChanged
               (WinningConditionManager *this,Object *sender,EventArgs *eventArgs,MethodInfo *method
               )

{
  pEVar1 = (this->fields).OnWinningConditionChanged;
  if (pEVar1 != (EventHandler_1_EventArgs_ *)0x0) {
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,eventArgs,(pEVar1->fields)._._.method);
  }
  (this->fields)._WinningConditionFound_k__BackingField = 1;
  return;
}

