
/* Void Awake() */

void Assembly-CSharp.dll::WebGLSupport::WebGLInputMobile::WebGLInputMobile_Awake
               (WebGLInputMobile *this,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,0,(MethodInfo *)0x0);
  return;
}


/* IEnumerator ExecFocusOut(Int32) */

IEnumerator *
Assembly-CSharp.dll::WebGLSupport::WebGLInputMobile::WebGLInputMobile_ExecFocusOut
          (int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WebGLSupport__WebGLInputMobile___ExecFocusOut_d__7);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__WebGLSupport__WebGLInputMobile___ExecFocusOut_d__7);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)id;
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void OnFocusOut(Int32) */

void Assembly-CSharp.dll::WebGLSupport::WebGLInputMobile::WebGLInputMobile_OnFocusOut
               (int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInputMobile>__get_Item_int_
                   );
    func_?(&TypeInfo__WebGLSupport__WebGLInputMobile);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLInputMobile->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WebGLSupport__WebGLInputMobile);
  }
  this = TypeInfo__WebGLSupport__WebGLInputMobile->static_fields->instances;
  if (this != (Dictionary_2_System_Int32_WebGLSupport_WebGLInputMobile_ *)0x0) {
    this_00 = (MonoBehaviour *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this,id,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInputMobile>__get_Item_int_
                        );
    if (cRam_? == '\0') {
      func_?(&TypeInfo__WebGLSupport__WebGLInputMobile___ExecFocusOut_d__7);
      cRam_? = '\x01';
    }
    method_00 = (MethodInfo *)&UNK_?;
    value = (Object *)func_?(TypeInfo__WebGLSupport__WebGLInputMobile___ExecFocusOut_d__7);
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,method_00);
      value[1].klass = (Object__Class *)0x0;
      value[2].klass = (Object__Class *)id;
      if (this_00 != (MonoBehaviour *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  (this_00,(IEnumerator *)value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::WebGLSupport::WebGLInputMobile::WebGLInputMobile_OnPointerDown
               (WebGLInputMobile *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInputMobile>__set_Item_int__WebGLSupport__WebGLInputMobile_
                   );
    func_?(&MethodInfo__WebGLSupport__WebGLInputMobile__OnTouchEnd_int_);
    func_?(&TypeInfo__WebGLSupport__WebGLInputMobile);
    cRam_? = '\x01';
  }
  if ((this->fields).id != -1) {
    return;
  }
  this_01 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
  if (this_01 != (UnityAction_1_System_Int32Enum_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)0x0,MethodInfo__WebGLSupport__WebGLInputMobile__OnTouchEnd_int_,
               (MethodInfo *)0x0);
    (this->fields).id = 0;
    if ((TypeInfo__WebGLSupport__WebGLInputMobile->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_00 = (Dictionary_2_System_Object_System_Object_ *)
              TypeInfo__WebGLSupport__WebGLInputMobile->static_fields->instances;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)(this->fields).id,(Object *)this,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInputMobile>__set_Item_int__WebGLSupport__WebGLInputMobile_
                );
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnTouchEnd(Int32) */

void Assembly-CSharp.dll::WebGLSupport::WebGLInputMobile::WebGLInputMobile_OnTouchEnd
               (int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    WebGLSupport__WebGLInput_MethodInfo__UnityEngine__Component__GetComponent<WebGLSupport::WebGLInput>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInputMobile>__get_Item_int_
                   );
    func_?(&TypeInfo__WebGLSupport__WebGLInputMobile);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WebGLSupport__WebGLInputMobile->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WebGLSupport__WebGLInputMobile);
  }
  this = TypeInfo__WebGLSupport__WebGLInputMobile->static_fields->instances;
  if (this != (Dictionary_2_System_Int32_WebGLSupport_WebGLInputMobile_ *)0x0) {
    this_00 = (MonoBehaviour *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this,id,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInputMobile>__get_Item_int_
                        );
    if (this_00 != (MonoBehaviour *)0x0) {
      method_00 = (MethodInfo *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                            ((Component *)this_00,
                             WebGLSupport__WebGLInput_MethodInfo__UnityEngine__Component__GetComponent<WebGLSupport::WebGLInput>__
                            );
      if (method_00 != (MethodInfo *)0x0) {
        WebGLInput::WebGLInput_OnSelect((WebGLInput *)method_00,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        value = (Object *)func_?();
        if (value != (Object *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (value,ExceptionArgument__Enum_obj,method_00);
          value[1].klass = (Object__Class *)0x0;
          value[2].klass = (Object__Class *)id;
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                    (this_00,(IEnumerator *)value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* IEnumerator RegisterOnFocusOut(Int32) */

IEnumerator *
Assembly-CSharp.dll::WebGLSupport::WebGLInputMobile::WebGLInputMobile_RegisterOnFocusOut
          (int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WebGLSupport__WebGLInputMobile___RegisterOnFocusOut_d__5);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__WebGLSupport__WebGLInputMobile___RegisterOnFocusOut_d__5);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)id;
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* WebGLInputMobile() */

void Assembly-CSharp.dll::WebGLSupport::WebGLInputMobile::WebGLInputMobile__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInputMobile>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInputMobile>
                   );
    func_?(&TypeInfo__WebGLSupport__WebGLInputMobile);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32_WebGLSupport_WebGLInputMobile_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInputMobile>
                        );
  if (this != (Dictionary_2_System_Int32_WebGLSupport_WebGLInputMobile_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<int,_WebGLSupport::WebGLInputMobile>__Dictionary__
              );
    TypeInfo__WebGLSupport__WebGLInputMobile->static_fields->instances = this;
    func_?(TypeInfo__WebGLSupport__WebGLInputMobile->static_fields,this);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

