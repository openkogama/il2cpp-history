
/* Void Awake() */

void Assembly-CSharp.dll::EffectStyleObject::EffectStyleObject_Awake
               (EffectStyleObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  effectStyle = (this->fields).effectStyle;
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  Styles::Styles_SetStyle_5(this,effectStyle,(MethodInfo *)0x0);
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::EffectStyleObject::EffectStyleObject_OnValidate
               (EffectStyleObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isPlaying
                    ((MethodInfo *)0x0);
  if (bVar1 == 0) {
    effectStyle = (this->fields).effectStyle;
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    Styles::Styles_SetStyle_5(this,effectStyle,(MethodInfo *)0x0);
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::EffectStyleObject::EffectStyleObject_Reset
               (EffectStyleObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (Graphic *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      UnityEngine__UI__Graphic_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Graphic>__
                     );
  (this->fields).graphic = pGVar1;
  pSVar2 = (ShadowEffect_1 *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      ShadowEffect_MethodInfo__UnityEngine__Component__GetComponent<ShadowEffect>__)
  ;
  (this->fields).shadow = pSVar2;
  pOVar3 = (Outline *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      UnityEngine__UI__Outline_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Outline>__
                     );
  (this->fields).outline = pOVar3;
  pGVar4 = (GradientEffect *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      Gamestrap__GradientEffect_MethodInfo__UnityEngine__Component__GetComponent<Gamestrap::GradientEffect>__
                     );
  effectStyle = (this->fields).effectStyle;
  (this->fields).gradient = pGVar4;
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?();
  }
  Styles::Styles_SetStyle_5(this,effectStyle,(MethodInfo *)0x0);
  return;
}

