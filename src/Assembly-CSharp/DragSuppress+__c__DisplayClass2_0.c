
/* Void <OnBeginDrag>b__0(IBeginDragHandler, BaseEventData) */

void Assembly-CSharp.dll::DragSuppress+<>c__DisplayClass2_0::
     DragSuppress_c_DisplayClass2_0__OnBeginDrag_b__0
               (DragSuppress_c_DisplayClass2_0 *this,IBeginDragHandler *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pPStack_1 = (PointerEventData *)&TypeInfo__UnityEngine__EventSystems__IBeginDragHandler;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IBeginDragHandler *)0x0) {
    pPStack_1 = (this->fields).eventData;
    pIStack_2 = handler;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IBeginDragHandler;
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

