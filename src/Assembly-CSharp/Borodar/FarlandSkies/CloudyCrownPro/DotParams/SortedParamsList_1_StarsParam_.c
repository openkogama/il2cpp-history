
/* Void Init() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
     SortedParamsList`1[StarsParam]::SortedParamsList_1_StarsParam__Init
               (SortedParamsList_1_StarsParam_ *this,MethodInfo *method)

{
  pSVar1 = (this->fields).Params;
  if (pSVar1 != (StarsParam__Array *)0x0) {
    iVar2 = *(int *)(*(int *)(method->name + 0x60) + 4);
    if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
      func_?(iVar2);
    }
    pDVar3 = (DotParamsList_1_StarsParam_ *)func_?(iVar2);
    puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
    (*(code *)*puVar4)(pDVar3,pSVar1->max_length,puVar4);
    pSVar1 = (this->fields).Params;
    (this->fields).SortedParams = pDVar3;
    uVar5 = 0;
    if (pSVar1 != (StarsParam__Array *)0x0) {
      ppSVar6 = pSVar1->vector;
      while( true ) {
        if ((int)pSVar1->max_length <= (int)uVar5) {
          return;
        }
        if (pSVar1->max_length <= uVar5) break;
        pSVar7 = *ppSVar6;
        if ((pSVar7 == (StarsParam *)0x0) ||
           (pDVar3 = (this->fields).SortedParams, pDVar3 == (DotParamsList_1_StarsParam_ *)0x0))
        goto code_?;
        puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x10);
        (*(code *)*puVar4)(pDVar3,(pSVar7->fields)._.Time_1,pSVar7,puVar4);
        uVar5 = uVar5 + 1;
        ppSVar6 = ppSVar6 + 1;
      }
      uVar8 = func_?(0,0);
      func_?(uVar8);
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* SortedParamsList`1[StarsParam]() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
     SortedParamsList`1[StarsParam]::SortedParamsList_1_StarsParam___ctor
               (SortedParamsList_1_StarsParam_ *this,MethodInfo *method)

{
  iVar1 = **(int **)(method->name + 0x60);
  if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
    func_?(iVar1);
  }
  pSVar2 = (StarsParam__Array *)func_?(iVar1,0);
  (this->fields).Params = pSVar2;
  return;
}

