
/* Boolean HandleWinningConditionForReport(IWinningCondition) */

bool MVWorldObject.dll::WinningConditionManager+ForfilledWinnerConditionGenerator::
     WinningConditionManager_ForfilledWinnerConditionGenerator_HandleWinningConditionForReport
               (WinningConditionManager_ForfilledWinnerConditionGenerator *this,
               IWinningCondition *winnerCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IWinningCondition);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (winnerCondition == (IWinningCondition *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  cVar3 = FUN_?(3,TypeInfo__IWinningCondition,winnerCondition);
  if (cVar3 != '\0') {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__IWinningCondition);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<IWinningCondition>__Add_IWinningCondition_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__WinningConditionGroup);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__WinningConditionOr);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar4 = (TypeInfo__WinningConditionGroup->_1).naturalAligment;
    if (((winnerCondition->klass->_1).naturalAligment < bVar4) ||
       ((winnerCondition->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
        (Il2CppClass *)TypeInfo__WinningConditionGroup)) {
      FUN_?(0,TypeInfo__IWinningCondition,winnerCondition);
      pMVar5 = 
      MethodInfo__System__Collections__Generic__List<IWinningCondition>__Add_IWinningCondition_;
      this_00 = (List_1_System_Object_ *)(this->fields).gameWonWinnerConditions;
      if (this_00 != (List_1_System_Object_ *)0x0) {
        piVar6 = &(this_00->fields)._version;
        *piVar6 = *piVar6 + 1;
        pOVar7 = (this_00->fields)._items;
        if (pOVar7 != (Object__Array *)0x0) {
          uVar8 = (this_00->fields)._size;
          if (uVar8 < (uint)pOVar7->max_length) {
            (this_00->fields)._size = uVar8 + 1;
            FUN_?(pOVar7,(longlong)(int)uVar8,winnerCondition);
            return 0;
          }
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    (this_00,(Object *)winnerCondition,pMVar5->klass->rgctx_data[0xe].method);
          return 0;
        }
      }
      goto code_?;
    }
  }
  return 0;
}


/* Boolean Report(IWinningCondition) */

bool MVWorldObject.dll::WinningConditionManager+ForfilledWinnerConditionGenerator::
     WinningConditionManager_ForfilledWinnerConditionGenerator_Report
               (WinningConditionManager_ForfilledWinnerConditionGenerator *this,
               IWinningCondition *winnerCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IWinningCondition);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<IWinningCondition>__Add_IWinningCondition_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WinningConditionGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WinningConditionOr);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (winnerCondition != (IWinningCondition *)0x0) {
    bVar1 = (TypeInfo__WinningConditionGroup->_1).naturalAligment;
    if ((bVar1 <= (winnerCondition->klass->_1).naturalAligment) &&
       ((winnerCondition->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo__WinningConditionGroup)) {
      return 0;
    }
    plVar2 = (longlong *)FUN_?(0,TypeInfo__IWinningCondition,winnerCondition);
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<IWinningCondition>__Add_IWinningCondition_;
    this_00 = (List_1_System_Object_ *)(this->fields).gameWonWinnerConditions;
    if (this_00 != (List_1_System_Object_ *)0x0) {
      piVar4 = &(this_00->fields)._version;
      *piVar4 = *piVar4 + 1;
      pOVar5 = (this_00->fields)._items;
      if (pOVar5 != (Object__Array *)0x0) {
        uVar6 = (this_00->fields)._size;
        if (uVar6 < (uint)pOVar5->max_length) {
          (this_00->fields)._size = uVar6 + 1;
          FUN_?(pOVar5,(longlong)(int)uVar6,winnerCondition);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    (this_00,(Object *)winnerCondition,pMVar3->klass->rgctx_data[0xe].method);
        }
        plVar7 = (longlong *)0x0;
        if (plVar2 != (longlong *)0x0) {
          bVar1 = (TypeInfo__WinningConditionOr->_1).naturalAligment;
          if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
             (bVar8 = true,
             *(WinningConditionOr__Class **)
              (*(longlong *)(*plVar2 + 200) + -8 + (ulonglong)bVar1 * 8) !=
             TypeInfo__WinningConditionOr)) {
            bVar8 = false;
          }
          if (bVar8) {
            plVar7 = plVar2;
          }
        }
        return plVar7 != (longlong *)0x0;
      }
    }
  }
  FUN_?();
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
  this_00 = (List_1_IWinningCondition_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<IWinningCondition>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<IWinningCondition>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).gameWonWinnerConditions = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
            (this_01,(Object *)this,
             MethodInfo__WinningConditionManager__ForfilledWinnerConditionGenerator__HandleWinningConditionForReport_IWinningCondition_
             ,(MethodInfo *)0x0);
  if ((winnerConditionManager != (WinningConditionManager *)0x0) &&
     (pWVar6 = (winnerConditionManager->fields).winnerConditionsRoot,
     pWVar6 != (WinningConditionOr *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pWVar6->klass->vtable).Traverse_1.methodPtr)
              (pWVar6,this_01,(pWVar6->klass->vtable).Traverse_1.method);
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

