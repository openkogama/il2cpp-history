
/* Void <OnBeginDrag>b__0(IBeginDragHandler) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::NestedScrollRect+<>c__DisplayClass4_0::
     NestedScrollRect_c_DisplayClass4_0__OnBeginDrag_b__0
               (NestedScrollRect_c_DisplayClass4_0 *this,IBeginDragHandler *parent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IBeginDragHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (parent == (IBeginDragHandler *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pPVar2 = (this->fields).eventData;
  pIVar3 = parent->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  pPVar6 = pPVar2;
  if (uVar5 != 0) {
    pPVar6 = (PointerEventData *)pIVar3->interfaceOffsets;
    do {
      if ((&pPVar6->klass)[(ulonglong)uVar4 * 2] ==
          (PointerEventData__Class *)TypeInfo__UnityEngine__EventSystems__IBeginDragHandler) {
        pIVar7 = &pIVar3->vtable + *(int *)(&pPVar6->monitor + (ulonglong)uVar4 * 2);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pIVar7 = (IBeginDragHandler__VTable *)
           FUN_?(parent,TypeInfo__UnityEngine__EventSystems__IBeginDragHandler,0,pPVar6,
                         unaff_RDI);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar7->OnBeginDrag).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(parent,pPVar2,(pIVar7->OnBeginDrag).method,UNRECOVERED_JUMPTABLE);
  return;
}

