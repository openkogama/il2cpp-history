
/* Void <ShowingClaimGold>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIController+<>c__DisplayClass30_0::
     DeathUIController_c_DisplayClass30_0__ShowingClaimGold_b__0
               (DeathUIController_c_DisplayClass30_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__DeathUIController__ShowDeadmodeUI__);
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  ptr = (this->fields).claimGoldRewardPopup;
  if (ptr != (GameObject *)0x0) {
    p_Var2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
             UnsafeUtility_AsRef_1((Void *)ptr,(MethodInfo *)0x0);
    object = (this->fields).__4__this;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)object,MethodInfo__DeathUIController__ShowDeadmodeUI__,
               (MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,p_Var2,4,this_00,4);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

