
/* Void <OpenAccessoryManagementScreen>b__0(IAccessoryPopupHandler, BaseEventData) */

void Assembly-CSharp.dll::AccessoryPreviewPopup+<>c__DisplayClass6_0::
     AccessoryPreviewPopup_c_DisplayClass6_0__OpenAccessoryManagementScreen_b__0
               (AccessoryPreviewPopup_c_DisplayClass6_0 *this,IAccessoryPopupHandler *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryData;
  if (x == (IAccessoryPopupHandler *)0x0) {
    FUN_?();
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
        pIVar6 = &pIVar3->vtable + pIVar3->interfaceOffsets[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pIVar6 = (IAccessoryPopupHandler__VTable *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IAccessoryPopupHandler,0);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pIVar6->OpenInventoryAtItem).methodPtr)(x,1,pAVar1,(pIVar6->OpenInventoryAtItem).method);
  return;
}

