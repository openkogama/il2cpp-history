
/* Void AddWinnerConditionToNode(WinningCondition, WinningCondition) */

void MVWorldObject.dll::WinningConditionManager::WinningConditionManager_AddWinnerConditionToNode
               (WinningConditionManager *this,WinningCondition *parent,
               WinningCondition *winnerCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WinningConditionGroup);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (parent == (WinningCondition *)0x0) {
    uVar1 = func_?(&TypeInfo__System__Collections__Generic__KeyNotFoundException);
    this_01 = (KeyNotFoundException *)func_?(uVar1);
    pSVar2 = (String *)func_?(&StringLiteral_Could_not_find_winner_condition_);
    mscorlib.dll::System::Collections::Generic::KeyNotFoundException::KeyNotFoundException__ctor_1
              (this_01,pSVar2,(MethodInfo *)0x0);
    uVar1 = func_?(&
                                 MethodInfo__WinningConditionManager__AddWinnerConditionToNode_WinningCondition__WinningCondition_
                                );
    FUN_?(this_01,uVar1);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pWVar4 = parent->klass;
  bVar5 = (TypeInfo__WinningConditionGroup->_1).naturalAligment;
  if (((pWVar4->_1).naturalAligment < bVar5) ||
     ((pWVar4->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
      (Il2CppClass *)TypeInfo__WinningConditionGroup)) {
    uVar1 = func_?(&TypeInfo__System__Exception);
    this_02 = (Exception *)func_?(uVar1);
    pSVar2 = (String *)func_?(&StringLiteral_Type_not_winnerConditionGroup);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_02,pSVar2,(MethodInfo *)0x0);
    uVar1 = func_?(&
                                 MethodInfo__WinningConditionManager__AddWinnerConditionToNode_WinningCondition__WinningCondition_
                                );
    FUN_?(this_02,uVar1);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar5 = (TypeInfo__WinningConditionGroup->_1).naturalAligment;
  if ((bVar5 <= (pWVar4->_1).naturalAligment) &&
     ((pWVar4->_1).typeHierarchy[(ulonglong)bVar5 - 1] ==
      (Il2CppClass *)TypeInfo__WinningConditionGroup)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Add_int__IWinningCondition_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((winnerCondition != (WinningCondition *)0x0) &&
       (parent[1].klass != (WinningCondition__Class *)0x0)) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)parent[1].klass,
                 (winnerCondition->fields).id,(Object *)winnerCondition,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Add_int__IWinningCondition_
                 ->klass->rgctx_data[0x22].method);
      this_00 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_00,(Object *)parent,parent->klass[1]._0.gc_desc,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      ppEVar6 = &(winnerCondition->fields).OnWinningConditionChanged;
      a = (winnerCondition->fields).OnWinningConditionChanged;
      do {
        pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
        pEVar8 = TypeInfo__System__EventHandler<System::EventArgs>;
        if (pDVar7 == (Delegate *)0x0) {
          pEVar9 = (EventHandler_1_EventArgs_ *)0x0;
        }
        else {
          pEVar9 = (EventHandler_1_EventArgs_ *)
                   FUN_?(pDVar7,TypeInfo__System__EventHandler<System::EventArgs>);
          if (pEVar9 == (EventHandler_1_EventArgs_ *)0x0) {
            FUN_?(pDVar7,pEVar8);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        LOCK();
        pEVar10 = *ppEVar6;
        bVar11 = a == pEVar10;
        if (bVar11) {
          *ppEVar6 = pEVar9;
          pEVar10 = a;
        }
        UNLOCK();
        pEVar9 = a;
        if (!bVar11) {
          pEVar9 = pEVar10;
        }
        if (iRam_? != 0) {
          uVar12 = (uint)((ulonglong)ppEVar6 >> 0xc);
          uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
          do {
            uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
            puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
            LOCK();
            bVar11 = uVar14 == *puVar15;
            if (bVar11) {
              *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        bVar11 = pEVar9 != a;
        a = pEVar9;
      } while (bVar11);
      return;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?(parent);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean CanPlaceWinningCondition[Object]() */

bool MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CanPlaceWinningCondition
               (WinningConditionManager *this,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__System__Func<IWinningCondition,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WinningConditionManager__IsTimeLimit_IWinningCondition_);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  pWVar1 = (this->fields).winnerConditionsRoot;
  if (pWVar1 != (WinningConditionOr *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar2 = (pWVar1->fields)._.winnerConditions;
    if (pDVar2 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
      if (((pDVar2->fields)._count - (pDVar2->fields)._freeCount < 1) ||
         (pOVar3 = WinningConditionManager_GetSingletonWinnerConditionByType
                             (this,((method->field7_0x38).rgctx_data)->method),
         pOVar3 != (Object *)0x0)) {
        return 1;
      }
      pWVar1 = (this->fields).winnerConditionsRoot;
      if (pWVar1 != (WinningConditionOr *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Count__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar2 = (pWVar1->fields)._.winnerConditions;
        if (pDVar2 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
          if ((pDVar2->fields)._count - (pDVar2->fields)._freeCount == 1) {
            pWVar1 = (this->fields).winnerConditionsRoot;
            this_00 = (Predicate_1_Object_ *)
                      FUN_?(TypeInfo__System__Func<IWinningCondition,_bool>);
            mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                      (this_00,(Object *)this,
                       MethodInfo__WinningConditionManager__IsTimeLimit_IWinningCondition_,
                       (MethodInfo *)0x0);
            if (pWVar1 == (WinningConditionOr *)0x0) goto code_?;
            cVar4 = (*(pWVar1->klass->vtable).Traverse_1.methodPtr)
                              (pWVar1,this_00,(pWVar1->klass->vtable).Traverse_1.method);
            if (cVar4 != '\0') {
              return 1;
            }
          }
          return 0;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Object CreateInstance[Object](WinningCondition, Object[]) */

Object * MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateInstance
                   (WinningConditionManager *this,WinningCondition *parent,Object__Array *args,
                   MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Object>__AddRange_System__Collections__Generic__IEnumerable<System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::Object>);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  iVar1 = (this->fields).winnerConditionIDCounter;
  (this->fields).winnerConditionIDCounter = iVar1 + 1;
  this_00 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
             *)FUN_?(TypeInfo__System__Collections__Generic__List<System::Object>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<System::Object>__List__);
  pMVar2 = MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_;
  if (this_00 !=
      (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
       *)0x0) {
    piVar3 = &(this_00->fields)._version;
    *piVar3 = *piVar3 + 1;
    pRVar4 = (this_00->fields)._items;
    if (pRVar4 != (RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__Array *)0x0) {
      uVar5 = (this_00->fields)._size;
      if (uVar5 < (uint)pRVar4->max_length) {
        (this_00->fields)._size = uVar5 + 1;
        FUN_?(pRVar4,(longlong)(int)uVar5,parent);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)this_00,(Object *)parent,
                   pMVar2->klass->rgctx_data[0xe].method);
      }
      aiStackX_8[0] = iVar1;
      pOVar6 = (Object *)FUN_?(uRam_?,aiStackX_8);
      pMVar2 = MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_;
      pRVar4 = (this_00->fields)._items;
      piVar3 = &(this_00->fields)._version;
      *piVar3 = *piVar3 + 1;
      if (pRVar4 != (RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__Array *)0x0) {
        uVar5 = (this_00->fields)._size;
        if (uVar5 < (uint)pRVar4->max_length) {
          (this_00->fields)._size = uVar5 + 1;
          FUN_?(pRVar4,(longlong)(int)uVar5,pOVar6);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)this_00,pOVar6,pMVar2->klass->rgctx_data[0xe].method);
        }
        pMVar2 = MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
        ;
        item = (this->fields).gameCounterManager;
        piVar3 = &(this_00->fields)._version;
        *piVar3 = *piVar3 + 1;
        pRVar4 = (this_00->fields)._items;
        if (pRVar4 != (RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__Array *)0x0) {
          uVar5 = (this_00->fields)._size;
          if (uVar5 < (uint)pRVar4->max_length) {
            (this_00->fields)._size = uVar5 + 1;
            FUN_?(pRVar4,(longlong)(int)uVar5,item);
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)this_00,(Object *)item,
                       pMVar2->klass->rgctx_data[0xe].method);
          }
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__InsertRange
                    ((List_1_System_Object_ *)this_00,(this_00->fields)._size,
                     (IEnumerable_1_System_Object_ *)args,
                     MethodInfo__System__Collections__Generic__List<System::Object>__AddRange_System__Collections__Generic__IEnumerable<System::Object>_
                     ->klass->rgctx_data[0x12].method);
          pRVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                   RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                   List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                             (this_00,
                              MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__
                             );
          pMStack_7 = (&(this->klass->vtable).Equals)
                       [((method->field7_0x38).rgctx_data)->method->slot].method;
          pIStack_8 = (Il2CppGenericInst *)0x0;
          if (pMStack_7->is_inflated != 0) {
            pIStack_8 = (((pMStack_7->field8_0x40).genericMethod)->context).class_inst;
            pMStack_7 = ((pMStack_7->field8_0x40).genericMethod)->methodDefinition;
          }
          lVar9 = FUN_?(&pMStack_7);
          pOVar6 = (Object *)(**(code **)(lVar9 + 8))(this,pRVar4,lVar9);
          return pOVar6;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pOVar6 = (Object *)(*pcVar10)();
  return pOVar6;
}


/* Object CreateWinnerCondition[Object](Object[]) */

Object * MVWorldObject.dll::WinningConditionManager::WinningConditionManager_CreateWinnerCondition
                   (WinningConditionManager *this,Object__Array *args,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(method);
  }
  parent = (this->fields).winnerConditionsRoot;
  lVar1 = *(longlong *)(method->field7_0x38).methodMetadataHandle;
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    if (*(longlong *)(lVar1 + 0x38) == 0) {
      FUN_?(lVar1);
    }
  }
  pOVar2 = WinningConditionManager_GetSingletonWinnerConditionByType
                     (this,(MethodInfo *)**(undefined8 **)(lVar1 + 0x38));
  if ((pOVar2 != (Object *)0x0) &&
     (cVar3 = (**(code **)&pOVar2->klass[1]._1.cctor_finished_or_no_cctor)
                        (pOVar2,pOVar2->klass[1]._1.cctor_thread), cVar3 != '\0')) {
    return pOVar2;
  }
  winnerCondition =
       (WinningCondition *)
       WinningConditionManager_CreateInstance
                 (this,(WinningCondition *)parent,args,
                  *(MethodInfo **)(*(longlong *)(lVar1 + 0x38) + 0x10));
  WinningConditionManager_AddWinnerConditionToNode
            (this,(WinningCondition *)parent,winnerCondition,(MethodInfo *)0x0);
  if ((this->fields).OnWinningConditionAddedOrRemoved != (EventHandler_1_EventArgs_ *)0x0) {
    pEVar4 = (this->fields).OnWinningConditionAddedOrRemoved;
    uVar5 = FUN_?(TypeInfo__System__EventArgs);
    (*(pEVar4->fields)._._.invoke_impl)
              ((pEVar4->fields)._._.method_code,this,uVar5,(pEVar4->fields)._._.method);
  }
  return (Object *)winnerCondition;
}


/* Object CreateWinnerConditionWithParent[Object](WinningCondition, Object[]) */

Object * MVWorldObject.dll::WinningConditionManager::
         WinningConditionManager_CreateWinnerConditionWithParent
                   (WinningConditionManager *this,WinningCondition *parent,Object__Array *args,
                   MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  pOVar1 = WinningConditionManager_GetSingletonWinnerConditionByType
                     (this,((method->field7_0x38).rgctx_data)->method);
  if ((pOVar1 != (Object *)0x0) &&
     (cVar2 = (**(code **)&pOVar1->klass[1]._1.cctor_finished_or_no_cctor)
                        (pOVar1,pOVar1->klass[1]._1.cctor_thread), cVar2 != '\0')) {
    return pOVar1;
  }
  winnerCondition =
       (WinningCondition *)
       WinningConditionManager_CreateInstance
                 (this,parent,args,(method->field7_0x38).rgctx_data[2].method);
  WinningConditionManager_AddWinnerConditionToNode(this,parent,winnerCondition,(MethodInfo *)0x0);
  if ((this->fields).OnWinningConditionAddedOrRemoved != (EventHandler_1_EventArgs_ *)0x0) {
    pEVar3 = (this->fields).OnWinningConditionAddedOrRemoved;
    uVar4 = FUN_?(TypeInfo__System__EventArgs);
    (*(pEVar3->fields)._._.invoke_impl)
              ((pEVar3->fields)._._.method_code,this,uVar4,(pEVar3->fields)._._.method);
  }
  return (Object *)winnerCondition;
}


/* Object Factory[Object](Object[]) */

Object * MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Factory
                   (WinningConditionManager *this,Object__Array *args,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeRef__AllCollectiblesCollected);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AllCollectiblesCollected);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__CaptureTheFlag);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CaptureTheFlag);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__FlagReached);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FlagReached);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameStatCounterManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameStatCounterType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__KillLimit);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KillLimit);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__OculusKillLimit);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__OculusKillLimit);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__TargetAssasinatedGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TargetAssasinatedGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__TargetAssasinated);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TargetAssasinated);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__TimeAttackFlagReached);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TimeAttackFlagReached);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__TimeLimit);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TimeLimit);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__WinningConditionAnd);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WinningConditionAnd);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__WinningConditionOr);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WinningConditionOr);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WinningConditionPresentStyle);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WinningCondition);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  pvVar1 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  parent = (WinningCondition *)0x0;
  pWVar2 = parent;
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar3 = FUN_?(pvVar1);
    pWVar2 = (WinningCondition *)FUN_?(lVar3 + 0x20);
  }
  pIVar4 = TypeRef__AllCollectiblesCollected;
  pWVar5 = parent;
  if (TypeRef__AllCollectiblesCollected != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar3 = FUN_?(pIVar4);
    pWVar5 = (WinningCondition *)FUN_?(lVar3 + 0x20);
  }
  pIVar4 = TypeRef__WinningConditionOr;
  if (pWVar2 == pWVar5) {
    if (args != (Object__Array *)0x0) {
      if ((((int)args->max_length == 0) ||
          (pWVar2 = (WinningCondition *)args->vector[0], (uint)args->max_length < 2)) ||
         (pOVar6 = args->vector[1], (uint)args->max_length < 3)) goto code_?;
      pWVar5 = (WinningCondition *)args->vector[2];
      pWVar7 = (WinningCondition *)FUN_?(TypeInfo__AllCollectiblesCollected);
      pWVar8 = parent;
      if (pWVar5 != (WinningCondition *)0x0) {
        bVar9 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
        if (((pWVar5->klass->_1).naturalAligment < bVar9) ||
           (pWVar8 = pWVar5,
           (pWVar5->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
           (Il2CppClass *)TypeInfo__GameStatCounterManager)) {
          FUN_?(pWVar5);
          pcVar10 = (code *)swi(3);
          pOVar6 = (Object *)(*pcVar10)();
          return pOVar6;
        }
      }
      if (pOVar6 != (Object *)0x0) {
        if ((pOVar6->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar6);
          pcVar10 = (code *)swi(3);
          pOVar6 = (Object *)(*pcVar10)();
          return pOVar6;
        }
        if (pWVar2 != (WinningCondition *)0x0) {
          bVar9 = (TypeInfo__WinningCondition->_1).naturalAligment;
          if (((pWVar2->klass->_1).naturalAligment < bVar9) ||
             (parent = pWVar2,
             (pWVar2->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
             (Il2CppClass *)TypeInfo__WinningCondition)) {
            FUN_?(pWVar2);
            pcVar10 = (code *)swi(3);
            pOVar6 = (Object *)(*pcVar10)();
            return pOVar6;
          }
        }
        WinningCondition::WinningCondition__ctor
                  (pWVar7,parent,*(int32_t *)&pOVar6[1].klass,(GameStatCounterManager *)pWVar8,0,
                   1,CONCAT31((int3)(in_stack_11 >> 8),3),
                   CONCAT31((int3)(in_stack_12 >> 8),2),(MethodInfo *)0x0);
        pvVar1 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
          pvVar1 = (void *)FUN_?(pvVar1);
        }
        if (pWVar7 == (WinningCondition *)0x0) {
          return (Object *)0x0;
        }
        pOVar6 = (Object *)FUN_?(pWVar7,pvVar1);
        if (pOVar6 != (Object *)0x0) {
          return pOVar6;
        }
        FUN_?(pWVar7,pvVar1);
        pcVar10 = (code *)swi(3);
        pOVar6 = (Object *)(*pcVar10)();
        return pOVar6;
      }
    }
  }
  else {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    pWVar5 = parent;
    if (pIVar4 != (Il2CppType *)0x0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar3 = FUN_?(pIVar4);
      pWVar5 = (WinningCondition *)FUN_?(lVar3 + 0x20);
    }
    pIVar4 = TypeRef__WinningConditionAnd;
    if (pWVar2 == pWVar5) {
      if (args != (Object__Array *)0x0) {
        if ((((((int)args->max_length == 0) ||
              (pWVar2 = (WinningCondition *)args->vector[0], (uint)args->max_length < 2)) ||
             (pOVar6 = args->vector[1], (uint)args->max_length < 3)) ||
            ((pWVar5 = (WinningCondition *)args->vector[2], (uint)args->max_length < 4 ||
             (pOVar13 = args->vector[3], (uint)args->max_length < 5)))) ||
           (pOVar14 = args->vector[4], (uint)args->max_length < 6)) goto code_?;
        pOVar15 = args->vector[5];
        pWVar16 = (WinningConditionGroup *)FUN_?(TypeInfo__WinningConditionOr);
        if (pOVar15 != (Object *)0x0) {
          if ((pOVar15->klass->_0).element_class !=
              (TypeInfo__WinningConditionPresentStyle->_0).element_class) {
            FUN_?(pOVar15,TypeInfo__WinningConditionPresentStyle);
            pcVar10 = (code *)swi(3);
            pOVar6 = (Object *)(*pcVar10)();
            return pOVar6;
          }
          if (pOVar14 != (Object *)0x0) {
            if ((pOVar14->klass->_0).element_class !=
                (TypeInfo__GameStatCounterType->_0).element_class) {
              FUN_?(pOVar14);
              pcVar10 = (code *)swi(3);
              pOVar6 = (Object *)(*pcVar10)();
              return pOVar6;
            }
            if (pOVar13 != (Object *)0x0) {
              if ((pOVar13->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar13);
                pcVar10 = (code *)swi(3);
                pOVar6 = (Object *)(*pcVar10)();
                return pOVar6;
              }
              pWVar8 = parent;
              if (pWVar5 != (WinningCondition *)0x0) {
                bVar9 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
                if (((pWVar5->klass->_1).naturalAligment < bVar9) ||
                   (pWVar8 = pWVar5,
                   (pWVar5->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                   (Il2CppClass *)TypeInfo__GameStatCounterManager)) {
                  FUN_?(pWVar5);
                  pcVar10 = (code *)swi(3);
                  pOVar6 = (Object *)(*pcVar10)();
                  return pOVar6;
                }
              }
              if (pOVar6 != (Object *)0x0) {
                if ((pOVar6->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(pOVar6);
                  pcVar10 = (code *)swi(3);
                  pOVar6 = (Object *)(*pcVar10)();
                  return pOVar6;
                }
                if (pWVar2 != (WinningCondition *)0x0) {
                  bVar9 = (TypeInfo__WinningCondition->_1).naturalAligment;
                  if (((pWVar2->klass->_1).naturalAligment < bVar9) ||
                     (parent = pWVar2,
                     (pWVar2->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                     (Il2CppClass *)TypeInfo__WinningCondition)) {
                    FUN_?(pWVar2);
                    pcVar10 = (code *)swi(3);
                    pOVar6 = (Object *)(*pcVar10)();
                    return pOVar6;
                  }
                }
                WinningConditionGroup::WinningConditionGroup__ctor
                          (pWVar16,parent,*(int32_t *)&pOVar6[1].klass,
                           (GameStatCounterManager *)pWVar8,1,*(bool *)&pOVar13[1].klass,
                           CONCAT31((int3)(in_stack_11 >> 8),
                                    *(undefined1 *)&pOVar14[1].klass),
                           CONCAT31((int3)(in_stack_12 >> 8),
                                    *(undefined1 *)&pOVar15[1].klass),(MethodInfo *)0x0);
                pvVar1 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
                if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
                  pvVar1 = (void *)FUN_?(pvVar1);
                }
                if (pWVar16 == (WinningConditionGroup *)0x0) {
                  return (Object *)0x0;
                }
                pOVar6 = (Object *)FUN_?(pWVar16,pvVar1);
                if (pOVar6 != (Object *)0x0) {
                  return pOVar6;
                }
                FUN_?(pWVar16,pvVar1);
                pcVar10 = (code *)swi(3);
                pOVar6 = (Object *)(*pcVar10)();
                return pOVar6;
              }
            }
          }
        }
      }
    }
    else {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pWVar5 = parent;
      if (pIVar4 != (Il2CppType *)0x0) {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar3 = FUN_?(pIVar4);
        pWVar5 = (WinningCondition *)FUN_?(lVar3 + 0x20);
      }
      pIVar4 = TypeRef__CaptureTheFlag;
      if (pWVar2 == pWVar5) {
        if (args != (Object__Array *)0x0) {
          if ((((int)args->max_length == 0) ||
              (pWVar2 = (WinningCondition *)args->vector[0], (uint)args->max_length < 2)) ||
             (pOVar6 = args->vector[1], (uint)args->max_length < 3)) goto code_?;
          pWVar5 = (WinningCondition *)args->vector[2];
          pWVar16 = (WinningConditionGroup *)FUN_?(TypeInfo__WinningConditionAnd);
          pWVar8 = parent;
          if (pWVar5 != (WinningCondition *)0x0) {
            bVar9 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
            if (((pWVar5->klass->_1).naturalAligment < bVar9) ||
               (pWVar8 = pWVar5,
               (pWVar5->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
               (Il2CppClass *)TypeInfo__GameStatCounterManager)) {
              FUN_?(pWVar5);
              pcVar10 = (code *)swi(3);
              pOVar6 = (Object *)(*pcVar10)();
              return pOVar6;
            }
          }
          if (pOVar6 != (Object *)0x0) {
            if ((pOVar6->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)
               ) {
              FUN_?(pOVar6);
              pcVar10 = (code *)swi(3);
              pOVar6 = (Object *)(*pcVar10)();
              return pOVar6;
            }
            if (pWVar2 != (WinningCondition *)0x0) {
              bVar9 = (TypeInfo__WinningCondition->_1).naturalAligment;
              if (((pWVar2->klass->_1).naturalAligment < bVar9) ||
                 (parent = pWVar2,
                 (pWVar2->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                 (Il2CppClass *)TypeInfo__WinningCondition)) {
                FUN_?(pWVar2);
                pcVar10 = (code *)swi(3);
                pOVar6 = (Object *)(*pcVar10)();
                return pOVar6;
              }
            }
            WinningConditionGroup::WinningConditionGroup__ctor
                      (pWVar16,parent,*(int32_t *)&pOVar6[1].klass,
                       (GameStatCounterManager *)pWVar8,0,0,in_stack_11 & 0xffffff00,
                       in_stack_12 & 0xffffff00,(MethodInfo *)0x0);
            pvVar1 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
            if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
              pvVar1 = (void *)FUN_?(pvVar1);
            }
            if (pWVar16 == (WinningConditionGroup *)0x0) {
              return (Object *)0x0;
            }
            pOVar6 = (Object *)FUN_?(pWVar16,pvVar1);
            if (pOVar6 != (Object *)0x0) {
              return pOVar6;
            }
            FUN_?(pWVar16,pvVar1);
            pcVar10 = (code *)swi(3);
            pOVar6 = (Object *)(*pcVar10)();
            return pOVar6;
          }
        }
      }
      else {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        pWVar5 = (WinningCondition *)
                  mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
        pIVar4 = TypeRef__FlagReached;
        if (pWVar2 == pWVar5) {
          if (args != (Object__Array *)0x0) {
            if ((((int)args->max_length == 0) ||
                (pWVar2 = (WinningCondition *)args->vector[0], (uint)args->max_length < 2)) ||
               (pOVar6 = args->vector[1], (uint)args->max_length < 3)) goto code_?;
            pWVar5 = (WinningCondition *)args->vector[2];
            pWVar7 = (WinningCondition *)FUN_?(TypeInfo__CaptureTheFlag);
            pWVar8 = parent;
            if (pWVar5 != (WinningCondition *)0x0) {
              bVar9 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
              if (((pWVar5->klass->_1).naturalAligment < bVar9) ||
                 (pWVar8 = pWVar5,
                 (pWVar5->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                 (Il2CppClass *)TypeInfo__GameStatCounterManager)) {
                FUN_?(pWVar5);
                pcVar10 = (code *)swi(3);
                pOVar6 = (Object *)(*pcVar10)();
                return pOVar6;
              }
            }
            if (pOVar6 != (Object *)0x0) {
              if ((pOVar6->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar6);
                pcVar10 = (code *)swi(3);
                pOVar6 = (Object *)(*pcVar10)();
                return pOVar6;
              }
              if (pWVar2 != (WinningCondition *)0x0) {
                bVar9 = (TypeInfo__WinningCondition->_1).naturalAligment;
                if (((pWVar2->klass->_1).naturalAligment < bVar9) ||
                   (parent = pWVar2,
                   (pWVar2->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                   (Il2CppClass *)TypeInfo__WinningCondition)) {
                  FUN_?(pWVar2);
                  pcVar10 = (code *)swi(3);
                  pOVar6 = (Object *)(*pcVar10)();
                  return pOVar6;
                }
              }
              WinningCondition::WinningCondition__ctor
                        (pWVar7,parent,*(int32_t *)&pOVar6[1].klass,
                         (GameStatCounterManager *)pWVar8,1,1,
                         CONCAT31((int3)(in_stack_11 >> 8),5),
                         CONCAT31((int3)(in_stack_12 >> 8),1),(MethodInfo *)0x0);
              pvVar1 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
              if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
                pvVar1 = (void *)FUN_?(pvVar1);
              }
              if (pWVar7 == (WinningCondition *)0x0) {
                return (Object *)0x0;
              }
              pOVar6 = (Object *)FUN_?(pWVar7,pvVar1);
              if (pOVar6 != (Object *)0x0) {
                return pOVar6;
              }
              FUN_?(pWVar7,pvVar1);
              pcVar10 = (code *)swi(3);
              pOVar6 = (Object *)(*pcVar10)();
              return pOVar6;
            }
          }
        }
        else {
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          pWVar5 = (WinningCondition *)
                    mscorlib.dll::System::Type::Type_GetTypeFromHandle
                              ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
          pIVar4 = TypeRef__KillLimit;
          if (pWVar2 == pWVar5) {
            if (args != (Object__Array *)0x0) {
              if ((((int)args->max_length == 0) ||
                  (pWVar2 = (WinningCondition *)args->vector[0], (uint)args->max_length < 2)) ||
                 (pOVar6 = args->vector[1], (uint)args->max_length < 3)) goto code_?;
              pWVar5 = (WinningCondition *)args->vector[2];
              pWVar7 = (WinningCondition *)FUN_?(TypeInfo__FlagReached);
              pWVar8 = parent;
              if (pWVar5 != (WinningCondition *)0x0) {
                bVar9 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
                if (((pWVar5->klass->_1).naturalAligment < bVar9) ||
                   (pWVar8 = pWVar5,
                   (pWVar5->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                   (Il2CppClass *)TypeInfo__GameStatCounterManager)) {
                  FUN_?(pWVar5);
                  pcVar10 = (code *)swi(3);
                  pOVar6 = (Object *)(*pcVar10)();
                  return pOVar6;
                }
              }
              if (pOVar6 != (Object *)0x0) {
                if ((pOVar6->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(pOVar6);
                  pcVar10 = (code *)swi(3);
                  pOVar6 = (Object *)(*pcVar10)();
                  return pOVar6;
                }
                if (pWVar2 != (WinningCondition *)0x0) {
                  bVar9 = (TypeInfo__WinningCondition->_1).naturalAligment;
                  if (((pWVar2->klass->_1).naturalAligment < bVar9) ||
                     (parent = pWVar2,
                     (pWVar2->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                     (Il2CppClass *)TypeInfo__WinningCondition)) {
                    FUN_?(pWVar2);
                    pcVar10 = (code *)swi(3);
                    pOVar6 = (Object *)(*pcVar10)();
                    return pOVar6;
                  }
                }
                WinningCondition::WinningCondition__ctor
                          (pWVar7,parent,*(int32_t *)&pOVar6[1].klass,
                           (GameStatCounterManager *)pWVar8,0,1,
                           CONCAT31((int3)(in_stack_11 >> 8),2),
                           CONCAT31((int3)(in_stack_12 >> 8),1),(MethodInfo *)0x0);
                pvVar1 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
                if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
                  pvVar1 = (void *)FUN_?(pvVar1);
                }
                if (pWVar7 == (WinningCondition *)0x0) {
                  return (Object *)0x0;
                }
                pOVar6 = (Object *)FUN_?(pWVar7,pvVar1);
                if (pOVar6 != (Object *)0x0) {
                  return pOVar6;
                }
                FUN_?(pWVar7,pvVar1);
                pcVar10 = (code *)swi(3);
                pOVar6 = (Object *)(*pcVar10)();
                return pOVar6;
              }
            }
          }
          else {
            if (*(int *)(lRam_? + 0xe4) == 0) {
              FUN_?();
            }
            pWVar5 = (WinningCondition *)
                      mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
            pIVar4 = TypeRef__OculusKillLimit;
            if (pWVar2 == pWVar5) {
              if (args != (Object__Array *)0x0) {
                if (((((int)args->max_length == 0) ||
                     (pWVar2 = (WinningCondition *)args->vector[0], (uint)args->max_length < 2)) ||
                    (pOVar6 = args->vector[1], (uint)args->max_length < 3)) ||
                   (pWVar5 = (WinningCondition *)args->vector[2], (uint)args->max_length < 4))
                goto code_?;
                pOVar13 = args->vector[3];
                pWVar8 = (WinningCondition *)FUN_?(TypeInfo__KillLimit);
                if (pOVar13 != (Object *)0x0) {
                  if ((pOVar13->klass->_0).element_class !=
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    FUN_?(pOVar13,lRam_?);
                    pcVar10 = (code *)swi(3);
                    pOVar6 = (Object *)(*pcVar10)();
                    return pOVar6;
                  }
                  pWVar7 = parent;
                  if (pWVar5 != (WinningCondition *)0x0) {
                    bVar9 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
                    if (((pWVar5->klass->_1).naturalAligment < bVar9) ||
                       (pWVar7 = pWVar5,
                       (pWVar5->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                       (Il2CppClass *)TypeInfo__GameStatCounterManager)) {
                      FUN_?(pWVar5);
                      pcVar10 = (code *)swi(3);
                      pOVar6 = (Object *)(*pcVar10)();
                      return pOVar6;
                    }
                  }
                  if (pOVar6 != (Object *)0x0) {
                    if ((pOVar6->klass->_0).element_class !=
                        *(Il2CppClass **)(lRam_? + 0x40)) {
                      FUN_?(pOVar6,lRam_?);
                      pcVar10 = (code *)swi(3);
                      pOVar6 = (Object *)(*pcVar10)();
                      return pOVar6;
                    }
                    if (pWVar2 != (WinningCondition *)0x0) {
                      bVar9 = (TypeInfo__WinningCondition->_1).naturalAligment;
                      if (((pWVar2->klass->_1).naturalAligment < bVar9) ||
                         (parent = pWVar2,
                         (pWVar2->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                         (Il2CppClass *)TypeInfo__WinningCondition)) {
                        FUN_?(pWVar2);
                        pcVar10 = (code *)swi(3);
                        pOVar6 = (Object *)(*pcVar10)();
                        return pOVar6;
                      }
                    }
                    WinningCondition::WinningCondition__ctor
                              (pWVar8,parent,*(int32_t *)&pOVar6[1].klass,
                               (GameStatCounterManager *)pWVar7,*(int32_t *)&pOVar13[1].klass,1,
                               CONCAT31((int3)(in_stack_11 >> 8),1),
                               CONCAT31((int3)(in_stack_12 >> 8),2),(MethodInfo *)0x0)
                    ;
                    pvVar1 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
                    if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
                      pvVar1 = (void *)FUN_?(pvVar1);
                    }
                    if (pWVar8 == (WinningCondition *)0x0) {
                      return (Object *)0x0;
                    }
                    pOVar6 = (Object *)FUN_?(pWVar8,pvVar1);
                    if (pOVar6 != (Object *)0x0) {
                      return pOVar6;
                    }
                    FUN_?(pWVar8,pvVar1);
                    pcVar10 = (code *)swi(3);
                    pOVar6 = (Object *)(*pcVar10)();
                    return pOVar6;
                  }
                }
              }
            }
            else {
              if (*(int *)(lRam_? + 0xe4) == 0) {
                FUN_?();
              }
              pWVar5 = (WinningCondition *)
                        mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                  ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
              pIVar4 = TypeRef__TargetAssasinated;
              if (pWVar2 == pWVar5) {
                if (args != (Object__Array *)0x0) {
                  if (((((int)args->max_length == 0) ||
                       (pWVar2 = (WinningCondition *)args->vector[0], (uint)args->max_length < 2))
                      || (pOVar6 = args->vector[1], (uint)args->max_length < 3)) ||
                     (pWVar5 = (WinningCondition *)args->vector[2], (uint)args->max_length < 4))
                  goto code_?;
                  pOVar13 = args->vector[3];
                  pWVar8 = (WinningCondition *)FUN_?(TypeInfo__OculusKillLimit);
                  if (pOVar13 != (Object *)0x0) {
                    if ((pOVar13->klass->_0).element_class !=
                        *(Il2CppClass **)(lRam_? + 0x40)) {
                      FUN_?(pOVar13,lRam_?);
                      pcVar10 = (code *)swi(3);
                      pOVar6 = (Object *)(*pcVar10)();
                      return pOVar6;
                    }
                    pWVar7 = parent;
                    if (pWVar5 != (WinningCondition *)0x0) {
                      bVar9 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
                      if (((pWVar5->klass->_1).naturalAligment < bVar9) ||
                         (pWVar7 = pWVar5,
                         (pWVar5->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                         (Il2CppClass *)TypeInfo__GameStatCounterManager)) {
                        FUN_?(pWVar5);
                        pcVar10 = (code *)swi(3);
                        pOVar6 = (Object *)(*pcVar10)();
                        return pOVar6;
                      }
                    }
                    if (pOVar6 != (Object *)0x0) {
                      if ((pOVar6->klass->_0).element_class !=
                          *(Il2CppClass **)(lRam_? + 0x40)) {
                        FUN_?(pOVar6,lRam_?);
                        pcVar10 = (code *)swi(3);
                        pOVar6 = (Object *)(*pcVar10)();
                        return pOVar6;
                      }
                      if (pWVar2 != (WinningCondition *)0x0) {
                        bVar9 = (TypeInfo__WinningCondition->_1).naturalAligment;
                        if (((pWVar2->klass->_1).naturalAligment < bVar9) ||
                           (parent = pWVar2,
                           (pWVar2->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                           (Il2CppClass *)TypeInfo__WinningCondition)) {
                          FUN_?(pWVar2);
                          pcVar10 = (code *)swi(3);
                          pOVar6 = (Object *)(*pcVar10)();
                          return pOVar6;
                        }
                      }
                      WinningCondition::WinningCondition__ctor
                                (pWVar8,parent,*(int32_t *)&pOVar6[1].klass,
                                 (GameStatCounterManager *)pWVar7,*(int32_t *)&pOVar13[1].klass,1,
                                 CONCAT31((int3)(in_stack_11 >> 8),6),
                                 CONCAT31((int3)(in_stack_12 >> 8),2),
                                 (MethodInfo *)0x0);
                      pvVar1 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
                      if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
                        pvVar1 = (void *)FUN_?(pvVar1);
                      }
                      if (pWVar8 == (WinningCondition *)0x0) {
                        return (Object *)0x0;
                      }
                      pOVar6 = (Object *)FUN_?(pWVar8,pvVar1);
                      if (pOVar6 != (Object *)0x0) {
                        return pOVar6;
                      }
                      FUN_?(pWVar8,pvVar1);
                      pcVar10 = (code *)swi(3);
                      pOVar6 = (Object *)(*pcVar10)();
                      return pOVar6;
                    }
                  }
                }
              }
              else {
                if (*(int *)(lRam_? + 0xe4) == 0) {
                  FUN_?();
                }
                pWVar5 = (WinningCondition *)
                          mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                    ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
                pIVar4 = TypeRef__TargetAssasinatedGroup;
                if (pWVar2 == pWVar5) {
                  if (args != (Object__Array *)0x0) {
                    if (((((int)args->max_length == 0) ||
                         (pWVar2 = (WinningCondition *)args->vector[0], (uint)args->max_length < 2)
                         ) || (pOVar6 = args->vector[1], (uint)args->max_length < 3)) ||
                       ((pWVar5 = (WinningCondition *)args->vector[2], (uint)args->max_length < 4
                        || (pOVar13 = args->vector[3], (uint)args->max_length < 5))))
                    goto code_?;
                    pOVar14 = args->vector[4];
                    pWVar8 = (WinningCondition *)FUN_?(TypeInfo__TargetAssasinated);
                    if (pOVar14 != (Object *)0x0) {
                      if ((pOVar14->klass->_0).element_class !=
                          *(Il2CppClass **)(lRam_? + 0x40)) {
                        FUN_?(pOVar14,lRam_?);
                        pcVar10 = (code *)swi(3);
                        pOVar6 = (Object *)(*pcVar10)();
                        return pOVar6;
                      }
                      uVar17 = *(undefined4 *)&pOVar14[1].klass;
                      if (pOVar13 != (Object *)0x0) {
                        if ((pOVar13->klass->_0).element_class !=
                            *(Il2CppClass **)(lRam_? + 0x40)) {
                          FUN_?(pOVar13,lRam_?);
                          pcVar10 = (code *)swi(3);
                          pOVar6 = (Object *)(*pcVar10)();
                          return pOVar6;
                        }
                        uVar18 = *(undefined4 *)&pOVar13[1].klass;
                        pWVar7 = parent;
                        if (pWVar5 != (WinningCondition *)0x0) {
                          bVar9 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
                          if (((pWVar5->klass->_1).naturalAligment < bVar9) ||
                             (pWVar7 = pWVar5,
                             (pWVar5->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                             (Il2CppClass *)TypeInfo__GameStatCounterManager)) {
                            FUN_?(pWVar5);
                            pcVar10 = (code *)swi(3);
                            pOVar6 = (Object *)(*pcVar10)();
                            return pOVar6;
                          }
                        }
                        if (pOVar6 != (Object *)0x0) {
                          if ((pOVar6->klass->_0).element_class !=
                              *(Il2CppClass **)(lRam_? + 0x40)) {
                            FUN_?(pOVar6,lRam_?);
                            pcVar10 = (code *)swi(3);
                            pOVar6 = (Object *)(*pcVar10)();
                            return pOVar6;
                          }
                          if (pWVar2 != (WinningCondition *)0x0) {
                            bVar9 = (TypeInfo__WinningCondition->_1).naturalAligment;
                            if (((pWVar2->klass->_1).naturalAligment < bVar9) ||
                               (parent = pWVar2,
                               (pWVar2->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                               (Il2CppClass *)TypeInfo__WinningCondition)) {
                              FUN_?(pWVar2);
                              pcVar10 = (code *)swi(3);
                              pOVar6 = (Object *)(*pcVar10)();
                              return pOVar6;
                            }
                          }
                          WinningCondition::WinningCondition__ctor
                                    (pWVar8,parent,*(int32_t *)&pOVar6[1].klass,
                                     (GameStatCounterManager *)pWVar7,1,0,
                                     CONCAT31((int3)(in_stack_11 >> 8),1),
                                     CONCAT31((int3)(in_stack_12 >> 8),1),
                                     (MethodInfo *)0x0);
                          *(undefined4 *)((longlong)&pWVar8[1].klass + 4) = uVar17;
                          *(undefined4 *)&pWVar8[1].klass = uVar18;
                          pvVar1 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
                          if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
                            pvVar1 = (void *)FUN_?(pvVar1);
                          }
                          pOVar6 = (Object *)FUN_?(pWVar8,pvVar1);
                          if (pOVar6 != (Object *)0x0) {
                            return pOVar6;
                          }
                          FUN_?(pWVar8,pvVar1);
                          pcVar10 = (code *)swi(3);
                          pOVar6 = (Object *)(*pcVar10)();
                          return pOVar6;
                        }
                      }
                    }
                  }
                }
                else {
                  if (*(int *)(lRam_? + 0xe4) == 0) {
                    FUN_?();
                  }
                  pWVar5 = (WinningCondition *)
                            mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                      ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
                  pIVar4 = TypeRef__TimeLimit;
                  if (pWVar2 == pWVar5) {
                    if (args != (Object__Array *)0x0) {
                      if ((((int)args->max_length == 0) ||
                          (pWVar2 = (WinningCondition *)args->vector[0], (uint)args->max_length < 2
                          )) || (pOVar6 = args->vector[1], (uint)args->max_length < 3))
                      goto code_?;
                      pWVar5 = (WinningCondition *)args->vector[2];
                      pWVar16 = (WinningConditionGroup *)
                                FUN_?(TypeInfo__TargetAssasinatedGroup);
                      pWVar8 = parent;
                      if (pWVar5 != (WinningCondition *)0x0) {
                        bVar9 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
                        if (((pWVar5->klass->_1).naturalAligment < bVar9) ||
                           (pWVar8 = pWVar5,
                           (pWVar5->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                           (Il2CppClass *)TypeInfo__GameStatCounterManager)) {
                          FUN_?(pWVar5);
                          pcVar10 = (code *)swi(3);
                          pOVar6 = (Object *)(*pcVar10)();
                          return pOVar6;
                        }
                      }
                      if (pOVar6 != (Object *)0x0) {
                        if ((pOVar6->klass->_0).element_class !=
                            *(Il2CppClass **)(lRam_? + 0x40)) {
                          FUN_?(pOVar6);
                          pcVar10 = (code *)swi(3);
                          pOVar6 = (Object *)(*pcVar10)();
                          return pOVar6;
                        }
                        if (pWVar2 != (WinningCondition *)0x0) {
                          bVar9 = (TypeInfo__WinningCondition->_1).naturalAligment;
                          if (((pWVar2->klass->_1).naturalAligment < bVar9) ||
                             (parent = pWVar2,
                             (pWVar2->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                             (Il2CppClass *)TypeInfo__WinningCondition)) {
                            FUN_?(pWVar2);
                            pcVar10 = (code *)swi(3);
                            pOVar6 = (Object *)(*pcVar10)();
                            return pOVar6;
                          }
                        }
                        WinningConditionGroup::WinningConditionGroup__ctor
                                  (pWVar16,parent,*(int32_t *)&pOVar6[1].klass,
                                   (GameStatCounterManager *)pWVar8,1,1,
                                   CONCAT31((int3)(in_stack_11 >> 8),1),
                                   CONCAT31((int3)(in_stack_12 >> 8),1),
                                   (MethodInfo *)0x0);
                        pvVar1 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
                        if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
                          pvVar1 = (void *)FUN_?(pvVar1);
                        }
                        if (pWVar16 == (WinningConditionGroup *)0x0) {
                          return (Object *)0x0;
                        }
                        pOVar6 = (Object *)FUN_?(pWVar16,pvVar1);
                        if (pOVar6 != (Object *)0x0) {
                          return pOVar6;
                        }
                        FUN_?(pWVar16,pvVar1);
                        pcVar10 = (code *)swi(3);
                        pOVar6 = (Object *)(*pcVar10)();
                        return pOVar6;
                      }
                    }
                  }
                  else {
                    if (*(int *)(lRam_? + 0xe4) == 0) {
                      FUN_?();
                    }
                    pWVar5 = (WinningCondition *)
                              mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                        ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
                    pIVar4 = TypeRef__TimeAttackFlagReached;
                    if (pWVar2 == pWVar5) {
                      if (args != (Object__Array *)0x0) {
                        if ((((int)args->max_length == 0) ||
                            (pWVar2 = (WinningCondition *)args->vector[0],
                            (uint)args->max_length < 2)) ||
                           (pOVar6 = args->vector[1], (uint)args->max_length < 3))
                        goto code_?;
                        pWVar5 = (WinningCondition *)args->vector[2];
                        pWVar7 = (WinningCondition *)FUN_?(TypeInfo__TimeLimit);
                        pWVar8 = parent;
                        if (pWVar5 != (WinningCondition *)0x0) {
                          bVar9 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
                          if (((pWVar5->klass->_1).naturalAligment < bVar9) ||
                             (pWVar8 = pWVar5,
                             (pWVar5->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                             (Il2CppClass *)TypeInfo__GameStatCounterManager)) {
                            FUN_?(pWVar5);
                            pcVar10 = (code *)swi(3);
                            pOVar6 = (Object *)(*pcVar10)();
                            return pOVar6;
                          }
                        }
                        if (pOVar6 != (Object *)0x0) {
                          if ((pOVar6->klass->_0).element_class !=
                              *(Il2CppClass **)(lRam_? + 0x40)) {
                            FUN_?(pOVar6);
                            pcVar10 = (code *)swi(3);
                            pOVar6 = (Object *)(*pcVar10)();
                            return pOVar6;
                          }
                          if (pWVar2 != (WinningCondition *)0x0) {
                            bVar9 = (TypeInfo__WinningCondition->_1).naturalAligment;
                            if (((pWVar2->klass->_1).naturalAligment < bVar9) ||
                               (parent = pWVar2,
                               (pWVar2->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                               (Il2CppClass *)TypeInfo__WinningCondition)) {
                              FUN_?(pWVar2);
                              pcVar10 = (code *)swi(3);
                              pOVar6 = (Object *)(*pcVar10)();
                              return pOVar6;
                            }
                          }
                          WinningCondition::WinningCondition__ctor
                                    (pWVar7,parent,*(int32_t *)&pOVar6[1].klass,
                                     (GameStatCounterManager *)pWVar8,0,1,
                                     CONCAT31((int3)(in_stack_11 >> 8),4),
                                     CONCAT31((int3)(in_stack_12 >> 8),2),
                                     (MethodInfo *)0x0);
                          pvVar1 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
                          if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
                            pvVar1 = (void *)FUN_?(pvVar1);
                          }
                          if (pWVar7 == (WinningCondition *)0x0) {
                            return (Object *)0x0;
                          }
                          pOVar6 = (Object *)FUN_?(pWVar7,pvVar1);
                          if (pOVar6 != (Object *)0x0) {
                            return pOVar6;
                          }
                          FUN_?(pWVar7,pvVar1);
                          pcVar10 = (code *)swi(3);
                          pOVar6 = (Object *)(*pcVar10)();
                          return pOVar6;
                        }
                      }
                    }
                    else {
                      if (*(int *)(lRam_? + 0xe4) == 0) {
                        FUN_?();
                      }
                      pWVar5 = (WinningCondition *)
                                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                          ((RuntimeTypeHandle)pIVar4,(MethodInfo *)0x0);
                      if (pWVar2 != pWVar5) {
                        return (Object *)0x0;
                      }
                      if (args != (Object__Array *)0x0) {
                        if ((((int)args->max_length == 0) ||
                            (pWVar2 = (WinningCondition *)args->vector[0],
                            (uint)args->max_length < 2)) ||
                           (pOVar6 = args->vector[1], (uint)args->max_length < 3)) {
code_?:
                          FUN_?();
                          pcVar10 = (code *)swi(3);
                          pOVar6 = (Object *)(*pcVar10)();
                          return pOVar6;
                        }
                        pWVar5 = (WinningCondition *)args->vector[2];
                        pWVar7 = (WinningCondition *)FUN_?(TypeInfo__TimeAttackFlagReached)
                        ;
                        pWVar8 = parent;
                        if (pWVar5 != (WinningCondition *)0x0) {
                          bVar9 = (TypeInfo__GameStatCounterManager->_1).naturalAligment;
                          if (((pWVar5->klass->_1).naturalAligment < bVar9) ||
                             (pWVar8 = pWVar5,
                             (pWVar5->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                             (Il2CppClass *)TypeInfo__GameStatCounterManager)) {
                            FUN_?(pWVar5);
                            pcVar10 = (code *)swi(3);
                            pOVar6 = (Object *)(*pcVar10)();
                            return pOVar6;
                          }
                        }
                        if (pOVar6 != (Object *)0x0) {
                          if ((pOVar6->klass->_0).element_class !=
                              *(Il2CppClass **)(lRam_? + 0x40)) {
                            FUN_?(pOVar6);
                            pcVar10 = (code *)swi(3);
                            pOVar6 = (Object *)(*pcVar10)();
                            return pOVar6;
                          }
                          if (pWVar2 != (WinningCondition *)0x0) {
                            bVar9 = (TypeInfo__WinningCondition->_1).naturalAligment;
                            if (((pWVar2->klass->_1).naturalAligment < bVar9) ||
                               (parent = pWVar2,
                               (pWVar2->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                               (Il2CppClass *)TypeInfo__WinningCondition)) {
                              FUN_?(pWVar2);
                              pcVar10 = (code *)swi(3);
                              pOVar6 = (Object *)(*pcVar10)();
                              return pOVar6;
                            }
                          }
                          WinningCondition::WinningCondition__ctor
                                    (pWVar7,parent,*(int32_t *)&pOVar6[1].klass,
                                     (GameStatCounterManager *)pWVar8,0,1,
                                     CONCAT31((int3)(in_stack_11 >> 8),8),
                                     CONCAT31((int3)(in_stack_12 >> 8),1),
                                     (MethodInfo *)0x0);
                          pvVar1 = (method->field7_0x38).rgctx_data[1].rgctxDataDummy;
                          if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
                            pvVar1 = (void *)FUN_?(pvVar1);
                          }
                          if (pWVar7 == (WinningCondition *)0x0) {
                            return (Object *)0x0;
                          }
                          pOVar6 = (Object *)FUN_?(pWVar7,pvVar1);
                          if (pOVar6 != (Object *)0x0) {
                            return pOVar6;
                          }
                          FUN_?(pWVar7,pvVar1);
                          pcVar10 = (code *)swi(3);
                          pOVar6 = (Object *)(*pcVar10)();
                          return pOVar6;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pOVar6 = (Object *)(*pcVar10)();
  return pOVar6;
}


/* List`1[IWinningCondition] GetForfilledWinningConditions() */

List_1_IWinningCondition_ *
MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetForfilledWinningConditions
          (WinningConditionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WinningConditionManager__ForfilledWinnerConditionGenerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(TypeInfo__WinningConditionManager__ForfilledWinnerConditionGenerator);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__WinningConditionManager__ForfilledWinnerConditionGenerator__HandleWinningConditionForReport_IWinningCondition_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<IWinningCondition,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<IWinningCondition>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<IWinningCondition>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Object__Class *)
            FUN_?(TypeInfo__System__Collections__Generic__List<IWinningCondition>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<IWinningCondition>__List__);
  bVar1 = iRam_? != 0;
  object[1].klass = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  this_01 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<IWinningCondition,_bool>);
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_01,object,
             MethodInfo__WinningConditionManager__ForfilledWinnerConditionGenerator__HandleWinningConditionForReport_IWinningCondition_
             ,(MethodInfo *)0x0);
  if ((this != (WinningConditionManager *)0x0) &&
     (pWVar6 = (this->fields).winnerConditionsRoot, pWVar6 != (WinningConditionOr *)0x0)) {
    (*(pWVar6->klass->vtable).Traverse_1.methodPtr)
              (pWVar6,this_01,(pWVar6->klass->vtable).Traverse_1.method);
    return (List_1_IWinningCondition_ *)object[1].klass;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pLVar8 = (List_1_IWinningCondition_ *)(*pcVar7)();
  return pLVar8;
}


/* Object GetSingletonWinnerConditionByType[Object]() */

Object * MVWorldObject.dll::WinningConditionManager::
         WinningConditionManager_GetSingletonWinnerConditionByType
                   (WinningConditionManager *this,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(method);
  }
  lVar1 = *(longlong *)(method->field7_0x38).methodMetadataHandle;
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    FUN_?(&TypeInfo__System__Func<IWinningCondition,_bool>);
    LOCK();
    UNLOCK();
    if (*(longlong *)(lVar1 + 0x38) == 0) {
      FUN_?(lVar1);
    }
  }
  lVar2 = **(longlong **)(lVar1 + 0x38);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_?(lVar2);
  }
  pOVar3 = (Object *)FUN_?(lVar2);
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_?(lVar2);
  }
  pOVar4 = (Object__Class *)FUN_?(lVar2);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pOVar4,
             *(MethodInfo **)(*(longlong *)(lVar1 + 0x38) + 0x18));
  if (pOVar3 != (Object *)0x0) {
    bVar5 = iRam_? != 0;
    pOVar3[1].klass = pOVar4;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    pWVar10 = (this->fields).winnerConditionsRoot;
    this_00 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<IWinningCondition,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_00,pOVar3,*(void **)(*(longlong *)(lVar1 + 0x38) + 0x20),(MethodInfo *)0x0);
    if (pWVar10 != (WinningConditionOr *)0x0) {
      (*(pWVar10->klass->vtable).Traverse_1.methodPtr)(pWVar10,this_00);
      pOVar4 = pOVar3[1].klass;
      if (pOVar4 != (Object__Class *)0x0) {
        if (*(int *)&(pOVar4->_0).namespaze == 0) {
          return (Object *)0x0;
        }
        if (1 < *(int *)&(pOVar4->_0).namespaze) {
          RVar11.value = (void *)func_?((method->field7_0x38).rgctx_data);
          func_?(uRam_?);
          pTVar12 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar11,(MethodInfo *)0x0);
          FUN_?(pOVar4);
          auStackX_10[0] = func_?(pOVar4);
          pOVar3 = (Object *)func_?(uRam_?,auStackX_10);
          pSVar13 = (String *)func_?(&StringLiteral_Singleton_count_of_type__0__is__);
          pSVar13 = mscorlib.dll::System::String::String_Format_1
                              (pSVar13,(Object *)pTVar12,pOVar3,(MethodInfo *)0x0);
          uVar14 = func_?(&TypeInfo__System__Exception);
          pEVar15 = (Exception *)func_?(uVar14);
          mscorlib.dll::System::Exception::Exception__ctor_1(pEVar15,pSVar13,(MethodInfo *)0x0);
          FUN_?(pEVar15,method);
          pcVar16 = (code *)swi(3);
          pOVar3 = (Object *)(*pcVar16)();
          return pOVar3;
        }
        if (*(int *)&(pOVar4->_0).namespaze == 0) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar16 = (code *)swi(3);
          pOVar3 = (Object *)(*pcVar16)();
          return pOVar3;
        }
        pcVar17 = (pOVar4->_0).name;
        if (pcVar17 != (char *)0x0) {
          if (*(int *)(pcVar17 + 0x18) == 0) {
code_?:
            FUN_?();
            pcVar16 = (code *)swi(3);
            pOVar3 = (Object *)(*pcVar16)();
            return pOVar3;
          }
          plVar18 = *(longlong **)(pcVar17 + 0x20);
          if (plVar18 != (longlong *)0x0) {
            cVar19 = (**(code **)(*plVar18 + 600))(plVar18,*(undefined8 *)(*plVar18 + 0x260));
            if (cVar19 == '\0') {
              RVar11.value = (void *)func_?((method->field7_0x38).rgctx_data);
              func_?(uRam_?);
              pTVar12 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(RVar11,(MethodInfo *)0x0)
              ;
              pSVar13 = (String *)func_?(&StringLiteral_Type_is_not_singleton__0_);
              pSVar13 = mscorlib.dll::System::String::String_Format
                                  (pSVar13,(Object *)pTVar12,(MethodInfo *)0x0);
              uVar14 = func_?(&TypeInfo__System__Exception);
              pEVar15 = (Exception *)func_?(uVar14);
              mscorlib.dll::System::Exception::Exception__ctor_1(pEVar15,pSVar13,(MethodInfo *)0x0);
              FUN_?(pEVar15,method);
              pcVar16 = (code *)swi(3);
              pOVar3 = (Object *)(*pcVar16)();
              return pOVar3;
            }
            if (*(int *)&(pOVar4->_0).namespaze == 0) goto code_?;
            pcVar17 = (pOVar4->_0).name;
            if (pcVar17 != (char *)0x0) {
              if (*(int *)(pcVar17 + 0x18) != 0) {
                return *(Object **)(pcVar17 + 0x20);
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar16)();
  return pOVar3;
}


/* List`1[System.Object] GetWinnerConditionsByType[Object]() */

List_1_System_Object_ *
MVWorldObject.dll::WinningConditionManager::WinningConditionManager_GetWinnerConditionsByType
          (WinningConditionManager *this,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__System__Func<IWinningCondition,_bool>);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  pvVar1 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  object = (Object *)FUN_?(pvVar1);
  pvVar1 = (method->field7_0x38).rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar1 + 0x135) & 1) == 0) {
    pvVar1 = (void *)FUN_?(pvVar1);
  }
  this_00 = (Object__Class *)FUN_?(pvVar1);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             (method->field7_0x38).rgctx_data[3].method);
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = this_00;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pWVar7 = (this->fields).winnerConditionsRoot;
    this_01 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<IWinningCondition,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_01,object,(method->field7_0x38).rgctx_data[4].rgctxDataDummy,(MethodInfo *)0x0);
    if (pWVar7 != (WinningConditionOr *)0x0) {
      (*(pWVar7->klass->vtable).Traverse_1.methodPtr)
                (pWVar7,this_01,(pWVar7->klass->vtable).Traverse_1.method);
      return (List_1_System_Object_ *)object[1].klass;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pLVar9 = (List_1_System_Object_ *)(*pcVar8)();
  return pLVar9;
}


/* Void Initialize(GameStatCounterManager) */

void MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Initialize
               (WinningConditionManager *this,GameStatCounterManager *gameStatCounterManager,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameStatCounterType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  WinningConditionOr_MethodInfo__WinningConditionManager__CreateInstance<WinningConditionOr>_WinningCondition__System__Object____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WinningConditionManager__winnerConditionsRoot_OnWinningConditionChanged_System__Object__System__EventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WinningConditionPresentStyle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).gameCounterManager = gameStatCounterManager;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).gameCounterManager >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,3);
  lVar3 = lRam_?;
  uVar6 = 0;
  uStackX_8 = uStackX_8 & 0xffffffffffffff00;
  uVar4 = uStackX_8;
  if ((*(int *)(lRam_? + 0x28) < 0) &&
     ((*(longlong *)(lRam_? + 0x60) == 0 ||
      (uVar4 = uVar6, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
    uVar4 = FUN_?(lRam_?);
    FUN_?(uVar4 + 0x10,&uStackX_8,(longlong)*(int *)(lVar3 + 0xf8) + -0x10);
    if (iRam_? != 0) {
      uVar2 = (uint)(uVar4 + 0x10 >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar7 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar7 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  if (args == (Object__Array *)0x0) goto code_?;
  if ((uVar4 != 0) && (lVar3 = FUN_?(uVar4,(args->klass->_0).element_class), lVar3 == 0)
     ) {
    uVar8 = FUN_?();
    FUN_?(uVar8,0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FUN_?(args,0,uVar4);
  pGVar10 = TypeInfo__GameStatCounterType;
  uStackX_8 = uStackX_8 & 0xffffffffffffff00;
  iVar11._0_2_ = (TypeInfo__GameStatCounterType->_0).byval_arg.attrs;
  iVar11._2_1_ = (TypeInfo__GameStatCounterType->_0).byval_arg.type;
  iVar11._3_1_ = (TypeInfo__GameStatCounterType->_0).byval_arg.field_0xb;
  uVar4 = uStackX_8;
  if (iVar11 < 0) {
    if (((TypeInfo__GameStatCounterType->_0).generic_class == (Il2CppGenericClass *)0x0) ||
       (uVar4 = uVar6, ((TypeInfo__GameStatCounterType->_1).field_0x6d & 8) == 0)) {
      uVar4 = FUN_?(TypeInfo__GameStatCounterType);
      FUN_?(uVar4 + 0x10,&uStackX_8,(longlong)(int)(pGVar10->_1).instance_size + -0x10);
      if (iRam_? != 0) {
        uVar2 = (uint)(uVar4 + 0x10 >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar7 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar7 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      goto code_?;
    }
  }
  else {
code_?:
    if ((uVar4 != 0) &&
       (lVar3 = FUN_?(uVar4,(args->klass->_0).element_class), lVar3 == 0)) {
      uVar8 = FUN_?();
      FUN_?(uVar8,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  FUN_?(args,1,uVar4);
  pWVar12 = TypeInfo__WinningConditionPresentStyle;
  uStackX_8 = uStackX_8 & 0xffffffffffffff00;
  iVar13._0_2_ = (TypeInfo__WinningConditionPresentStyle->_0).byval_arg.attrs;
  iVar13._2_1_ = (TypeInfo__WinningConditionPresentStyle->_0).byval_arg.type;
  iVar13._3_1_ = (TypeInfo__WinningConditionPresentStyle->_0).byval_arg.field_0xb;
  uVar4 = uStackX_8;
  if (iVar13 < 0) {
    if (((TypeInfo__WinningConditionPresentStyle->_0).generic_class == (Il2CppGenericClass *)0x0) ||
       (((TypeInfo__WinningConditionPresentStyle->_1).field_0x6d & 8) == 0)) {
      uVar4 = FUN_?(TypeInfo__WinningConditionPresentStyle);
      FUN_?(uVar4 + 0x10,&uStackX_8,(longlong)(int)(pWVar12->_1).instance_size + -0x10);
      if (iRam_? != 0) {
        uVar2 = (uint)(uVar4 + 0x10 >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar6 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar6 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      goto code_?;
    }
  }
  else {
code_?:
    uVar6 = uVar4;
    if ((uVar4 != 0) &&
       (lVar3 = FUN_?(uVar4,(args->klass->_0).element_class), lVar3 == 0)) {
      uVar8 = FUN_?();
      FUN_?(uVar8,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  FUN_?(args,2,uVar6);
  pWVar14 = (WinningConditionOr *)
            WinningConditionManager_CreateInstance
                      (this,(WinningCondition *)0x0,args,
                       WinningConditionOr_MethodInfo__WinningConditionManager__CreateInstance<WinningConditionOr>_WinningCondition__System__Object____
                      );
  bVar1 = iRam_? != 0;
  (this->fields).winnerConditionsRoot = pWVar14;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pWVar14 = (this->fields).winnerConditionsRoot;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__WinningConditionManager__winnerConditionsRoot_OnWinningConditionChanged_System__Object__System__EventArgs_
             ,(MethodInfo *)0x0);
  if (pWVar14 != (WinningConditionOr *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    ppEVar15 = &(pWVar14->fields)._._.OnWinningConditionChanged;
    a = (pWVar14->fields)._._.OnWinningConditionChanged;
    do {
      pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
      pEVar17 = TypeInfo__System__EventHandler<System::EventArgs>;
      if (pDVar16 == (Delegate *)0x0) {
        pEVar18 = (EventHandler_1_EventArgs_ *)0x0;
      }
      else {
        pEVar18 = (EventHandler_1_EventArgs_ *)
                  FUN_?(pDVar16,TypeInfo__System__EventHandler<System::EventArgs>);
        if (pEVar18 == (EventHandler_1_EventArgs_ *)0x0) {
          FUN_?(pDVar16,pEVar17);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      LOCK();
      pEVar19 = *ppEVar15;
      bVar1 = a == pEVar19;
      if (bVar1) {
        *ppEVar15 = pEVar18;
        pEVar19 = a;
      }
      UNLOCK();
      pEVar18 = a;
      if (!bVar1) {
        pEVar18 = pEVar19;
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)ppEVar15 >> 0xc);
        uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar6 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar6 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      bVar1 = pEVar18 != a;
      a = pEVar18;
    } while (bVar1);
    return;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean IsTimeLimit(IWinningCondition) */

bool MVWorldObject.dll::WinningConditionManager::WinningConditionManager_IsTimeLimit
               (WinningConditionManager *this,IWinningCondition *winningCondition,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TimeLimit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (winningCondition != (IWinningCondition *)0x0) {
    bVar1 = (TypeInfo__TimeLimit->_1).naturalAligment;
    if ((bVar1 <= (winningCondition->klass->_1).naturalAligment) &&
       ((winningCondition->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo__TimeLimit)) {
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
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (this->fields).winnerConditionsRoot;
  if (object != (WinningConditionOr *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Remove_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__IWinningCondition);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar1 = (object->fields)._.winnerConditions;
    if (pDVar1 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,id,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__get_Item_int_
                         );
      this_00 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_00,(Object *)object,
                 (object->klass->vtable).winnerCondition_OnWinningConditionChanged.method,
                 (MethodInfo *)0x0);
      if (pOVar2 != (Object *)0x0) {
        FUN_?(2,TypeInfo__IWinningCondition,pOVar2,this_00);
        pDVar1 = (object->fields)._.winnerConditions;
        if (pDVar1 != (Dictionary_2_System_Int32_IWinningCondition_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_IWinningCondition>__Remove_int_
                    );
          if ((this->fields).OnWinningConditionAddedOrRemoved != (EventHandler_1_EventArgs_ *)0x0) {
            pEVar3 = (this->fields).OnWinningConditionAddedOrRemoved;
            uVar4 = FUN_?(TypeInfo__System__EventArgs);
            (*(pEVar3->fields)._._.invoke_impl)
                      ((pEVar3->fields)._._.method_code,this,uVar4,(pEVar3->fields)._._.method);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Reset() */

void MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Reset
               (WinningConditionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<IWinningCondition,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WinningConditionManager____c___Reset_b__21_0_IWinningCondition_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WinningConditionManager____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._WinningConditionFound_k__BackingField = 0;
  if (*(int *)&(TypeInfo__WinningConditionManager____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_01 = TypeInfo__WinningConditionManager____c->static_fields->__9__21_0;
  if (this_01 == (Func_2_IWinningCondition_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__WinningConditionManager____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__WinningConditionManager____c->static_fields->__9;
    this_01 = (Func_2_IWinningCondition_Boolean_ *)
              FUN_?(TypeInfo__System__Func<IWinningCondition,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_01,(Object *)object,
               MethodInfo__WinningConditionManager____c___Reset_b__21_0_IWinningCondition_,
               (MethodInfo *)0x0);
    TypeInfo__WinningConditionManager____c->static_fields->__9__21_0 = this_01;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__WinningConditionManager____c->static_fields->__9__21_0 >>
                    0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  pWVar5 = (this->fields).winnerConditionsRoot;
  if (pWVar5 != (WinningConditionOr *)0x0) {
    (*(pWVar5->klass->vtable).Traverse_1.methodPtr)
              (pWVar5,this_01,(pWVar5->klass->vtable).Traverse_1.method);
    this_00 = (this->fields).gameCounterManager;
    if (this_00 != (GameStatCounterManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Clear__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((this_00->fields).statTypeCounters !=
          (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
        FUN_?();
        GameStatCounterManager::GameStatCounterManager_AddPersistentStats(this_00,(MethodInfo *)0x0)
        ;
        if ((this->fields).OnWinningConditionReset != (EventHandler_1_EventArgs_ *)0x0) {
          pEVar6 = (this->fields).OnWinningConditionReset;
          if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__System__EventArgs);
          }
          (*(pEVar6->fields)._._.invoke_impl)
                    ((pEVar6->fields)._._.method_code,this,
                     TypeInfo__System__EventArgs->static_fields->Empty,(pEVar6->fields)._._.method);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::WinningConditionManager::WinningConditionManager_ToString
                   (WinningConditionManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_WinningCondition_found___0__u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_To_win___0_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  abStackX_8[0] = (this->fields)._WinningConditionFound_k__BackingField;
  arg0 = (Object *)FUN_?(uRam_?,abStackX_8);
  pSVar1 = StringLiteral_WinningCondition_found___0__u000A;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_2,arg0,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  str0 = mscorlib.dll::System::String::String_FormatHelper
                   ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_To_win___0_;
  PStack_3._arg0 = (Object *)0x0;
  PStack_3._arg1 = (Object *)0x0;
  PStack_3._arg2 = (Object *)0x0;
  PStack_3._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor
            (&PStack_3,(Object *)(this->fields).winnerConditionsRoot,(MethodInfo *)0x0);
  PStack_4._arg0 = PStack_3._arg0;
  PStack_4._arg1 = PStack_3._arg1;
  PStack_4._arg2 = PStack_3._arg2;
  PStack_4._args = PStack_3._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_4,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


/* Void Traverse(Func`2[IWinningCondition,Boolean]) */

void MVWorldObject.dll::WinningConditionManager::WinningConditionManager_Traverse
               (WinningConditionManager *this,Func_2_IWinningCondition_Boolean_ *callBack,
               MethodInfo *method)

{
  pWVar1 = (this->fields).winnerConditionsRoot;
  if (pWVar1 != (WinningConditionOr *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pWVar1->klass->vtable).Traverse_1.methodPtr)
              (pWVar1,callBack,(pWVar1->klass->vtable).Traverse_1.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void add_OnWinningConditionAddedOrRemoved(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningConditionManager::
     WinningConditionManager_add_OnWinningConditionAddedOrRemoved
               (WinningConditionManager *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnWinningConditionAddedOrRemoved;
  a = (this->fields).OnWinningConditionAddedOrRemoved;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<System::EventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_EventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_EventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
      if (pEVar4 == (EventHandler_1_EventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* Void add_OnWinningConditionReset(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningConditionManager::WinningConditionManager_add_OnWinningConditionReset
               (WinningConditionManager *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnWinningConditionReset;
  a = (this->fields).OnWinningConditionReset;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<System::EventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_EventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_EventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
      if (pEVar4 == (EventHandler_1_EventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* Void remove_OnWinningConditionAddedOrRemoved(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningConditionManager::
     WinningConditionManager_remove_OnWinningConditionAddedOrRemoved
               (WinningConditionManager *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnWinningConditionAddedOrRemoved;
  source = (this->fields).OnWinningConditionAddedOrRemoved;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<System::EventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_EventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_EventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
      if (pEVar4 == (EventHandler_1_EventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}


/* Void remove_OnWinningConditionReset(EventHandler`1[EventArgs]) */

void MVWorldObject.dll::WinningConditionManager::
     WinningConditionManager_remove_OnWinningConditionReset
               (WinningConditionManager *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnWinningConditionReset;
  source = (this->fields).OnWinningConditionReset;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<System::EventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_EventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_EventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
      if (pEVar4 == (EventHandler_1_EventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
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
    (this->fields)._WinningConditionFound_k__BackingField = 1;
    return;
  }
  (this->fields)._WinningConditionFound_k__BackingField = 1;
  return;
}

