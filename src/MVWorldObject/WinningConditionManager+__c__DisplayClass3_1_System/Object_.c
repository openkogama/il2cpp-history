
/* Boolean <GetWinnerConditionsByType>b__2(IWinningCondition) */

bool MVWorldObject.dll::WinningConditionManager+<>c__DisplayClass3`1[System::Object]::
     WinningConditionManager_c_DisplayClass3_1_System_Object___GetWinnerConditionsByType_b__2
               (WinningConditionManager_c_DisplayClass3_1_System_Object_ *this,
               IWinningCondition *winnerCondtion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IWinningCondition);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (winnerCondtion != (IWinningCondition *)0x0) {
    pTVar1 = mscorlib.dll::System::Object::Object_GetType
                       ((Object *)winnerCondtion,(MethodInfo *)0x0);
    unaff_ESI.value = method->klass->rgctx_data->rgctxDataDummy;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(unaff_ESI,(MethodInfo *)0x0);
    if (pTVar1 != pTVar2) {
      return 0;
    }
    pLVar3 = (this->fields).winnerConditionsResult;
    if (pLVar3 != (List_1_System_Object_ *)0x0) {
      IVar4 = method->klass->rgctx_data[3];
      unaff_ESI.value = method->klass->rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((int)unaff_ESI.value + 0xba) & 1) == 0) {
        unaff_ESI.value = (void *)func_?(unaff_ESI.value);
      }
      iVar5 = func_?(winnerCondtion,unaff_ESI.value);
      if (iVar5 != 0) {
        (*(code *)IVar4)(pLVar3,iVar5);
        cVar6 = func_?(0xb,TypeInfo__IWinningCondition,winnerCondtion);
        return cVar6 != '\0';
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?(winnerCondtion,unaff_ESI.value);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}

