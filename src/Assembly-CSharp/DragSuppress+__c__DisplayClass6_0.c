
/* Void <OnPointerUp>b__0(IPointerUpHandler, BaseEventData) */

void Assembly-CSharp.dll::DragSuppress+<>c__DisplayClass6_0::
     DragSuppress_c_DisplayClass6_0__OnPointerUp_b__0
               (DragSuppress_c_DisplayClass6_0 *this,IPointerUpHandler *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pPStack_1 = (PointerEventData *)&TypeInfo__UnityEngine__EventSystems__IPointerUpHandler;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IPointerUpHandler *)0x0) {
    pPStack_1 = (this->fields).eventData;
    pIStack_2 = handler;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IPointerUpHandler;
    func_?(0);
    return;
  }
  pPStack_1 = (PointerEventData *)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

