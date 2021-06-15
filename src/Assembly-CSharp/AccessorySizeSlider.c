
/* Void ChangeValue(Single) */

void Assembly-CSharp.dll::AccessorySizeSlider::AccessorySizeSlider_ChangeValue
               (AccessorySizeSlider *this,float value,MethodInfo *method)

{
  pSVar1 = (this->fields).slider;
  if (pSVar1 != (Slider *)0x0) {
    fVar2 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                               (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
    (*(code *)(pSVar1->klass->vtable).set_value.method)
              (pSVar1,(float)fVar2 + value,(pSVar1->klass->vtable).Rebuild_1.methodPtr);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).accessorySlot = accessorySlot;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_CharacterEditor) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,
               MethodInfo__AccessorySizeSlider___Initialize_m__0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
              );
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_00 != (MVLocalPlayer *)0x0) {
    this_01 = MVLocalPlayer::MVLocalPlayer_get_Body(this_00,(MethodInfo *)0x0);
    pSVar2 = (this->fields).slider;
    (this->fields).avatarBody = this_01;
    if ((this->fields).isInPreview == 0) {
      if (this_01 == (MVBody *)0x0) goto code_?;
      MVBody::MVBody_GetAccessoryScale(this_01,(this->fields).accessorySlot,(MethodInfo *)0x0);
    }
    if (pSVar2 != (Slider *)0x0) {
      (*(code *)(pSVar2->klass->vtable).set_value.method)();
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(MVBody) */

void Assembly-CSharp.dll::AccessorySizeSlider::AccessorySizeSlider_Initialize_1
               (AccessorySizeSlider *this,MVBody *avatarBody,MethodInfo *method)

{
  pSVar1 = (this->fields).slider;
  (this->fields).avatarBody = avatarBody;
  if ((this->fields).isInPreview == 0) {
    if ((avatarBody != (MVBody *)0x0) &&
       (fVar2 = MVBody::MVBody_GetAccessoryScale
                          (avatarBody,(this->fields).accessorySlot,(MethodInfo *)0x0),
       pSVar1 != (Slider *)0x0)) goto code_?;
  }
  else if (pSVar1 != (Slider *)0x0) {
    fVar2 = (this->fields).defaultValue;
code_?:
    (*(code *)(pSVar1->klass->vtable).set_value.method)(pSVar1,fVar2);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (Slider *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      UnityEngine__UI__Slider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Slider>__
                     );
  (this->fields).slider = pSVar1;
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
  func_?(0);
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
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <Initialize>m__0(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AccessorySizeSlider::AccessorySizeSlider__Initialize_m__0
               (AccessorySizeSlider *this,IGetCurrentBody *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<MVBody>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__AccessorySizeSlider__Initialize_MVBody_,
             MethodInfo__System__Action<MVBody>__Action_System__Object__void__);
  if (x != (IGetCurrentBody *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

