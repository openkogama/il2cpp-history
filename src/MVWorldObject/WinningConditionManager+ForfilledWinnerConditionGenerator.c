
/* Boolean HandleWinningConditionForReport(IWinningCondition) */

bool MVWorldObject.dll::WinningConditionManager+ForfilledWinnerConditionGenerator::
     WinningConditionManager_ForfilledWinnerConditionGenerator_HandleWinningConditionForReport
               (WinningConditionManager_ForfilledWinnerConditionGenerator *this,
               IWinningCondition *winnerCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (winnerCondition != (IWinningCondition *)0x0) {
    cVar1 = func_?(3,TypeInfo__IWinningCondition,winnerCondition);
    if (cVar1 != '\0') {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pIVar2 = winnerCondition->klass;
      bVar3 = (TypeInfo__WinningConditionGroup->_1).naturalAligment;
      if (((pIVar2->_1).naturalAligment < bVar3) ||
         ((pIVar2->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__WinningConditionGroup))
      {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pIVar5 = (IWinningCondition *)0x0;
      if (bVar4) {
        pIVar5 = winnerCondition;
      }
      if (pIVar5 == (IWinningCondition *)0x0) {
        uVar6._0_1_ = (pIVar2->_1).rank;
        uVar6._1_1_ = (pIVar2->_1).minimumAlignment;
        if (uVar6 != 0) {
          uVar7 = 0;
          do {
            if (pIVar2->interfaceOffsets[uVar7].interfaceType ==
                (Il2CppClass *)TypeInfo__IWinningCondition) {
              ppMVar8 = &(&(winnerCondition->klass->vtable).get_Parent)
                          [pIVar2->interfaceOffsets[uVar7].offset].method;
              goto code_?;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar6);
        }
        ppMVar8 = (MethodInfo **)func_?(winnerCondition,TypeInfo__IWinningCondition,0);
code_?:
        (*(code *)*ppMVar8)(winnerCondition,ppMVar8[1]);
        this_00 = (this->fields).gameWonWinnerConditions;
        if (this_00 == (List_1_IWinningCondition_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)winnerCondition,
                   MethodInfo__System__Collections__Generic__List<IWinningCondition>__Add_IWinningCondition_
                  );
      }
    }
    return 0;
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Boolean Report(IWinningCondition) */

bool MVWorldObject.dll::WinningConditionManager+ForfilledWinnerConditionGenerator::
     WinningConditionManager_ForfilledWinnerConditionGenerator_Report
               (WinningConditionManager_ForfilledWinnerConditionGenerator *this,
               IWinningCondition *winnerCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (winnerCondition != (IWinningCondition *)0x0) {
    pIVar1 = winnerCondition->klass;
    bVar2 = (TypeInfo__WinningConditionGroup->_1).naturalAligment;
    if (((pIVar1->_1).naturalAligment < bVar2) ||
       ((pIVar1->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__WinningConditionGroup)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pIVar4 = (IWinningCondition *)0x0;
    if (bVar3) {
      pIVar4 = winnerCondition;
    }
    if (pIVar4 != (IWinningCondition *)0x0) {
      return 0;
    }
    uVar5._0_1_ = (pIVar1->_1).rank;
    uVar5._1_1_ = (pIVar1->_1).minimumAlignment;
    uVar6 = 0;
    if (uVar5 != 0) {
      do {
        if (pIVar1->interfaceOffsets[uVar6].interfaceType ==
            (Il2CppClass *)TypeInfo__IWinningCondition) {
          ppMVar7 = &(&(winnerCondition->klass->vtable).get_Parent)
                     [pIVar1->interfaceOffsets[uVar6].offset].method;
          goto code_?;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
    }
    ppMVar7 = (MethodInfo **)func_?(winnerCondition,TypeInfo__IWinningCondition,0);
code_?:
    piVar8 = (int *)(*(code *)*ppMVar7)(winnerCondition,ppMVar7[1]);
    if (piVar8 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      bVar2 = (TypeInfo__WinningConditionOr->_1).naturalAligment;
      if ((*(byte *)(*piVar8 + 0xb8) < bVar2) ||
         (*(WinningConditionOr__Class **)(*(int *)(*piVar8 + 100) + -4 + (uint)bVar2 * 4) !=
          TypeInfo__WinningConditionOr)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      piVar9 = (int *)0x0;
      if (bVar3) {
        piVar9 = piVar8;
      }
    }
    this_00 = (this->fields).gameWonWinnerConditions;
    if (this_00 != (List_1_IWinningCondition_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)winnerCondition,
                 MethodInfo__System__Collections__Generic__List<IWinningCondition>__Add_IWinningCondition_
                );
      return piVar9 != (int *)0x0;
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* WinningConditionManager+ForfilledWinnerConditionGenerator(WinningConditionManager) */

void MVWorldObject.dll::WinningConditionManager+ForfilledWinnerConditionGenerator::
     WinningConditionManager_ForfilledWinnerConditionGenerator__ctor
               (WinningConditionManager_ForfilledWinnerConditionGenerator *this,
               WinningConditionManager *winnerConditionManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__List<IWinningCondition>;
  this_00 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<IWinningCondition>__List__);
  (this->fields).gameWonWinnerConditions = (List_1_IWinningCondition_ *)this_00;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Func<IWinningCondition,_bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__WinningConditionManager__ForfilledWinnerConditionGenerator__HandleWinningConditionForReport_IWinningCondition_
             ,MethodInfo__System__Func<IWinningCondition,_bool>__Func_System__Object__void__);
  if ((winnerConditionManager != (WinningConditionManager *)0x0) &&
     (pWVar1 = (winnerConditionManager->fields).winnerConditionsRoot,
     pWVar1 != (WinningConditionOr *)0x0)) {
    pWVar2 = pWVar1->klass;
    pIStack3 = (pWVar2->vtable).Reset_1.methodPtr;
    (*(code *)(pWVar2->vtable).Traverse_1.method)();
    return;
  }
  pIStack3 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

