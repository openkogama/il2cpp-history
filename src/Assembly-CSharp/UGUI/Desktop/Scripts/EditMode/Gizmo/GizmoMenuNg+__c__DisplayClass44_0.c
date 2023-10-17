
/* Void <DoGizmoAction>b__1(IGizmoHandler, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg+<>c__DisplayClass44_0
     ::GizmoMenuNg_c_DisplayClass44_0__DoGizmoAction_b__1
               (GizmoMenuNg_c_DisplayClass44_0 *this,IGizmoHandler *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__IGizmoHandler;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IGizmoHandler *)0x0) {
    ppIStack_1 = (IGizmoHandler__Class **)(this->fields).gizmoAction;
    pIStack_2 = handler;
    pIStack_3 = TypeInfo__IGizmoHandler;
    func_?(0);
    return;
  }
  ppIStack_1 = (IGizmoHandler__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

