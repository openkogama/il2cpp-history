
/* MVPlayer GetPlayer(String) */

MVPlayer *
Assembly-CSharp.dll::AdminToolController::AdminToolController_GetPlayer
          (String *userName,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_4 = (MVPlayer *)0x0;
  func_?();
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this != (MVAvatar *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    this_00 = MVAvatar::MVAvatar_get_Shield(this,(MethodInfo *)0x0);
    if ((this_00 != (MVRuntimeDataVariableClampedFloat *)0x0) &&
       (this_01 = MVPlayerContainer::MVPlayerContainer_get_Values
                            ((MVPlayerContainer *)this_00,(MethodInfo *)0x0),
       this_01 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                  *)&stack0xffffffac,
                 (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                 this_01,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                );
      uStack_1 = 0;
      do {
        cVar5 = func_?();
        if (cVar5 == '\0') {
          iVar6 = 0x5e;
          goto code_?;
        }
        pMVar7 = (MVPlayer *)func_?();
        if ((pMVar7 == (MVPlayer *)0x0) ||
           (iVar8 = GamePointGainEffect::GamePointGainEffect_get_ID
                              ((GamePointGainEffect *)pMVar7,method_00), iVar8 == 0))
        goto code_?;
        method_00 = *(MethodInfo **)(iVar8 + 0xc);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        bVar9 = mscorlib.dll::System::String::String_op_Equality
                          ((String *)method_00,userName,(MethodInfo *)0x0);
      } while (bVar9 == 0);
      iVar6 = 0x60;
      pMStack_4 = pMVar7;
code_?:
      uStack_1 = 0xffffffff;
      func_?();
      if (iVar6 != 0x60) {
        *unaff_FS_OFFSET = uStack_3;
        return (MVPlayer *)0x0;
      }
      *unaff_FS_OFFSET = uStack_3;
      return pMStack_4;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  pMVar7 = (MVPlayer *)(*pcVar10)();
  return pMVar7;
}


/* Void Initialize(String) */

void Assembly-CSharp.dll::AdminToolController::AdminToolController_Initialize
               (AdminToolController *this,String *playerNameString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playerName;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,playerNameString,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    this_00 = (this->fields).presetBansDropdown;
    if (this_00 != (Dropdown *)0x0) {
      this_02 = (UnityEvent_1_System_String_ *)
                CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)this_00,(MethodInfo *)0x0);
      this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_03,(Object *)this,
                 MethodInfo__AdminToolController__OnDefaultBanDropdownChanged_int_,
                 MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                );
      if (this_02 != (UnityEvent_1_System_String_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::String]::
        UnityEvent_1_System_String__AddListener
                  (this_02,(UnityAction_1_System_String_ *)this_03,
                   MethodInfo__UnityEngine__Events__UnityEvent<int>__AddListener_UnityEngine__Events__UnityAction<int>_
                  );
        this_01 = (this->fields).ownerKickButton;
        if (this_01 != (Button *)0x0) {
          this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this_01,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
          if (this_04 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_04,MVar2 == MVGameMode__Enum_Edit,(MethodInfo *)0x0);
            AdminToolController_OnDefaultBanDropdownChanged(this,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsBanFieldsValid() */

bool Assembly-CSharp.dll::AdminToolController::AdminToolController_IsBanFieldsValid
               (AdminToolController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  pIVar2 = (this->fields).reason;
  if (pIVar2 != (InputField *)0x0) {
    pSVar3 = (String *)
             TriggerCube::TriggerCube_get_InputSignalReceiver
                       ((TriggerCube *)pIVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar4 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar3,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      pIVar2 = (this->fields).duration;
      if (pIVar2 == (InputField *)0x0) goto code_?;
      pSVar3 = (String *)
               TriggerCube::TriggerCube_get_InputSignalReceiver
                         ((TriggerCube *)pIVar2,(MethodInfo *)0x0);
      bVar4 = mscorlib.dll::System::Int32::Int32_TryParse
                        (pSVar3,(int32_t *)&puStack_1,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return 1;
      }
    }
    return 0;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Void OnBanClicked() */

void Assembly-CSharp.dll::AdminToolController::AdminToolController_OnBanClicked
               (AdminToolController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = this;
  pTVar1 = (this->fields).playerName;
  if (pTVar1 == (Text *)0x0) goto code_?;
  pSVar2 = (String *)
           (*(code *)(pTVar1->klass->vtable).get_text.method)
                     (pTVar1,(pTVar1->klass->vtable).set_text.methodPtr);
  if ((((uint)(TypeInfo__AdminToolController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AdminToolController->_1).cctor_started == 0)) {
    func_?(TypeInfo__AdminToolController);
  }
  pMVar3 = AdminToolController_GetPlayer(pSVar2,(MethodInfo *)0x0);
  if (pMVar3 == (MVPlayer *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Player_non_existant_in_game,(MethodInfo *)0x0);
    return;
  }
  pDVar4 = (this_01->fields).banDurationMultiplier;
  if (pDVar4 == (Dropdown *)0x0) goto code_?;
  pLVar5 = UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_options
                      (pDVar4,(MethodInfo *)0x0);
  pPVar6 = (PrefabPool *)(this_01->fields).banDurationMultiplier;
  if (pPVar6 == (PrefabPool *)0x0) goto code_?;
  pOVar7 = PrefabPool::PrefabPool_get_MVSmokePrefab(pPVar6,(MethodInfo *)0x0);
  if (pLVar5 == (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0) goto code_?;
  pCVar8 = (Collection_1_VoxelHit_ *)
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
            IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar5,
                       (int32_t)pOVar7,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                      );
  if (pCVar8 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
  pSVar2 = (String *)
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items(pCVar8,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar9 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar2,StringLiteral_Expel,(MethodInfo *)0x0);
  if (bVar9 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar10 = (MVJetPack *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar10 == (MVJetPack *)0x0) goto code_?;
    pMVar11 = MVJetPack::MVJetPack_get_Shield(pMVar10,(MethodInfo *)0x0);
    pIVar12 = (this_01->fields).reason;
    if (pIVar12 == (InputField *)0x0) goto code_?;
    pSVar2 = (String *)
             TriggerCube::TriggerCube_get_InputSignalReceiver
                       ((TriggerCube *)pIVar12,(MethodInfo *)0x0);
    if (pMVar11 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Expel
              ((MVNetworkGame_OperationRequests *)pMVar11,pMVar3,pSVar2,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this_01,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__AdminToolController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AdminToolController->_1).cctor_started == 0)) {
      func_?();
    }
    if (TypeInfo__AdminToolController->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar13 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar13,(Object *)0x0,
                 MethodInfo__AdminToolController___OnBanClicked_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__AdminToolController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AdminToolController->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__AdminToolController->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar13;
    }
    if ((((uint)(TypeInfo__AdminToolController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AdminToolController->_1).cctor_started == 0)) {
      func_?();
    }
    callbackFunction = TypeInfo__AdminToolController->static_fields->__f__am_cache0;
    goto code_?;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar12 = (this_01->fields).reason;
  this = (AdminToolController *)0x0;
  if (pIVar12 == (InputField *)0x0) goto code_?;
  pSVar2 = (String *)
           TriggerCube::TriggerCube_get_InputSignalReceiver((TriggerCube *)pIVar12,(MethodInfo *)0x0)
  ;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar9 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar2,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
  if (bVar9 == 0) {
    pIVar12 = (this_01->fields).duration;
    if (pIVar12 == (InputField *)0x0) goto code_?;
    pSVar2 = (String *)
             TriggerCube::TriggerCube_get_InputSignalReceiver
                       ((TriggerCube *)pIVar12,(MethodInfo *)0x0);
    bVar9 = mscorlib.dll::System::Int32::Int32_TryParse(pSVar2,(int32_t *)&this,(MethodInfo *)0x0);
    if (bVar9 != 0) {
      bVar14 = true;
      goto code_?;
    }
  }
  else {
    bVar14 = false;
code_?:
    if (bVar14) {
      pIVar12 = (this_01->fields).duration;
      if (pIVar12 == (InputField *)0x0) goto code_?;
      pSVar2 = (String *)
               TriggerCube::TriggerCube_get_InputSignalReceiver
                         ((TriggerCube *)pIVar12,(MethodInfo *)0x0);
      this = (AdminToolController *)
             mscorlib.dll::System::Int32::Int32_Parse_3(pSVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__AdminToolController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AdminToolController->_1).cctor_started == 0)) {
        func_?(TypeInfo__AdminToolController);
      }
      this_00 = TypeInfo__AdminToolController->static_fields->durationMultiplier;
      pDVar4 = (this_01->fields).banDurationMultiplier;
      if (pDVar4 == (Dropdown *)0x0) goto code_?;
      pLVar5 = UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_options
                          (pDVar4,(MethodInfo *)0x0);
      pPVar6 = (PrefabPool *)(this_01->fields).banDurationMultiplier;
      if (pPVar6 == (PrefabPool *)0x0) goto code_?;
      pOVar7 = PrefabPool::PrefabPool_get_MVSmokePrefab(pPVar6,(MethodInfo *)0x0);
      if (pLVar5 == (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0) goto code_?;
      pCVar8 = (Collection_1_VoxelHit_ *)
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar5,
                           (int32_t)pOVar7,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                          );
      if (pCVar8 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
      pMVar3 = (MVPlayer *)&UNK_?;
      pIVar15 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items(pCVar8,(MethodInfo *)0x0);
      if (this_00 == (Dictionary_2_System_String_System_Int32_ *)0x0) goto code_?;
      this = (AdminToolController *)
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
      ;
      iVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Int32]::Dictionary_2_System_Object_System_Int32__get_Item
                         ((Dictionary_2_System_Object_System_Int32_ *)this_00,(Object *)pIVar15,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                         );
      hours = iVar16 * (int)this;
      this = (AdminToolController *)0x8;
      args = (Object__Array *)func_?();
      if (args == (Object__Array *)0x0) goto code_?;
      func_?(args,StringLiteral_Banning_);
      if (args->max_length == 0) {
        uVar17 = func_?(0,0);
        func_?(uVar17);
code_?:
        uVar17 = func_?(0,0);
        func_?(uVar17);
code_?:
        uVar17 = func_?(0,0);
        func_?(uVar17);
code_?:
        uVar17 = func_?(0,0);
        func_?(uVar17);
code_?:
        uVar17 = func_?(0,0);
        func_?(uVar17);
code_?:
        uVar17 = func_?(0,0);
        func_?(uVar17);
code_?:
        uVar17 = func_?(0,0);
        func_?(uVar17);
      }
      else {
        args->vector[0] = (Object *)StringLiteral_Banning_;
        pTVar1 = (this_01->fields).playerName;
        if (pTVar1 == (Text *)0x0) goto code_?;
        pOVar18 = (Object *)
                  (*(code *)(pTVar1->klass->vtable).get_text.method)
                            (pTVar1,(pTVar1->klass->vtable).set_text.methodPtr);
        func_?(args,pOVar18);
        if (args->max_length < 2) goto code_?;
        args->vector[1] = pOVar18;
        func_?(args,::StringLiteral___);
        if (args->max_length < 3) goto code_?;
        args->vector[2] = (Object *)::StringLiteral___;
        pOVar18 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
        func_?(args,pOVar18);
        if (args->max_length < 4) goto code_?;
        args->vector[3] = pOVar18;
        func_?(args,::StringLiteral__);
        if (args->max_length < 5) goto code_?;
        args->vector[4] = (Object *)::StringLiteral__;
        pDVar4 = (this_01->fields).banDurationMultiplier;
        if (pDVar4 == (Dropdown *)0x0) goto code_?;
        pLVar5 = UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_options
                            (pDVar4,(MethodInfo *)0x0);
        pPVar6 = (PrefabPool *)(this_01->fields).banDurationMultiplier;
        if (pPVar6 == (PrefabPool *)0x0) goto code_?;
        pOVar7 = PrefabPool::PrefabPool_get_MVSmokePrefab(pPVar6,(MethodInfo *)0x0);
        if (pLVar5 == (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0) goto code_?;
        pCVar8 = (Collection_1_VoxelHit_ *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar5,
                             (int32_t)pOVar7,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                            );
        if (pCVar8 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
        pIVar15 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items(pCVar8,(MethodInfo *)0x0);
        func_?(args,pIVar15);
        if (args->max_length < 6) goto code_?;
        args->vector[5] = (Object *)pIVar15;
        func_?(args,StringLiteral__for__);
        if (args->max_length < 7) goto code_?;
        args->vector[6] = (Object *)StringLiteral__for__;
        pIVar12 = (this_01->fields).reason;
        if (pIVar12 == (InputField *)0x0) goto code_?;
        pOVar18 = (Object *)
                  TriggerCube::TriggerCube_get_InputSignalReceiver
                            ((TriggerCube *)pIVar12,(MethodInfo *)0x0);
        func_?(args,pOVar18);
        if (7 < args->max_length) {
          args->vector[7] = pOVar18;
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar2 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)pSVar2,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar10 = (MVJetPack *)
                    MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar10 != (MVJetPack *)0x0) {
            pMVar11 = MVJetPack::MVJetPack_get_Shield(pMVar10,(MethodInfo *)0x0);
            pIVar12 = (this_01->fields).reason;
            if (pIVar12 != (InputField *)0x0) {
              pSVar2 = (String *)
                       TriggerCube::TriggerCube_get_InputSignalReceiver
                                 ((TriggerCube *)pIVar12,(MethodInfo *)0x0);
              if (pMVar11 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Ban_1
                          ((MVNetworkGame_OperationRequests *)pMVar11,hours,pMVar3,pSVar2,
                           (MethodInfo *)0x0);
                root = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_01,(MethodInfo *)0x0);
                if (TypeInfo__AdminToolController->static_fields->__f__am_cache1 ==
                    (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                  pUVar13 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar13,(Object *)0x0,
                             MethodInfo__AdminToolController___OnBanClicked_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             ,
                             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                            );
                  if ((((uint)(TypeInfo__AdminToolController->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__AdminToolController->_1).cctor_started == 0)) {
                    func_?();
                  }
                  TypeInfo__AdminToolController->static_fields->__f__am_cache1 =
                       (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar13;
                }
                if ((((uint)(TypeInfo__AdminToolController->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__AdminToolController->_1).cctor_started == 0)) {
                  func_?();
                }
                callbackFunction = TypeInfo__AdminToolController->static_fields->__f__am_cache1;
code_?:
                if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                            methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy_63
                          (root,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)callbackFunction,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                return;
              }
            }
          }
          goto code_?;
        }
      }
      uVar17 = func_?(0,0);
      func_?(uVar17);
      goto code_?;
    }
  }
  pIVar12 = (this_01->fields).duration;
  if (pIVar12 != (InputField *)0x0) {
    pSVar2 = (String *)
             TriggerCube::TriggerCube_get_InputSignalReceiver
                       ((TriggerCube *)pIVar12,(MethodInfo *)0x0);
    pIVar12 = (this_01->fields).reason;
    if (pIVar12 != (InputField *)0x0) {
      str2 = (String *)
             TriggerCube::TriggerCube_get_InputSignalReceiver
                       ((TriggerCube *)pIVar12,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar2,::StringLiteral__,str2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar2,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Invalid_admin_fields__Specify_re,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void OnDefaultBanDropdownChanged(Int32) */

void Assembly-CSharp.dll::AdminToolController::AdminToolController_OnDefaultBanDropdownChanged
               (AdminToolController *this,int32_t option,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).presetBansDropdown;
  if (((pDVar1 != (Dropdown *)0x0) &&
      (pLVar2 = UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_options
                          (pDVar1,(MethodInfo *)0x0),
      pLVar2 != (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0)) &&
     (pCVar3 = (Collection_1_VoxelHit_ *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,option,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                         ), pCVar3 != (Collection_1_VoxelHit_ *)0x0)) {
    key = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
          Collection_1_VoxelHit__get_Items(pCVar3,(MethodInfo *)0x0);
    pIVar4 = (this->fields).reason;
    if ((((uint)(TypeInfo__AdminToolController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AdminToolController->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar5 = TypeInfo__AdminToolController->static_fields->defaultBanLookup;
    if (pDVar5 != (Dictionary_2_System_String_AdminToolController_DefaultBan_ *)0x0) {
      pAVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
               Object,AdminToolController+DefaultBan]::
               Dictionary_2_System_Object_AdminToolController_DefaultBan__get_Item
                         ((AdminToolController_DefaultBan *)&stack0xffffffe4,
                          (Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)pDVar5,
                          (Object *)key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__get_Item_System__String_
                         );
      value = pAVar6->BanReason;
      if (pIVar4 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                  (pIVar4,(String *)value,(MethodInfo *)0x0);
        pIVar4 = (this->fields).duration;
        pDVar5 = TypeInfo__AdminToolController->static_fields->defaultBanLookup;
        if (pDVar5 != (Dictionary_2_System_String_AdminToolController_DefaultBan_ *)0x0) {
          pAVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,AdminToolController+DefaultBan]::
                   Dictionary_2_System_Object_AdminToolController_DefaultBan__get_Item
                             ((AdminToolController_DefaultBan *)&stack0xffffffe4,
                              (Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)pDVar5,
                              (Object *)key,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__get_Item_System__String_
                             );
          value_00 = pAVar6->BanDuration;
          if (pIVar4 != (InputField *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                      (pIVar4,(String *)value_00,(MethodInfo *)0x0);
            pDVar5 = TypeInfo__AdminToolController->static_fields->defaultBanLookup;
            if (pDVar5 != (Dictionary_2_System_String_AdminToolController_DefaultBan_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,AdminToolController+DefaultBan]::
              Dictionary_2_System_Object_AdminToolController_DefaultBan__get_Item
                        ((AdminToolController_DefaultBan *)&stack0xffffffe4,
                         (Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)pDVar5,
                         (Object *)key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__get_Item_System__String_
                        );
              pDVar1 = (this->fields).banDurationMultiplier;
              b = (String *)0x0;
              while( true ) {
                if ((pDVar1 == (Dropdown *)0x0) ||
                   (pLVar2 = UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_options
                                       (pDVar1,(MethodInfo *)0x0),
                   pLVar2 == (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0))
                goto code_?;
                pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                         Json::Serialization::JsonProperty]::
                         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                    pLVar2,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Count__
                                   );
                if ((int)pOVar7 <= (int)b) {
                  return;
                }
                pDVar1 = (this->fields).banDurationMultiplier;
                if (((pDVar1 == (Dropdown *)0x0) ||
                    (pLVar2 = UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_options
                                        (pDVar1,(MethodInfo *)0x0),
                    pLVar2 == (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0)) ||
                   (pCVar3 = (Collection_1_VoxelHit_ *)
                             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                             EventSystems::IEventSystemHandler]::
                             List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                        pLVar2,(int32_t)b,
                                        MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                                       ), pCVar3 == (Collection_1_VoxelHit_ *)0x0))
                goto code_?;
                a = (String *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items(pCVar3,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  func_?();
                }
                bVar8 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
                pDVar1 = (this->fields).banDurationMultiplier;
                if (bVar8 != 0) break;
                b = (String *)((int)&b->klass + 1);
              }
              if (pDVar1 != (Dropdown *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_set_value
                          (pDVar1,(int32_t)b,(MethodInfo *)0x0);
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnKickClicked() */

void Assembly-CSharp.dll::AdminToolController::AdminToolController_OnKickClicked
               (AdminToolController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playerName;
  if (pTVar1 != (Text *)0x0) {
    pSVar2 = (String *)
             (*(code *)(pTVar1->klass->vtable).get_text.method)
                       (pTVar1,(pTVar1->klass->vtable).set_text.methodPtr);
    if ((((uint)(TypeInfo__AdminToolController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AdminToolController->_1).cctor_started == 0)) {
      func_?(TypeInfo__AdminToolController);
    }
    target = AdminToolController_GetPlayer(pSVar2,(MethodInfo *)0x0);
    if (target == (MVPlayer *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Player_non_existant_in_game,(MethodInfo *)0x0);
      return;
    }
    pTVar1 = (this->fields).playerName;
    if (pTVar1 != (Text *)0x0) {
      pSVar2 = (String *)
               (*(code *)(pTVar1->klass->vtable).get_text.method)
                         (pTVar1,(pTVar1->klass->vtable).set_text.methodPtr);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar2 = mscorlib.dll::System::String::String_Concat_2
                         (pSVar2,StringLiteral__kicked_by_admin_,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_01 = (MVJetPack *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_01 != (MVJetPack *)0x0) {
        this_02 = MVJetPack::MVJetPack_get_Shield(this_01,(MethodInfo *)0x0);
        this_00 = (this->fields).reason;
        if (this_00 != (InputField *)0x0) {
          pSVar2 = (String *)
                   TriggerCube::TriggerCube_get_InputSignalReceiver
                             ((TriggerCube *)this_00,(MethodInfo *)0x0);
          if (this_02 != (MVRuntimeDataVariableClampedFloat *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Kick
                      ((MVNetworkGame_OperationRequests *)this_02,target,pSVar2,(MethodInfo *)0x0);
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__AdminToolController->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__AdminToolController->_1).cctor_started == 0)) {
              func_?();
            }
            if (TypeInfo__AdminToolController->static_fields->__f__am_cache2 ==
                (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_03,(Object *)0x0,
                         MethodInfo__AdminToolController___OnKickClicked_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                        );
              if ((((uint)(TypeInfo__AdminToolController->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__AdminToolController->_1).cctor_started == 0)) {
                func_?();
              }
              TypeInfo__AdminToolController->static_fields->__f__am_cache2 =
                   (ExecuteEvents_EventFunction_1_IUIStack_ *)this_03;
            }
            if ((((uint)(TypeInfo__AdminToolController->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__AdminToolController->_1).cctor_started == 0)) {
              func_?();
            }
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__AdminToolController->static_fields->__f__am_cache2;
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (root,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnRevokeEditRightsClicked() */

void Assembly-CSharp.dll::AdminToolController::AdminToolController_OnRevokeEditRightsClicked
               (AdminToolController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playerName;
  if (pTVar1 != (Text *)0x0) {
    userName = (String *)
               (*(code *)(pTVar1->klass->vtable).get_text.method)
                         (pTVar1,(pTVar1->klass->vtable).set_text.methodPtr);
    if ((((uint)(TypeInfo__AdminToolController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AdminToolController->_1).cctor_started == 0)) {
      func_?(TypeInfo__AdminToolController);
    }
    player = AdminToolController_GetPlayer(userName,(MethodInfo *)0x0);
    if (player == (MVPlayer *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Player_is_not_present_in_session,(MethodInfo *)0x0);
      return;
    }
    OwnerOps::OwnerOps_RevokeEditRightsAndKick((MonoBehaviour *)this,player,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <OnBanClicked>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdminToolController::AdminToolController__OnBanClicked_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,2);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnBanClicked>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdminToolController::AdminToolController__OnBanClicked_m__1
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,2);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnKickClicked>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdminToolController::AdminToolController__OnKickClicked_m__2
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,2);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* AdminToolController() */

void Assembly-CSharp.dll::AdminToolController::AdminToolController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_String_System_Int32_ *)
         func_?(TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
            );
  if (this != (Dictionary_2_System_String_System_Int32_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
    Dictionary_2_System_Object_System_Int32__Add
              ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_Hours,1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
    Dictionary_2_System_Object_System_Int32__Add
              ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_Days,0x18,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
    Dictionary_2_System_Object_System_Int32__Add
              ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_Weeks,0xa8,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
              );
    TypeInfo__AdminToolController->static_fields->durationMultiplier = this;
    this_00 = (Dictionary_2_System_String_AdminToolController_DefaultBan_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Dictionary__
              );
    if (this_00 != (Dictionary_2_System_String_AdminToolController_DefaultBan_ *)0x0) {
      value_00.BanDuration = StringLiteral__7;
      value_00.BanReason =
           (String *)
           MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Add_System__String__AdminToolController__DefaultBan_
      ;
      value_00.BanDurationFormat = StringLiteral_Days;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Object,AdminToolController+DefaultBan]::
      Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
                ((Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)this_00,
                 (Object *)StringLiteral_Cheating,value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Add_System__String__AdminToolController__DefaultBan_
                );
      method = (MethodInfo *)StringLiteral_Hours;
      pSVar1 = StringLiteral__24;
      AVar2.BanReason = StringLiteral_You_are_banned_for_inappropriate;
      AVar2 = (AdminToolController_DefaultBan)CONCAT84(uVar3,AVar2.BanReason);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Object,AdminToolController+DefaultBan]::
      Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
                ((Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)this_00,
                 (Object *)StringLiteral_Abusive_chat,AVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Add_System__String__AdminToolController__DefaultBan_
                );
      AVar2.BanDuration = StringLiteral__2;
      AVar2.BanReason = StringLiteral_You_are_banned_for_sexual_behavi;
      AVar2.BanDurationFormat = StringLiteral_Weeks;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Object,AdminToolController+DefaultBan]::
      Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
                ((Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)this_00,
                 (Object *)StringLiteral_Sexual_behavior,AVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Add_System__String__AdminToolController__DefaultBan_
                );
      value.BanDuration = StringLiteral__2;
      value.BanReason = StringLiteral_You_are_banned_for_pretending_to;
      value.BanDurationFormat = StringLiteral_Weeks;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Object,AdminToolController+DefaultBan]::
      Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
                ((Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)this_00,
                 (Object *)StringLiteral_Admin_impersonation,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Add_System__String__AdminToolController__DefaultBan_
                );
      TypeInfo__AdminToolController->static_fields->defaultBanLookup = this_00;
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

