
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForBuildModeAvatar::ESWaitForBuildModeAvatar_Enter
               (ESWaitForBuildModeAvatar *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&
                    MethodInfo__ESWaitForBuildModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_
                   );
    func_?(&TypeInfo__MVLocalPlayerBuilder);
    cRam_? = '\x01';
  }
  pMVar1 = (MVLocalPlayerBuilder__Class *)
           MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 == (MVLocalPlayerBuilder__Class *)0x0) goto code_?;
  pIVar2 = (pMVar1->_0).image;
  pMVar3 = TypeInfo__MVLocalPlayerBuilder;
  if ((*(byte *)&pIVar2[4].assembly < (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment) ||
     (*(MVLocalPlayerBuilder__Class **)
       ((pIVar2[2].typeCount - 4) + (uint)(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment * 4)
      != TypeInfo__MVLocalPlayerBuilder)) goto code_?;
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((pMVar4 == (MVLocalPlayer *)0x0) ||
     (pSVar5 = (pMVar4->fields)._.spawnRolesManager, pSVar5 == (SpawnRolesManager *)0x0)) {
code_?:
    func_?();
    this_01 = extraout_EDX;
  }
  else {
    pTVar6 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
             WebCompletionSource_1_System_Object__get_Task
                       ((WebCompletionSource_1_System_Object_ *)pSVar5,(MethodInfo *)0x0);
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
    iVar7 = (pMVar4->fields)._._Team_k__BackingField;
    pMVar1 = (MVLocalPlayerBuilder__Class *)
             MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar1 == (MVLocalPlayerBuilder__Class *)0x0) goto code_?;
    pIVar2 = (pMVar1->_0).image;
    pMVar3 = TypeInfo__MVLocalPlayerBuilder;
    if ((*(byte *)&pIVar2[4].assembly < (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment) ||
       (*(MVLocalPlayerBuilder__Class **)
         ((pIVar2[2].typeCount - 4) + (uint)(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment * 4
         ) != TypeInfo__MVLocalPlayerBuilder)) goto code_?;
    (pMVar1->_1).thread_static_fields_size = iVar7;
    (pMVar1->_1).thread_static_fields_offset = (int32_t)&UNK_?;
    (pMVar1->_1).flags = (uint32_t)pTVar6;
    (this->fields).defaultBuildModeSpawnRoleReady = 0;
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar4 == (MVLocalPlayer *)0x0) goto code_?;
    pSVar5 = (pMVar4->fields)._.spawnRolesManager;
    this_00 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__ESWaitForBuildModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_,
               (MethodInfo *)0x0);
    pMVar1 = (MVLocalPlayerBuilder__Class *)0x0;
    if (pSVar5 == (SpawnRolesManager *)0x0) goto code_?;
    SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
              (pSVar5,(Action_1_Int32_ *)this_00,(MethodInfo *)0x0);
    this_01 = (MVLocalPlayerBuilder *)
              MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    pMVar1 = TypeInfo__MVLocalPlayerBuilder;
    if (this_01 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    if (((TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment <=
         (this_01->klass->_1).naturalAligment) &&
       ((this_01->klass->_1).typeHierarchy[(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1]
        == (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) {
      MVLocalPlayerBuilder::MVLocalPlayerBuilder_SetToBuildModeSpawnRole(this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(this_01,pMVar1);
  pMVar3 = extraout_EDX_00;
code_?:
  func_?(pMVar1,pMVar3);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForBuildModeAvatar::ESWaitForBuildModeAvatar_Execute
               (ESWaitForBuildModeAvatar *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields).defaultBuildModeSpawnRoleReady != 0) {
    value = (Object *)func_?();
    if (e == (EditorStateMachine *)0x0) {
      uVar1 = func_?(&stack0xfffffff0);
      func_?(uVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
  }
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESWaitForBuildModeAvatar::ESWaitForBuildModeAvatar_Exit
               (ESWaitForBuildModeAvatar *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ESWaitForBuildModeAvatar____c___Exit_b__4_0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ESWaitForBuildModeAvatar____c);
    func_?(&StringLiteral_Game_coints__Probably_do_this_di);
    cRam_? = '\x01';
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar1 != (GameEventManager *)0x0) &&
     (this_00 = (RewardedAd *)(pGVar1->fields).AvatarCommandsBuildMode, this_00 != (RewardedAd *)0x0
     )) {
    GoogleMobileAds.dll::GoogleMobileAds::Api::RewardedAd::RewardedAd__RegisterAdEvents_m__8
              (this_00,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar2 != (MVWorldObjectClientManager *)0x0) &&
       (this_01 = (pMVar2->fields)._MoveableController_k__BackingField,
       this_01 != (MoveableController *)0x0)) {
      MoveableController::MoveableController_ResetMoveables(this_01,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
        pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                           (pMVar2,(MethodInfo *)0x0);
        if (pMVar3 != (MVGroup *)0x0) {
          (*(code *)(pMVar3->klass->vtable).PlayModeInitialize.method)();
          MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(0,0,(MethodInfo *)0x0);
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                             ((MethodInfo *)0x0);
          if (pMVar4 != (MainCameraManager *)0x0) {
            if ((pMVar4->fields).maskMode != 0) {
              pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                 ((MethodInfo *)0x0);
              if (pMVar4 == (MainCameraManager *)0x0) goto code_?;
              MainCameraManager::MainCameraManager_set_CamMaskMode
                        (pMVar4,MaskMode__Enum_Default,(MethodInfo *)0x0);
            }
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar5 != (MVNetworkGame *)0x0) &&
               (esm = (EditorStateMachine *)(pMVar5->fields)._GameCoinManager_k__BackingField,
               (MVGameCoinManager *)esm != (MVGameCoinManager *)0x0)) {
              bVar6 = MVGameCoinManager::MVGameCoinManager_get_BoostEnabled
                                ((MVGameCoinManager *)esm,(MethodInfo *)0x0);
              if (bVar6 != 0) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                esm = (EditorStateMachine *)StringLiteral_Game_coints__Probably_do_this_di;
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                          ((Object *)StringLiteral_Game_coints__Probably_do_this_di,
                           (MethodInfo *)0x0);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible
                        (1,(MethodInfo *)0x0);
              if (esm != (EditorStateMachine *)0x0) {
                root = (esm->fields).gameObject;
                if ((TypeInfo__ESWaitForBuildModeAvatar____c->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                callbackFunction = TypeInfo__ESWaitForBuildModeAvatar____c->static_fields->__9__4_0;
                if (callbackFunction == (ExecuteEvents_EventFunction_1_IEditModeController_ *)0x0) {
                  if ((TypeInfo__ESWaitForBuildModeAvatar____c->_1).cctor_finished_or_no_cctor == 0)
                  {
                    func_?();
                  }
                  object = TypeInfo__ESWaitForBuildModeAvatar____c->static_fields->__9;
                  callbackFunction =
                       (ExecuteEvents_EventFunction_1_IEditModeController_ *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                             (Object *)object,
                             MethodInfo__ESWaitForBuildModeAvatar____c___Exit_b__4_0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  TypeInfo__ESWaitForBuildModeAvatar____c->static_fields->__9__4_0 =
                       callbackFunction;
                  func_?();
                }
                if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (root,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
                          );
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SpawnRolesManagerOnOnSpawnRoleActivated(Int32) */

void Assembly-CSharp.dll::ESWaitForBuildModeAvatar::
     ESWaitForBuildModeAvatar_SpawnRolesManagerOnOnSpawnRoleActivated
               (ESWaitForBuildModeAvatar *this,int32_t spawnRoleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    func_?(&
                    MethodInfo__ESWaitForBuildModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_
                   );
    func_?(&TypeInfo__MVLocalPlayerBuilder);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 == (MVLocalPlayer *)0x0) {
code_?:
    func_?();
  }
  else {
    this_00 = (pMVar1->fields)._.spawnRolesManager;
    this_01 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,
               MethodInfo__ESWaitForBuildModeAvatar__SpawnRolesManagerOnOnSpawnRoleActivated_int_,
               (MethodInfo *)0x0);
    if (this_00 == (SpawnRolesManager *)0x0) goto code_?;
    SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
              (this_00,(Action_1_Int32_ *)this_01,(MethodInfo *)0x0);
    this_02 = (MVLocalPlayerBuilder *)
              MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_02 == (MVLocalPlayerBuilder *)0x0) goto code_?;
    this_03 = TypeInfo__MVLocalPlayerBuilder;
    if (((this_02->klass->_1).naturalAligment < (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment
        ) || ((this_02->klass->_1).typeHierarchy
              [(TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment - 1] !=
              (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
    iVar2 = MVLocalPlayerBuilder::MVLocalPlayerBuilder_get_BuildModeSpawnRoleId
                      (this_02,(MethodInfo *)0x0);
    if (iVar2 == spawnRoleId) {
      (this->fields).defaultBuildModeSpawnRoleReady = 1;
      return;
    }
  }
  func_?();
  this_03 = (MVLocalPlayerBuilder__Class *)func_?();
  message = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1((Exception *)this_03,message,(MethodInfo *)0x0)
  ;
  func_?();
  func_?();
  this_02 = extraout_EDX;
code_?:
  func_?(this_02,this_03);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

