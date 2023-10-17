
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
    parent = (WinningCondition *)func_?(uVar1);
    func_?(parent);
    pMVar2 = (MethodInfo *)0x0;
    pSVar3 = (String *)func_?(&StringLiteral_Could_not_find_winner_condition_);
    mscorlib.dll::System::Collections::Generic::KeyNotFoundException::KeyNotFoundException__ctor_1
              ((KeyNotFoundException *)parent,pSVar3,pMVar2);
    uVar1 = func_?(&
                            MethodInfo__WinningConditionManager__AddWinnerConditionToNode_WinningCondition__WinningCondition_
                           );
    func_?(parent,uVar1);
code_?:
    func_?();
    pWVar4 = extraout_EDX;
  }
  else {
    pWVar5 = parent->klass;
    if (((pWVar5->_1).typeHierarchyDepth < (TypeInfo__WinningConditionGroup->_1).typeHierarchyDepth)
       || ((pWVar5->_1).typeHierarchy[(TypeInfo__WinningConditionGroup->_1).typeHierarchyDepth - 1]
           != (Il2CppClass *)TypeInfo__WinningConditionGroup)) goto code_?;
    pWVar4 = TypeInfo__WinningConditionGroup;
    if (((TypeInfo__WinningConditionGroup->_1).typeHierarchyDepth <= (pWVar5->_1).typeHierarchyDepth
        ) && ((pWVar5->_1).typeHierarchy
              [(TypeInfo__WinningConditionGroup->_1).typeHierarchyDepth - 1] ==
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
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)parent[1].klass,
                   (Object *)(winnerCondition->fields).id,(Object *)winnerCondition,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Add_int__IWinningCondition_
                  );
        this_00 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(TypeInfo__System__EventHandler<System::EventArgs>);
        if (this_00 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_00,(Object *)parent,parent->klass[1]._0.gc_desc,(MethodInfo *)0x0);
          WinningCondition::WinningCondition_add_OnWinningConditionChanged
                    (winnerCondition,(EventHandler_1_EventArgs_ *)this_00,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  func_?(parent,pWVar4);
code_?:
  uVar1 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar1);
  func_?(this_01);
  pMVar2 = (MethodInfo *)0x0;
  pSVar3 = (String *)func_?(&StringLiteral_Type_not_winnerConditionGroup);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar3,pMVar2);
  uVar1 = func_?(&
                          MethodInfo__WinningConditionManager__AddWinnerConditionToNode_WinningCondition__WinningCondition_
                         );
  func_?(this_01,uVar1);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean CanPlaceWinningCondition[Object]() */

bool MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CanPlaceWinningCondition
               (WinningConditionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Func<IWinningCondition,_bool>);
    func_?(&MethodInfo__WinningConditionManager__IsTimeLimit_IWinningCondition_);
    cRam_? = '\x01';
  }
  pWVar1 = (WinningConditionGroup *)(this->fields).winnerConditionsRoot;
  if (pWVar1 != (WinningConditionGroup *)0x0) {
    iVar2 = WinningConditionGroup::WinningConditionGroup_get_Length(pWVar1,(MethodInfo *)0x0);
    if ((iVar2 < 1) ||
       (iVar3 = (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                          (this,((method->field7_0x1c).rgctx_data)->rgctxDataDummy), iVar3 != 0)) {
      return 1;
    }
    pWVar1 = (WinningConditionGroup *)(this->fields).winnerConditionsRoot;
    if (pWVar1 != (WinningConditionGroup *)0x0) {
      iVar2 = WinningConditionGroup::WinningConditionGroup_get_Length(pWVar1,(MethodInfo *)0x0);
      if (iVar2 != 1) {
        return 0;
      }
      pWVar4 = (this->fields).winnerConditionsRoot;
      this_00 = (Func_2_Object_Boolean_ *)
                func_?(TypeInfo__System__Func<IWinningCondition,_bool>);
      if ((this_00 != (Func_2_Object_Boolean_ *)0x0) &&
         (mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                    (this_00,(Object *)this,
                     MethodInfo__WinningConditionManager__IsTimeLimit_IWinningCondition_,
                     (MethodInfo *)0x0), pWVar4 != (WinningConditionOr *)0x0)) {
        cVar5 = (*(pWVar4->klass->vtable).Traverse_1.methodPtr)
                          (pWVar4,this_00,(pWVar4->klass->vtable).Traverse_1.method);
        if (cVar5 == '\0') {
          return 0;
        }
        return 1;
      }
    }
  }
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
  if (cRam_? == '\0') {
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
    cRam_? = '\x01';
  }
  pWVar1 = this;
  pWVar2 = (WinningConditionManager *)(this->fields).winnerConditionIDCounter;
  (this->fields).winnerConditionIDCounter = (int32_t)((int)&pWVar2->klass + 1);
  this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
  if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    func_?(this_00,parent,
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    this = pWVar2;
    uVar3 = func_?(TypeInfo__System__Int32,&this);
    func_?(this_00,uVar3,
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    func_?(this_00,(pWVar1->fields).gameCounterManager,
                    MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                   );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__AddRange
              (this_00,(IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)args,
               MethodInfo__System__Collections__Generic__List<System::Object>__AddRange_System__Collections__Generic__IEnumerable<System::Object>_
              );
    pUVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
             UnitySynchronizationContext+WorkRequest]::
             List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__);
    puVar5 = &stack0xfffffff4;
    pMVar6 = ((method->field7_0x1c).rgctx_data)->method;
    func_?((&(pWVar1->klass->vtable).Equals)[pMVar6->slot].method);
    pOVar7 = (Object *)(*(code *)pMVar6)(pWVar1,pUVar4,puVar5);
    return pOVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pOVar7 = (Object *)(*pcVar8)();
  return pOVar7;
}


/* Object CreateWinnerCondition[Object](Object[]) */

Object * MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateWinnerCondition
                   (WinningConditionManager *this,Object__Array *args,MethodInfo *method)

