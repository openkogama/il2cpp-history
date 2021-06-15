
/* Boolean HandlePlayAvailable() */

bool Assembly-CSharp.dll::BriefingPlayButton::BriefingPlayButton_HandlePlayAvailable
               (BriefingPlayButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
               *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                           ((InventoryItemPreviewer *)this_01,(MethodInfo *)0x0);
    if (this_02 !=
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0) {
      pOVar1 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         (this_02,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      puVar2 = &UNK_?;
      this_03 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (this_03 != (MVLocalPlayer *)0x0) {
        fVar3 = MVLocalPlayer::MVLocalPlayer_get_RespawnTime(this_03,(MethodInfo *)0x0);
        if ((pOVar1 != (Object *)0x2) && (fVar3 <= (float)puVar2)) {
          return 0;
        }
        this_00 = (Selectable *)(this_03->fields)._.OnGoldAmountChange;
        if (this_00 != (Selectable *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                    (this_00,0,(MethodInfo *)0x0);
          if (*(char *)&(this_03->fields)._.OnLevelChanged == '\0') {
            pIVar4 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                               ((MethodInfo *)0x0);
            if (pIVar4 == (ILockCursorManager *)0x0) goto code_?;
            uStack5 = 1;
            uStack6 = 4;
            func_?();
          }
          return 1;
        }
      }
    }
  }
code_?:
  uStack5 = 0;
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::BriefingPlayButton::BriefingPlayButton_StartPlaying
               (BriefingPlayButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager((MethodInfo *)0x0)
  ;
  if (pIVar1 != (ILockCursorManager *)0x0) {
    func_?(3,TypeInfo__ILockCursorManager,pIVar1,1);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = (PrefabPool *)
              MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_00 != (PrefabPool *)0x0) {
      this_01 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                PrefabPool::PrefabPool_get_MVBatteryPrefab(this_00,(MethodInfo *)0x0);
      if (this_01 != (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0) {
        a = (SpawnRoleVariable_1_System_Int32_ *)
            System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
            Int32]::
            Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                      (this_01,(MethodInfo *)0x0);
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar2 != (MVLocalPlayer *)0x0) {
          iVar3 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(pMVar2,(MethodInfo *)0x0);
          bVar4 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                  SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Int32]::
                  SpawnRoleVariable_1_System_Int32__op_Inequality
                            (a,iVar3,
                             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__int_
                            );
          if (bVar4 != 0) {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
            this_02 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
            if (this_02 == (MVLocalPlayer *)0x0) goto code_?;
            iVar3 = MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(this_02,(MethodInfo *)0x0);
            if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
            MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole(pMVar2,iVar3,(MethodInfo *)0x0);
          }
          if ((this->fields)._._.shouldPop != 0) {
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
            if (TypeInfo__BriefingPlayButton->static_fields->__f__am_cache0 ==
                (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?(
                                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                          );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_03,(Object *)0x0,
                         MethodInfo__BriefingPlayButton___StartPlaying_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                        );
              TypeInfo__BriefingPlayButton->static_fields->__f__am_cache0 =
                   (ExecuteEvents_EventFunction_1_IUIStack_ *)this_03;
            }
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__BriefingPlayButton->static_fields->__f__am_cache0;
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (root,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pIVar5 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
            if (pIVar5 == (IPlayModeUI *)0x0) goto code_?;
            func_?(4,TypeInfo__IPlayModeUI,pIVar5,0);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <StartPlaying>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BriefingPlayButton::BriefingPlayButton__StartPlaying_m__0
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,handler);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

