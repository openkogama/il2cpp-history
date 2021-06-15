
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterHealth::GameMeterHealth_Initialize
               (GameMeterHealth *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    this_01 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
              UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
              TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
              TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                        ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pSVar1,(MethodInfo *)0x0);
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,MethodInfo__GameMeterHealth__OnProgressUpdate_float_,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>__SubDelegate_System__Object__void__
              );
    if (this_01 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[UnityEngine::Vector3]::
      SpawnRoleVariable_1_UnityEngine_Vector3__add_OnChange
                (this_01,(SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)pUVar2,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>_
                );
      pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
        this_02 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                  NamedThemeAttribute_1_UnityEngine_Color__get_Name
                            ((NamedThemeAttribute_1_UnityEngine_Color_ *)pSVar1,(MethodInfo *)0x0);
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<int>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this,MethodInfo__GameMeterHealth__OnMaxValueUpdate_int_,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<int>__SubDelegate_System__Object__void__
                  );
        if (this_02 != (String *)0x0) {
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleVariable`1[UnityEngine::Vector3]::
          SpawnRoleVariable_1_UnityEngine_Vector3__add_OnChange
                    ((SpawnRoleVariable_1_UnityEngine_Vector3_ *)this_02,
                     (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)pUVar2,
                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<int>_
                    );
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this,1,(MethodInfo *)0x0);
          pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                             ((MethodInfo *)0x0);
          if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
             (this_03 = (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                         *)UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                           TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                           TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                     ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pSVar1,
                                      (MethodInfo *)0x0),
             this_03 !=
             (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)) {
            mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                      (this_03,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__get_Value__
                      );
            fVar3 = (float)extraout_ST0;
            if (cRam_? == '\0') {
              fVar3 = _UNK_?;
              func_?();
              cRam_? = '\x01';
            }
            this_00 = (this->fields).progressBar;
            if (this_00 != (ProgressBar *)0x0) {
              ProgressBar::ProgressBar_set_Progress
                        (this_00,fVar3 / (float)(this->fields).maxValue,(MethodInfo *)0x0);
              index = 0;
              pLVar4 = (this->fields)._.gameMeterVisualEffects;
              while (pLVar4 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
                pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                         Json::Serialization::JsonProperty]::
                         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                    pLVar4,
                                    MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                                   );
                if ((int)pOVar5 <= index) {
                  return;
                }
                pLVar4 = (this->fields)._.gameMeterVisualEffects;
                if ((pLVar4 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) ||
                   (pIVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                             EventSystems::IEventSystemHandler]::
                             List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                        pLVar4,index,
                                        MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                                       ), pIVar6 == (IEventSystemHandler *)0x0)) break;
                (*(code *)pIVar6->klass[1]._0.castClass)();
                index = index + 1;
                pLVar4 = (this->fields)._.gameMeterVisualEffects;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnProgressUpdate(Single) */

void Assembly-CSharp.dll::GameMeterHealth::GameMeterHealth_OnProgressUpdate
               (GameMeterHealth *this,float newValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).progressBar;
  if (this_00 != (ProgressBar *)0x0) {
    ProgressBar::ProgressBar_set_Progress
              (this_00,newValue / (float)(this->fields).maxValue,(MethodInfo *)0x0);
    index = 0;
    pLVar1 = (this->fields)._.gameMeterVisualEffects;
    while (pLVar1 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                         );
      if ((int)pOVar2 <= index) {
        return;
      }
      pLVar1 = (this->fields)._.gameMeterVisualEffects;
      if ((pLVar1 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) break;
      (*(code *)pIVar3->klass[1]._0.castClass)();
      index = index + 1;
      pLVar1 = (this->fields)._.gameMeterVisualEffects;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* GameMeterHealth() */

void Assembly-CSharp.dll::GameMeterHealth::GameMeterHealth__ctor
               (GameMeterHealth *this,MethodInfo *method)

{
  (this->fields).maxValue = 100;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
            );
  (this->fields)._.gameMeterVisualEffects =
       (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)this_00;
  (this->fields)._.meterActive = 1;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}


/* GameMeterType get_GameMeterType() */

GameMeterType__Enum
Assembly-CSharp.dll::GameMeterHealth::GameMeterHealth_get_GameMeterType
          (GameMeterHealth *this,MethodInfo *method)

{
  return GameMeterType__Enum_Health;
}

