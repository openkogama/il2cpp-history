
/* Void Awake() */

void Assembly-CSharp.dll::ColorStyleObject::ColorStyleObject_Awake
               (ColorStyleObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  graphic = (this->fields).graphic;
  colorStyle = (this->fields).imageStyle;
  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Styles);
  }
  Styles::Styles_SetStyle_2(graphic,colorStyle,(MethodInfo *)0x0);
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::ColorStyleObject::ColorStyleObject_OnValidate
               (ColorStyleObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Application);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isPlaying
                    ((MethodInfo *)0x0);
  if (bVar1 == 0) {
    graphic = (this->fields).graphic;
    colorStyle = (this->fields).imageStyle;
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    Styles::Styles_SetStyle_2(graphic,colorStyle,(MethodInfo *)0x0);
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ColorStyleObject::ColorStyleObject_Reset
               (ColorStyleObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__Graphic_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Graphic>__
                   );
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  pGVar1 = (Graphic *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__Graphic_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Graphic>__
                     );
  (this->fields).graphic = pGVar1;
  func_?(&(this->fields).graphic,pGVar1);
  pGVar1 = (this->fields).graphic;
  colorStyle = (this->fields).imageStyle;
  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Styles);
  }
  Styles::Styles_SetStyle_2(pGVar1,colorStyle,(MethodInfo *)0x0);
  return;
}


/* Void UpdateColorStyle(ColorStyle) */

void Assembly-CSharp.dll::ColorStyleObject::ColorStyleObject_UpdateColorStyle
               (ColorStyleObject *this,ColorStyle__Enum colorStyle,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  graphic = (this->fields).graphic;
  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Styles);
  }
  Styles::Styles_SetStyle_2(graphic,colorStyle,(MethodInfo *)0x0);
  return;
}


/* ColorStyleObject() */

void Assembly-CSharp.dll::ColorStyleObject::ColorStyleObject__ctor
               (ColorStyleObject *this,MethodInfo *method)

{
  (this->fields).imageStyle = 0xd;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

