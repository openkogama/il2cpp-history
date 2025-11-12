
/* Void <ShowingClaimGold>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIController+<>c__DisplayClass29_0::
     DeathUIController_c_DisplayClass29_0__ShowingClaimGold_b__0
               (DeathUIController_c_DisplayClass29_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__DeathUIController__ShowDeadmodeUI__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).claimGoldRewardPopup != (GameObject *)0x0) {
    object = (this->fields).__4__this;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)object,MethodInfo__DeathUIController__ShowDeadmodeUI__,
               (MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

