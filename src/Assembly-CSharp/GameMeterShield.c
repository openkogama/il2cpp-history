
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterShield::GameMeterShield_Initialize
               (GameMeterShield *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__GameMeterShield__OnProgressUpdate_float_);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__get_Value__
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>
                   );
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    this_00 = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              (pSVar1->fields).shield;
    value = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
            )func_?(
                            TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              ((UnityAction_1_System_Single_ *)value,(Object *)this,
               MethodInfo__GameMeterShield__OnProgressUpdate_float_,(MethodInfo *)0x0);
    if (this_00 != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__add_OnChange
                (this_00,value,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>_
                );
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,1,(MethodInfo *)0x0);
      pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
         (this_01 = (SpawnRoleVariable_1_System_Single_ *)(pSVar1->fields).shield,
         this_01 != (SpawnRoleVariable_1_System_Single_ *)0x0)) {
        fVar2 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                ::SpawnRoleVariable`1[System::Single]::SpawnRoleVariable_1_System_Single__get_Value
                          (this_01,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__get_Value__
                          );
        fVar2 = fVar2 / _UNK_?;
        (this->fields).elapsedInterpolationTime = 0.0;
        (this->fields).interpolateTowardsShieldProgress = fVar2;
        return;
      }
    }
  }
  func_?();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).elapsedInterpolationTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  fVar1 = (this->fields).previousShieldProgress;
  (this->fields).elapsedInterpolationTime = fVar2;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (_UNK_? < fVar2) {
    fVar2 = _UNK_?;
  }
  this_00 = (ProgressBarAndroid *)(this->fields).progressBar;
  fVar1 = ((this->fields).interpolateTowardsShieldProgress - fVar1) * fVar2 + fVar1;
  (this->fields).previousShieldProgress = fVar1;
  if (this_00 != (ProgressBarAndroid *)0x0) {
    ProgressBarAndroid::ProgressBarAndroid_set_Progress(this_00,fVar1,(MethodInfo *)0x0);
    index = 0;
    pLVar3 = (this->fields)._.gameMeterVisualEffects;
    while (pLVar3 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
      if ((pLVar3->fields)._size <= index) {
        return;
      }
      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields)._.gameMeterVisualEffects;
      if ((this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_01,index,
                             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                            ), RVar4 == (RegexCharClass_SingleRange)0x0)) break;
      (**(code **)(*(int *)RVar4 + 0xe0))();
      index = index + 1;
      pLVar3 = (this->fields)._.gameMeterVisualEffects;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

