
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
  uVar3 = 0;
  uVar4 = (x->klass->_1).interface_offsets_count;
  if (uVar4 != 0) {
    do {
      if (x->klass->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAccessoryPopupHandler) {
        pIVar5 = &x->klass->vtable + x->klass->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pIVar5 = (IAccessoryPopupHandler__VTable *)
           func_?(x,TypeInfo__UnityEngine__EventSystems__IAccessoryPopupHandler,0);
code_?:
  (*(pIVar5->OpenInventoryAtItem).methodPtr)(x,1,pAVar1,(pIVar5->OpenInventoryAtItem).method);
  return;
}

