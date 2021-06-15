
/* Void AddWinnerConditionToNode(WinningCondition, WinningCondition) */

void MVWorldObject.dll::WinningConditionManager::WinningConditionManager_AddWinnerConditionToNode
               (WinningConditionManager *this,WinningCondition *parent,
               WinningCondition *winnerCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (parent == (WinningCondition *)0x0) {
    this_01 = (StackOverflowException *)
              func_?(TypeInfo__System__Collections__Generic__KeyNotFoundException);
    mscorlib.dll::System::StackOverflowException::StackOverflowException__ctor_1
              (this_01,StringLiteral_Could_not_find_winner_condition_,(MethodInfo *)0x0);
    func_?(this_01,0,
                    MethodInfo__WinningConditionManager__AddWinnerConditionToNode_WinningCondition__WinningCondition_
                   );
  }
  else {
    bVar1 = (TypeInfo__WinningConditionGroup->_1).naturalAligment;
    if (((parent->klass->_1).naturalAligment < bVar1) ||
       ((parent->klass->_1).typeHierarchy[bVar1 - 1] !=
        (Il2CppClass *)TypeInfo__WinningConditionGroup)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pWVar3 = (WinningCondition *)0x0;
    if (bVar2) {
      pWVar3 = parent;
    }
    if (pWVar3 == (WinningCondition *)0x0) goto code_?;
    iVar4 = func_?(parent,TypeInfo__WinningConditionGroup);
    if (iVar4 != 0) {
      object = (Object *)func_?(parent,TypeInfo__WinningConditionGroup);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((winnerCondition != (WinningCondition *)0x0) &&
         ((Dictionary_2_System_Int32_System_Object_ *)object[5].monitor !=
          (Dictionary_2_System_Int32_System_Object_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)object[5].monitor,
                   (winnerCondition->fields).id,(Object *)winnerCondition,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Add_int__IWinningCondition_
                  );
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_00,object,(void *)object->klass[1]._1.element_size,
                   MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                  );
        WinningCondition::WinningCondition_add_OnWinningConditionChanged
                  (winnerCondition,(EventHandler_1_EventArgs_ *)this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
code_?:
  this_02 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_02,StringLiteral_Type_not_winnerConditionGroup,(MethodInfo *)0x0);
  func_?(this_02,0,
                  MethodInfo__WinningConditionManager__AddWinnerConditionToNode_WinningCondition__WinningCondition_
                 );
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean CanPlaceWinningCondition[Object]() */

bool MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CanPlaceWinningCondition
               (WinningConditionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = (WinningConditionGroup *)(this->fields).winnerConditionsRoot;
  if (pWVar1 != (WinningConditionGroup *)0x0) {
    iVar2 = WinningConditionGroup::WinningConditionGroup_get_Length(pWVar1,(MethodInfo *)0x0);
    if ((iVar2 < 1) ||
       (iVar3 = (*(code *)(*method->parameters)->data)(this,*method->parameters), iVar3 != 0)) {
      return 1;
    }
    pWVar1 = (WinningConditionGroup *)(this->fields).winnerConditionsRoot;
    if (pWVar1 != (WinningConditionGroup *)0x0) {
      iVar2 = WinningConditionGroup::WinningConditionGroup_get_Length(pWVar1,(MethodInfo *)0x0);
      if (iVar2 == 1) {
        pWVar4 = (this->fields).winnerConditionsRoot;
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__Func<IWinningCondition,_bool>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_00,(Object *)this,
                   MethodInfo__WinningConditionManager__IsTimeLimit_IWinningCondition_,
                   MethodInfo__System__Func<IWinningCondition,_bool>__Func_System__Object__void__);
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
  func_?(0);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* WinningConditionOr CreateInstance[WinningConditionOr](WinningCondition, Object[]) */

WinningConditionOr *
MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateInstance_1
          (WinningConditionManager *this,WinningCondition *parent,Object__Array *args,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = this;
  pWVar2 = (WinningConditionManager *)(this->fields).winnerConditionIDCounter;
  (this->fields).winnerConditionIDCounter = (int32_t)((int)&pWVar2->klass + 1);
  this_00 = (List_1_VoxelHit_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::Object>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_00,
             MethodInfo__System__Collections__Generic__List<System::Object>__List__);
  if (this_00 != (List_1_VoxelHit_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)parent,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    this = pWVar2;
    item = func_?(TypeInfo__System__Int32,&this);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,item,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,
               (UIPushOption__Enum)(pWVar1->fields).gameCounterManager,
               MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_);
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange
              (this_00,(IEnumerable_1_VoxelHit_ *)args,
               MethodInfo__System__Collections__Generic__List<System::Object>__AddRange_System__Collections__Generic__IEnumerable<System::Object>_
              );
    pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__);
    pIStack4 = *method->parameters;
    pIStack5 =
         (&(pWVar1->klass->vtable).Finalize)[*(ushort *)&pIStack4[5].data].methodPtr;
    puStack6 = (undefined4 *)func_?();
    pWStack7 = pWVar1;
    pVStack8 = pVVar3;
    pWVar9 = (WinningConditionOr *)(*(code *)*puStack6)();
    return pWVar9;
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  pWVar9 = (WinningConditionOr *)(*pcVar10)();
  return pWVar9;
}


/* Object CreateWinnerConditionWithParent[Object](WinningCondition, Object[]) */

Object * MVWorldObject.dll::WinningConditionManager::
         WinningConditionManager_CreateWinnerConditionWithParent
                   (WinningConditionManager *this,WinningCondition *parent,Object__Array *args,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (this != (WinningConditionManager *)0x0) {
    pOVar1 = (Object *)(*(code *)(*method->parameters)->data)(this,*method->parameters);
    if (pOVar1 != (Object *)0x0) {
      cVar2 = (*(code *)pOVar1->klass[1]._1.cctor_finished_or_no_cctor)
                        (pOVar1,pOVar1->klass[1]._1.cctor_thread);
      if (cVar2 != '\0') {
        return pOVar1;
      }
    }
    winnerCondition =
         (WinningCondition *)
         (*(code *)method->parameters[2]->data)(this,parent,args,method->parameters[2]);
    WinningConditionManager_AddWinnerConditionToNode(this,parent,winnerCondition,(MethodInfo *)0x0);
    this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
              (this->fields).OnWinningConditionAddedOrRemoved;
    if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      this_01 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
                func_?(TypeInfo__System__EventArgs);
      Assembly-CSharp.dll::WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
      WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_01,(MethodInfo *)0x0);
      mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
      EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)this_01,
                 MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
                );
    }
    return (Object *)winnerCondition;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar3)();
  return pOVar1;
}


/* TimeAttackFlagReachedClient CreateWinnerCondition[TimeAttackFlagReachedClient](Object[]) */

TimeAttackFlagReachedClient *
MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateWinnerCondition_6
          (WinningConditionManager *this,Object__Array *args,MethodInfo *method)

{
  pTVar1 = (TimeAttackFlagReachedClient *)
           (*(code *)(*method->parameters)->data)
                     (this,(this->fields).winnerConditionsRoot,args,*method->parameters);
  return pTVar1;
}


/* Object Factory[Object](Object[]) */

Object * MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Factory
                   (WinningConditionManager *this,Object__Array *args,MethodInfo *method)

{
  pMVar1 = method;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  RVar2.value = *method->parameters;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  this_00 = (Object__Array *)
            mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar2,(MethodInfo *)0x0);
  pOVar3 = (Object__Array *)
           mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)TypeRef__AllCollectiblesCollected,(MethodInfo *)0x0);
  pWVar4 = (WinningConditionOr__Class *)TypeRef__WinningConditionOr;
  if (this_00 == pOVar3) {
    if (args == (Object__Array *)0x0) goto code_?;
    uVar5 = args->max_length;
    if (uVar5 == 0) goto code_?;
    if (uVar5 < 2) goto code_?;
    RVar2.value = args->vector[1];
    if (uVar5 < 3) goto code_?;
    in_stack_6 = (Object__Array *)args->vector[2];
    this_00 = (Object__Array *)func_?(TypeInfo__AllCollectiblesCollected);
    pWVar4 = (WinningConditionOr__Class *)TypeInfo__GameStatCounterManager;
    if (in_stack_6 == (Object__Array *)0x0) {
      method = (MethodInfo *)0x0;
    }
    else {
      method = (MethodInfo *)
               func_?(in_stack_6,TypeInfo__GameStatCounterManager,
                               TypeInfo__GameStatCounterManager);
      if (method == (MethodInfo *)0x0) goto code_?;
    }
    if (RVar2.value == (WinningConditionOr__Class *)0x0) goto code_?;
    pIVar7 = TypeInfo__System__Int32;
    if (*(Il2CppClass **)
         (((_union_86 *)&((WinningConditionOr__Class *)RVar2.value)->_0)->__klassIndex + 0x20) ==
        (TypeInfo__System__Int32->_0).element_class) {
      pWVar4 = (WinningConditionOr__Class *)func_?();
      if (RVar2.value == (WinningConditionOr__Class *)0x0) {
        pWVar8 = (WinningCondition *)0x0;
code_?:
        AllCollectiblesCollected::AllCollectiblesCollected__ctor
                  ((AllCollectiblesCollected *)this_00,pWVar8,
                   ((_union_86 *)&pWVar4->_0)->__klassIndex,(GameStatCounterManager *)method,
                   (MethodInfo *)0x0);
code_?:
        RVar2.value = pMVar1->parameters[1];
        in_stack_9 = in_stack_10;
        if (((uint)(((WinningConditionOr__Class *)RVar2.value)->vtable).Equals.methodPtr & 0x10000)
            == 0) {
          func_?(RVar2.value);
          in_stack_9 = in_stack_10;
        }
        if (this_00 == (Object__Array *)0x0) {
          return (Object *)0x0;
        }
        pOVar11 = (Object *)func_?(this_00,RVar2.value);
        if (pOVar11 != (Object *)0x0) {
          return pOVar11;
        }
        goto code_?;
      }
      pWVar4 = RVar2.value;
      in_stack_9 = (WinningConditionOr__Class *)TypeInfo__WinningCondition;
      pWVar8 = (WinningCondition *)func_?(RVar2.value,TypeInfo__WinningCondition);
      if (pWVar8 != (WinningCondition *)0x0) goto code_?;
      goto code_?;
    }
  }
  else {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pOVar3 = (Object__Array *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pWVar4,(MethodInfo *)0x0);
    RVar2.value = TypeRef__WinningConditionAnd;
    if (this_00 == pOVar3) {
      RVar2.value = pWVar4;
      if (args == (Object__Array *)0x0) goto code_?;
      uVar5 = args->max_length;
      if (uVar5 == 0) goto code_?;
      pWVar12 = (WinningConditionOr__Class *)args->vector[0];
      if (uVar5 < 2) goto code_?;
      in_stack_13 = (WinningCondition__Class *)args->vector[1];
      if (uVar5 < 3) goto code_?;
      in_stack_10 = (WinningConditionOr__Class *)args->vector[2];
      if (uVar5 < 4) goto code_?;
      pOVar11 = args->vector[3];
      if (uVar5 < 5) goto code_?;
      RVar2.value = args->vector[4];
      if (uVar5 < 6) goto code_?;
      this_00 = (Object__Array *)args->vector[5];
      in_stack_9 = TypeInfo__WinningConditionOr;
      pOVar3 = (Object__Array *)func_?(TypeInfo__WinningConditionOr);
      if (this_00 == (Object__Array *)0x0) goto code_?;
      pWVar14 = TypeInfo__WinningConditionPresentStyle;
      if ((((Type__Class *)this_00->klass)->_0).element_class ==
          (TypeInfo__WinningConditionPresentStyle->_0).element_class) {
        in_stack_6 = (Object__Array *)func_?(this_00);
        if (RVar2.value == (WinningConditionOr__Class *)0x0) goto code_?;
        pGVar15 = TypeInfo__GameStatCounterType;
        if (*(Il2CppClass **)
             (((_union_86 *)&((WinningConditionOr__Class *)RVar2.value)->_0)->__klassIndex + 0x20)
            == (TypeInfo__GameStatCounterType->_0).element_class) {
          in_stack_9 = (WinningConditionOr__Class *)func_?(RVar2.value);
          uVar16 = CONCAT44(TypeInfo__System__Boolean,pOVar11);
          if (pOVar11 == (Object *)0x0) goto code_?;
          if ((pOVar11->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
            RVar2.value = in_stack_10;
            pbVar17 = (bool *)func_?(pOVar11);
            in_stack_10 = RVar2.value;
            if (RVar2.value == (WinningConditionOr__Class *)0x0) {
              this_00 = (Object__Array *)0x0;
              pWVar18 = in_stack_13;
code_?:
              in_stack_13 = (WinningCondition__Class *)0x0;
              if (pWVar18 == (WinningCondition__Class *)0x0) goto code_?;
              pIVar7 = TypeInfo__System__Int32;
              if ((Il2CppClass *)((pWVar18->_0).image)->codeGenModule ==
                  (TypeInfo__System__Int32->_0).element_class) {
                RVar2.value = pWVar12;
                in_stack_10 = (WinningConditionOr__Class *)func_?(pWVar18);
                in_stack_13 = TypeInfo__WinningCondition;
                if (RVar2.value == (WinningConditionOr__Class *)0x0) {
                  pWVar8 = (WinningCondition *)0x0;
code_?:
                  WinningConditionOr::WinningConditionOr__ctor
                            ((WinningConditionOr *)pOVar3,pWVar8,
                             ((_union_86 *)&in_stack_10->_0)->__klassIndex,
                             (GameStatCounterManager *)this_00,*pbVar17,
                             (uint)*(byte *)&in_stack_9->_0,
                             (uint)*(byte *)&in_stack_6->klass,(MethodInfo *)0x0);
                  this_00 = pOVar3;
                  goto code_?;
                }
                pWVar8 = (WinningCondition *)
                          func_?(RVar2.value,TypeInfo__WinningCondition);
                if (pWVar8 != (WinningCondition *)0x0) goto code_?;
                goto code_?;
              }
              goto code_?;
            }
            pIVar7 = (Int32__Class *)TypeInfo__GameStatCounterManager;
            this_00 = (Object__Array *)
                      func_?(RVar2.value,TypeInfo__GameStatCounterManager);
            pWVar18 = in_stack_13;
            if (this_00 != (Object__Array *)0x0) goto code_?;
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
    else {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pOVar3 = (Object__Array *)
               mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar2,(MethodInfo *)0x0);
      pIVar19 = TypeRef__CaptureTheFlag;
      if (this_00 == pOVar3) {
        if (args == (Object__Array *)0x0) goto code_?;
        uVar5 = args->max_length;
        if (uVar5 == 0) goto code_?;
        RVar2.value = args->vector[0];
        if (uVar5 < 2) goto code_?;
        in_stack_13 = (WinningCondition__Class *)args->vector[1];
        if (uVar5 < 3) goto code_?;
        in_stack_6 = (Object__Array *)args->vector[2];
        this_00 = (Object__Array *)func_?(TypeInfo__WinningConditionAnd);
        if (in_stack_6 == (Object__Array *)0x0) {
          method = (MethodInfo *)0x0;
          in_stack_10 = (WinningConditionOr__Class *)TypeInfo__GameStatCounterManager;
code_?:
          in_stack_9 = (WinningConditionOr__Class *)0x0;
          if ((RVar2.value == (WinningConditionOr__Class *)0x0) ||
             (pWVar18 = TypeInfo__WinningCondition,
             in_stack_9 =
                  (WinningConditionOr__Class *)
                  func_?(RVar2.value,TypeInfo__WinningCondition,in_stack_10,
                                  in_stack_13,TypeInfo__WinningCondition),
             in_stack_10 = in_stack_9,
             in_stack_9 != (WinningConditionOr__Class *)0x0)) {
            piVar20 = (int32_t *)
                     func_?(in_stack_13,TypeInfo__System__Int32,in_stack_10);
            WinningConditionAnd::WinningConditionAnd__ctor
                      ((WinningConditionAnd *)this_00,(WinningCondition *)in_stack_9,*piVar20,
                       (GameStatCounterManager *)method,(MethodInfo *)0x0);
            goto code_?;
          }
          goto code_?;
        }
        in_stack_9 = (WinningConditionOr__Class *)TypeInfo__GameStatCounterManager;
        method = (MethodInfo *)
                 func_?(in_stack_6,TypeInfo__GameStatCounterManager,
                                 TypeInfo__GameStatCounterManager);
        in_stack_10 = in_stack_9;
        if (method != (MethodInfo *)0x0) goto code_?;
      }
      else {
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Type);
        }
        pOVar3 = (Object__Array *)
                 mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)pIVar19,(MethodInfo *)0x0);
        RVar2.value = TypeRef__FlagReached;
        if (this_00 == pOVar3) {
          RVar2.value = pIVar19;
          this_00 = args;
          if (args != (Object__Array *)0x0) {
            uVar21 = func_?(0);
            uVar22 = func_?(1);
            uVar23 = func_?(2);
            this_04 = (CaptureTheFlag *)func_?(TypeInfo__CaptureTheFlag);
            piVar20 = (int32_t *)func_?(uVar22,TypeInfo__System__Int32);
            pMVar1 = (MethodInfo *)0x0;
            pGVar24 = (GameStatCounterManager *)
                     func_?(uVar23,TypeInfo__GameStatCounterManager);
            iVar25 = *piVar20;
            pWVar8 = (WinningCondition *)func_?(uVar21,TypeInfo__WinningCondition);
            CaptureTheFlag::CaptureTheFlag__ctor(this_04,pWVar8,iVar25,pGVar24,pMVar1);
            pIVar19 = method->parameters[1];
            if ((pIVar19[0x17].type & 1) == 0) {
              func_?(pIVar19);
            }
            pOVar11 = (Object *)func_?(this_04,pIVar19);
            return pOVar11;
          }
        }
        else {
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Type);
          }
          pOVar3 = (Object__Array *)
                   mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar2,(MethodInfo *)0x0);
          pIVar19 = TypeRef__KillLimit;
          if (this_00 == pOVar3) {
            this_00 = args;
            if (args != (Object__Array *)0x0) {
              uVar21 = func_?(0);
              uVar22 = func_?(1);
              uVar23 = func_?(2);
              this_01 = (TargetAssasinatedGroup *)func_?(TypeInfo__FlagReached);
              piVar20 = (int32_t *)func_?(uVar22,TypeInfo__System__Int32);
              pMVar1 = (MethodInfo *)0x0;
              pGVar24 = (GameStatCounterManager *)
                       func_?(uVar23,TypeInfo__GameStatCounterManager);
              iVar25 = *piVar20;
              pWVar8 = (WinningCondition *)func_?(uVar21,TypeInfo__WinningCondition);
              FlagReached::FlagReached__ctor((FlagReached *)this_01,pWVar8,iVar25,pGVar24,pMVar1);
              goto code_?;
            }
          }
          else {
            if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Type->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__Type);
            }
            pOVar3 = (Object__Array *)
                     mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar19,(MethodInfo *)0x0);
            pIVar19 = TypeRef__OculusKillLimit;
            RVar2.value = args;
            if (this_00 == pOVar3) {
              if (args != (Object__Array *)0x0) {
                uVar22 = 0;
                uVar21 = func_?(0);
                uVar22 = func_?(1,uVar22,uVar21);
                uVar23 = func_?(2);
                uVar26 = func_?(3);
                this_03 = (KillLimit *)func_?(TypeInfo__KillLimit);
                piVar20 = (int32_t *)func_?(uVar26,TypeInfo__System__Int32);
                iVar25 = *piVar20;
                piVar20 = (int32_t *)func_?(uVar22,TypeInfo__System__Int32);
                pMVar1 = (MethodInfo *)0x0;
                pGVar24 = (GameStatCounterManager *)
                         func_?(uVar23,TypeInfo__GameStatCounterManager);
                iVar27 = *piVar20;
                pWVar8 = (WinningCondition *)func_?(uVar21,TypeInfo__WinningCondition);
                KillLimit::KillLimit__ctor(this_03,pWVar8,iVar27,pGVar24,iVar25,pMVar1);
code_?:
                uVar21 = func_?(method->parameters[1]);
                pOVar11 = (Object *)func_?(this_03,uVar21);
                return pOVar11;
              }
            }
            else {
              if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__Type->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__Type);
              }
              pOVar3 = (Object__Array *)
                       mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                 ((RuntimeTypeHandle)pIVar19,(MethodInfo *)0x0);
              pIVar19 = TypeRef__TargetAssasinated;
              if (this_00 == pOVar3) {
                if (args != (Object__Array *)0x0) {
                  uVar22 = 0;
                  uVar21 = func_?(0);
                  uVar22 = func_?(1,uVar22,uVar21);
                  uVar23 = func_?(2);
                  uVar26 = func_?(3);
                  this_03 = (KillLimit *)func_?(TypeInfo__OculusKillLimit);
                  piVar20 = (int32_t *)func_?(uVar26,TypeInfo__System__Int32);
                  iVar25 = *piVar20;
                  piVar20 = (int32_t *)func_?(uVar22,TypeInfo__System__Int32);
                  pMVar1 = (MethodInfo *)0x0;
                  pGVar24 = (GameStatCounterManager *)
                           func_?(uVar23,TypeInfo__GameStatCounterManager);
                  iVar27 = *piVar20;
                  pWVar8 = (WinningCondition *)func_?(uVar21,TypeInfo__WinningCondition);
                  OculusKillLimit::OculusKillLimit__ctor
                            ((OculusKillLimit *)this_03,pWVar8,iVar27,pGVar24,iVar25,pMVar1);
                  goto code_?;
                }
              }
              else {
                if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__System__Type->_1).cctor_started == 0)) {
                  func_?(TypeInfo__System__Type);
                }
                pOVar3 = (Object__Array *)
                         mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                   ((RuntimeTypeHandle)pIVar19,(MethodInfo *)0x0);
                pIVar19 = TypeRef__TargetAssasinatedGroup;
                if (this_00 == pOVar3) {
                  if (args != (Object__Array *)0x0) {
                    uVar21 = func_?(0);
                    uVar22 = func_?(1);
                    uVar23 = func_?(2);
                    uVar26 = func_?(3);
                    uVar28 = func_?(4);
                    this_02 = (TargetAssasinated *)func_?(TypeInfo__TargetAssasinated);
                    piVar20 = (int32_t *)func_?(uVar28,TypeInfo__System__Int32);
                    iVar25 = *piVar20;
                    piVar20 = (int32_t *)func_?(uVar26,TypeInfo__System__Int32);
                    iVar27 = *piVar20;
                    piVar20 = (int32_t *)func_?(uVar22,TypeInfo__System__Int32);
                    pMVar1 = (MethodInfo *)0x0;
                    pGVar24 = (GameStatCounterManager *)
                             func_?(uVar23,TypeInfo__GameStatCounterManager);
                    id = *piVar20;
                    pWVar8 = (WinningCondition *)func_?(uVar21,TypeInfo__WinningCondition);
                    TargetAssasinated::TargetAssasinated__ctor
                              (this_02,pWVar8,id,pGVar24,iVar27,iVar25,pMVar1);
                    uVar21 = func_?(method->parameters[1]);
                    pOVar11 = (Object *)func_?(this_02,uVar21);
                    return pOVar11;
                  }
                }
                else {
                  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0)
                     && ((TypeInfo__System__Type->_1).cctor_started == 0)) {
                    func_?(TypeInfo__System__Type);
                  }
                  pOVar3 = (Object__Array *)
                           mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                     ((RuntimeTypeHandle)pIVar19,(MethodInfo *)0x0);
                  RVar2.value = TypeRef__TimeLimit;
                  if (this_00 == pOVar3) {
                    RVar2.value = pIVar19;
                    this_00 = args;
                    if (args != (Object__Array *)0x0) {
                      uVar21 = func_?(0);
                      uVar22 = func_?(1);
                      uVar23 = func_?(2);
                      this_01 = (TargetAssasinatedGroup *)
                                func_?(TypeInfo__TargetAssasinatedGroup);
                      piVar20 = (int32_t *)func_?(uVar22,TypeInfo__System__Int32);
                      pMVar1 = (MethodInfo *)0x0;
                      pGVar24 = (GameStatCounterManager *)
                               func_?(uVar23,TypeInfo__GameStatCounterManager);
                      iVar25 = *piVar20;
                      pWVar8 = (WinningCondition *)
                                func_?(uVar21,TypeInfo__WinningCondition);
                      TargetAssasinatedGroup::TargetAssasinatedGroup__ctor
                                (this_01,pWVar8,iVar25,pGVar24,pMVar1);
                      goto code_?;
                    }
                  }
                  else {
                    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0)
                       && ((TypeInfo__System__Type->_1).cctor_started == 0)) {
                      func_?(TypeInfo__System__Type);
                    }
                    pOVar3 = (Object__Array *)
                             mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                       (RVar2,(MethodInfo *)0x0);
                    pIVar19 = TypeRef__TimeAttackFlagReached;
                    if (this_00 == pOVar3) {
                      this_00 = args;
                      if (args != (Object__Array *)0x0) {
                        uVar21 = func_?(0);
                        uVar22 = func_?(1);
                        uVar23 = func_?(2);
                        this_01 = (TargetAssasinatedGroup *)func_?(TypeInfo__TimeLimit);
                        piVar20 = (int32_t *)func_?(uVar22,TypeInfo__System__Int32);
                        pMVar1 = (MethodInfo *)0x0;
                        pGVar24 = (GameStatCounterManager *)
                                 func_?(uVar23,TypeInfo__GameStatCounterManager);
                        iVar25 = *piVar20;
                        pWVar8 = (WinningCondition *)
                                  func_?(uVar21,TypeInfo__WinningCondition);
                        TimeLimit::TimeLimit__ctor
                                  ((TimeLimit *)this_01,pWVar8,iVar25,pGVar24,pMVar1);
                        goto code_?;
                      }
                    }
                    else {
                      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) !=
                           0) && ((TypeInfo__System__Type->_1).cctor_started == 0)) {
                        func_?(TypeInfo__System__Type);
                      }
                      pOVar3 = (Object__Array *)
                               mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                         ((RuntimeTypeHandle)pIVar19,(MethodInfo *)0x0);
                      if (this_00 != pOVar3) {
                        return (Object *)0x0;
                      }
                      RVar2.value = pIVar19;
                      this_00 = args;
                      if (args != (Object__Array *)0x0) {
                        uVar21 = func_?(0);
                        uVar22 = func_?(1);
                        uVar23 = func_?(2);
                        this_01 = (TargetAssasinatedGroup *)
                                  func_?(TypeInfo__TimeAttackFlagReached);
                        piVar20 = (int32_t *)func_?(uVar22,TypeInfo__System__Int32);
                        pMVar1 = (MethodInfo *)0x0;
                        pGVar24 = (GameStatCounterManager *)
                                 func_?(uVar23,TypeInfo__GameStatCounterManager);
                        iVar25 = *piVar20;
                        pWVar8 = (WinningCondition *)
                                  func_?(uVar21,TypeInfo__WinningCondition);
                        TimeAttackFlagReached::TimeAttackFlagReached__ctor
                                  ((TimeAttackFlagReached *)this_01,pWVar8,iVar25,pGVar24,pMVar1);
code_?:
                        uVar21 = func_?(method->parameters[1]);
                        pOVar11 = (Object *)func_?(this_01,uVar21);
                        return pOVar11;
                      }
                    }
                  }
                }
              }
            }
          }
        }
