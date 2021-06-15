
/* Void Awake() */

void Assembly-CSharp.dll::TextStyleBase::TextStyleBase_Awake(TextStyleBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  text = (this->fields).text;
  textStyle = (this->fields).textStyle;
  colorStyle = (this->fields).colorStyle;
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  Styles::Styles_SetStyle_1(text,textStyle,colorStyle,(MethodInfo *)0x0);
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::TextStyleBase::TextStyleBase_OnValidate
               (TextStyleBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isPlaying
                    ((MethodInfo *)0x0);
  if (bVar1 == 0) {
    pTVar2 = (this->fields).text;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pTVar2 = (this->fields).text;
      textStyle = (this->fields).textStyle;
      colorStyle = (this->fields).colorStyle;
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      Styles::Styles_SetStyle_1(pTVar2,textStyle,colorStyle,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::TextStyleBase::TextStyleBase_Reset(TextStyleBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  text = (Text *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                           ((Component_1 *)this,
                            UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                           );
  textStyle = (this->fields).textStyle;
  (this->fields).text = text;
  colorStyle = (this->fields).colorStyle;
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  Styles::Styles_SetStyle_1(text,textStyle,colorStyle,(MethodInfo *)0x0);
  return;
}

