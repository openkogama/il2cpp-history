
/* Void Initialize(FloatAttribute, Action`1[Single]) */

void Assembly-CSharp.dll::ThemeTimeSlider::ThemeTimeSlider_Initialize
               (ThemeTimeSlider *this,FloatAttribute *attrib,Action_1_Single_ *onChange,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__ThemeAttributes__NamedThemeAttribute<float>__get_Name__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ThemeAttributes__ThemeAttribute<float>__get_Value__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).onChange = onChange;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).onChange >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if ((attrib != (FloatAttribute *)0x0) && (pTVar6 = (this->fields).label, pTVar6 != (Text *)0x0)) {
    (*(pTVar6->klass->vtable).set_text.methodPtr)
              (pTVar6,(attrib->fields)._.name,(pTVar6->klass->vtable).set_text.method);
    this_00 = (this->fields).slider;
    if (this_00 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_Initialize
                (this_00,(attrib->fields)._._._._Key_k__BackingField,(attrib->fields)._._.value,
                 (attrib->fields).min,(attrib->fields).max,(MethodInfo *)0x0);
      (this->fields).initialized = 1;
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::ThemeTimeSlider::ThemeTimeSlider_OnSettingChanged
               (ThemeTimeSlider *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).initialized != 0) {
    pAVar1 = (this->fields).onChange;
    if ((pAVar1 == (Action_1_Single_ *)0x0) || (value == (Object *)0x0)) goto code_?;
    if ((value->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(value,lRam_?);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,*(undefined4 *)&value[1].klass,
               (pAVar1->fields)._._.method);
  }
  pTVar3 = (this->fields).timeText;
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (value != (Object *)0x0) {
    if ((value->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(value,lRam_?);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar4 = *(float *)&value[1].klass;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__TimeSpan);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?();
    }
    value_00 = mscorlib.dll::System::TimeSpan::TimeSpan_Interval
                         ((double)(int)fVar4,1000,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Globalization__TimeSpanFormat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Globalization__TimeSpanFormat->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar5 = mscorlib.dll::System::Globalization::TimeSpanFormat::TimeSpanFormat_Format
                       (value_00,(String *)0x0,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    if (pTVar3 != (Text *)0x0) {
      UNRECOVERED_JUMPTABLE = (pTVar3->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (pTVar3,pSVar5,(pTVar3->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

