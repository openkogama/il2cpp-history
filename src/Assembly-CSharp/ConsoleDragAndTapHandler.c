
/* Void OnBeginDrag(PointerEventData) */

void Assembly-CSharp.dll::ConsoleDragAndTapHandler::ConsoleDragAndTapHandler_OnBeginDrag
               (ConsoleDragAndTapHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).dragging = 1;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pSVar2 = (this->fields).scrollRect;
  (this->fields).dragStart = fVar1;
  if (pSVar2 != (ScrollRect *)0x0) {
    (*(pSVar2->klass->vtable).OnBeginDrag_1.methodPtr)
              (pSVar2,eventData,(pSVar2->klass->vtable).OnBeginDrag_1.method);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::ConsoleDragAndTapHandler::ConsoleDragAndTapHandler_OnDrag
               (ConsoleDragAndTapHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  if ((this->fields).scrollingEnabled != 0) {
    pSStack_2 = (this->fields).scrollRect;
    if (pSStack_2 == (ScrollRect *)0x0) {
      uVar3 = func_?(&pSStack_2);
      func_?(uVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pMStack_1 = (pSStack_2->klass->vtable).OnDrag_1.method;
    pPStack_5 = eventData;
    (*(pSStack_2->klass->vtable).OnDrag_1.methodPtr)();
  }
  return;
}


/* Void OnEndDrag(PointerEventData) */

void Assembly-CSharp.dll::ConsoleDragAndTapHandler::ConsoleDragAndTapHandler_OnEndDrag
               (ConsoleDragAndTapHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).dragging = 0;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((fVar1 - (this->fields).dragStart < _UNK_?) &&
     ((this->fields).OnClick != (UnityAction *)0x0)) {
    pUVar2 = (this->fields).OnClick;
    (*(pUVar2->fields)._._.invoke_impl)
              ((pUVar2->fields)._._.method_code,(pUVar2->fields)._._.method);
  }
  pSVar3 = (this->fields).scrollRect;
  if (pSVar3 != (ScrollRect *)0x0) {
    (*(pSVar3->klass->vtable).OnEndDrag_1.methodPtr)
              (pSVar3,eventData,(pSVar3->klass->vtable).OnEndDrag_1.method);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::ConsoleDragAndTapHandler::ConsoleDragAndTapHandler_OnPointerUp
               (ConsoleDragAndTapHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  if (((this->fields).dragging == 0) && ((this->fields).OnClick != (UnityAction *)0x0)) {
    pUVar1 = (this->fields).OnClick;
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
  }
  return;
}


/* ConsoleDragAndTapHandler() */

void Assembly-CSharp.dll::ConsoleDragAndTapHandler::ConsoleDragAndTapHandler__ctor
               (ConsoleDragAndTapHandler *this,MethodInfo *method)

{
  (this->fields).scrollingEnabled = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

