
/* Void Initialize(FloatAttribute, Action`1[Single]) */

void Assembly-CSharp.dll::ThemeTimeSlider::ThemeTimeSlider_Initialize
               (ThemeTimeSlider *this,FloatAttribute *attrib,Action_1_Single_ *onChange,
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

void Assembly-CSharp.dll::ThemeTimeSlider::ThemeTimeSlider_OnSettingChanged
               (ThemeTimeSlider *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if ((this->fields).initialized == 0) {
code_?:
    pTVar1 = (this->fields).timeText;
    if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__TimeSpan);
    }
    if (value != (Object *)0x0) {
      pSVar2 = TypeInfo__System__Single;
      if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar3 = (float *)func_?(value);
      TStack_4 = mscorlib.dll::System::TimeSpan::TimeSpan_FromSeconds
                           ((double)(int)*pfVar3,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::TimeSpan::TimeSpan_ToString(&TStack_4,(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)
                  (pTVar1,pSVar5,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        return;
      }
    }
  }
  else {
    pAVar6 = (this->fields).onChange;
    TStack_4._ticks = CONCAT44(TStack_4._ticks._4_4_,(undefined4)TStack_4._ticks);
    if ((pAVar6 != (Action_1_Single_ *)0x0) &&
       (TStack_4._ticks = CONCAT44(TStack_4._ticks._4_4_,(undefined4)TStack_4._ticks),
       value != (Object *)0x0)) {
      pSVar2 = TypeInfo__System__Single;
      if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      puVar7 = (undefined4 *)func_?(value);
      (*(pAVar6->fields)._._.invoke_impl)
                ((pAVar6->fields)._._.method_code,*puVar7,(pAVar6->fields)._._.method);
      goto code_?;
    }
  }
  func_?();
  pSVar2 = extraout_ECX;
code_?:
  func_?(value,pSVar2);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

