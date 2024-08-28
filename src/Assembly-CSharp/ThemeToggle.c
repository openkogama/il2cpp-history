
/* Void Initialize(BoolAttribute, Action`1[Boolean]) */

void Assembly-CSharp.dll::ThemeToggle::ThemeToggle_Initialize
               (ThemeToggle *this,BoolAttribute *attrib,Action_1_Boolean_ *onChange,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__ThemeAttributes__NamedThemeAttribute<bool>__get_Name__);
    func_?(&MethodInfo__ThemeAttributes__ThemeAttribute<bool>__get_Value__);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).onChange;
  *ppAVar1 = onChange;
  func_?(ppAVar1,onChange);
  if ((attrib != (BoolAttribute *)0x0) && (pTVar2 = (this->fields).label, pTVar2 != (Text *)0x0)) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,(attrib->fields)._.name,
               (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    this_00 = (this->fields).toggle;
    if (this_00 != (SettingsToggle *)0x0) {
      SettingsToggle::SettingsToggle_Initialize
                (this_00,(attrib->fields)._._._._Key_k__BackingField,(attrib->fields)._._.value,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::ThemeToggle::ThemeToggle_OnSettingChanged
               (ThemeToggle *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).onChange;
  if (pAVar1 != (Action_1_Boolean_ *)0x0) {
    if (value != (Object *)0x0) {
      pBVar2 = TypeInfo__System__Boolean;
      if ((value->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        puVar3 = (undefined1 *)func_?(value);
        (*(pAVar1->fields)._._.invoke_impl)
                  ((pAVar1->fields)._._.method_code,*puVar3,(pAVar1->fields)._._.method);
        return;
      }
      goto code_?;
    }
  }
  func_?();
  value = extraout_ECX;
  pBVar2 = extraout_EDX;
code_?:
  func_?(value,pBVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