code_?:
        func_?(0);
code_?:
        uVar21 = func_?(0,0);
        func_?(uVar21);
code_?:
        uVar21 = func_?(0,0);
        func_?(uVar21);
code_?:
        uVar21 = func_?(0,0);
        func_?(uVar21);
        in_stack_9 = in_stack_10;
code_?:
        pWVar18 = (WinningCondition__Class *)&UNK_?;
        in_stack_6 = this_00;
        func_?(this_00,RVar2.value);
code_?:
        func_?(RVar2.value,pWVar18);
      }
      func_?(in_stack_6,in_stack_9);
      pWVar4 = RVar2.value;
code_?:
      uVar21 = func_?(0,0);
      func_?(uVar21);
code_?:
      uVar21 = func_?(0,0);
      func_?(uVar21);
code_?:
      uVar21 = func_?(0,0);
      func_?(uVar21);
code_?:
      uVar21 = func_?(0,0);
      func_?(uVar21);
      RVar2.value = pWVar4;
code_?:
      uVar21 = func_?(0,0);
      func_?(uVar21);
code_?:
      uVar21 = func_?(0,0);
      func_?(uVar21);
code_?:
      func_?(RVar2.value,in_stack_13);
      pWVar18 = extraout_ECX;
      pIVar7 = extraout_EDX;
