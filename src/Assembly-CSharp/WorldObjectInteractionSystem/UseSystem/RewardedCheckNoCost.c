
/* Boolean EndInvoke(IAsyncResult) */

bool Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedCheckNoCost::
     RewardedCheckNoCost_EndInvoke
               (RewardedCheckNoCost *this,IAsyncResult *result,MethodInfo *method)

{
  lVar1 = FUN_?(result,auStack_2,&pIStackX_20);
  if (pIStackX_20 != (Il2CppChar *)0x0) {
    il2cpp_set_config_utf16(pIStackX_20);
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  if (lVar1 != 0) {
    return *(bool *)(lVar1 + 0x10);
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}

