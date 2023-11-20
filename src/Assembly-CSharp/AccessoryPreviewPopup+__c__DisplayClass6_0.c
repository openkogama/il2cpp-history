
/* Void <OpenAccessoryManagementScreen>b__0(IAccessoryPopupHandler, BaseEventData) */

void Assembly-CSharp.dll::AccessoryPreviewPopup+<>c__DisplayClass6_0::
     AccessoryPreviewPopup_c_DisplayClass6_0__OpenAccessoryManagementScreen_b__0
               (AccessoryPreviewPopup_c_DisplayClass6_0 *this,IAccessoryPopupHandler *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IAccessoryPopupHandler);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryData;
  if (x == (IAccessoryPopupHandler *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = x->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAccessoryPopupHandler) {
        ppMVar6 = &(&x->klass->vtable)[x->klass->interfaceOffsets[uVar4].offset].OpenInventoryAtItem
                   .method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IAccessoryPopupHandler,0);
code_?:
  (*(code *)*ppMVar6)(x,1,pAVar1,ppMVar6[1]);
  return;
}

