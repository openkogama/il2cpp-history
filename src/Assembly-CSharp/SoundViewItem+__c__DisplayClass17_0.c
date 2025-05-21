
/* Void <ChangeUrl>b__0(IHandleSettingChanged, BaseEventData) */

void Assembly-CSharp.dll::SoundViewItem+<>c__DisplayClass17_0::
     SoundViewItem_c_DisplayClass17_0__ChangeUrl_b__0
               (SoundViewItem_c_DisplayClass17_0 *this,IHandleSettingChanged *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged);
    func_?(&StringLiteral_url);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_url;
  pSVar2 = (this->fields).url;
  if (handler == (IHandleSettingChanged *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = 0;
  pIVar5 = handler->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar5->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged) {
        ppMVar7 = &(&handler->klass->vtable)[handler->klass->interfaceOffsets[uVar4].offset].
                   OnSettingChanged.method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  ppMVar7 = (MethodInfo **)
            func_?(handler,TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged,0);
code_?:
  (*(code *)*ppMVar7)(handler,pSVar1,pSVar2,ppMVar7[1]);
  return;
}

