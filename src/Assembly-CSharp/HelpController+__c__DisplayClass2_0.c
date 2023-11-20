
/* Void <OnClick>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::HelpController+<>c__DisplayClass2_0::
     HelpController_c_DisplayClass2_0__OnClick_b__0
               (HelpController_c_DisplayClass2_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__HelpController__OnClosed__);
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  ptr = (this->fields).popup;
  if (ptr != (GameObject *)0x0) {
    p_Var2 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
             UnsafeUtility_AsRef_1((Void *)ptr,(MethodInfo *)0x0);
    object = (this->fields).__4__this;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)object,MethodInfo__HelpController__OnClosed__,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,p_Var2,1,this_00,0x20);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

