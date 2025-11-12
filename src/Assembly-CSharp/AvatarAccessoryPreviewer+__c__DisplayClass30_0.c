
/* Void <OnPointerClick>b__0(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer+<>c__DisplayClass30_0::
     AvatarAccessoryPreviewer_c_DisplayClass30_0__OnPointerClick_b__0
               (AvatarAccessoryPreviewer_c_DisplayClass30_0 *this,IAccessoryClicked *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IAccessoryClicked);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IAccessoryClicked *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pAVar2 = (this->fields).accessoryData;
  pIVar3 = x->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAccessoryClicked) {
        pVVar6 = &(pIVar3->vtable).OpenAccessoryManagementScreen +
                 pIVar3->interfaceOffsets[uVar4].offset;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IAccessoryClicked,0,pAVar2,unaff_RDI
                        );
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar6->methodPtr)(x,pAVar2,pVVar6->method,pVVar6->methodPtr);
  return;
}

