
/* Void ChangeValue(Single) */

void Assembly-CSharp.dll::AccessorySizeSlider::AccessorySizeSlider_ChangeValue
               (AccessorySizeSlider *this,float value,MethodInfo *method)

{
  pSVar1 = (this->fields).slider;
  if (pSVar1 != (Slider *)0x0) {
    fVar2 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                               (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
    (*(code *)(pSVar1->klass->vtable).set_value.method)
              (pSVar1,(float)fVar2 + value,(pSVar1->klass->vtable).SetValueWithoutNotify.methodPtr);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(AccessorySlotType, Int32) */

void Assembly-CSharp.dll::AccessorySizeSlider::AccessorySizeSlider_Initialize
               (AccessorySizeSlider *this,AccessorySlotType__Enum accessorySlot,
               int32_t streamingAssetID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AccessorySizeSlider___Initialize_b__7_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 2) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                 MethodInfo__AccessorySizeSlider___Initialize_b__7_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                );
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (this_00 = (pMVar2->fields).game, this_00 != (MVNetworkGame *)0x0)) &&
       (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       this_01 != (MVLocalPlayer *)0x0)) {
      this_02 = MVLocalPlayer::MVLocalPlayer_get_Body(this_01,(MethodInfo *)0x0);
      (this->fields).avatarBody = this_02;
      func_?(&(this->fields).avatarBody,this_02);
      pSVar3 = (this->fields).slider;
      if ((this->fields).isInPreview == 0) {
        if ((this_02 != (MVBody *)0x0) &&
           (fVar4 = MVBody::MVBody_GetAccessoryScale
                              (this_02,(this->fields).accessorySlot,(MethodInfo *)0x0),
           pSVar3 != (Slider *)0x0)) goto code_?;
      }
      else if (pSVar3 != (Slider *)0x0) {
        fVar4 = (this->fields).defaultValue;
code_?:
        (*(code *)(pSVar3->klass->vtable).set_value.method)
                  (pSVar3,fVar4,(pSVar3->klass->vtable).SetValueWithoutNotify.methodPtr);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize(MVBody) */

void Assembly-CSharp.dll::AccessorySizeSlider::AccessorySizeSlider_Initialize_1
               (AccessorySizeSlider *this,MVBody *avatarBody,MethodInfo *method)

{
  (this->fields).avatarBody = avatarBody;
  func_?(&(this->fields).avatarBody,avatarBody);
  pSVar1 = (this->fields).slider;
  if ((this->fields).isInPreview == 0) {
    if ((avatarBody != (MVBody *)0x0) &&
       (fVar2 = MVBody::MVBody_GetAccessoryScale
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

void Assembly-CSharp.dll::AccessorySizeSlider::AccessorySizeSlider_Reset
               (AccessorySizeSlider *this,MethodInfo *method)

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


/* Void SyncScale() */

void Assembly-CSharp.dll::AccessorySizeSlider::AccessorySizeSlider_SyncScale
               (AccessorySizeSlider *this,MethodInfo *method)

{
  pSVar1 = (this->fields).slider;
  this_00 = (this->fields).avatarBody;
  slot = (this->fields).accessorySlot;
  if (pSVar1 != (Slider *)0x0) {
    fVar2 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                               (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
    if (this_00 != (MVBody *)0x0) {
      MVBody::MVBody_SyncScale(this_00,slot,(float)fVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ValueChanged() */

void Assembly-CSharp.dll::AccessorySizeSlider::AccessorySizeSlider_ValueChanged
               (AccessorySizeSlider *this,MethodInfo *method)

{
  pSVar1 = (this->fields).slider;
  if (pSVar1 != (Slider *)0x0) {
    fVar2 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                               (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
    this_00 = (this->fields).avatarBody;
    if (this_00 != (MVBody *)0x0) {
      MVBody::MVBody_ApplyAccessorySize
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

void Assembly-CSharp.dll::AccessorySizeSlider::AccessorySizeSlider__Initialize_b__7_0
               (AccessorySizeSlider *this,IGetCurrentBody *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AccessorySizeSlider__Initialize_MVBody_);
    func_?(&TypeInfo__System__Action<MVBody>);
    func_?(&TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    cRam_? = '\x01';
  }
  this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
            func_?(TypeInfo__System__Action<MVBody>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this_00,(Object *)this,MethodInfo__AccessorySizeSlider__Initialize_MVBody_,
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

