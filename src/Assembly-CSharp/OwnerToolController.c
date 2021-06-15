
/* MVPlayer GetPlayer(String) */

MVPlayer *
Assembly-CSharp.dll::OwnerToolController::OwnerToolController_GetPlayer
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

void Assembly-CSharp.dll::OwnerToolController::OwnerToolController_Initialize
               (OwnerToolController *this,String *playerNameString,MethodInfo *method)

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
    pTVar1 = (this->fields).text;
    pSVar2 = TM::TM__(StringLiteral_will_be_kicked_and_unable_to_rej,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (playerNameString,::StringLiteral__,pSVar2,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnKickClicked() */

void Assembly-CSharp.dll::OwnerToolController::OwnerToolController_OnKickClicked
               (OwnerToolController *this,MethodInfo *method)

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
    target = OwnerToolController_GetPlayer(userName,(MethodInfo *)0x0);
    if (target == (MVPlayer *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Player_is_not_present_in_session,(MethodInfo *)0x0);
      return;
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = (MVJetPack *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVJetPack *)0x0) {
      this_01 = MVJetPack::MVJetPack_get_Shield(this_00,(MethodInfo *)0x0);
      if (this_01 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RevokeEditRights
                  ((MVNetworkGame_OperationRequests *)this_01,target,(MethodInfo *)0x0);
        if (TypeInfo__OwnerOps->static_fields->__f__am_cache0 ==
            (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(
                                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                      );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_02,(Object *)0x0,
                     MethodInfo__OwnerOps___RevokeEditRightsAndKick_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          TypeInfo__OwnerOps->static_fields->__f__am_cache0 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)this_02;
        }
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__OwnerOps->static_fields->__f__am_cache0;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

