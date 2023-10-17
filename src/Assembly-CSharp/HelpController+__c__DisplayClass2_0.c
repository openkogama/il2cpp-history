
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
  source = (this->fields).popup;
  if (source != (GameObject *)0x0) {
    ppOVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                        ((Void *)source,(MethodInfo *)0x0);
    object = (this->fields).__4__this;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)object,MethodInfo__HelpController__OnClosed__,(MethodInfo *)0x0);
      if (x != (IUIStack *)0x0) {
        func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,ppOVar1,1,this_00,0x20);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

