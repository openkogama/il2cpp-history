
/* Void Reset() */

void Assembly-CSharp.dll::TextFieldInputSuppress::TextFieldInputSuppress_Reset
               (TextFieldInputSuppress *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (InputField *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      UnityEngine__UI__InputField_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::InputField>__
                     );
  (this->fields).inputField = pIVar1;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TextFieldInputSuppress::TextFieldInputSuppress_Update
               (TextFieldInputSuppress *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).inputField;
  if (this_00 != (InputField *)0x0) {
    bVar1 = UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_get_isFocused
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

