
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
  if (winnerCondtion == (IWinningCondition *)0x0) {
code_?:
    func_?();
  }
  else {
    pTVar1 = mscorlib.dll::System::Object::Object_GetType
                       ((Object *)winnerCondtion,(MethodInfo *)0x0);
    handle = *method->klass->rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if (pTVar1 != pTVar2) {
      return 0;
    }
    this_00 = (this->fields).winnerConditionsResult;
    unaff_EBX = method;
    if (this_00 == (List_1_System_Object_ *)0x0) goto code_?;
    unaff_EBX = method->klass->rgctx_data[3].method;
    if ((unaff_EBX[3].slot & 0x100) == 0) {
      unaff_EBX = (MethodInfo *)func_?(unaff_EBX);
    }
    pMVar3 = unaff_EBX;
    item = (Object *)func_?(winnerCondtion);
    if (item == (Object *)0x0) goto code_?;
    piVar4 = &(this_00->fields)._version;
    *piVar4 = *piVar4 + 1;
    pOVar5 = (this_00->fields)._items;
    if (pOVar5 == (Object__Array *)0x0) goto code_?;
    uVar6 = (this_00->fields)._size;
    if (pOVar5->max_length <= uVar6) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__AddWithResize(this_00,item,pMVar3->klass->rgctx_data[0xe].method);
code_?:
      cVar7 = func_?(6);
      return cVar7 != '\0';
    }
    (this_00->fields)._size = uVar6 + 1;
    if (uVar6 < pOVar5->max_length) {
      pOVar5->vector[uVar6] = item;
      func_?(pOVar5->vector + uVar6,item);
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?(winnerCondtion,unaff_EBX);
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}

