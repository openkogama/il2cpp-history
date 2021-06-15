
/* Void Update() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
     SortedParamsList`1[System::Object]::SortedParamsList_1_System_Object__Update
               (SortedParamsList_1_System_Object_ *this,MethodInfo *method)

{
  pSVar1 = this;
  pDVar2 = (this->fields).SortedParams;
  if (pDVar2 == (DotParamsList_1_System_Object_ *)0x0) {
    pOVar3 = (this->fields).Params;
    if (pOVar3 == (Object__Array *)0x0) goto code_?;
    iVar4 = *(int *)(*(int *)(method->name + 0x60) + 4);
    if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
      func_?(iVar4);
    }
    pDVar2 = (DotParamsList_1_System_Object_ *)func_?(iVar4);
    puVar5 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
    (*(code *)*puVar5)(pDVar2,pOVar3->max_length,puVar5);
    (this->fields).SortedParams = pDVar2;
  }
  else {
    puVar5 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x14);
    (*(code *)*puVar5)(pDVar2,puVar5);
  }
  this = (SortedParamsList_1_System_Object_ *)&method->name;
  pOVar3 = (pSVar1->fields).Params;
  uVar6 = 0;
  if (pOVar3 != (Object__Array *)0x0) {
    ppOVar7 = pOVar3->vector;
    while( true ) {
      if ((int)pOVar3->max_length <= (int)uVar6) {
        return;
      }
      if (pOVar3->max_length <= uVar6) break;
      pOVar8 = *ppOVar7;
      if ((pOVar8 == (Object *)0x0) ||
         (pDVar2 = (pSVar1->fields).SortedParams, pDVar2 == (DotParamsList_1_System_Object_ *)0x0))
      goto code_?;
      pMVar9 = this->klass->rgctx_data[4].method;
      (*pMVar9->methodPointer)(pDVar2,pOVar8[1].klass,pOVar8,pMVar9);
      uVar6 = uVar6 + 1;
      ppOVar7 = ppOVar7 + 1;
    }
    uVar10 = func_?(0,0);
    func_?(uVar10);
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

