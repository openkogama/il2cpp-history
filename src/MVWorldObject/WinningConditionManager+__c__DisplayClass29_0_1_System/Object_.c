
/* Boolean <GetWinnerConditionsByType>b__0(IWinningCondition) */

bool MVWorldObject.dll::WinningConditionManager+<>c__DisplayClass29_0`1[System::Object]::
     WinningConditionManager_c_DisplayClass29_0_1_System_Object___GetWinnerConditionsByType_b__0
               (WinningConditionManager_c_DisplayClass29_0_1_System_Object_ *this,
               IWinningCondition *winnerCondtion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IWinningCondition);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (winnerCondtion != (IWinningCondition *)0x0) {
    lVar1 = FUN_?(&(winnerCondtion->klass->_0).byval_arg);
    pvVar2 = method->klass->rgctx_data->rgctxDataDummy;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pvVar2 == (void *)0x0) {
      lVar3 = 0;
    }
    else {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar3 = FUN_?(pvVar2,1);
      lVar3 = FUN_?(lVar3 + 0x20);
    }
    if (lVar1 != lVar3) {
      return 0;
    }
    this_00 = (this->fields).winnerConditionsResult;
    if (this_00 != (List_1_System_Object_ *)0x0) {
      pIVar4 = method->klass->rgctx_data;
      pvVar2 = pIVar4[3].rgctxDataDummy;
      pMVar5 = pIVar4[4].method;
      if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
        pvVar2 = (void *)FUN_?(pvVar2);
      }
      item = (Object *)FUN_?(winnerCondtion,pvVar2);
      if (item == (Object *)0x0) {
        FUN_?(winnerCondtion,pvVar2);
        pcVar6 = (code *)swi(3);
        bVar7 = (*pcVar6)();
        return bVar7;
      }
      piVar8 = &(this_00->fields)._version;
      *piVar8 = *piVar8 + 1;
      pOVar9 = (this_00->fields)._items;
      if (pOVar9 != (Object__Array *)0x0) {
        uVar10 = (this_00->fields)._size;
        if (uVar10 < (uint)pOVar9->max_length) {
          (this_00->fields)._size = uVar10 + 1;
          FUN_?(pOVar9,(longlong)(int)uVar10,item);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize(this_00,item,pMVar5->klass->rgctx_data[0xe].method);
        }
        cVar11 = FUN_?(6,TypeInfo__IWinningCondition,winnerCondtion);
        return cVar11 != '\0';
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}

