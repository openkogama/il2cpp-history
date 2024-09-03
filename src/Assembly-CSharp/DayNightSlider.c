
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
    func_?(&TypeInfo__UnityEngine__UI__Selectable);
    func_?(&TypeInfo__UnityEngine__UI__Slider__SliderEvent);
    cRam_? = '\x01';
  }
  (this->fields)._.m_MaxValue = 1.0;
  this_00 = (UnityEvent_4_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__UnityEngine__UI__Slider__SliderEvent);
  if (cRam_? == '\0') {
    func_?(&MethodInfo__UnityEngine__Events__UnityEvent<float>__UnityEvent__);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`4[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::
  IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  UnityEvent_4_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,MethodInfo__UnityEngine__Events__UnityEvent<float>__UnityEvent__);
  (this->fields)._.m_OnValueChanged = (Slider_SliderEvent *)this_00;
  func_?(&(this->fields)._.m_OnValueChanged,this_00);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._.m_Offset.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._.m_Offset.y = fVar1;
  if ((TypeInfo__UnityEngine__UI__Selectable->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__UI__Selectable);
  }
  UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable__ctor
            ((Selectable *)this,(MethodInfo *)0x0);
  return;
}

