
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterHealth::GameMeterHealth_Initialize
               (GameMeterHealth *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__GameMeterHealth__OnHealthChange_float_);
    func_?(&MethodInfo__GameMeterHealth__OnMaxHealthChange_int_);
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
    pSVar2 = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
             (pSVar1->fields).health;
    pSVar3 = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
              *)func_?(
                               TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>
                               );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              ((UnityAction_1_System_Single_ *)pSVar3,(Object *)this,
               MethodInfo__GameMeterHealth__OnHealthChange_float_,(MethodInfo *)0x0);
    if (pSVar2 != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__add_OnChange
                (pSVar2,pSVar3,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<float>_
                );
      pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
        pSVar2 = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                 (pSVar1->fields).maxHealth;
        pSVar3 = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                  *)func_?(
                                   TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<int>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  ((UnityAction_1_System_Int32Enum_ *)pSVar3,(Object *)this,
                   MethodInfo__GameMeterHealth__OnMaxHealthChange_int_,(MethodInfo *)0x0);
        if (pSVar2 != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0
           ) {
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
          SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__add_OnChange
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
            newHealthValue =
                 Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                 ::SpawnRoleVariable`1[System::Single]::SpawnRoleVariable_1_System_Single__get_Value
                           (this_00,
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__get_Value__
                           );
            GameMeterHealth_OnHealthChange(this,newHealthValue,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnHealthChange(Single) */

void Assembly-CSharp.dll::GameMeterHealth::GameMeterHealth_OnHealthChange
               (GameMeterHealth *this,float newHealthValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                   );
    func_?(&StringLiteral__0_____1_);
    cRam_? = '\x01';
  }
  pGVar1 = this;
  if (newHealthValue < (this->fields).storedHealthValue) {
    this_00 = (this->fields).shaker;
    if ((this_00 == (GameMeterShake *)0x0) ||
       (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), this_03 == (GameObject *)0x0))
    goto code_?;
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (this_03,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pOVar3 = (Object__Class *)(pGVar1->fields).shaker;
      if (pOVar3 == (Object__Class *)0x0) goto code_?;
      iVar4._0_2_ = (pOVar3->_0).this_arg.attrs;
      iVar4._2_1_ = (pOVar3->_0).this_arg.type;
      iVar4._3_1_ = (pOVar3->_0).this_arg.field_0x7;
      if (iVar4 != 0) {
        Coroutines::Coroutines_Stop(*(IEnumerator **)&(pOVar3->_0).this_arg.attrs,(MethodInfo *)0x0)
        ;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__GameMeterShake___ShakeAnimation_d__5;
      pOVar5 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar5,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      pOVar5[1].klass = (Object__Class *)0x0;
      pOVar5[2].klass = pOVar3;
      func_?(pOVar5 + 2);
      *(Object **)&(pOVar3->_0).this_arg.attrs = pOVar5;
      func_?(&(pOVar3->_0).this_arg.attrs,pOVar5);
      Coroutines::Coroutines_Start(*(IEnumerator **)&(pOVar3->_0).this_arg.attrs,(MethodInfo *)0x0);
    }
  }
  func_?((double)newHealthValue);
  pSVar6 = mscorlib.dll::System::Single::Single_ToString
                     ((Single *)&stack0xfffffff8,(MethodInfo *)0x0);
  this = (GameMeterHealth *)(pGVar1->fields).maxHealthValue;
  pTVar7 = (pGVar1->fields).healthText;
  pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&this);
  pSVar6 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral__0_____1_,(Object *)pSVar6,pOVar5,(MethodInfo *)0x0);
  if (pTVar7 != (Text *)0x0) {
    (*(code *)(pTVar7->klass->vtable).set_text.method)
              (pTVar7,pSVar6,(pTVar7->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pPVar8 = (pGVar1->fields).progressBar;
    (pGVar1->fields).storedHealthValue = newHealthValue;
    if (pPVar8 != (ProgressBar *)0x0) {
      value = newHealthValue / (float)(pGVar1->fields).maxHealthValue;
      if (value < 0.0) {
        value = 0.0;
      }
      else if (_UNK_? < value) {
        value = _UNK_?;
      }
      (pPVar8->fields).progress = value;
      this_01 = (pPVar8->fields).progressBar;
      if (this_01 != (Scrollbar *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                  (this_01,value,(MethodInfo *)0x0);
        iVar4 = 0;
        pLVar9 = (pGVar1->fields)._.gameMeterVisualEffects;
        while (pLVar9 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
          if ((pLVar9->fields)._size <= iVar4) {
            return;
          }
          this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (pGVar1->fields)._.gameMeterVisualEffects;
          if ((this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (RVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (this_02,iVar4,
                                     MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                                    ), RVar10 == (RegexCharClass_SingleRange)0x0)) break;
          (**(code **)(*(int *)RVar10 + 0xe0))();
          iVar4 = iVar4 + 1;
          pLVar9 = (pGVar1->fields)._.gameMeterVisualEffects;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnMaxHealthChange(Int32) */

void Assembly-CSharp.dll::GameMeterHealth::GameMeterHealth_OnMaxHealthChange
               (GameMeterHealth *this,int32_t maxHealthValue,MethodInfo *method)

{
  (this->fields).maxHealthValue = maxHealthValue;
  GameMeterHealth_OnHealthChange(this,(this->fields).storedHealthValue,(MethodInfo *)0x0);
  return;
}


/* GameMeterHealth() */

void Assembly-CSharp.dll::GameMeterHealth::GameMeterHealth__ctor
               (GameMeterHealth *this,MethodInfo *method)

{
  (this->fields).maxHealthValue = 100;
  (this->fields).storedHealthValue = -1.0;
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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
            );
  (this->fields)._.gameMeterVisualEffects = this_00;
  func_?(&(this->fields)._.gameMeterVisualEffects,this_00);
  (this->fields)._.meterActive = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