code_?:
      func_?(pWVar18,pIVar7);
code_?:
      uVar16 = func_?(RVar2.value,pIVar7);
code_?:
      func_?(uVar16);
      pGVar15 = extraout_EDX_00;
code_?:
      pWVar14 = (WinningConditionPresentStyle__Enum__Class *)func_?(RVar2.value,pGVar15);
    }
    func_?(this_00,pWVar14);
code_?:
    uVar21 = func_?(0,0);
    func_?(uVar21);
code_?:
    uVar21 = func_?(0,0);
    func_?(uVar21);
code_?:
    uVar21 = func_?(0,0);
    func_?(uVar21);
code_?:
    pWVar4 = RVar2.value;
    func_?(RVar2.value,in_stack_9);
    pIVar7 = extraout_ECX_00;
  }
  func_?(RVar2.value,pIVar7);
code_?:
  func_?(in_stack_6,pWVar4);
  pcVar29 = (code *)swi(3);
  pOVar11 = (Object *)(*pcVar29)();
  return pOVar11;
}


/* List`1[IWinningCondition] GetForfilledWinningConditions() */

List_1_IWinningCondition_ *
MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetForfilledWinningConditions
          (WinningConditionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)
            func_?(TypeInfo__WinningConditionManager__ForfilledWinnerConditionGenerator);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__List<IWinningCondition>;
  this_01 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<IWinningCondition>__List__);
  (this_00->fields)._._._._.m_CachedPtr = this_01;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            (this_00,0.0,(MethodInfo *)method_00);
  this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Func<IWinningCondition,_bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_02,(Object *)this_00,
             MethodInfo__WinningConditionManager__ForfilledWinnerConditionGenerator__HandleWinningConditionForReport_IWinningCondition_
             ,MethodInfo__System__Func<IWinningCondition,_bool>__Func_System__Object__void__);
  if ((this != (WinningConditionManager *)0x0) &&
     (pWVar1 = (this->fields).winnerConditionsRoot, pWVar1 != (WinningConditionOr *)0x0)) {
    pWVar2 = pWVar1->klass;
    pIStack3 = (pWVar2->vtable).Reset_1.methodPtr;
    pUStack4 = this_02;
    (*(code *)(pWVar2->vtable).Traverse_1.method)();
    return (this_00->fields)._._._._.m_CachedPtr;
  }
  pIStack3 = (Il2CppMethodPointer)0x0;
  pUStack4 =
       (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
       &UNK_?;
  func_?();
  pcVar5 = (code *)swi(3);
  pLVar6 = (List_1_IWinningCondition_ *)(*pcVar5)();
  return pLVar6;
}


