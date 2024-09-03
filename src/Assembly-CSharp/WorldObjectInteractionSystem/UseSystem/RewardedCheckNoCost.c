
/* Boolean EndInvoke(IAsyncResult) */

bool Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedCheckNoCost::
     RewardedCheckNoCost_EndInvoke
               (RewardedCheckNoCost *this,IAsyncResult *result,MethodInfo *method)

{
  puStack_1 = (undefined1 *)0x0;
  pIStack_2 = result;
  puStack_1 = (undefined1 *)func_?();
  if (puStack_1 != (undefined1 *)0x0) {
    pbVar3 = (bool *)func_?();
    return *pbVar3;
  }
  puStack_1 = &stack0xfffffffc;
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}

