
/* Void SetValue(Single, Boolean) */

void Assembly-CSharp.dll::DayNightSlider::DayNightSlider_SetValue
               (DayNightSlider *this,float val,bool sendEvent,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).Set.method)
            (this,val,_sendEvent,(this->klass->vtable).OnDrag_1.methodPtr);
  return;
}


/* DayNightSlider() */

void Assembly-CSharp.dll::DayNightSlider::DayNightSlider__ctor
               (DayNightSlider *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._.m_Direction = 0;
  (this->fields)._.m_MinValue = 0.0;
  (this->fields)._.m_MaxValue = 1.0;
  (this->fields)._.m_WholeNumbers = 0;
  this_00 = (UnityEvent_1_UnityEngine_Vector2_ *)
            func_?(TypeInfo__UnityEngine__UI__Slider__SliderEvent);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[UnityEngine::Vector2]::
  UnityEvent_1_UnityEngine_Vector2___ctor
            (this_00,MethodInfo__UnityEngine__Events__UnityEvent<float>__UnityEvent__);
  (this->fields)._.m_OnValueChanged = (Slider_SliderEvent *)this_00;
  if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector2);
  }
  VVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_zero((MethodInfo *)0x0);
  (this->fields)._.m_Offset = VVar1;
  if ((((uint)(TypeInfo__UnityEngine__UI__Selectable->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__UI__Selectable->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__UI__Selectable);
  }
  UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable__ctor
            ((Selectable *)this,(MethodInfo *)0x0);
  return;
}

