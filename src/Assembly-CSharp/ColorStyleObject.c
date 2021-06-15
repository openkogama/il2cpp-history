
/* Void Awake() */

void Assembly-CSharp.dll::ColorStyleObject::ColorStyleObject_Awake
               (ColorStyleObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  graphic = (this->fields).graphic;
  colorStyle = (this->fields).imageStyle;
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isPlaying
                    ((MethodInfo *)0x0);
  if (bVar1 == 0) {
    graphic = (this->fields).graphic;
    colorStyle = (this->fields).imageStyle;
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  graphic = (Graphic *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                      ((Component_1 *)this,
                       UnityEngine__UI__Graphic_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Graphic>__
                      );
  (this->fields).graphic = graphic;
  colorStyle = (this->fields).imageStyle;
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

