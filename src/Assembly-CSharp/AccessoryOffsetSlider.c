
/* Void Initialize(AccessorySlotType, Int32) */

void Assembly-CSharp.dll::AccessoryOffsetSlider::AccessoryOffsetSlider_Initialize
               (AccessoryOffsetSlider *this,AccessorySlotType__Enum accessorySlot,
               int32_t streamingAssetID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AccessoryOffsetSlider___Initialize_b__7_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    cRam_? = '\x01';
  }
  (this->fields).accessorySlot = accessorySlot;
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_CharacterEditor) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
               MethodInfo__AccessoryOffsetSlider___Initialize_b__7_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
              );
    return;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_00 != (MVLocalPlayer *)0x0) {
    this_01 = MVLocalPlayer::MVLocalPlayer_get_Body(this_00,(MethodInfo *)0x0);
    (this->fields).avatarBody = this_01;
    func_?(&(this->fields).avatarBody,this_01);
    pSVar2 = (this->fields).slider;
    if ((this->fields).isInPreview == 0) {
      if ((this_01 != (MVBody *)0x0) &&
         (fVar3 = MVBody::MVBody_GetAccessoryOffset
                            (this_01,(this->fields).accessorySlot,(MethodInfo *)0x0),
         pSVar2 != (Slider *)0x0)) goto code_?;
    }
    else if (pSVar2 != (Slider *)0x0) {
      fVar3 = (this->fields).defaultValue;
code_?:
      (*(code *)(pSVar2->klass->vtable).set_value.method)
                (pSVar2,fVar3,(pSVar2->klass->vtable).SetValueWithoutNotify.methodPtr);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(MVBody) */

void Assembly-CSharp.dll::AccessoryOffsetSlider::AccessoryOffsetSlider_Initialize_1
               (AccessoryOffsetSlider *this,MVBody *avatarBody,MethodInfo *method)

{
  (this->fields).avatarBody = avatarBody;
  func_?(&(this->fields).avatarBody,avatarBody);
  pSVar1 = (this->fields).slider;
  if ((this->fields).isInPreview == 0) {
    if ((avatarBody != (MVBody *)0x0) &&
       (fVar2 = MVBody::MVBody_GetAccessoryOffset
                          (avatarBody,(this->fields).accessorySlot,(MethodInfo *)0x0),
       pSVar1 != (Slider *)0x0)) goto code_?;
  }
  else if (pSVar1 != (Slider *)0x0) {
    fVar2 = (this->fields).defaultValue;
code_?:
    (*(code *)(pSVar1->klass->vtable).set_value.method)
              (pSVar1,fVar2,(pSVar1->klass->vtable).SetValueWithoutNotify.methodPtr);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::AccessoryOffsetSlider::AccessoryOffsetSlider_Reset
               (AccessoryOffsetSlider *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__Slider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Slider>__
                   );
    cRam_? = '\x01';
  }
  pSVar1 = (Slider *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__Slider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Slider>__
                     );
  (this->fields).slider = pSVar1;
  func_?(&(this->fields).slider,pSVar1);
  return;
}


/* Void SyncPosition() */

void Assembly-CSharp.dll::AccessoryOffsetSlider::AccessoryOffsetSlider_SyncPosition
               (AccessoryOffsetSlider *this,MethodInfo *method)

{
  pSVar1 = (this->fields).slider;
  this_00 = (this->fields).avatarBody;
  slot = (this->fields).accessorySlot;
  if (pSVar1 != (Slider *)0x0) {
    fVar2 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                               (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
    if (this_00 != (MVBody *)0x0) {
      MVBody::MVBody_SyncOffset(this_00,slot,(float)fVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ValueChanged() */

void Assembly-CSharp.dll::AccessoryOffsetSlider::AccessoryOffsetSlider_ValueChanged
               (AccessoryOffsetSlider *this,MethodInfo *method)

{
  pSVar1 = (this->fields).slider;
  if (pSVar1 != (Slider *)0x0) {
    fVar2 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                               (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
    this_00 = (this->fields).avatarBody;
    if (this_00 != (MVBody *)0x0) {
      MVBody::MVBody_ApplyAccessoryOffset
                (this_00,(float)fVar2,(this->fields).accessorySlot,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <Initialize>b__7_0(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AccessoryOffsetSlider::AccessoryOffsetSlider__Initialize_b__7_0
               (AccessoryOffsetSlider *this,IGetCurrentBody *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AccessoryOffsetSlider__Initialize_MVBody_);
    func_?(&TypeInfo__System__Action<MVBody>);
    func_?(&TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    cRam_? = '\x01';
  }
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<MVBody>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,MethodInfo__AccessoryOffsetSlider__Initialize_MVBody_,
             (MethodInfo *)0x0);
  if (x != (IGetCurrentBody *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

