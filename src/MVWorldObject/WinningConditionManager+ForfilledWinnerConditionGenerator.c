
/* Boolean HandleWinningConditionForReport(IWinningCondition) */

bool MVWorldObject.dll::WinningConditionManager+ForfilledWinnerConditionGenerator::
     WinningConditionManager_ForfilledWinnerConditionGenerator_HandleWinningConditionForReport
               (WinningConditionManager_ForfilledWinnerConditionGenerator *this,
               IWinningCondition *winnerCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IWinningCondition);
    cRam_? = '\x01';
  }
  if (winnerCondition != (IWinningCondition *)0x0) {
    cVar1 = func_?(5,TypeInfo__IWinningCondition,winnerCondition);
    if (cVar1 == '\0') {
      return 0;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__IWinningCondition);
      func_?(&
                      MethodInfo__System__Collections__Generic__List<IWinningCondition>__Add_IWinningCondition_
                     );
      func_?(&TypeInfo__WinningConditionGroup);
      func_?(&TypeInfo__WinningConditionOr);
      cRam_? = '\x01';
    }
    if (((TypeInfo__WinningConditionGroup->_1).typeHierarchyDepth <=
         (winnerCondition->klass->_1).typeHierarchyDepth) &&
       ((winnerCondition->klass->_1).typeHierarchy
        [(TypeInfo__WinningConditionGroup->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__WinningConditionGroup)) {
      return 0;
    }
    func_?(1,TypeInfo__IWinningCondition,winnerCondition);
    pMVar2 = 
    MethodInfo__System__Collections__Generic__List<IWinningCondition>__Add_IWinningCondition_;
    pLVar3 = (this->fields).gameWonWinnerConditions;
    if (pLVar3 != (List_1_IWinningCondition_ *)0x0) {
      pIVar4 = (pLVar3->fields)._items;
      piVar5 = &(pLVar3->fields)._version;
      *piVar5 = *piVar5 + 1;
      if (pIVar4 != (IWinningCondition__Array *)0x0) {
        uVar6 = (pLVar3->fields)._size;
        if (pIVar4->max_length <= uVar6) {
          (*(pMVar2->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                    (pLVar3,winnerCondition,pMVar2->klass->rgctx_data[0xb].rgctxDataDummy);
          return 0;
        }
        (pLVar3->fields)._size = uVar6 + 1;
        if (uVar6 < pIVar4->max_length) {
          pIVar4->vector[uVar6] = winnerCondition;
          func_?(pIVar4->vector + uVar6,winnerCondition);
          return 0;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Boolean Report(IWinningCondition) */

bool MVWorldObject.dll::WinningConditionManager+ForfilledWinnerConditionGenerator::
     WinningConditionManager_ForfilledWinnerConditionGenerator_Report
               (WinningConditionManager_ForfilledWinnerConditionGenerator *this,
               IWinningCondition *winnerCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IWinningCondition);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<IWinningCondition>__Add_IWinningCondition_
                   );
    func_?(&TypeInfo__WinningConditionGroup);
    func_?(&TypeInfo__WinningConditionOr);
    cRam_? = '\x01';
  }
  if (winnerCondition != (IWinningCondition *)0x0) {
    if (((TypeInfo__WinningConditionGroup->_1).typeHierarchyDepth <=
         (winnerCondition->klass->_1).typeHierarchyDepth) &&
       ((winnerCondition->klass->_1).typeHierarchy
        [(TypeInfo__WinningConditionGroup->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__WinningConditionGroup)) {
      return 0;
    }
    piVar1 = (int *)func_?(1,TypeInfo__IWinningCondition,winnerCondition);
    pMVar2 = 
    MethodInfo__System__Collections__Generic__List<IWinningCondition>__Add_IWinningCondition_;
    piVar3 = piVar1;
    if (piVar1 != (int *)0x0) {
      if ((*(byte *)(*piVar1 + 0xb4) < (TypeInfo__WinningConditionOr->_1).typeHierarchyDepth) ||
         (*(WinningConditionOr__Class **)
           (*(int *)(*piVar1 + 100) + -4 +
           (uint)(TypeInfo__WinningConditionOr->_1).typeHierarchyDepth * 4) !=
          TypeInfo__WinningConditionOr)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      piVar3 = (int *)0x0;
      if (bVar4) {
        piVar3 = piVar1;
      }
    }
    pLVar5 = (this->fields).gameWonWinnerConditions;
    if (pLVar5 != (List_1_IWinningCondition_ *)0x0) {
      piVar6 = &(pLVar5->fields)._version;
      *piVar6 = *piVar6 + 1;
      pIVar7 = (pLVar5->fields)._items;
      if (pIVar7 != (IWinningCondition__Array *)0x0) {
        uVar8 = (pLVar5->fields)._size;
        if (pIVar7->max_length <= uVar8) {
          (*(pMVar2->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                    (pLVar5,winnerCondition,pMVar2->klass->rgctx_data[0xb].rgctxDataDummy);
          return piVar3 != (int *)0x0;
        }
        (pLVar5->fields)._size = uVar8 + 1;
        if (uVar8 < pIVar7->max_length) {
          pIVar7->vector[uVar8] = winnerCondition;
          func_?(pIVar7->vector + uVar8,winnerCondition);
          return piVar3 != (int *)0x0;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* WinningConditionManager+ForfilledWinnerConditionGenerator(WinningConditionManager) */

void MVWorldObject.dll::WinningConditionManager+ForfilledWinnerConditionGenerator::
     WinningConditionManager_ForfilledWinnerConditionGenerator__ctor
               (WinningConditionManager_ForfilledWinnerConditionGenerator *this,
               WinningConditionManager *winnerConditionManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__WinningConditionManager__ForfilledWinnerConditionGenerator__HandleWinningConditionForReport_IWinningCondition_
                   );
    func_?(&TypeInfo__System__Func<IWinningCondition,_bool>);
    func_?(&MethodInfo__System__Collections__Generic__List<IWinningCondition>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<IWinningCondition>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_IWinningCondition_ *)
            func_?(TypeInfo__System__Collections__Generic__List<IWinningCondition>);
  if (this_00 != (List_1_IWinningCondition_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<IWinningCondition>__List__);
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).gameWonWinnerConditions = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    this_01 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<IWinningCondition,_bool>);
    if (this_01 != (Func_2_Object_Boolean_ *)0x0) {
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                (this_01,(Object *)this,
                 MethodInfo__WinningConditionManager__ForfilledWinnerConditionGenerator__HandleWinningConditionForReport_IWinningCondition_
                 ,(MethodInfo *)0x0);
      if ((winnerConditionManager != (WinningConditionManager *)0x0) &&
         (pWVar1 = (winnerConditionManager->fields).winnerConditionsRoot,
         pWVar1 != (WinningConditionOr *)0x0)) {
        (*(pWVar1->klass->vtable).Traverse_1.methodPtr)
                  (pWVar1,this_01,(pWVar1->klass->vtable).Traverse_1.method);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

