
/* Boolean <GetWinnerConditionsByType>b__2(IWinningCondition) */

bool MVWorldObject.dll::WinningConditionManager+<>c__DisplayClass3`1[System::Object]::
     WinningConditionManager_c_DisplayClass3_1_System_Object___GetWinnerConditionsByType_b__2
               (WinningConditionManager_c_DisplayClass3_1_System_Object_ *this,
               IWinningCondition *winnerCondtion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (winnerCondtion != (IWinningCondition *)0x0) {
    pTVar1 = mscorlib.dll::System::Object::Object_GetType
                       ((Object *)winnerCondtion,(MethodInfo *)0x0);
    unaff_ESI.value = (void *)**(undefined4 **)(method->name + 0x60);
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(unaff_ESI,(MethodInfo *)0x0);
    if (pTVar1 != pTVar2) {
      return 0;
    }
    pLVar3 = (this->fields).winnerConditionsResult;
    if (pLVar3 != (List_1_System_Object_ *)0x0) {
      unaff_ESI.value = *(void **)(*(int *)(method->name + 0x60) + 4);
      if ((*(byte *)((int)unaff_ESI.value + 0xbe) & 1) == 0) {
        func_?(unaff_ESI.value);
      }
      iVar4 = func_?(winnerCondtion,unaff_ESI.value);
      if (iVar4 != 0) {
        puVar5 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
        (*(code *)*puVar5)(pLVar3,iVar4,puVar5);
        cVar6 = func_?(6,TypeInfo__IWinningCondition,winnerCondtion);
        if (cVar6 == '\0') {
          return 0;
        }
        return 1;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?(winnerCondtion,unaff_ESI.value);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}

