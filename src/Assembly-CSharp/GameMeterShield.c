
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterShield::GameMeterShield_Initialize
               (GameMeterShield *this,MethodInfo *method)

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
    this_00 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
              System.Core.dll::System::Linq::Enumerable+<CreateUnionIterator>c__Iterator1C`1[System
              ::Object]::
              Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                        ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)pSVar1,
                         (MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,MethodInfo__GameMeterShield__OnProgressUpdate_float_,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>__SubDelegate_System__Object__void__
              );
    if (this_00 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[UnityEngine::Vector3]::
      SpawnRoleVariable_1_UnityEngine_Vector3__add_OnChange
                (this_00,(SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)this_01,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>_
                );
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,1,(MethodInfo *)0x0);
      pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
        this_02 = (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                  System.Core.dll::System::Linq::
                  Enumerable+<CreateUnionIterator>c__Iterator1C`1[System::Object]::
                  Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object__System_Collections_IEnumerator_get_Current
                            ((Enumerable_CreateUnionIterator_c_Iterator1C_1_System_Object_ *)pSVar1,
                             (MethodInfo *)0x0);
        if (this_02 !=
            (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                    (this_02,
                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__get_Value__
                    );
          fVar2 = (float10)_UNK_?;
          (this->fields).elapsedInterpolationTime = 0.0;
          (this->fields).interpolateTowardsShieldProgress = (float)(extraout_ST0 / fVar2);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnProgressUpdate(Single) */

void Assembly-CSharp.dll::GameMeterShield::GameMeterShield_OnProgressUpdate
               (GameMeterShield *this,float newValue,MethodInfo *method)

{
  fVar1 = newValue / _UNK_?;
  (this->fields).elapsedInterpolationTime = 0.0;
  (this->fields).interpolateTowardsShieldProgress = fVar1;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameMeterShield::GameMeterShield_Update
               (GameMeterShield *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).elapsedInterpolationTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  fVar1 = (this->fields).previousShieldProgress;
  b = (this->fields).interpolateTowardsShieldProgress;
  (this->fields).elapsedInterpolationTime = fVar2;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                    (fVar1,b,fVar2,(MethodInfo *)0x0);
  this_00 = (this->fields).progressBar;
  (this->fields).previousShieldProgress = fVar1;
  if (this_00 != (ProgressBar *)0x0) {
    ProgressBar::ProgressBar_set_Progress(this_00,fVar1,(MethodInfo *)0x0);
    index = 0;
    pLVar3 = (this->fields)._.gameMeterVisualEffects;
    while (pLVar3 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
      pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                          MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                         );
      if ((int)pOVar4 <= index) {
        return;
      }
      pLVar3 = (this->fields)._.gameMeterVisualEffects;
      if ((pLVar3 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) ||
         (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,index,
                              MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                             ), pIVar5 == (IEventSystemHandler *)0x0)) break;
      (*(code *)pIVar5->klass[1]._0.castClass)();
      index = index + 1;
      pLVar3 = (this->fields)._.gameMeterVisualEffects;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* GameMeterType get_GameMeterType() */

GameMeterType__Enum
Assembly-CSharp.dll::GameMeterShield::GameMeterShield_get_GameMeterType
          (GameMeterShield *this,MethodInfo *method)

{
  return GameMeterType__Enum_Shield;
}

