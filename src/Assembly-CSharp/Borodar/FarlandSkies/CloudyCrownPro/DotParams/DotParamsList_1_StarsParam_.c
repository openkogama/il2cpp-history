
/* Int32 FindIndexPerTime(Single) */

int32_t Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
        DotParamsList`1[StarsParam]::DotParamsList_1_StarsParam__FindIndexPerTime
                  (DotParamsList_1_StarsParam_ *this,float time,MethodInfo *method)

{
  if (this != (DotParamsList_1_StarsParam_ *)0x0) {
    puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
    uVar2 = (*(code *)*puVar1)(this,puVar1);
    puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0xc);
    iVar3 = (*(code *)*puVar1)(uVar2,time,puVar1);
    return iVar3;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}

