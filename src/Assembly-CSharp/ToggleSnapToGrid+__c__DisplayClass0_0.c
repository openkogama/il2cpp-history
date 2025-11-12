
/* Void <ExecuteToggleState>b__0(IGridSnapHandler, BaseEventData) */

void Assembly-CSharp.dll::ToggleSnapToGrid+<>c__DisplayClass0_0::
     ToggleSnapToGrid_c_DisplayClass0_0__ExecuteToggleState_b__0
               (ToggleSnapToGrid_c_DisplayClass0_0 *this,IGridSnapHandler *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IGridSnapHandler *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = (this->fields).toggleState;
  pIVar3 = (Il2CppRuntimeInterfaceOffsetPair *)(ulonglong)bVar2;
  uVar4 = 0;
  pIVar5 = handler->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    pIVar3 = pIVar5->interfaceOffsets;
    do {
      if (pIVar3[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IGridSnapHandler) {
        pIVar7 = &pIVar5->vtable + pIVar3[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  pIVar7 = (IGridSnapHandler__VTable *)
           FUN_?(handler,TypeInfo__UnityEngine__EventSystems__IGridSnapHandler,0,pIVar3,
                         unaff_RDI);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar7->Set).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(handler,(ulonglong)bVar2,(pIVar7->Set).method,UNRECOVERED_JUMPTABLE);
  return;
}

