
/* Boolean <GetWinnerConditionsByType>b__0(IWinningCondition) */

bool MVWorldObject.dll::WinningConditionManager+<>c__DisplayClass29_0`1[System::Object]::
     WinningConditionManager_c_DisplayClass29_0_1_System_Object___GetWinnerConditionsByType_b__0
               (WinningConditionManager_c_DisplayClass29_0_1_System_Object_ *this,
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
    lhs = mscorlib.dll::System::Object::Object_GetType((Object *)winnerCondtion,(MethodInfo *)0x0);
    handle = *method->klass->rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    rhs = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                    ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    bVar1 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_EnumEquals((Int32Enum__Enum)lhs,(Int32Enum__Enum)rhs,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 0;
    }
    this_00 = (this->fields).winnerConditionsResult;
    if (this_00 == (List_1_System_Object_ *)0x0) goto code_?;
    pMVar2 = method->klass->rgctx_data[4].method;
    if (((uint)(method->klass->rgctx_data[3].klass)->vtable[0].methodPtr & 0x100) == 0) {
      func_?();
    }
    item = (Object *)func_?();
    if (item == (Object *)0x0) goto code_?;
    piVar3 = &(this_00->fields)._version;
    *piVar3 = *piVar3 + 1;
    pOVar4 = (this_00->fields)._items;
    if (pOVar4 == (Object__Array *)0x0) goto code_?;
    uVar5 = (this_00->fields)._size;
    if (pOVar4->max_length <= uVar5) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__AddWithResize(this_00,item,pMVar2->klass->rgctx_data[0xe].method);
code_?:
      pIStack6 = winnerCondtion;
      cVar7 = func_?();
      return cVar7 != '\0';
    }
    (this_00->fields)._size = uVar5 + 1;
    if (uVar5 < pOVar4->max_length) {
      pOVar4->vector[uVar5] = item;
      func_?();
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar1 = (*pcVar8)();
  return bVar1;
}

