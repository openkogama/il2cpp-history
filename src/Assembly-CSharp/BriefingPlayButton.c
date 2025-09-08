
/* Void StartPlaying() */

void Assembly-CSharp.dll::BriefingPlayButton::BriefingPlayButton_StartPlaying
               (BriefingPlayButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__int_
                   );
    func_?(&
                    MethodInfo__BriefingPlayButton____c___StartPlaying_b__0_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BriefingPlayButton____c);
    cRam_? = '\x01';
  }
  MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((pMVar1 != (MVLocalPlayer *)0x0) &&
     (pSVar2 = (pMVar1->fields).spawnRoleDataMediator, pSVar2 != (SpawnRoleDataMediator *)0x0)) {
    a = (SpawnRoleVariable_1_System_Int32_ *)(pSVar2->fields).woId;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      this_00 = (Component *)
                MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar1,(MethodInfo *)0x0);
      bVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[System::Int32]::SpawnRoleVariable_1_System_Int32__op_Inequality_1
                        (a,(int32_t)this_00,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__int_
                        );
      if (bVar3 != 0) {
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (this_01 == (MVLocalPlayer *)0x0) goto code_?;
        existingAvatarWoId =
             MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(this_01,(MethodInfo *)0x0);
        if (pMVar1 == (MVLocalPlayer *)0x0) goto code_?;
        MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole(pMVar1,existingAvatarWoId,(MethodInfo *)0x0)
        ;
      }
      if (*(char *)&this_00[1].fields._.m_CachedPtr != '\0') {
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         (this_00,(MethodInfo *)0x0);
        if ((TypeInfo__BriefingPlayButton____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction = TypeInfo__BriefingPlayButton____c->static_fields->__9__0_0;
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__BriefingPlayButton____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          object = TypeInfo__BriefingPlayButton____c->static_fields->__9;
          callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object
                     ,
                     MethodInfo__BriefingPlayButton____c___StartPlaying_b__0_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__BriefingPlayButton____c->static_fields->__9__0_0 = callbackFunction;
          func_?();
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if (cRam_? == '\0') {
          ppMStack4 = &TypeInfo__MVGameControllerBase;
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
            (IPlayModeUI *)0x0) goto code_?;
        ppMStack4 = (MVGameControllerBase__Class **)0x0;
        pIStack5 = TypeInfo__IPlayModeUI;
        uStack6 = 8;
        func_?();
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