{
  pOVar1 = (Object *)
           (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                     (this,(this->fields).winnerConditionsRoot,args,
                      ((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  return pOVar1;
}


/* Object CreateWinnerConditionWithParent[Object](WinningCondition, Object[]) */

Object * MVWorldObject.dll::WinningConditionManager::
         WinningConditionManager_CreateWinnerConditionWithParent
                   (WinningConditionManager *this,WinningCondition *parent,Object__Array *args,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventArgs);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)
           (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                     (this,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  if (pOVar1 != (Object *)0x0) {
    cVar2 = (*(code *)pOVar1->klass[1]._1.static_fields_size)
                      (pOVar1,pOVar1->klass[1]._1.thread_static_fields_size);
    if (cVar2 != '\0') {
      return pOVar1;
    }
  }
  winnerCondition =
       (WinningCondition *)
       (*((method->field7_0x1c).rgctx_data[3].method)->virtualMethodPointer)
                 (this,parent,args,(method->field7_0x1c).rgctx_data[3].rgctxDataDummy);
  WinningConditionManager_AddWinnerConditionToNode(this,parent,winnerCondition,(MethodInfo *)0x0);
  if ((this->fields).OnWinningConditionAddedOrRemoved != (EventHandler_1_EventArgs_ *)0x0) {
    pEVar3 = (this->fields).OnWinningConditionAddedOrRemoved;
    this_00 = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__System__EventArgs);
    if (this_00 == (TweenRunner_1_FloatTween_ *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      pOVar1 = (Object *)(*pcVar4)();
      return pOVar1;
    }
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_00,(MethodInfo *)0x0);
    (*(pEVar3->fields)._._.invoke_impl)
              ((pEVar3->fields)._._.method_code,this,this_00,(pEVar3->fields)._._.method);
  }
  return (Object *)winnerCondition;
}


/* Object Factory[Object](Object[]) */

Object * MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Factory
                   (WinningConditionManager *this,Object__Array *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    cRam_? = '\x01';
  }
  RVar1.value = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  gameCounterManager =
       (WinningConditionOr__Class *)
       mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar1,(MethodInfo *)0x0);
  pWVar2 = (WinningConditionOr__Class *)
           mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)TypeRef__AllCollectiblesCollected,(MethodInfo *)0x0);
  pIVar3 = TypeRef__WinningConditionOr;
  if (gameCounterManager == pWVar2) {
    if (args == (Object__Array *)0x0) goto code_?;
    if (((args->max_length == 0) || (RVar1.value = args->vector[0], args->max_length < 2)) ||
       (unaff_EBX = (WinningConditionOr__Class *)args->vector[1], args->max_length < 3))
    goto code_?;
    gameCounterManager = (WinningConditionOr__Class *)args->vector[2];
    pWVar2 = (WinningConditionOr__Class *)func_?(TypeInfo__AllCollectiblesCollected);
    if (pWVar2 == (WinningConditionOr__Class *)0x0) goto code_?;
    if ((gameCounterManager == (WinningConditionOr__Class *)0x0) ||
       ((pWVar4 = gameCounterManager,
        (TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth <=
        *(byte *)&(gameCounterManager->_0).image[4].nameNoExt &&
        (*(GameStatCounterManager__Class **)
          ((gameCounterManager->_0).image[2].typeCount +
          ((TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth - 1) * 4) ==
         TypeInfo__GameStatCounterManager)))) {
      if (unaff_EBX == (WinningConditionOr__Class *)0x0) goto code_?;
      pWVar4 = unaff_EBX;
      if ((Il2CppClass *)((unaff_EBX->_0).image)->codeGenModule ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar5 = (int32_t *)func_?(unaff_EBX);
        if (RVar1.value == (WinningConditionOr__Class *)0x0) {
          AllCollectiblesCollected::AllCollectiblesCollected__ctor
                    ((AllCollectiblesCollected *)pWVar2,(WinningCondition *)0x0,*piVar5,
                     (GameStatCounterManager *)gameCounterManager,(MethodInfo *)0x0);
        }
        else {
          unaff_EBX = (WinningConditionOr__Class *)
                      (((WinningConditionOr__Class *)RVar1.value)->_0).image;
          pWVar4 = RVar1.value;
          if (((unaff_EBX->_1).typeHierarchyDepth <
               (TypeInfo__WinningCondition->_1).typeHierarchyDepth) ||
             ((unaff_EBX->_1).typeHierarchy[(TypeInfo__WinningCondition->_1).typeHierarchyDepth - 1]
              != (Il2CppClass *)TypeInfo__WinningCondition)) goto code_?;
          AllCollectiblesCollected::AllCollectiblesCollected__ctor
                    ((AllCollectiblesCollected *)pWVar2,RVar1.value,*piVar5,
                     (GameStatCounterManager *)gameCounterManager,(MethodInfo *)0x0);
        }
code_?:
        pWVar6 = (method->field7_0x1c).rgctx_data[1].rgctxDataDummy;
        bVar7 = (pWVar6->_1).field_0x56;
joined_?:
        if ((bVar7 & 1) == 0) {
          pWVar6 = (WinningConditionOr__Class *)func_?();
        }
        pOVar8 = (Object *)func_?(pWVar2);
        gameCounterManager = pWVar2;
joined_?:
        RVar1.value = pWVar6;
        pWVar4 = pWVar2;
        if (pOVar8 != (Object *)0x0) {
          return pOVar8;
        }
      }
    }
code_?:
    func_?(pWVar4);
    pWVar9 = extraout_EDX;
code_?:
    func_?(RVar1.value,pWVar9);
    pIVar10 = extraout_ECX;
code_?:
    func_?(unaff_EBX,pIVar10);
    pGVar11 = extraout_EDX_00;
  }
  else {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pWVar2 = (WinningConditionOr__Class *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
    RVar1.value = TypeRef__WinningConditionAnd;
    if (gameCounterManager == pWVar2) {
      RVar1.value = pIVar3;
      if (args != (Object__Array *)0x0) {
        if (((((args->max_length == 0) ||
              (pWVar6 = (WinningConditionOr__Class *)args->vector[0], args->max_length < 2)) ||
             (pWVar2 = (WinningConditionOr__Class *)args->vector[1], args->max_length < 3)) ||
            ((args->max_length < 4 ||
             (unaff_EBX = (WinningConditionOr__Class *)args->vector[3], args->max_length < 5)))) ||
           (gameCounterManager = (WinningConditionOr__Class *)args->vector[4], args->max_length < 6)
           ) goto code_?;
        RVar1.value = args->vector[5];
        pWVar12 = TypeInfo__WinningConditionOr;
        iVar13 = func_?();
        if ((iVar13 != 0) && (RVar1.value != (WinningConditionOr__Class *)0x0)) {
          pWVar4 = RVar1.value;
          if ((((WinningCondition__Class *)(((WinningConditionOr__Class *)RVar1.value)->_0).image)
              ->_0).element_class == (TypeInfo__WinningConditionPresentStyle->_0).element_class) {
            puVar14 = (undefined1 *)func_?(RVar1.value);
            uVar15 = *puVar14;
            if (gameCounterManager == (WinningConditionOr__Class *)0x0) goto code_?;
            pWVar4 = gameCounterManager;
            if ((Il2CppClass *)((gameCounterManager->_0).image)->codeGenModule ==
                (TypeInfo__GameStatCounterType->_0).element_class) {
              puVar16 = (undefined1 *)func_?(gameCounterManager);
              uVar17 = *puVar16;
              if (unaff_EBX == (WinningConditionOr__Class *)0x0) goto code_?;
              pWVar4 = unaff_EBX;
              if ((Il2CppClass *)((unaff_EBX->_0).image)->codeGenModule ==
                  (TypeInfo__System__Boolean->_0).element_class) {
                RVar1.value = pWVar12;
                pbVar18 = (bool *)func_?(unaff_EBX);
                isBriefingNode = *pbVar18;
                if ((RVar1.value == (WinningConditionOr__Class *)0x0) ||
                   ((gameCounterManager =
                          (WinningConditionOr__Class *)
                          (((WinningConditionOr__Class *)RVar1.value)->_0).image,
                    pWVar4 = RVar1.value,
                    (TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth <=
                    (gameCounterManager->_1).typeHierarchyDepth &&
                    ((gameCounterManager->_1).typeHierarchy
                     [(TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth - 1] ==
                     (Il2CppClass *)TypeInfo__GameStatCounterManager)))) {
                  if (pWVar2 == (WinningConditionOr__Class *)0x0) goto code_?;
                  pWVar4 = pWVar2;
                  if ((((WinningCondition__Class *)(pWVar2->_0).image)->_0).element_class ==
                      (TypeInfo__System__Int32->_0).element_class) {
                    piVar5 = (int32_t *)func_?();
                    unaff_EBX = pWVar6;
                    if ((pWVar6 == (WinningConditionOr__Class *)0x0) ||
                       ((gameCounterManager = (WinningConditionOr__Class *)(pWVar6->_0).image,
                        pWVar4 = pWVar6,
                        (TypeInfo__WinningCondition->_1).typeHierarchyDepth <=
                        (gameCounterManager->_1).typeHierarchyDepth &&
                        ((gameCounterManager->_1).typeHierarchy
                         [(TypeInfo__WinningCondition->_1).typeHierarchyDepth - 1] ==
                         (Il2CppClass *)TypeInfo__WinningCondition)))) {
                      WinningConditionOr::WinningConditionOr__ctor
                                ((WinningConditionOr *)pWVar2,(WinningCondition *)pWVar6,*piVar5,
                                 RVar1.value,isBriefingNode,
                                 CONCAT31((int3)((uint)puVar16 >> 8),uVar17),
                                 CONCAT31((int3)((uint)puVar14 >> 8),uVar15),(MethodInfo *)0x0);
                      goto code_?;
                    }
                  }
                }
              }
            }
          }
          goto code_?;
        }
      }
code_?:
      func_?();
      pWVar4 = RVar1.value;
      goto code_?;
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pWVar2 = (WinningConditionOr__Class *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar1,(MethodInfo *)0x0);
    pIVar3 = TypeRef__CaptureTheFlag;
    if (gameCounterManager == pWVar2) {
      if (args != (Object__Array *)0x0) {
        if (((args->max_length == 0) || (RVar1.value = args->vector[0], args->max_length < 2)) ||
           (unaff_EBX = (WinningConditionOr__Class *)args->vector[1], args->max_length < 3))
        goto code_?;
        gameCounterManager = (WinningConditionOr__Class *)args->vector[2];
        iVar13 = func_?(TypeInfo__WinningConditionAnd);
        if (iVar13 != 0) {
          if ((gameCounterManager == (WinningConditionOr__Class *)0x0) ||
             ((pWVar4 = gameCounterManager,
              (TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth <=
              *(byte *)&(gameCounterManager->_0).image[4].nameNoExt &&
              (*(GameStatCounterManager__Class **)
                ((gameCounterManager->_0).image[2].typeCount +
                ((TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth - 1) * 4) ==
               TypeInfo__GameStatCounterManager)))) {
            if (unaff_EBX == (WinningConditionOr__Class *)0x0) goto code_?;
            pWVar4 = unaff_EBX;
            if ((Il2CppClass *)((unaff_EBX->_0).image)->codeGenModule ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar5 = (int32_t *)func_?(unaff_EBX);
              if ((RVar1.value == (WinningConditionOr__Class *)0x0) ||
                 ((unaff_EBX = (WinningConditionOr__Class *)
                               (((WinningConditionOr__Class *)RVar1.value)->_0).image,
                  pWVar4 = RVar1.value,
                  (TypeInfo__WinningCondition->_1).typeHierarchyDepth <=
                  (unaff_EBX->_1).typeHierarchyDepth &&
                  ((unaff_EBX->_1).typeHierarchy
                   [(TypeInfo__WinningCondition->_1).typeHierarchyDepth - 1] ==
                   (Il2CppClass *)TypeInfo__WinningCondition)))) {
                pWVar2 = (WinningConditionOr__Class *)0x0;
                WinningConditionAnd::WinningConditionAnd__ctor
                          ((WinningConditionAnd *)0x0,RVar1.value,*piVar5,
                           (GameStatCounterManager *)gameCounterManager,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pWVar2 = (WinningConditionOr__Class *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
    RVar1.value = TypeRef__FlagReached;
    if (gameCounterManager == pWVar2) {
      RVar1.value = pIVar3;
      if (args != (Object__Array *)0x0) {
        if (((args->max_length == 0) || (RVar1.value = args->vector[0], args->max_length < 2)) ||
           (unaff_EBX = (WinningConditionOr__Class *)args->vector[1], args->max_length < 3))
        goto code_?;
        gameCounterManager = (WinningConditionOr__Class *)args->vector[2];
        iVar13 = func_?(TypeInfo__CaptureTheFlag);
        if (iVar13 != 0) {
          if ((gameCounterManager == (WinningConditionOr__Class *)0x0) ||
             ((pWVar4 = gameCounterManager,
              (TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth <=
              *(byte *)&(gameCounterManager->_0).image[4].nameNoExt &&
              (*(GameStatCounterManager__Class **)
                ((gameCounterManager->_0).image[2].typeCount +
                ((TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth - 1) * 4) ==
               TypeInfo__GameStatCounterManager)))) {
            if (unaff_EBX == (WinningConditionOr__Class *)0x0) goto code_?;
            pWVar4 = unaff_EBX;
            if ((Il2CppClass *)((unaff_EBX->_0).image)->codeGenModule ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar5 = (int32_t *)func_?(unaff_EBX);
              if ((RVar1.value == (WinningConditionOr__Class *)0x0) ||
                 ((unaff_EBX = (WinningConditionOr__Class *)
                               (((WinningConditionOr__Class *)RVar1.value)->_0).image,
                  pWVar4 = RVar1.value,
                  (TypeInfo__WinningCondition->_1).typeHierarchyDepth <=
                  (unaff_EBX->_1).typeHierarchyDepth &&
                  ((unaff_EBX->_1).typeHierarchy
                   [(TypeInfo__WinningCondition->_1).typeHierarchyDepth - 1] ==
                   (Il2CppClass *)TypeInfo__WinningCondition)))) {
                pWVar2 = (WinningConditionOr__Class *)0x0;
                CaptureTheFlag::CaptureTheFlag__ctor
                          ((CaptureTheFlag *)0x0,RVar1.value,*piVar5,
                           (GameStatCounterManager *)gameCounterManager,(MethodInfo *)0x0);
                pWVar6 = (method->field7_0x1c).rgctx_data[1].rgctxDataDummy;
                bVar7 = (pWVar6->_1).field_0x56;
                goto joined_?;
              }
            }
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pWVar2 = (WinningConditionOr__Class *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar1,(MethodInfo *)0x0);
    pIVar3 = TypeRef__KillLimit;
    if (gameCounterManager == pWVar2) {
      if (args != (Object__Array *)0x0) {
        if (((args->max_length == 0) || (RVar1.value = args->vector[0], args->max_length < 2)) ||
           (unaff_EBX = (WinningConditionOr__Class *)args->vector[1], args->max_length < 3))
        goto code_?;
        gameCounterManager = (WinningConditionOr__Class *)args->vector[2];
        iVar13 = func_?(TypeInfo__FlagReached);
        if (iVar13 != 0) {
          if ((gameCounterManager != (WinningConditionOr__Class *)0x0) &&
             ((pWVar4 = gameCounterManager,
              *(byte *)&(gameCounterManager->_0).image[4].nameNoExt <
              (TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth ||
              (*(GameStatCounterManager__Class **)
                ((gameCounterManager->_0).image[2].typeCount +
                ((TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth - 1) * 4) !=
               TypeInfo__GameStatCounterManager)))) goto code_?;
          if (unaff_EBX == (WinningConditionOr__Class *)0x0) goto code_?;
          pWVar4 = unaff_EBX;
          if ((Il2CppClass *)((unaff_EBX->_0).image)->codeGenModule !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          piVar5 = (int32_t *)func_?(unaff_EBX);
          if (RVar1.value == (WinningConditionOr__Class *)0x0) {
            FlagReached::FlagReached__ctor
                      ((FlagReached *)0x0,(WinningCondition *)0x0,*piVar5,
                       (GameStatCounterManager *)gameCounterManager,(MethodInfo *)0x0);
            pWVar6 = RVar1.value;
          }
          else {
            unaff_EBX = (WinningConditionOr__Class *)
                        (((WinningConditionOr__Class *)RVar1.value)->_0).image;
            pWVar4 = RVar1.value;
            if (((unaff_EBX->_1).typeHierarchyDepth <
                 (TypeInfo__WinningCondition->_1).typeHierarchyDepth) ||
               ((unaff_EBX->_1).typeHierarchy
                [(TypeInfo__WinningCondition->_1).typeHierarchyDepth - 1] !=
                (Il2CppClass *)TypeInfo__WinningCondition)) goto code_?;
            pWVar6 = (WinningConditionOr__Class *)0x0;
            FlagReached::FlagReached__ctor
                      ((FlagReached *)0x0,RVar1.value,*piVar5,
                       (GameStatCounterManager *)gameCounterManager,(MethodInfo *)0x0);
          }
code_?:
          gameCounterManager =
               (WinningConditionOr__Class *)func_?((method->field7_0x1c).rgctx_data,1);
          pOVar8 = (Object *)func_?(pWVar6,gameCounterManager);
          pWVar2 = pWVar6;
          goto joined_?;
        }
      }
      goto code_?;
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pWVar2 = (WinningConditionOr__Class *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
    RVar1.value = TypeRef__OculusKillLimit;
    if (gameCounterManager == pWVar2) {
      RVar1.value = pIVar3;
      if (args != (Object__Array *)0x0) {
        if ((((args->max_length == 0) || (RVar1.value = args->vector[0], args->max_length < 2)) ||
            (unaff_EBX = (WinningConditionOr__Class *)args->vector[1], args->max_length < 3)) ||
           (args->max_length < 4)) goto code_?;
        gameCounterManager = (WinningConditionOr__Class *)args->vector[3];
        pWVar6 = (WinningConditionOr__Class *)TypeInfo__KillLimit;
        pWVar2 = (WinningConditionOr__Class *)func_?();
        if ((pWVar2 != (WinningConditionOr__Class *)0x0) &&
           (gameCounterManager != (WinningConditionOr__Class *)0x0)) {
          pWVar4 = gameCounterManager;
          if (((Il2CppClass *)((gameCounterManager->_0).image)->codeGenModule ==
               (TypeInfo__System__Int32->_0).element_class) &&
             ((func_?(gameCounterManager), gameCounterManager = pWVar6,
              gameCounterManager == (WinningConditionOr__Class *)0x0 ||
              ((pWVar4 = gameCounterManager,
               (TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth <=
               *(byte *)&(gameCounterManager->_0).image[4].nameNoExt &&
               (*(GameStatCounterManager__Class **)
                 ((gameCounterManager->_0).image[2].typeCount +
                 ((TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth - 1) * 4) ==
                TypeInfo__GameStatCounterManager)))))) {
            if (unaff_EBX == (WinningConditionOr__Class *)0x0) goto code_?;
            pWVar4 = unaff_EBX;
            if ((Il2CppClass *)((unaff_EBX->_0).image)->codeGenModule ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar5 = (int32_t *)func_?(unaff_EBX);
              if ((RVar1.value == (WinningConditionOr__Class *)0x0) ||
                 ((unaff_EBX = (WinningConditionOr__Class *)
                               (((WinningConditionOr__Class *)RVar1.value)->_0).image,
                  pWVar4 = RVar1.value,
                  (TypeInfo__WinningCondition->_1).typeHierarchyDepth <=
                  (unaff_EBX->_1).typeHierarchyDepth &&
                  ((unaff_EBX->_1).typeHierarchy
                   [(TypeInfo__WinningCondition->_1).typeHierarchyDepth - 1] ==
                   (Il2CppClass *)TypeInfo__WinningCondition)))) {
                KillLimit::KillLimit__ctor
                          ((KillLimit *)pWVar2,RVar1.value,*piVar5,
                           (GameStatCounterManager *)gameCounterManager,0,(MethodInfo *)0x0);
code_?:
                pWVar6 = (WinningConditionOr__Class *)
                         func_?((method->field7_0x1c).rgctx_data,1);
                pOVar8 = (Object *)func_?(pWVar2,pWVar6);
                gameCounterManager = pWVar2;
                goto joined_?;
              }
            }
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pWVar2 = (WinningConditionOr__Class *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar1,(MethodInfo *)0x0);
    pIVar3 = TypeRef__TargetAssasinated;
    if (gameCounterManager == pWVar2) {
      if (args != (Object__Array *)0x0) {
        if ((((args->max_length == 0) || (RVar1.value = args->vector[0], args->max_length < 2)) ||
            (unaff_EBX = (WinningConditionOr__Class *)args->vector[1], args->max_length < 3)) ||
           (args->max_length < 4)) goto code_?;
        gameCounterManager = (WinningConditionOr__Class *)args->vector[3];
        pWVar6 = (WinningConditionOr__Class *)TypeInfo__OculusKillLimit;
        pWVar2 = (WinningConditionOr__Class *)func_?();
        if ((pWVar2 != (WinningConditionOr__Class *)0x0) &&
           (gameCounterManager != (WinningConditionOr__Class *)0x0)) {
          pWVar4 = gameCounterManager;
          if (((Il2CppClass *)((gameCounterManager->_0).image)->codeGenModule ==
               (TypeInfo__System__Int32->_0).element_class) &&
             ((func_?(gameCounterManager), gameCounterManager = pWVar6,
              gameCounterManager == (WinningConditionOr__Class *)0x0 ||
              ((pWVar4 = gameCounterManager,
               (TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth <=
               *(byte *)&(gameCounterManager->_0).image[4].nameNoExt &&
               (*(GameStatCounterManager__Class **)
                 ((gameCounterManager->_0).image[2].typeCount +
                 ((TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth - 1) * 4) ==
                TypeInfo__GameStatCounterManager)))))) {
            if (unaff_EBX == (WinningConditionOr__Class *)0x0) goto code_?;
            pWVar4 = unaff_EBX;
            if ((Il2CppClass *)((unaff_EBX->_0).image)->codeGenModule ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar5 = (int32_t *)func_?(unaff_EBX);
              if ((RVar1.value == (WinningConditionOr__Class *)0x0) ||
                 ((unaff_EBX = (WinningConditionOr__Class *)
                               (((WinningConditionOr__Class *)RVar1.value)->_0).image,
                  pWVar4 = RVar1.value,
                  (TypeInfo__WinningCondition->_1).typeHierarchyDepth <=
                  (unaff_EBX->_1).typeHierarchyDepth &&
                  ((unaff_EBX->_1).typeHierarchy
                   [(TypeInfo__WinningCondition->_1).typeHierarchyDepth - 1] ==
                   (Il2CppClass *)TypeInfo__WinningCondition)))) {
                OculusKillLimit::OculusKillLimit__ctor
                          ((OculusKillLimit *)pWVar2,RVar1.value,*piVar5,
                           (GameStatCounterManager *)gameCounterManager,0,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pWVar2 = (WinningConditionOr__Class *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
    RVar1.value = TypeRef__TargetAssasinatedGroup;
    if (gameCounterManager == pWVar2) {
      RVar1.value = pIVar3;
      if (args != (Object__Array *)0x0) {
        if ((((args->max_length == 0) ||
             (unaff_EBX = (WinningConditionOr__Class *)args->vector[0], args->max_length < 2)) ||
            (pWVar6 = (WinningConditionOr__Class *)args->vector[1], args->max_length < 3)) ||
           ((pWVar12 = (WinningConditionOr__Class *)args->vector[2], args->max_length < 4 ||
            (gameCounterManager = (WinningConditionOr__Class *)args->vector[3], args->max_length < 5
            )))) goto code_?;
        RVar1.value = args->vector[4];
        pWVar2 = (WinningConditionOr__Class *)func_?(TypeInfo__TargetAssasinated);
        if ((pWVar2 != (WinningConditionOr__Class *)0x0) &&
           (RVar1.value != (WinningConditionOr__Class *)0x0)) {
          pWVar4 = RVar1.value;
          if ((((WinningCondition__Class *)(((WinningConditionOr__Class *)RVar1.value)->_0).image)
              ->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
            piVar5 = (int32_t *)func_?(RVar1.value);
            assassineeActorNumber = *piVar5;
            if (gameCounterManager == (WinningConditionOr__Class *)0x0) goto code_?;
            pWVar4 = gameCounterManager;
            if ((Il2CppClass *)((gameCounterManager->_0).image)->codeGenModule ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar5 = (int32_t *)func_?(gameCounterManager);
              assassinatorActorNumber = *piVar5;
              RVar1.value = pWVar12;
              if ((pWVar12 == (WinningConditionOr__Class *)0x0) ||
                 ((gameCounterManager = (WinningConditionOr__Class *)(pWVar12->_0).image,
                  pWVar4 = pWVar12,
                  (TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth <=
                  (gameCounterManager->_1).typeHierarchyDepth &&
                  ((gameCounterManager->_1).typeHierarchy
                   [(TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth - 1] ==
                   (Il2CppClass *)TypeInfo__GameStatCounterManager)))) {
                if (pWVar6 == (WinningConditionOr__Class *)0x0) goto code_?;
                pWVar4 = pWVar6;
                if ((Il2CppClass *)((pWVar6->_0).image)->codeGenModule ==
                    (TypeInfo__System__Int32->_0).element_class) {
                  piVar5 = (int32_t *)func_?(pWVar6);
                  if ((unaff_EBX == (WinningConditionOr__Class *)0x0) ||
                     ((gameCounterManager = (WinningConditionOr__Class *)(unaff_EBX->_0).image,
                      pWVar4 = unaff_EBX,
                      (TypeInfo__WinningCondition->_1).typeHierarchyDepth <=
                      (gameCounterManager->_1).typeHierarchyDepth &&
                      ((gameCounterManager->_1).typeHierarchy
                       [(TypeInfo__WinningCondition->_1).typeHierarchyDepth - 1] ==
                       (Il2CppClass *)TypeInfo__WinningCondition)))) {
                    TargetAssasinated::TargetAssasinated__ctor
                              ((TargetAssasinated *)pWVar2,(WinningCondition *)unaff_EBX,*piVar5,
                               (GameStatCounterManager *)pWVar12,assassinatorActorNumber,
                               assassineeActorNumber,(MethodInfo *)0x0);
                    pWVar6 = (WinningConditionOr__Class *)
                             func_?((method->field7_0x1c).rgctx_data,1);
                    pOVar8 = (Object *)func_?(pWVar2,pWVar6);
                    gameCounterManager = pWVar2;
                    goto joined_?;
                  }
                }
              }
            }
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pWVar2 = (WinningConditionOr__Class *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar1,(MethodInfo *)0x0);
    pIVar3 = TypeRef__TimeLimit;
    if (gameCounterManager == pWVar2) {
      if (args != (Object__Array *)0x0) {
        if (((args->max_length == 0) || (RVar1.value = args->vector[0], args->max_length < 2)) ||
           (unaff_EBX = (WinningConditionOr__Class *)args->vector[1], args->max_length < 3))
        goto code_?;
        gameCounterManager = (WinningConditionOr__Class *)args->vector[2];
        pWVar6 = (WinningConditionOr__Class *)func_?(TypeInfo__TargetAssasinatedGroup);
        if (pWVar6 != (WinningConditionOr__Class *)0x0) {
          if ((gameCounterManager == (WinningConditionOr__Class *)0x0) ||
             ((pWVar4 = gameCounterManager,
              (TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth <=
              *(byte *)&(gameCounterManager->_0).image[4].nameNoExt &&
              (*(GameStatCounterManager__Class **)
                ((gameCounterManager->_0).image[2].typeCount +
                ((TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth - 1) * 4) ==
               TypeInfo__GameStatCounterManager)))) {
            if (unaff_EBX == (WinningConditionOr__Class *)0x0) goto code_?;
            pWVar4 = unaff_EBX;
            if ((Il2CppClass *)((unaff_EBX->_0).image)->codeGenModule ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar5 = (int32_t *)func_?(unaff_EBX);
              if (RVar1.value == (WinningConditionOr__Class *)0x0) {
                TargetAssasinatedGroup::TargetAssasinatedGroup__ctor
                          ((TargetAssasinatedGroup *)pWVar6,(WinningCondition *)0x0,*piVar5,
                           (GameStatCounterManager *)gameCounterManager,(MethodInfo *)0x0);
              }
              else {
                unaff_EBX = (WinningConditionOr__Class *)
                            (((WinningConditionOr__Class *)RVar1.value)->_0).image;
                pWVar4 = RVar1.value;
                if (((unaff_EBX->_1).typeHierarchyDepth <
                     (TypeInfo__WinningCondition->_1).typeHierarchyDepth) ||
                   ((unaff_EBX->_1).typeHierarchy
                    [(TypeInfo__WinningCondition->_1).typeHierarchyDepth - 1] !=
                    (Il2CppClass *)TypeInfo__WinningCondition)) goto code_?;
                TargetAssasinatedGroup::TargetAssasinatedGroup__ctor
                          ((TargetAssasinatedGroup *)pWVar6,RVar1.value,*piVar5,
                           (GameStatCounterManager *)gameCounterManager,(MethodInfo *)0x0);
              }
              goto code_?;
            }
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pWVar2 = (WinningConditionOr__Class *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
    RVar1.value = TypeRef__TimeAttackFlagReached;
    if (gameCounterManager == pWVar2) {
      RVar1.value = pIVar3;
      if (args != (Object__Array *)0x0) {
        if (((args->max_length == 0) || (RVar1.value = args->vector[0], args->max_length < 2)) ||
           (unaff_EBX = (WinningConditionOr__Class *)args->vector[1], args->max_length < 3))
        goto code_?;
        gameCounterManager = (WinningConditionOr__Class *)args->vector[2];
        pWVar6 = (WinningConditionOr__Class *)func_?(TypeInfo__TimeLimit);
        if (pWVar6 != (WinningConditionOr__Class *)0x0) {
          if ((gameCounterManager == (WinningConditionOr__Class *)0x0) ||
             ((pWVar4 = gameCounterManager,
              (TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth <=
              *(byte *)&(gameCounterManager->_0).image[4].nameNoExt &&
              (*(GameStatCounterManager__Class **)
                ((gameCounterManager->_0).image[2].typeCount +
                ((TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth - 1) * 4) ==
               TypeInfo__GameStatCounterManager)))) {
            if (unaff_EBX == (WinningConditionOr__Class *)0x0) goto code_?;
            pWVar4 = unaff_EBX;
            if ((Il2CppClass *)((unaff_EBX->_0).image)->codeGenModule ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar5 = (int32_t *)func_?(unaff_EBX);
              if (RVar1.value == (WinningConditionOr__Class *)0x0) {
                TimeLimit::TimeLimit__ctor
                          ((TimeLimit *)pWVar6,(WinningCondition *)0x0,*piVar5,
                           (GameStatCounterManager *)gameCounterManager,(MethodInfo *)0x0);
              }
              else {
                unaff_EBX = (WinningConditionOr__Class *)
                            (((WinningConditionOr__Class *)RVar1.value)->_0).image;
                pWVar4 = RVar1.value;
                if (((unaff_EBX->_1).typeHierarchyDepth <
                     (TypeInfo__WinningCondition->_1).typeHierarchyDepth) ||
                   ((unaff_EBX->_1).typeHierarchy
                    [(TypeInfo__WinningCondition->_1).typeHierarchyDepth - 1] !=
                    (Il2CppClass *)TypeInfo__WinningCondition)) goto code_?;
                TimeLimit::TimeLimit__ctor
                          ((TimeLimit *)pWVar6,RVar1.value,*piVar5,
                           (GameStatCounterManager *)gameCounterManager,(MethodInfo *)0x0);
              }
              goto code_?;
            }
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pWVar2 = (WinningConditionOr__Class *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar1,(MethodInfo *)0x0);
    if (gameCounterManager != pWVar2) {
      return (Object *)0x0;
    }
    if (args == (Object__Array *)0x0) goto code_?;
    if (((args->max_length == 0) || (RVar1.value = args->vector[0], args->max_length < 2)) ||
       (unaff_EBX = (WinningConditionOr__Class *)args->vector[1], args->max_length < 3))
    goto code_?;
    gameCounterManager = (WinningConditionOr__Class *)args->vector[2];
    pWVar6 = (WinningConditionOr__Class *)func_?(TypeInfo__TimeAttackFlagReached);
    if (pWVar6 == (WinningConditionOr__Class *)0x0) goto code_?;
    if ((gameCounterManager == (WinningConditionOr__Class *)0x0) ||
       ((pGVar11 = TypeInfo__GameStatCounterManager,
        (TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth <=
        *(byte *)&(gameCounterManager->_0).image[4].nameNoExt &&
        (*(GameStatCounterManager__Class **)
          ((gameCounterManager->_0).image[2].typeCount +
          ((TypeInfo__GameStatCounterManager->_1).typeHierarchyDepth - 1) * 4) ==
         TypeInfo__GameStatCounterManager)))) {
      if (unaff_EBX == (WinningConditionOr__Class *)0x0) goto code_?;
      pIVar10 = TypeInfo__System__Int32;
      if ((Il2CppClass *)((unaff_EBX->_0).image)->codeGenModule ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar5 = (int32_t *)func_?(unaff_EBX);
        if ((RVar1.value == (WinningConditionOr__Class *)0x0) ||
           ((unaff_EBX = (WinningConditionOr__Class *)
                         (((WinningConditionOr__Class *)RVar1.value)->_0).image,
            pWVar9 = TypeInfo__WinningCondition,
            (TypeInfo__WinningCondition->_1).typeHierarchyDepth <=
            (unaff_EBX->_1).typeHierarchyDepth &&
            ((unaff_EBX->_1).typeHierarchy[(TypeInfo__WinningCondition->_1).typeHierarchyDepth - 1]
             == (Il2CppClass *)TypeInfo__WinningCondition)))) {
          TimeAttackFlagReached::TimeAttackFlagReached__ctor
                    ((TimeAttackFlagReached *)pWVar6,RVar1.value,*piVar5,
                     (GameStatCounterManager *)gameCounterManager,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?(gameCounterManager,pGVar11);
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  pOVar8 = (Object *)(*pcVar19)();
  return pOVar8;
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
  if (value != (Object *)0x0) {
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
    if (this_00 != (Object__Class *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__List<IWinningCondition>__List__);
      method_00 = (MethodInfo *)(value + 1);
      value[1].klass = this_00;
      func_?(method_00,this_00);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,method_00);
      this_01 = (Func_2_Object_Boolean_ *)
                func_?(TypeInfo__System__Func<IWinningCondition,_bool>);
      if (this_01 != (Func_2_Object_Boolean_ *)0x0) {
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  (this_01,value,
                   MethodInfo__WinningConditionManager__ForfilledWinnerConditionGenerator__HandleWinningConditionForReport_IWinningCondition_
                   ,(MethodInfo *)0x0);
        if ((this != (WinningConditionManager *)0x0) &&
           (pWVar1 = (this->fields).winnerConditionsRoot, pWVar1 != (WinningConditionOr *)0x0)) {
          (*(pWVar1->klass->vtable).Traverse_1.methodPtr)
                    (pWVar1,this_01,(pWVar1->klass->vtable).Traverse_1.method);
          return (List_1_IWinningCondition_ *)value[1].klass;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pLVar3 = (List_1_IWinningCondition_ *)(*pcVar2)();
  return pLVar3;
}


/* Object GetSingletonWinnerConditionByType[Object]() */

Object * MVWorldObject.dll::WinningConditionManager::
         WinningConditionManager_GetSingletonWinnerConditionByType
                   (WinningConditionManager *this,MethodInfo *method)

{
  pMVar1 = method;
  pMVar2 = (MethodInfo *)
           (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                     (this,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  if (pMVar2 == (MethodInfo *)0x0) {
code_?:
    func_?();
    pIVar3 = extraout_ECX;
  }
  else {
    iVar4 = (*((method->field7_0x1c).rgctx_data[2].method)->virtualMethodPointer)
                      (pMVar2,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy);
    if (iVar4 == 0) {
      return (Object *)0x0;
    }
    iVar4 = (*((method->field7_0x1c).rgctx_data[2].method)->virtualMethodPointer)
                      (pMVar2,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy);
    pIVar3 = (method->field7_0x1c).rgctx_data;
    if (1 < iVar4) goto code_?;
    piVar5 = (int *)(*(pIVar3[4].method)->virtualMethodPointer)
                              (pMVar2,0,(method->field7_0x1c).rgctx_data[4].rgctxDataDummy);
    if (piVar5 == (int *)0x0) goto code_?;
    cVar6 = (**(code **)(*piVar5 + 0x16c))(piVar5,*(undefined4 *)(*piVar5 + 0x170));
    pIVar3 = (method->field7_0x1c).rgctx_data;
    if (cVar6 != '\0') {
      pOVar7 = (Object *)
               (*(pIVar3[4].method)->virtualMethodPointer)
                         (pMVar2,0,(method->field7_0x1c).rgctx_data[4].rgctxDataDummy);
      return pOVar7;
    }
  }
  RVar8.value = (void *)func_?(pIVar3,3);
  uVar9 = func_?(&TypeInfo__System__Type);
  func_?(uVar9);
  pTVar10 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar8,(MethodInfo *)0x0);
  pMVar2 = (MethodInfo *)0x0;
  pSVar11 = (String *)func_?(&StringLiteral_Type_is_not_singleton__0_);
  pSVar11 = mscorlib.dll::System::String::String_Format(pSVar11,(Object *)pTVar10,pMVar2);
  uVar9 = func_?(&TypeInfo__System__Exception);
  pEVar12 = (Exception *)func_?(uVar9);
  func_?(pEVar12);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar12,pSVar11,(MethodInfo *)0x0);
  pMVar2 = (MethodInfo *)
           func_?(&
                           System__Object_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<System::Object>__
                          );
  func_?();
  pIVar3 = extraout_ECX_00;
code_?:
  method = pMVar2;
  RVar8.value = (void *)func_?(pIVar3,3);
  uVar9 = func_?(&TypeInfo__System__Type);
  func_?(uVar9);
  pTVar10 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar8,(MethodInfo *)0x0);
  func_?(method);
  uVar9 = func_?((pMVar1->field7_0x1c).rgctx_data,2);
  pcVar13 = (code *)func_?(uVar9);
  uVar9 = func_?((pMVar1->field7_0x1c).rgctx_data,2);
  uStack_14 = (*pcVar13)(method,uVar9);
  uVar9 = func_?(&TypeInfo__System__Int32,&uStack_14);
  pOVar7 = (Object *)func_?(uVar9);
  pMVar1 = (MethodInfo *)0x0;
  pSVar11 = (String *)func_?(&StringLiteral_Singleton_count_of_type__0__is__);
  pSVar11 = mscorlib.dll::System::String::String_Format_1(pSVar11,(Object *)pTVar10,pOVar7,pMVar1);
  uVar9 = func_?(&TypeInfo__System__Exception);
  pEVar12 = (Exception *)func_?(uVar9);
  func_?(pEVar12);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar12,pSVar11,(MethodInfo *)0x0);
  uStack15 =
       func_?(&
                       System__Object_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<System::Object>__
                      );
  func_?();
  pcVar13 = (code *)swi(3);
  pOVar7 = (Object *)(*pcVar13)();
  return pOVar7;
}


/* WinningCondition GetWinnerConditionByID(Int32) */

WinningCondition *
MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetWinnerConditionByID
          (WinningConditionManager *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Func<IWinningCondition,_bool>);
    func_?(&
                    MethodInfo__WinningConditionManager____c__DisplayClass6___GetWinnerConditionByID_b__5_IWinningCondition_
                   );
    func_?(&TypeInfo__WinningConditionManager____c__DisplayClass6);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__WinningConditionManager____c__DisplayClass6);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].monitor = (MonitorData *)id;
    value[1].klass = (Object__Class *)0x0;
    func_?(value + 1,0);
    pWVar1 = (this->fields).winnerConditionsRoot;
    this_00 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<IWinningCondition,_bool>);
    if (this_00 != (Func_2_Object_Boolean_ *)0x0) {
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                (this_00,value,
                 MethodInfo__WinningConditionManager____c__DisplayClass6___GetWinnerConditionByID_b__5_IWinningCondition_
                 ,(MethodInfo *)0x0);
      if (pWVar1 != (WinningConditionOr *)0x0) {
        (*(pWVar1->klass->vtable).Traverse_1.methodPtr)
                  (pWVar1,this_00,(pWVar1->klass->vtable).Traverse_1.method);
        return (WinningCondition *)value[1].klass;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pWVar3 = (WinningCondition *)(*pcVar2)();
  return pWVar3;
}


/* Object GetWinnerConditionByTypeAndID[Object](Int32) */

Object * MVWorldObject.dll::WinningConditionManager::
         WinningConditionManager_GetWinnerConditionByTypeAndID
                   (WinningConditionManager *this,int32_t id,MethodInfo *method)

{
  pWVar1 = WinningConditionManager_GetWinnerConditionByID(this,id,(MethodInfo *)0x0);
  pvVar2 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
    pvVar2 = (void *)func_?(pvVar2);
  }
  if (pWVar1 == (WinningCondition *)0x0) {
    return (Object *)0x0;
  }
  pOVar3 = (Object *)func_?(pWVar1,pvVar2);
  if (pOVar3 != (Object *)0x0) {
    return pOVar3;
  }
  func_?(pWVar1,pvVar2);
  pcVar4 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar4)();
  return pOVar3;
}


/* List`1[System.Object] GetWinnerConditionsByType[Object]() */

List_1_System_Object_ *
MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetWinnerConditionsByType
          (WinningConditionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Func<IWinningCondition,_bool>);
    cRam_? = '\x01';
  }
  pvVar1 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  object = (Object *)func_?(pvVar1);
  if (object != (Object *)0x0) {
    (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
              (object,(method->field7_0x1c).rgctx_data[1].method);
    pvVar1 = (method->field7_0x1c).rgctx_data[2].rgctxDataDummy;
    if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
      pvVar1 = (void *)func_?(pvVar1);
    }
    pOVar2 = (Object__Class *)func_?(pvVar1);
    if (pOVar2 != (Object__Class *)0x0) {
      (*((method->field7_0x1c).rgctx_data[3].method)->virtualMethodPointer)
                (pOVar2,(method->field7_0x1c).rgctx_data[3].method);
      object[1].klass = pOVar2;
      func_?(object + 1,pOVar2);
      pWVar3 = (this->fields).winnerConditionsRoot;
      this_00 = (Func_2_Object_Boolean_ *)
                func_?(TypeInfo__System__Func<IWinningCondition,_bool>);
      if (this_00 != (Func_2_Object_Boolean_ *)0x0) {
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  (this_00,object,(method->field7_0x1c).rgctx_data[4].rgctxDataDummy,
                   (MethodInfo *)0x0);
        if (pWVar3 != (WinningConditionOr *)0x0) {
          (*(pWVar3->klass->vtable).Traverse_1.methodPtr)
                    (pWVar3,this_00,(pWVar3->klass->vtable).Traverse_1.method);
          return (List_1_System_Object_ *)object[1].klass;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pLVar5 = (List_1_System_Object_ *)(*pcVar4)();
  return pLVar5;
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
      if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_01,(Object *)this_00,
                   MethodInfo__WinningConditionManager__winnerConditionsRoot_OnWinningConditionChanged_System__Object__System__EventArgs_
                   ,(MethodInfo *)0x0);
        if (pWVar5 != (WinningConditionOr *)0x0) {
          WinningCondition::WinningCondition_add_OnWinningConditionChanged
                    ((WinningCondition *)pWVar5,(EventHandler_1_EventArgs_ *)this_01,
                     (MethodInfo *)0x0);
          return;
        }
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
    if (((TypeInfo__TimeLimit->_1).typeHierarchyDepth <=
         (winningCondition->klass->_1).typeHierarchyDepth) &&
       ((winningCondition->klass->_1).typeHierarchy
        [(TypeInfo__TimeLimit->_1).typeHierarchyDepth - 1] == (Il2CppClass *)TypeInfo__TimeLimit)) {
      return 1;
    }
  }
  return 0;
}


/* Void PublishWinningConditionLimitChanged() */

void MVWorldObject.dll::WinningConditionManager::
     WinningConditionManager_PublishWinningConditionLimitChanged
               (WinningConditionManager *this,MethodInfo *method)

{
  if ((this->fields).OnWinningConditionStateChangedEditMode != (EventHandler_1_EventArgs_ *)0x0) {
    pEVar1 = (this->fields).OnWinningConditionStateChangedEditMode;
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,0,(pEVar1->fields)._._.method);
  }
  return;
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
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,id,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Item_int_
                         );
      this_00 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(TypeInfo__System__EventHandler<System::EventArgs>);
      if ((this_00 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
         (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_00,(Object *)object,
                     (object->klass->vtable).winnerCondition_OnWinningConditionChanged.method,
                     (MethodInfo *)0x0), pOVar3 != (Object *)0x0)) {
        uVar4 = 0;
        uVar5 = 0;
        pOVar6 = pOVar3->klass;
        uVar7 = (pOVar6->_1).interface_offsets_count;
        pWVar8 = pWVar1;
        if (uVar7 != 0) {
          do {
            if (pOVar6->interfaceOffsets[uVar4].interfaceType ==
                (Il2CppClass *)TypeInfo__IWinningCondition) {
              ppIVar9 = &pOVar6[1]._0.image + pOVar6->interfaceOffsets[uVar4].offset * 2;
              goto code_?;
            }
            uVar4 = uVar4 + 1;
            object = pWVar1;
          } while (uVar4 < uVar7);
        }
        ppIVar9 = (Il2CppImage **)func_?(pOVar3,TypeInfo__IWinningCondition,4);
        pWVar1 = object;
code_?:
        (*(code *)*ppIVar9)(pOVar3,this_00,ppIVar9[1]);
        pDVar2 = (pWVar1->fields)._.winnerConditions;
        if (pDVar2 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Remove_int_
                    );
          if ((this->fields).OnWinningConditionAddedOrRemoved != (EventHandler_1_EventArgs_ *)0x0) {
            pEVar10 = (this->fields).OnWinningConditionAddedOrRemoved;
            this_01 = (TweenRunner_1_FloatTween_ *)
                      func_?(TypeInfo__System__EventArgs,this_00,pWVar8,uVar5);
            if (this_01 == (TweenRunner_1_FloatTween_ *)0x0) goto code_?;
            UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
            TweenRunner_1_FloatTween___ctor(this_01,(MethodInfo *)0x0);
            (*(pEVar10->fields)._._.invoke_impl)
                      ((pEVar10->fields)._._.method_code,this,this_01,(pEVar10->fields)._._.method);
          }
          return;
        }
      }
    }
  }
code_?:
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
    this_01 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<IWinningCondition,_bool>);
    if (this_01 == (Func_2_Object_Boolean_ *)0x0) goto code_?;
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              (this_01,(Object *)0x0,
               MethodInfo__WinningConditionManager___Reset_b__0_IWinningCondition_,(MethodInfo *)0x0
              );
    TypeInfo__WinningConditionManager->static_fields->CS___9__CachedAnonymousMethodDelegate1 =
         (Func_2_IWinningCondition_Boolean_ *)this_01;
    func_?(TypeInfo__WinningConditionManager->static_fields,this_01);
  }
  pWVar1 = (this->fields).winnerConditionsRoot;
  if (pWVar1 != (WinningConditionOr *)0x0) {
    (*(pWVar1->klass->vtable).Traverse_1.methodPtr)
              (pWVar1,TypeInfo__WinningConditionManager->static_fields->
                      CS___9__CachedAnonymousMethodDelegate1,
               (pWVar1->klass->vtable).Traverse_1.method);
    this_00 = (this->fields).gameCounterManager;
    if (this_00 != (GameStatCounterManager *)0x0) {
      GameStatCounterManager::GameStatCounterManager_Clear(this_00,(MethodInfo *)0x0);
      if ((this->fields).OnWinningConditionReset != (EventHandler_1_EventArgs_ *)0x0) {
        pEVar2 = (this->fields).OnWinningConditionReset;
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
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetLimitForSingletonWinningConditionWithRoundReset[Object](Int32) */

void MVWorldObject.dll::WinningConditionManager::
     WinningConditionManager_SetLimitForSingletonWinningConditionWithRoundReset
               (WinningConditionManager *this,int32_t limit,MethodInfo *method)

{
  iVar1 = (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                    (this,((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
  if (iVar1 == 0) goto code_?;
  iVar2 = (*((method->field7_0x1c).rgctx_data[2].method)->virtualMethodPointer)
                    (iVar1,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = (*((method->field7_0x1c).rgctx_data[2].method)->virtualMethodPointer)
                    (iVar1,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy);
  pIVar3 = (method->field7_0x1c).rgctx_data;
  if (1 < iVar2) goto code_?;
  piVar4 = (int *)(*(pIVar3[4].method)->virtualMethodPointer)
                            (iVar1,0,(method->field7_0x1c).rgctx_data[4].rgctxDataDummy);
  if (piVar4 == (int *)0x0) {
code_?:
    func_?();
    pIVar3 = extraout_ECX;
  }
  else {
    cVar5 = (**(code **)(*piVar4 + 0x16c))(piVar4,*(undefined4 *)(*piVar4 + 0x170));
    pIVar3 = (method->field7_0x1c).rgctx_data;
    if (cVar5 != '\0') {
      this_00 = (WinningCondition *)
                (*(pIVar3[4].method)->virtualMethodPointer)
                          (iVar1,0,(method->field7_0x1c).rgctx_data[4].rgctxDataDummy);
      if (this_00 != (WinningCondition *)0x0) {
        WinningCondition::WinningCondition_SetLimit
                  (this_00,limit,(method->field7_0x1c).rgctx_data[7].method);
        WinningConditionManager_PublishWinningConditionLimitChanged(this,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  RVar6.value = (void *)func_?(pIVar3,3);
  uVar7 = func_?(&TypeInfo__System__Type);
  func_?(uVar7);
  pTVar8 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar6,(MethodInfo *)0x0);
  pMVar9 = (MethodInfo *)0x0;
  pSVar10 = (String *)func_?(&StringLiteral_Type_is_not_singleton__0_);
  pSVar10 = mscorlib.dll::System::String::String_Format(pSVar10,(Object *)pTVar8,pMVar9);
  uVar7 = func_?(&TypeInfo__System__Exception);
  pEVar11 = (Exception *)func_?(uVar7);
  func_?(pEVar11);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar11,pSVar10,(MethodInfo *)0x0);
  func_?(&
                  void_MethodInfo__WinningConditionManager__SetLimitForSingletonWinningConditionWithRoundReset<System::Object>_int_
                 );
  func_?();
  pIVar3 = extraout_ECX_00;
code_?:
  RVar6.value = (void *)func_?(pIVar3,3);
  uVar7 = func_?(&TypeInfo__System__Type);
  func_?(uVar7);
  pTVar8 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar6,(MethodInfo *)0x0);
  func_?(iVar1);
  uVar7 = func_?((method->field7_0x1c).rgctx_data,2);
  pcVar12 = (code *)func_?(uVar7);
  uVar7 = func_?((method->field7_0x1c).rgctx_data,2);
  uStack_13 = (*pcVar12)(iVar1,uVar7);
  uVar7 = func_?(&TypeInfo__System__Int32,&uStack_13);
  arg1 = (Object *)func_?(uVar7);
  pMVar9 = (MethodInfo *)0x0;
  pSVar10 = (String *)func_?(&StringLiteral_Singleton_count_of_type__0__is__);
  pSVar10 = mscorlib.dll::System::String::String_Format_1(pSVar10,(Object *)pTVar8,arg1,pMVar9);
  uVar7 = func_?(&TypeInfo__System__Exception);
  pEVar11 = (Exception *)func_?(uVar7);
  func_?(pEVar11);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar11,pSVar10,(MethodInfo *)0x0);
  func_?(&
                  void_MethodInfo__WinningConditionManager__SetLimitForSingletonWinningConditionWithRoundReset<System::Object>_int_
                 );
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pWStack_2 = (this->fields).winnerConditionsRoot;
  if (pWStack_2 != (WinningConditionOr *)0x0) {
    pMStack_1 = (pWStack_2->klass->vtable).Traverse_1.method;
    pFStack_3 = callBack;
    (*(pWStack_2->klass->vtable).Traverse_1.methodPtr)();
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
    uStack_3 = 10;
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


/* Void add_OnWinningConditionChanged(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningConditionManager::
     WinningConditionManager_add_OnWinningConditionChanged
               (WinningConditionManager *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnWinningConditionChanged;
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
             func_?(&(this->fields).OnWinningConditionChanged,iVar3,a);
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


/* Void add_OnWinningConditionStateChangedEditMode(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningConditionManager::
     WinningConditionManager_add_OnWinningConditionStateChangedEditMode
               (WinningConditionManager *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnWinningConditionStateChangedEditMode;
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
             func_?(&(this->fields).OnWinningConditionStateChangedEditMode,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Boolean get_WinningConditionFound() */

bool MVWorldObject.dll::WinningConditionManager::WinningConditionManager_get_WinningConditionFound
               (WinningConditionManager *this,MethodInfo *method)

{
  return (this->fields)._WinningConditionFound_k__BackingField;
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


/* Void remove_OnWinningConditionChanged(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningConditionManager::
     WinningConditionManager_remove_OnWinningConditionChanged
               (WinningConditionManager *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnWinningConditionChanged;
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
             func_?(&(this->fields).OnWinningConditionChanged,iVar3,source);
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


/* Void remove_OnWinningConditionStateChangedEditMode(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningConditionManager::
     WinningConditionManager_remove_OnWinningConditionStateChangedEditMode
               (WinningConditionManager *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnWinningConditionStateChangedEditMode;
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
             func_?(&(this->fields).OnWinningConditionStateChangedEditMode,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
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
  if ((this->fields).OnWinningConditionChanged != (EventHandler_1_EventArgs_ *)0x0) {
    pEVar1 = (this->fields).OnWinningConditionChanged;
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,eventArgs,(pEVar1->fields)._._.method);
  }
  (this->fields)._WinningConditionFound_k__BackingField = 1;
  return;
}

