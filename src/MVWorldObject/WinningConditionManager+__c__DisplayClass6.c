
/* Boolean <GetWinnerConditionByID>b__5(IWinningCondition) */

bool MVWorldObject.dll::WinningConditionManager+<>c__DisplayClass6::
     WinningConditionManager_c_DisplayClass6__GetWinnerConditionByID_b__5
               (WinningConditionManager_c_DisplayClass6 *this,
               IWinningCondition *returnWinnerCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IWinningCondition);
    func_?(&TypeInfo__WinningCondition);
    cRam_? = '\x01';
  }
  if (returnWinnerCondition == (IWinningCondition *)0x0) {
    func_?();
    pWVar1 = extraout_EDX;
  }
  else {
    uVar2 = 0;
    uVar3 = (returnWinnerCondition->klass->_1).interface_offsets_count;
    if (uVar3 != 0) {
      do {
        if (returnWinnerCondition->klass->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__IWinningCondition) {
          pVVar4 = &(returnWinnerCondition->klass->vtable).get_ID +
                   returnWinnerCondition->klass->interfaceOffsets[uVar2].offset;
          goto code_?;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    pVVar4 = (VirtualInvokeData *)
             func_?(returnWinnerCondition,TypeInfo__IWinningCondition,0);
code_?:
    iVar5 = (*pVVar4->methodPtr)(returnWinnerCondition,pVVar4->method);
    if (iVar5 != (this->fields).id) {
      return 0;
    }
    pWVar1 = TypeInfo__WinningCondition;
    if (((TypeInfo__WinningCondition->_1).typeHierarchyDepth <=
         (returnWinnerCondition->klass->_1).typeHierarchyDepth) &&
       ((returnWinnerCondition->klass->_1).typeHierarchy
        [(TypeInfo__WinningCondition->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__WinningCondition)) {
      (this->fields).winnerConditionBookkeeping = (WinningCondition *)returnWinnerCondition;
      pWVar1 = TypeInfo__WinningCondition;
      if (((TypeInfo__WinningCondition->_1).typeHierarchyDepth <=
           (returnWinnerCondition->klass->_1).typeHierarchyDepth) &&
         ((returnWinnerCondition->klass->_1).typeHierarchy
          [(TypeInfo__WinningCondition->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__WinningCondition)) {
        func_?(&this->fields,returnWinnerCondition);
        return 1;
      }
    }
  }
  func_?(returnWinnerCondition,pWVar1);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}

