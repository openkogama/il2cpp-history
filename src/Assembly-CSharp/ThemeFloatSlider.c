
/* Void Initialize(FloatAttribute, Action`1[Single]) */

void Assembly-CSharp.dll::ThemeFloatSlider::ThemeFloatSlider_Initialize
               (ThemeFloatSlider *this,FloatAttribute *attrib,Action_1_Single_ *onChange,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__ThemeAttributes__NamedThemeAttribute<float>__get_Name__);
    func_?(&MethodInfo__ThemeAttributes__ThemeAttribute<float>__get_Value__);
    cRam_? = '\x01';
  }
  (this->fields).onChange = onChange;
  func_?(&(this->fields).onChange,onChange);
  if ((attrib != (FloatAttribute *)0x0) && (pTVar1 = (this->fields).label, pTVar1 != (Text *)0x0)) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,(attrib->fields)._.name,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    this_00 = (this->fields).slider;
    if (this_00 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_Initialize
                (this_00,(attrib->fields)._._._._Key_k__BackingField,(attrib->fields)._._.value,
                 (attrib->fields).min,(attrib->fields).max,(MethodInfo *)0x0);
      (this->fields).initialized = 1;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::ThemeFloatSlider::ThemeFloatSlider_OnSettingChanged
               (ThemeFloatSlider *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if ((this->fields).initialized != 0) {
    pAVar1 = (this->fields).onChange;
    if ((pAVar1 == (Action_1_Single_ *)0x0) || (value == (Object *)0x0)) {
      func_?();
      value = extraout_ECX;
      pSVar2 = extraout_EDX;
    }
    else {
      pSVar2 = TypeInfo__System__Single;
      if ((value->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        puVar3 = (undefined4 *)func_?(value);
        (*(pAVar1->fields)._._.invoke_impl)
                  ((pAVar1->fields)._._.method_code,*puVar3,(pAVar1->fields)._._.method);
        return;
      }
    }
    func_?(value,pSVar2);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

