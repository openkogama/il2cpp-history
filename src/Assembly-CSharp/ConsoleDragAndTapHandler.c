
/* Void OnBeginDrag(PointerEventData) */

void Assembly-CSharp.dll::ConsoleDragAndTapHandler::ConsoleDragAndTapHandler_OnBeginDrag
               (ConsoleDragAndTapHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).dragging = 1;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pSVar2 = (this->fields).scrollRect;
  (this->fields).dragStart = fVar1;
  if (pSVar2 != (ScrollRect *)0x0) {
    (*(code *)(pSVar2->klass->vtable).OnBeginDrag_1.method)
              (pSVar2,eventData,(pSVar2->klass->vtable).OnEndDrag_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnChatModeClick() */

void Assembly-CSharp.dll::ConsoleDragAndTapHandler::ConsoleDragAndTapHandler_OnChatModeClick
               (ConsoleDragAndTapHandler *this,MethodInfo *method)

{
  pUVar1 = (this->fields).OnClick;
  if (pUVar1 == (UnityAction *)0x0) {
    return;
  }
  this_00 = (AvatarMotor_OnActiveBounceDelegate *)(pUVar1->fields)._.prev;
  if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (this_00,(MethodInfo *)0x0);
  }
  pcVar2 = (pUVar1->fields)._._.method_ptr;
  this_01 = (pUVar1->fields)._._.method;
  pOVar3 = (pUVar1->fields)._._.m_target;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar4 = func_?(this_01);
  if (cVar4 == '\0') {
    if ((char)this_01->iflags == '\0') {
      (*pcVar2)();
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar3 == (Object *)0x0 || (((pOVar3->klass->_1).token & 0x100) == 0)) &&
           ((pUVar1->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar4 = func_?(pOVar3);
    if (cVar4 != '\0') {
      return;
    }
    method_00 = this_01;
    cVar4 = func_?();
    pOVar5 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00);
    cVar6 = func_?(pOVar5);
    if (cVar4 != '\0') {
      if (cVar6 != '\0') {
        func_?();
        return;
      }
      func_?(this_01,pOVar3);
      return;
    }
    if (cVar6 != '\0') {
      pOVar3 = mscorlib.dll::System::Collections::Generic::
               KeyValuePair`2[WinningConditionType,System::Object]::
               KeyValuePair_2_WinningConditionType_System_Object__get_Value
                         ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,
                          unaff_retaddr);
      func_?(this_01->flags,pOVar3);
      return;
    }
    func_?(this_01->flags,pOVar3);
    return;
  }
  (*pcVar2)(pOVar3,this_01);
  return;
}


/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::ConsoleDragAndTapHandler::ConsoleDragAndTapHandler_OnDrag
               (ConsoleDragAndTapHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  if ((this->fields).scrollingEnabled != 0) {
    pSVar1 = (this->fields).scrollRect;
    if (pSVar1 == (ScrollRect *)0x0) {
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)(pSVar1->klass->vtable).OnDrag_1.method)
              (pSVar1,eventData,(pSVar1->klass->vtable).SetContentAnchoredPosition.methodPtr);
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
     (this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).OnClick,
     this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0)) {
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (this_00,(MethodInfo *)0x0);
  }
  pSVar2 = (this->fields).scrollRect;
  if (pSVar2 != (ScrollRect *)0x0) {
    (*(code *)(pSVar2->klass->vtable).OnEndDrag_1.method)(pSVar2);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::ConsoleDragAndTapHandler::ConsoleDragAndTapHandler_OnPointerUp
               (ConsoleDragAndTapHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  if (((this->fields).dragging == 0) &&
     (this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).OnClick,
     this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0)) {
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (this_00,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetScrollingEnabled(Boolean) */

void Assembly-CSharp.dll::ConsoleDragAndTapHandler::ConsoleDragAndTapHandler_SetScrollingEnabled
               (ConsoleDragAndTapHandler *this,bool scrollEnabled,MethodInfo *method)

{
  (this->fields).scrollingEnabled = scrollEnabled;
  return;
}


/* ConsoleDragAndTapHandler() */

void Assembly-CSharp.dll::ConsoleDragAndTapHandler::ConsoleDragAndTapHandler__ctor
               (ConsoleDragAndTapHandler *this,MethodInfo *method)

{
  (this->fields).scrollingEnabled = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

