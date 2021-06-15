
/* Void AddUpdateObject(IGameStateControllerSubscriber) */

void Assembly-CSharp.dll::MVGameModeChangeNotifier::MVGameModeChangeNotifier_AddUpdateObject
               (MVGameModeChangeNotifier *this,IGameStateControllerSubscriber *obj,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).UpdateList;
  if (this_00 != (List_1_IGameStateControllerSubscriber_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)obj,
               MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__Add_IGameStateControllerSubscriber_
              );
    MVGameModeChangeNotifier_GetPresentState(this,(MethodInfo *)0x0);
    if (obj != (IGameStateControllerSubscriber *)0x0) {
      func_?(0,TypeInfo__IGameStateControllerSubscriber);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* UpdateCondition GetPresentState() */

UpdateCondition__Enum
Assembly-CSharp.dll::MVGameModeChangeNotifier::MVGameModeChangeNotifier_GetPresentState
          (MVGameModeChangeNotifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      UVar3 = (*pcVar2)();
      return UVar3;
    }
    bVar4 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_00,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      return UpdateCondition__Enum_EDITOR_PLAYMODE;
    }
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 != MVGameMode__Enum_Edit) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    return UpdateCondition__Enum_INGAME - (MVar1 != MVGameMode__Enum_Play);
  }
  return UpdateCondition__Enum_EDITOR;
}


/* Void RemoveObject(IGameStateControllerSubscriber) */

void Assembly-CSharp.dll::MVGameModeChangeNotifier::MVGameModeChangeNotifier_RemoveObject
               (MVGameModeChangeNotifier *this,IGameStateControllerSubscriber *obj,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVGameModeChangeNotifier___RemoveObject_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = obj;
    this_00 = (this->fields).UpdateList;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Predicate<IGameStateControllerSubscriber>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this_01,
               MethodInfo__MVGameModeChangeNotifier___RemoveObject_c__AnonStorey0____m__0_IGameStateControllerSubscriber_
               ,
               MethodInfo__System__Predicate<IGameStateControllerSubscriber>__Predicate_System__Object__void__
              );
    if (this_00 != (List_1_IGameStateControllerSubscriber_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
      List_1_UIPushOption__RemoveAll
                ((List_1_UIPushOption_ *)this_00,(Predicate_1_UIPushOption_ *)this_02,
                 MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__RemoveAll_System__Predicate<IGameStateControllerSubscriber>_
                );
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::MVGameModeChangeNotifier::MVGameModeChangeNotifier_UpdateControllerUpdate
               (MVGameModeChangeNotifier *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  puStack_8 = (undefined4 *)&stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  pCVar9 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
           MVGameModeChangeNotifier_GetPresentState(this,(MethodInfo *)0x0);
  pLStack_10 = (this->fields).UpdateList;
  pCStack_11 = pCVar9;
  if (TypeInfo__MVGameModeChangeNotifier->static_fields->__f__am_cache0 ==
      (Predicate_1_IGameStateControllerSubscriber_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__MVGameModeChangeNotifier___UpdateControllerUpdate_m__0_IGameStateControllerSubscriber_
               ,
               MethodInfo__System__Predicate<IGameStateControllerSubscriber>__Predicate_System__Object__void__
              );
    TypeInfo__MVGameModeChangeNotifier->static_fields->__f__am_cache0 =
         (Predicate_1_IGameStateControllerSubscriber_ *)this_01;
  }
  if (pLStack_10 != (List_1_IGameStateControllerSubscriber_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__RemoveAll
              ((List_1_UIPushOption_ *)pLStack_10,
               (Predicate_1_UIPushOption_ *)
               TypeInfo__MVGameModeChangeNotifier->static_fields->__f__am_cache0,
               MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__RemoveAll_System__Predicate<IGameStateControllerSubscriber>_
              );
    if (pCVar9 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
                  (this->fields)._currentState) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).UpdateList;
    if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
      pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffb8,this_00,
                          MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__GetEnumerator__
                         );
      CStack_7.monitor = (MonitorData *)pLVar12->next;
      CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar12->ver;
      CStack_7.fields.syncRoot = (Object *)(pLVar12->current).rgba;
      uStack_1 = 0;
      while( true ) {
        CStack_7.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<IGameStateControllerSubscriber>__MoveNext__
        ;
        cVar13 = func_?();
        if (cVar13 == '\0') break;
        pOVar14 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           (&CStack_7,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<IGameStateControllerSubscriber>__get_Current__
                           );
        if (pOVar14 != (Object *)0x0) {
          CStack_7.klass = pCVar9;
          func_?();
        }
      }
      *puStack_8 = 0x82;
      uStack_1 = 0xffffffff;
      func_?();
      if (iStack_6 == 0) {
        (this->fields)._currentState = (int32_t)pCVar9;
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Boolean <UpdateControllerUpdate>m__0(IGameStateControllerSubscriber) */

bool Assembly-CSharp.dll::MVGameModeChangeNotifier::
     MVGameModeChangeNotifier__UpdateControllerUpdate_m__0
               (IGameStateControllerSubscriber *pd,MethodInfo *method)

{
  return pd == (IGameStateControllerSubscriber *)0x0;
}


/* MVGameModeChangeNotifier() */

void Assembly-CSharp.dll::MVGameModeChangeNotifier::MVGameModeChangeNotifier__ctor
               (MVGameModeChangeNotifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._currentState = 1;
  method_00 = TypeInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>;
  this_00 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__List__)
  ;
  (this->fields).UpdateList = (List_1_IGameStateControllerSubscriber_ *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  UVar1 = MVGameModeChangeNotifier_GetPresentState(this,(MethodInfo *)0x0);
  (this->fields)._currentState = UVar1;
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  return;
}

