
/* Void <OnEndDrag>b__0(IEndDragHandler, BaseEventData) */

void Assembly-CSharp.dll::DragSuppress+<>c__DisplayClass3_0::
     DragSuppress_c_DisplayClass3_0__OnEndDrag_b__0
               (DragSuppress_c_DisplayClass3_0 *this,IEndDragHandler *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pPStack_1 = (PointerEventData *)&TypeInfo__UnityEngine__EventSystems__IEndDragHandler;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IEndDragHandler *)0x0) {
    pPStack_1 = (this->fields).eventData;
    pIStack_2 = handler;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IEndDragHandler;
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

