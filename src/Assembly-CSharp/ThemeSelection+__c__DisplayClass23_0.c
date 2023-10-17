
/* Void <ShowThemeRemovalWarning>b__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ThemeSelection+<>c__DisplayClass23_0::
     ThemeSelection_c_DisplayClass23_0__ShowThemeRemovalWarning_b__0
               (ThemeSelection_c_DisplayClass23_0 *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&
                    MethodInfo__ThemeSelection__OnThemeRemovalWarningResolved_bool__ConfirmationPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    func_?(&StringLiteral_Theme_removal);
    cRam_? = '\x01';
  }
  object = (this->fields).__4__this;
  this_00 = (UnityAction_2_System_Boolean_System_Object_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  if (this_00 != (UnityAction_2_System_Boolean_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Object]::
    UnityAction_2_System_Boolean_System_Object___ctor
              (this_00,(Object *)object,
               MethodInfo__ThemeSelection__OnThemeRemovalWarningResolved_bool__ConfirmationPopup_,
               (MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Theme_removal,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      uVar2 = 0;
      uVar3 = (x->klass->_1).interface_offsets_count;
      if (uVar3 != 0) {
        do {
          if (x->klass->interfaceOffsets[uVar2].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
            pVVar4 = &(x->klass->vtable).Create_2 + x->klass->interfaceOffsets[uVar2].offset;
            goto code_?;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar3);
      }
      pVVar4 = (VirtualInvokeData *)
               func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,3);
code_?:
      (*pVVar4->methodPtr)(x,pSVar1,pSVar1,pSVar1,pVVar4->method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

