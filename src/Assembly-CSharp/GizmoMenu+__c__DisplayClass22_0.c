
/* Void <CloneRoot>b__1(ICloneHandler, BaseEventData) */

void Assembly-CSharp.dll::GizmoMenu+<>c__DisplayClass22_0::
     GizmoMenu_c_DisplayClass22_0__CloneRoot_b__1
               (GizmoMenu_c_DisplayClass22_0 *this,ICloneHandler *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__ICloneHandler);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).root;
  if (handler == (ICloneHandler *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = handler->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__ICloneHandler) {
        ppMVar6 = &(&handler->klass->vtable)[pIVar3->interfaceOffsets[uVar4].offset].Clone.method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)
            func_?(handler,TypeInfo__UnityEngine__EventSystems__ICloneHandler,0);
code_?:
  (*(code *)*ppMVar6)(handler,pMVar1,0,0,0,ppMVar6[1]);
  return;
}

