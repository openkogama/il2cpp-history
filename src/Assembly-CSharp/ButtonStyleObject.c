
/* Void Awake() */

void Assembly-CSharp.dll::ButtonStyleObject::ButtonStyleObject_Awake
               (ButtonStyleObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  button = (this->fields).button;
  buttonStyle = (this->fields).buttonStyle;
  colorStyle = (this->fields).colorStyle;
  soundStyle = (this->fields).soundStyle;
  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Styles);
  }
  Styles::Styles_SetStyle(button,buttonStyle,colorStyle,soundStyle,(MethodInfo *)0x0);
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::ButtonStyleObject::ButtonStyleObject_OnValidate
               (ButtonStyleObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isPlaying
                    ((MethodInfo *)0x0);
  if (bVar1 == 0) {
    button = (this->fields).button;
    buttonStyle = (this->fields).buttonStyle;
    colorStyle = (this->fields).colorStyle;
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    Styles::Styles_SetStyle
              (button,buttonStyle,colorStyle,SoundStyle__Enum_NoSound,(MethodInfo *)0x0);
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ButtonStyleObject::ButtonStyleObject_Reset
               (ButtonStyleObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                   );
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  pBVar1 = (Button *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                     );
  (this->fields).button = pBVar1;
  func_?(&(this->fields).button,pBVar1);
  pBVar1 = (this->fields).button;
  buttonStyle = (this->fields).buttonStyle;
  colorStyle = (this->fields).colorStyle;
  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Styles);
  }
  Styles::Styles_SetStyle(pBVar1,buttonStyle,colorStyle,SoundStyle__Enum_NoSound,(MethodInfo *)0x0);
  return;
}


/* ButtonStyleObject() */

void Assembly-CSharp.dll::ButtonStyleObject::ButtonStyleObject__ctor
               (ButtonStyleObject *this,MethodInfo *method)

{
  (this->fields).buttonStyle = 1;
  (this->fields).colorStyle = 0x11;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

