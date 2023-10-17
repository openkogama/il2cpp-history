
/* Void Initialize(Theme) */

void Assembly-CSharp.dll::ThemeComponent::ThemeComponent_Initialize
               (ThemeComponent *this,Theme *theme,MethodInfo *method)

{
  if (theme != (Theme *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<ThemeComponent>__Add_ThemeComponent_
                     );
      cRam_? = '\x01';
    }
    this_00 = (theme->fields).components;
    if (this_00 != (List_1_ThemeComponent_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,(Object *)this,
                 MethodInfo__System__Collections__Generic__List<ThemeComponent>__Add_ThemeComponent_
                );
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

