
/* Void <DoGizmoAction>b__1(IGizmoHandler, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg+<>c__DisplayClass44_0
     ::GizmoMenuNg_c_DisplayClass44_0__DoGizmoAction_b__1
               (GizmoMenuNg_c_DisplayClass44_0 *this,IGizmoHandler *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler == (IGizmoHandler *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = (this->fields).gizmoAction;
  uVar3 = 0;
  pIVar4 = handler->klass;
  uVar5._0_1_ = (pIVar4->_1).rank;
  uVar5._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar3].interfaceType == (Il2CppClass *)TypeInfo__IGizmoHandler) {
        pVVar6 = &(pIVar4->vtable).Handle + pIVar4->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)FUN_?(handler);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar6->methodPtr)(handler,(ulonglong)uVar2,pVVar6->method,pVVar6->methodPtr);
  return;
}

