
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
    cVar1 = func_?(3,TypeInfo__IWinningCondition,winnerCondition);
    if (cVar1 != '\0') {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__IWinningCondition);
        func_?(&
                        MethodInfo__System__Collections__Generic__List<IWinningCondition>__Add_IWinningCondition_
                       );
        func_?(&TypeInfo__WinningConditionGroup);
        func_?(&TypeInfo__WinningConditionOr);
        cRam_? = '\x01';
      }
      bVar2 = (TypeInfo__WinningConditionGroup->_1).naturalAligment;
      if (((winnerCondition->klass->_1).naturalAligment < bVar2) ||
         ((winnerCondition->klass->_1).typeHierarchy[bVar2 - 1] !=
          (Il2CppClass *)TypeInfo__WinningConditionGroup)) {
        func_?(0,TypeInfo__IWinningCondition,winnerCondition);
        this_00 = (List_1_System_Object_ *)(this->fields).gameWonWinnerConditions;
        if (this_00 == (List_1_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  (this_00,(Object *)winnerCondition,
                   MethodInfo__System__Collections__Generic__List<IWinningCondition>__Add_IWinningCondition_
                  );
      }
    }
    return 0;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
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
    bVar1 = (TypeInfo__WinningConditionGroup->_1).naturalAligment;
    if ((bVar1 <= (winnerCondition->klass->_1).naturalAligment) &&
       ((winnerCondition->klass->_1).typeHierarchy[bVar1 - 1] ==
        (Il2CppClass *)TypeInfo__WinningConditionGroup)) {
      return 0;
    }
    piVar2 = (int *)func_?(0,TypeInfo__IWinningCondition,winnerCondition);
    this_00 = (List_1_System_Object_ *)(this->fields).gameWonWinnerConditions;
    if (this_00 != (List_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                (this_00,(Object *)winnerCondition,
                 MethodInfo__System__Collections__Generic__List<IWinningCondition>__Add_IWinningCondition_
                );
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      bVar1 = (TypeInfo__WinningConditionOr->_1).naturalAligment;
      if ((bVar1 <= *(byte *)(*piVar2 + 0xb8)) &&
         (*(WinningConditionOr__Class **)(*(int *)(*piVar2 + 100) + -4 + (uint)bVar1 * 4) ==
          TypeInfo__WinningConditionOr)) {
        return piVar2 != (int *)0x0;
      }
      return 0;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<IWinningCondition>__List__);
  method_00 = (MethodInfo *)&this->fields;
  ((WinningConditionManager_ForfilledWinnerConditionGenerator__Fields *)method_00)->
  gameWonWinnerConditions = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  this_01 = (Func_2_Object_Boolean_ *)
            func_?(TypeInfo__System__Func<IWinningCondition,_bool>);
  mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
            (this_01,(Object *)this,
             MethodInfo__WinningConditionManager__ForfilledWinnerConditionGenerator__HandleWinningConditionForReport_IWinningCondition_
             ,(MethodInfo *)0x0);
  if ((winnerConditionManager != (WinningConditionManager *)0x0) &&
     (pWVar1 = (winnerConditionManager->fields).winnerConditionsRoot,
     pWVar1 != (WinningConditionOr *)0x0)) {
    pWVar2 = pWVar1->klass;
    pIStack3 = (pWVar2->vtable).Reset_1.methodPtr;
    (*(code *)(pWVar2->vtable).Traverse_1.method)();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