/* TimeAttackFlagReachedClient GetSingletonWinnerConditionByType[TimeAttackFlagReachedClient]() */

TimeAttackFlagReachedClient *
MVWorldObject.dll::WinningConditionManager::
WinningConditionManager_GetSingletonWinnerConditionByType_6
          (WinningConditionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  if (this == (WinningConditionManager *)0x0) {
code_?:
    func_?(0);
  }
  else {
    pIVar2 = (IsolatedStorageException *)
             (*(code *)(*method->parameters)->data)(this,*method->parameters);
    unaff_EBX = pMVar1;
    if (pIVar2 == (IsolatedStorageException *)0x0) goto code_?;
    iVar3 = (*(code *)pMVar1->parameters[1]->data)(pIVar2,pMVar1->parameters[1]);
    if (iVar3 == 0) {
      return (TimeAttackFlagReachedClient *)0x0;
    }
    iVar3 = (*(code *)pMVar1->parameters[1]->data)(pIVar2,pMVar1->parameters[1]);
    unaff_ESI = (String *)pMVar1->parameters;
    if (1 < iVar3) goto code_?;
    puVar4 = *(undefined4 **)&(unaff_ESI->fields).start_char;
    piVar5 = (int *)(*(code *)*puVar4)(pIVar2,0,puVar4);
    if (piVar5 == (int *)0x0) goto code_?;
    cVar6 = (**(code **)(*piVar5 + 0x150))(piVar5,*(undefined4 *)(*piVar5 + 0x154));
    unaff_ESI = (String *)pMVar1->parameters;
    if (cVar6 != '\0') {
      puVar4 = *(undefined4 **)&(unaff_ESI->fields).start_char;
      pTVar7 = (TimeAttackFlagReachedClient *)(*(code *)*puVar4)(pIVar2,0,puVar4);
      return pTVar7;
    }
  }
  RVar8.value = (void *)(unaff_ESI->fields).length;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar8,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  unaff_ESI = mscorlib.dll::System::String::String_Format
                        (StringLiteral_Type_is_not_singleton__0_,(Object *)pTVar9,(MethodInfo *)0x0
                        );
  pIVar2 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar2,unaff_ESI,(MethodInfo *)0x0);
  in_stack_10 =
       System__Object_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<System::Object>__
  ;
  in_stack_11 = 0;
  in_stack_12 = &UNK_?;
  in_stack_13 = pIVar2;
  func_?();
