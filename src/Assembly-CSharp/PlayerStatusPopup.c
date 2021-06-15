
/* String FormatXP(Single) */

String * Assembly-CSharp.dll::PlayerStatusPopup::PlayerStatusPopup_FormatXP
                   (PlayerStatusPopup *this,float amount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  if (_UNK_? <= amount) {
    if (_UNK_? <= amount) {
      fStack_3 = amount / _UNK_?;
      pSVar4 = (String *)func_?(&fStack_3,StringLiteral_F0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat_2
                         (pSVar4,StringLiteral_M,(MethodInfo *)0x0);
      return pSVar4;
    }
    fStack_2 = amount / _UNK_?;
    pSVar4 = (String *)func_?(&fStack_2,StringLiteral_F0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar4 = mscorlib.dll::System::String::String_Concat_2(pSVar4,StringLiteral_K,(MethodInfo *)0x0)
    ;
    return pSVar4;
  }
  fStack_1 = amount;
  pSVar4 = (String *)func_?(&fStack_1,0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar4 = mscorlib.dll::System::String::String_Concat_2
                     (pSVar4,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
  return pSVar4;
}


/* Void Initialize() */

void Assembly-CSharp.dll::PlayerStatusPopup::PlayerStatusPopup_Initialize
               (PlayerStatusPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = (ThemeSkybox *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0)
    ;
    if (this_02 != (ThemeSkybox *)0x0) {
      this_03 = (XPProgressData *)ThemeSkybox::ThemeSkybox_get_SunLight(this_02,(MethodInfo *)0x0);
      if (this_03 != (XPProgressData *)0x0) {
        pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_03,
                            (MethodInfo *)0x0);
        iVar2 = XPProgressData::XPProgressData_get_PrevXP(this_03,(MethodInfo *)0x0);
        iVar3 = XPProgressData::XPProgressData_get_NextXP(this_03,(MethodInfo *)0x0);
        iVar4 = XPProgressData::XPProgressData_get_PrevXP(this_03,(MethodInfo *)0x0);
        arg0 = PlayerStatusPopup_FormatXP(this,(float)((int)pOVar1 - iVar2),(MethodInfo *)0x0);
        arg1 = PlayerStatusPopup_FormatXP(this,(float)(iVar3 - iVar4),(MethodInfo *)0x0);
        pTVar5 = (this->fields).xpProgress;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        mscorlib.dll::System::String::String_Format_1
                  (StringLiteral_XP___0_____1_,(Object *)arg0,(Object *)arg1,(MethodInfo *)0x0);
        if (pTVar5 != (Text *)0x0) {
          (*(code *)(pTVar5->klass->vtable).set_text.method)();
          this_00 = (this->fields).progressBar;
          if (this_00 != (ProgressBarAndroid *)0x0) {
            ProgressBarAndroid::ProgressBarAndroid_set_Progress
                      (this_00,(float)((int)pOVar1 - iVar2) / (float)(iVar3 - iVar4),
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PlayerStatusPopup::PlayerStatusPopup_Update
               (PlayerStatusPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).currentTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  (this->fields).currentTime = fVar2;
  if ((this->fields).duration <= fVar2) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__PlayerStatusPopup->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__PlayerStatusPopup___Update_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__PlayerStatusPopup->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__PlayerStatusPopup->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  return;
}


/* Void <Update>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerStatusPopup::PlayerStatusPopup__Update_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,0x40);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* PlayerStatusPopup() */

void Assembly-CSharp.dll::PlayerStatusPopup::PlayerStatusPopup__ctor
               (PlayerStatusPopup *this,MethodInfo *method)

{
  (this->fields).duration = 2.5;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

