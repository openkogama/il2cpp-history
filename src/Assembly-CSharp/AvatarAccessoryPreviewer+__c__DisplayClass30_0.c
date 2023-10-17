
/* Void <OnPointerClick>b__0(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer+<>c__DisplayClass30_0::
     AvatarAccessoryPreviewer_c_DisplayClass30_0__OnPointerClick_b__0
               (AvatarAccessoryPreviewer_c_DisplayClass30_0 *this,IAccessoryClicked *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IAccessoryClicked);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryData;
  if (x != (IAccessoryClicked *)0x0) {
    uVar2 = 0;
    uVar3 = (x->klass->_1).interface_offsets_count;
    if (uVar3 != 0) {
      do {
        if (x->klass->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAccessoryClicked) {
          pVVar4 = &(x->klass->vtable).OpenAccessoryManagementScreen +
                   x->klass->interfaceOffsets[uVar2].offset;
          (*pVVar4->methodPtr)(x,pAVar1,pVVar4->method);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar5 = (undefined4 *)
             func_?(x,TypeInfo__UnityEngine__EventSystems__IAccessoryClicked,0);
    (*(code *)*puVar5)(x,pAVar1,puVar5[1]);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

