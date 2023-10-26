
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterHealth::GameMeterHealth_Initialize
               (GameMeterHealth *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__GameMeterHealth__OnMaxValueUpdate_int_);
    func_?(&MethodInfo__GameMeterHealth__OnProgressUpdate_float_);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<int>_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__get_Value__
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<int>
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>
                   );
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    pSVar2 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar1->fields).health;
    pSVar3 = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)
             func_?(
                            TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>
                            );
    if ((pSVar3 != (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)0x0) &&
       (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
        UnityAction_1_System_Single___ctor
                  ((UnityAction_1_System_Single_ *)pSVar3,(Object *)this,
                   MethodInfo__GameMeterHealth__OnProgressUpdate_float_,(MethodInfo *)0x0),
       pSVar2 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0)) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[UnityEngine::Vector3]::
      SpawnRoleVariable_1_UnityEngine_Vector3__add_OnChange
                (pSVar2,pSVar3,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>_
                );
      pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
        pSVar2 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar1->fields).maxHealth;
        pSVar3 = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)
                 func_?(
                                TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<int>
                                );
        if ((pSVar3 != (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)0x0) &&
           (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      ((UnityAction_1_System_Int32Enum_ *)pSVar3,(Object *)this,
                       MethodInfo__GameMeterHealth__OnMaxValueUpdate_int_,(MethodInfo *)0x0),
           pSVar2 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0)) {
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleVariable`1[UnityEngine::Vector3]::
          SpawnRoleVariable_1_UnityEngine_Vector3__add_OnChange
                    (pSVar2,pSVar3,
                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<int>_
                    );
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this,1,(MethodInfo *)0x0);
          pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                             ((MethodInfo *)0x0);
          if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
             (this_00 = (SpawnRoleVariable_1_System_Single_ *)(pSVar1->fields).health,
             this_00 != (SpawnRoleVariable_1_System_Single_ *)0x0)) {
            ppMVar4 = (MethodInfo **)
                      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                      SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Single]::
                      SpawnRoleVariable_1_System_Single__get_Value
                                (this_00,
                                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__get_Value__
                                );
            if (cRam_? == '\0') {
              ppMVar4 = &
                        MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
              ;
              func_?();
              func_?(&
                              MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                             );
              cRam_? = '\x01';
            }
            this_01 = (ProgressBarAndroid *)(this->fields).progressBar;
            if (this_01 != (ProgressBarAndroid *)0x0) {
              ProgressBarAndroid::ProgressBarAndroid_set_Progress
                        (this_01,(float)ppMVar4 / (float)(this->fields).maxValue,(MethodInfo *)0x0);
              index = 0;
              pLVar5 = (this->fields)._.gameMeterVisualEffects;
              while (pLVar5 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
                if ((pLVar5->fields)._size <= index) {
                  return;
                }
                this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          (this->fields)._.gameMeterVisualEffects;
                if ((this_02 ==
                     (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
                   (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      (this_02,index,
                                       MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                                      ), RVar6 == (RegexCharClass_SingleRange)0x0)) break;
                (**(code **)(*(int *)RVar6 + 0xdc))();
                index = index + 1;
                pLVar5 = (this->fields)._.gameMeterVisualEffects;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnProgressUpdate(Single) */

void Assembly-CSharp.dll::GameMeterHealth::GameMeterHealth_OnProgressUpdate
               (GameMeterHealth *this,float newValue,MethodInfo *method)

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
  this_00 = (ProgressBarAndroid *)(this->fields).progressBar;
  if (this_00 != (ProgressBarAndroid *)0x0) {
    ProgressBarAndroid::ProgressBarAndroid_set_Progress
              (this_00,newValue / (float)(this->fields).maxValue,(MethodInfo *)0x0);
    index = 0;
    pLVar1 = (this->fields)._.gameMeterVisualEffects;
    while (pLVar1 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
      if ((pLVar1->fields)._size <= index) {
        return;
      }
      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields)._.gameMeterVisualEffects;
      if ((this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_01,index,
                             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                            ), RVar2 == (RegexCharClass_SingleRange)0x0)) break;
      (**(code **)(*(int *)RVar2 + 0xdc))();
      index = index + 1;
      pLVar1 = (this->fields)._.gameMeterVisualEffects;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* GameMeterHealth() */

void Assembly-CSharp.dll::GameMeterHealth::GameMeterHealth__ctor
               (GameMeterHealth *this,MethodInfo *method)

{
  (this->fields).maxValue = 100;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                           );
  if (this_00 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
              );
    (this->fields)._.gameMeterVisualEffects = this_00;
    func_?(&(this->fields)._.gameMeterVisualEffects,this_00);
    (this->fields)._.meterActive = 1;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

