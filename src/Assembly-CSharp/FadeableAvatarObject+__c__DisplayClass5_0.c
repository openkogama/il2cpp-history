
/* Void <OnDestroy>b__0(IFadeParent, BaseEventData) */

void Assembly-CSharp.dll::FadeableAvatarObject+<>c__DisplayClass5_0::
     FadeableAvatarObject_c_DisplayClass5_0__OnDestroy_b__0
               (FadeableAvatarObject_c_DisplayClass5_0 *this,IFadeParent *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).__4__this;
  if ((pFVar1 != (FadeableAvatarObject *)0x0) &&
     (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (pFVar1->fields).materials,
     this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
              (this_00,(this->fields).i,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_)
    ;
    if (x != (IFadeParent *)0x0) {
      func_?();
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

