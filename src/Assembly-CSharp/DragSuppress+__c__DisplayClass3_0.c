
/* Void <OnEndDrag>b__0(IEndDragHandler, BaseEventData) */

void Assembly-CSharp.dll::DragSuppress+<>c__DisplayClass3_0::
     DragSuppress_c_DisplayClass3_0__OnEndDrag_b__0
               (DragSuppress_c_DisplayClass3_0 *this,IEndDragHandler *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IEndDragHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IEndDragHandler *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pPVar2 = (this->fields).eventData;
  pIVar3 = handler->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  pPVar6 = pPVar2;
  if (uVar5 != 0) {
    pPVar6 = (PointerEventData *)pIVar3->interfaceOffsets;
    do {
      if ((&pPVar6->klass)[(ulonglong)uVar4 * 2] ==
          (PointerEventData__Class *)TypeInfo__UnityEngine__EventSystems__IEndDragHandler) {
        pIVar7 = &pIVar3->vtable + *(int *)(&pPVar6->monitor + (ulonglong)uVar4 * 2);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pIVar7 = (IEndDragHandler__VTable *)
           FUN_?(handler,TypeInfo__UnityEngine__EventSystems__IEndDragHandler,0,pPVar6,
                         unaff_RDI);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar7->OnEndDrag).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(handler,pPVar2,(pIVar7->OnEndDrag).method,UNRECOVERED_JUMPTABLE);
  return;
}