code_?:
  RVar8.value = (void *)(unaff_ESI->fields).length;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar9 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar8,(MethodInfo *)0x0);
  this = (WinningConditionManager *)
         (*(code *)unaff_EBX->parameters[1]->data)(pIVar2,unaff_EBX->parameters[1]);
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&this);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message = mscorlib.dll::System::String::String_Format_1
                      (StringLiteral_Singleton_count_of_type__0__is__,(Object *)pTVar9,arg1,
                       (MethodInfo *)0x0);
  pIVar2 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(pIVar2,message,(MethodInfo *)0x0);
  in_stack_10 =
       System__Object_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<System::Object>__
  ;
  in_stack_11 = 0;
  in_stack_12 = &UNK_?;
  in_stack_13 = pIVar2;
  func_?();
  pcVar14 = (code *)swi(3);
  pTVar7 = (TimeAttackFlagReachedClient *)(*pcVar14)();
  return pTVar7;
}


/* List`1[System.Object] GetWinnerConditionsByType[Object]() */

List_1_System_Object_ *
MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetWinnerConditionsByType
          (WinningConditionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = *method->parameters;
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  object = (Object *)func_?(pIVar1);
  (*(code *)method->parameters[1]->data)(object,method->parameters[1]);
  pIVar1 = method->parameters[2];
  if ((pIVar1[0x17].type & 1) == 0) {
    func_?(pIVar1);
  }
  pOVar2 = (Object__Class *)func_?(pIVar1);
  (*(code *)method->parameters[3]->data)(pOVar2,method->parameters[3]);
  if (object != (Object *)0x0) {
    object[1].klass = pOVar2;
    pWVar3 = (this->fields).winnerConditionsRoot;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Func<IWinningCondition,_bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,object,method->parameters[4],
               MethodInfo__System__Func<IWinningCondition,_bool>__Func_System__Object__void__);
    if (pWVar3 != (WinningConditionOr *)0x0) {
      (*(code *)(pWVar3->klass->vtable).Traverse_1.method)
                (pWVar3,this_00,(pWVar3->klass->vtable).Reset_1.methodPtr);
      return (List_1_System_Object_ *)object[1].klass;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
  (this->fields).gameCounterManager = gameStatCounterManager;
  args = (Object__Array *)func_?(TypeInfo__System__Object,3);
  this = (WinningConditionManager *)((uint)this & 0xffffff);
  pOVar1 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  if (args == (Object__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
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
    gameStatCounterManager = (GameStatCounterManager *)((uint)gameStatCounterManager & 0xffffff);
    pOVar1 = (Object *)
             func_?(TypeInfo__GameStatCounterType,(int)&gameStatCounterManager + 3);
    if (pOVar1 != (Object *)0x0) {
      iVar3 = func_?(pOVar1,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar1;
    uStack_4 = uStack_4 & 0xffffff;
    pOVar1 = (Object *)func_?(TypeInfo__WinningConditionPresentStyle,(int)&uStack_4 + 3);
    if (pOVar1 == (Object *)0x0) {
code_?:
      if (args->max_length < 3) goto code_?;
      args->vector[2] = pOVar1;
      this_01 = WinningConditionManager_CreateInstance_1
                          (this_00,(WinningCondition *)0x0,args,
                           WinningConditionOr_MethodInfo__WinningConditionManager__CreateInstance<WinningConditionOr>_WinningCondition__System__Object____
                          );
      (this_00->fields).winnerConditionsRoot = this_01;
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this_00,
                 MethodInfo__WinningConditionManager__winnerConditionsRoot_OnWinningConditionChanged_System__Object__System__EventArgs_
                 ,
                 MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                );
      if (this_01 != (WinningConditionOr *)0x0) {
        WinningCondition::WinningCondition_add_OnWinningConditionChanged
                  ((WinningCondition *)this_01,(EventHandler_1_EventArgs_ *)this_02,
                   (MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    iVar3 = func_?(pOVar1,(args->klass->_0).element_class);
    if (iVar3 != 0) goto code_?;
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean IsTimeLimit(IWinningCondition) */

bool MVWorldObject.dll::WinningConditionManager::WinningConditionManager_IsTimeLimit
               (WinningConditionManager *this,IWinningCondition *winningCondition,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (winningCondition != (IWinningCondition *)0x0) {
    bVar1 = (TypeInfo__TimeLimit->_1).naturalAligment;
    if (((winningCondition->klass->_1).naturalAligment < bVar1) ||
       ((winningCondition->klass->_1).typeHierarchy[bVar1 - 1] != (Il2CppClass *)TypeInfo__TimeLimit
       )) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pIVar3 = (IWinningCondition *)0x0;
    if (bVar2) {
      pIVar3 = winningCondition;
    }
    if (pIVar3 != (IWinningCondition *)0x0) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  object = (this->fields).winnerConditionsRoot;
  if (object != (WinningConditionOr *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(object->fields)._.winnerConditions;
    if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (pDVar1,id,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Item_int_
                         );
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__EventHandler<System::EventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)object,object->klass[1]._0.image,
                 MethodInfo__System__EventHandler<System::EventArgs>__EventHandler_System__Object__void__
                );
      if (pTVar2 != (TerrainUtility_TerrainMap *)0x0) {
        pTVar3 = pTVar2->klass;
        uVar4 = 0;
        uVar5 = 0;
        uVar6._0_1_ = (pTVar3->_1).rank;
        uVar6._1_1_ = (pTVar3->_1).minimumAlignment;
        if (uVar6 != 0) {
          do {
            if (pTVar3->interfaceOffsets[uVar4].interfaceType ==
                (Il2CppClass *)TypeInfo__IWinningCondition) {
              ppMVar7 = &(&(pTVar3->vtable).GetHashCode)[pTVar3->interfaceOffsets[uVar4].offset].
                         method;
              goto code_?;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar6);
        }
        ppMVar7 = (MethodInfo **)func_?(pTVar2,TypeInfo__IWinningCondition,2);
code_?:
        (*(code *)*ppMVar7)(pTVar2,this_01,ppMVar7[1]);
        pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(object->fields)._.winnerConditions;
        if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                    (pDVar1,id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Remove_int_
                    );
          this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                    (this->fields).OnWinningConditionAddedOrRemoved;
          if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
            this_02 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
                      func_?(TypeInfo__System__EventArgs,this_01,pTVar3,uVar5);
            Assembly-CSharp.dll::WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
            WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_02,(MethodInfo *)0x0);
            mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
            EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                      (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)this_02,
                       MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
                      );
          }
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Reset() */

void MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Reset
               (WinningConditionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._WinningConditionFound_k__BackingField = 0;
  if (TypeInfo__WinningConditionManager->static_fields->CS___9__CachedAnonymousMethodDelegate1 ==
      (Func_2_IWinningCondition_Boolean_ *)0x0) {
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Func<IWinningCondition,_bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)0x0,
               MethodInfo__WinningConditionManager___Reset_b__0_IWinningCondition_,
               MethodInfo__System__Func<IWinningCondition,_bool>__Func_System__Object__void__);
    TypeInfo__WinningConditionManager->static_fields->CS___9__CachedAnonymousMethodDelegate1 =
         (Func_2_IWinningCondition_Boolean_ *)this_02;
  }
  pWVar1 = (this->fields).winnerConditionsRoot;
  if (pWVar1 != (WinningConditionOr *)0x0) {
    (*(code *)(pWVar1->klass->vtable).Traverse_1.method)
              (pWVar1,TypeInfo__WinningConditionManager->static_fields->
                      CS___9__CachedAnonymousMethodDelegate1,
               (pWVar1->klass->vtable).Reset_1.methodPtr);
    this_00 = (this->fields).gameCounterManager;
    if (this_00 != (GameStatCounterManager *)0x0) {
      GameStatCounterManager::GameStatCounterManager_Clear(this_00,(MethodInfo *)0x0);
      this_01 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                (this->fields).OnWinningConditionReset;
      if (this_01 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
        if ((((uint)(TypeInfo__System__EventArgs->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__EventArgs->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__EventArgs);
        }
        if (this_01 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0)
        goto code_?;
        mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
        EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                  (this_01,(Object *)this,
                   (InitializedGameQueryDataEventArgs *)
                   TypeInfo__System__EventArgs->static_fields->Empty,
                   MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
                  );
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::WinningConditionManager::WinningConditionManager_ToString
                   (WinningConditionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = this;
  this = (WinningConditionManager *)
         CONCAT13((this->fields)._WinningConditionFound_k__BackingField,this._0_3_);
  arg0 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar2 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_WinningCondition_found___0__u000A,arg0,(MethodInfo *)0x0);
  str1 = mscorlib.dll::System::String::String_Format
                   (StringLiteral_To_win___0_,(Object *)(pWVar1->fields).winnerConditionsRoot,
                    (MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_2(pSVar2,str1,(MethodInfo *)0x0);
  return pSVar2;
}


/* Void Traverse(Func`2[IWinningCondition,Boolean]) */

void MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Traverse
               (WinningConditionManager *this,Func_2_IWinningCondition_Boolean_ *callBack,
               MethodInfo *method)

{
  pWVar1 = (this->fields).winnerConditionsRoot;
  if (pWVar1 != (WinningConditionOr *)0x0) {
    (*(code *)(pWVar1->klass->vtable).Traverse_1.method)
              (pWVar1,callBack,(pWVar1->klass->vtable).Reset_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean <Reset>b__0(IWinningCondition) */

bool MVWorldObject.dll::WinningConditionManager::WinningConditionManager__Reset_b__0
               (IWinningCondition *winnerCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (winnerCondition != (IWinningCondition *)0x0) {
    func_?(5,TypeInfo__IWinningCondition,winnerCondition);
    return 0;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void add_OnWinningConditionAddedOrRemoved(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningConditionManager::
     WinningConditionManager_add_OnWinningConditionAddedOrRemoved
               (WinningConditionManager *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnWinningConditionAddedOrRemoved;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_OnWinningConditionReset(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningConditionManager::WinningConditionManager_add_OnWinningConditionReset
               (WinningConditionManager *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnWinningConditionReset;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnWinningConditionAddedOrRemoved(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningConditionManager::
     WinningConditionManager_remove_OnWinningConditionAddedOrRemoved
               (WinningConditionManager *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnWinningConditionAddedOrRemoved;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnWinningConditionReset(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningConditionManager::
     WinningConditionManager_remove_OnWinningConditionReset
               (WinningConditionManager *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnWinningConditionReset;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void winnerConditionsRoot_OnWinningConditionChanged(Object, EventArgs) */

void MVWorldObject.dll::WinningConditionManager::
     WinningConditionManager_winnerConditionsRoot_OnWinningConditionChanged
               (WinningConditionManager *this,Object *sender,EventArgs *eventArgs,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
            (this->fields).OnWinningConditionChanged;
  if (this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,(InitializedGameQueryDataEventArgs *)eventArgs,
               MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
              );
  }
  (this->fields)._WinningConditionFound_k__BackingField = 1;
  return;
}

