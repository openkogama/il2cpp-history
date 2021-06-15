
/* Void <>m__0(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer+<OnPointerClick>c__AnonStorey1::
     AvatarAccessoryPreviewer_OnPointerClick_c_AnonStorey1___m__0
               (AvatarAccessoryPreviewer_OnPointerClick_c_AnonStorey1 *this,IAccessoryClicked *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryData;
  if (x != (IAccessoryClicked *)0x0) {
    pIVar2 = x->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAccessoryClicked) {
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          (*(code *)(&(x->klass->vtable).OpenAccessoryManagementScreen)[iVar5].method)
                    (x,pAVar1,(&(x->klass->vtable).OpenCategoryScreen)[iVar5].methodPtr);
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar6 = (undefined4 *)
             func_?(x,TypeInfo__UnityEngine__EventSystems__IAccessoryClicked,0);
    (*(code *)*puVar6)(x,pAVar1,puVar6[1]);
    return;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

