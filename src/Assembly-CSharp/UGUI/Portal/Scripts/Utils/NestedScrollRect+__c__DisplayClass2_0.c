
/* Void <OnInitializePotentialDrag>b__0(IInitializePotentialDragHandler) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::NestedScrollRect+<>c__DisplayClass2_0::
     NestedScrollRect_c_DisplayClass2_0__OnInitializePotentialDrag_b__0
               (NestedScrollRect_c_DisplayClass2_0 *this,IInitializePotentialDragHandler *parent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IInitializePotentialDragHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (parent == (IInitializePotentialDragHandler *)0x0) {
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
          (PointerEventData__Class *)
          TypeInfo__UnityEngine__EventSystems__IInitializePotentialDragHandler) {
        pIVar7 = &pIVar3->vtable + *(int *)(&pPVar6->monitor + (ulonglong)uVar4 * 2);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pIVar7 = (IInitializePotentialDragHandler__VTable *)
           FUN_?(parent,TypeInfo__UnityEngine__EventSystems__IInitializePotentialDragHandler
                         ,0,pPVar6,unaff_RDI);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar7->OnInitializePotentialDrag).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (parent,pPVar2,(pIVar7->OnInitializePotentialDrag).method,UNRECOVERED_JUMPTABLE);
  return;
}

