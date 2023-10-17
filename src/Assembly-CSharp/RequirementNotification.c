
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_Initialize
               (RequirementNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__ForEach_System__Action<UnityEngine::GameObject>_
                   );
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&
                    MethodInfo__RequirementNotification____c___Initialize_b__11_0_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__RequirementNotification____c);
    func_?(&StringLiteral_starAmount);
    func_?(&StringLiteral_gameCoinAmount);
    func_?(&StringLiteral_levelAmount);
    func_?(&StringLiteral_RequiredRank);
    func_?(&StringLiteral_team);
    cRam_? = '\x01';
  }
  pEVar1 = (ExecuteEvents_EventFunction_1_System_Object_ *)data;
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_Reset
            ((LogicObjectManager *)this,(MethodInfo *)data);
  pLVar2 = (this->fields).PanelsToDestroy;
  if ((TypeInfo__RequirementNotification____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RequirementNotification____c);
  }
  this_03 = TypeInfo__RequirementNotification____c->static_fields->__9__11_0;
  if (this_03 == (Action_1_UnityEngine_GameObject_ *)0x0) {
    if ((TypeInfo__RequirementNotification____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RequirementNotification____c);
    }
    data = (Dictionary_2_System_Object_System_Object_ *)
           TypeInfo__RequirementNotification____c->static_fields->__9;
    this_03 = (Action_1_UnityEngine_GameObject_ *)
              func_?(TypeInfo__System__Action<UnityEngine::GameObject>);
    if (this_03 != (Action_1_UnityEngine_GameObject_ *)0x0) {
      mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                ((Action_1_Object_ *)this_03,(Object *)data,
                 MethodInfo__RequirementNotification____c___Initialize_b__11_0_UnityEngine__GameObject_
                 ,(MethodInfo *)0x0);
      TypeInfo__RequirementNotification____c->static_fields->__9__11_0 = this_03;
      func_?(&TypeInfo__RequirementNotification____c->static_fields->__9__11_0,this_03);
      goto code_?;
    }
  }
  else {
code_?:
    if (pLVar2 != (List_1_UnityEngine_GameObject_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__ForEach
                ((List_1_System_Object_ *)pLVar2,(Action_1_Object_ *)this_03,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__ForEach_System__Action<UnityEngine::GameObject>_
                );
      pLVar2 = (this->fields).PanelsToDestroy;
      if (pLVar2 != (List_1_UnityEngine_GameObject_ *)0x0) {
        iVar3 = (pLVar2->fields)._size;
        piVar4 = &(pLVar2->fields)._version;
        *piVar4 = *piVar4 + 1;
        (pLVar2->fields)._size = 0;
        if (0 < iVar3) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar2->fields)._items,0,iVar3,(MethodInfo *)0x0);
        }
        in_stack_5 = (int)&data + 3;
        method = (MethodInfo *)TypeInfo__System__Byte;
        data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
        pMVar6 = (MethodInfo *)func_?();
        if (pEVar1 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
          pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              ((Dictionary_2_System_Object_System_Object_ *)pEVar1,
                               (Object *)pMVar6,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          uVar8 = CONCAT44(TypeInfo__System__Int32,pOVar7);
          if (pOVar7 != (Object *)0x0) {
            if ((pOVar7->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            piVar4 = (int32_t *)func_?(pOVar7);
            iVar9 = *piVar4;
            this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (((this_04 != (MVWorldObjectClientManager *)0x0) &&
                (pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                     (this_04,iVar9,(MethodInfo *)0x0),
                pMVar10 != (MVWorldObject *)0x0)) &&
               (pMVar11 = (MethodInfo *)(pMVar10->fields).data, pMVar11 != (MethodInfo *)0x0)) {
              method_00 = (MethodInfo *)StringLiteral_levelAmount;
              bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,GUILoginHandler+PlanetData]::
                      Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)pMVar11,
                                 (Object *)StringLiteral_levelAmount,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar12 == 0) {
code_?:
                pDVar13 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                         (pMVar10->fields).data;
                if (pDVar13 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
                  bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,GUILoginHandler+PlanetData]::
                          Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                    (pDVar13,(Object *)StringLiteral_gameCoinAmount,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                    );
                  if (bVar12 == 0) {
code_?:
                    pDVar13 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                             (pMVar10->fields).data;
                    if (pDVar13 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
                      bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,GUILoginHandler+PlanetData]::
                              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                        (pDVar13,(Object *)StringLiteral_starAmount,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                        );
                      if (bVar12 == 0) {
code_?:
                        pDVar13 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                                 (pMVar10->fields).data;
                        if (pDVar13 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
                        {
                          bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,GUILoginHandler+PlanetData]::
                                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                            (pDVar13,(Object *)StringLiteral_team,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                            );
                          if (bVar12 == 0) {
code_?:
                            pDVar13 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                                     (pMVar10->fields).data;
                            if (pDVar13 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                                          0x0) {
                              bVar12 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Object,GUILoginHandler+PlanetData]::
                                      Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                                (pDVar13,(Object *)StringLiteral_RequiredRank,
                                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                                );
                              if (bVar12 == 0) {
                                return;
                              }
                              pDVar14 = (pMVar10->fields).data;
                              if (pDVar14 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                                pMVar11 = (MethodInfo *)
                                          mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Object,System::Object]::
                                          Dictionary_2_System_Object_System_Object__get_Item
                                                    (pDVar14,(Object *)StringLiteral_RequiredRank,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                uVar8 = CONCAT44(TypeInfo__System__Int32,pMVar11);
                                if (pMVar11 != (MethodInfo *)0x0) {
                                  if ((((Object__Class *)pMVar11->methodPointer)->_0).element_class
                                      != (TypeInfo__System__Int32->_0).element_class)
                                  goto code_?;
                                  data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                                  method = pMVar11;
                                  puVar15 = (undefined1 *)func_?();
                                  uVar16 = *puVar15;
                                  if (cRam_? == '\0') {
                                    method = (MethodInfo *)
                                             &
                                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                    ;
                                    data = (Dictionary_2_System_Object_System_Object_ *)
                                           &UNK_?;
                                    func_?();
                                    data = (Dictionary_2_System_Object_System_Object_ *)
                                           &
                                           bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                    ;
                                    func_?();
                                    func_?();
                                    func_?();
                                    func_?(&
                                                  TypeInfo__RequirementNotification____c__DisplayClass16_0
                                                  );
                                    cRam_? = '\x01';
                                  }
                                  method = (MethodInfo *)
                                           TypeInfo__RequirementNotification____c__DisplayClass16_0;
                                  data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                                  pOVar7 = (Object *)func_?();
                                  if (pOVar7 != (Object *)0x0) {
                                    mscorlib.dll::System::ThrowHelper::
                                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                              (pOVar7,ExceptionArgument__Enum_obj,pMVar6);
                                    *(undefined1 *)&pOVar7[1].klass = uVar16;
                                    pDVar14 = (Dictionary_2_System_Object_System_Object_ *)
                                              RequirementNotification_InstantiatePanel
                                                        (this_02,(this_02->fields).GameTierPanel,
                                                         (MethodInfo *)0x0);
                                    *(undefined1 *)&pOVar7[2].klass = 0;
                                    data = pDVar14;
                                    if (cRam_? == '\0') {
                                      func_?(&TypeInfo__GamePassesManager);
                                      cRam_? = '\x01';
                                    }
                                    if (TypeInfo__GamePassesManager->static_fields->
                                        _GamePassesActive_k__BackingField != 0) {
                                      bVar17 = *(byte *)&pOVar7[1].klass;
                                      if (cRam_? == '\0') {
                                        func_?(&TypeInfo__GamePassesManager);
                                        cRam_? = '\x01';
                                      }
                                      pPVar18 = TypeInfo__GamePassesManager->static_fields->
                                               playerPlanetData;
                                      if (pPVar18 == (PlayerPlanetData *)0x0) goto code_?;
                                      *(bool *)&pOVar7[2].klass =
                                           bVar17 <= (pPVar18->fields).gamePassTier;
                                      pDVar14 = data;
                                    }
                                    if (*(char *)&pOVar7[2].klass == '\0') {
                                      pSVar19 = (this_02->fields).OffSprite;
                                    }
                                    else {
                                      pSVar19 = (this_02->fields).OnSprite;
                                    }
                                    pOVar7[1].monitor = (MonitorData *)pSVar19;
                                    func_?(&pOVar7[1].monitor,pSVar19);
                                    pEVar1 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                              func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                                  );
                                    if (pEVar1 !=
                                        (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Events::
                                      UnityAction`2[System::Object,System::Object]::
                                      UnityAction_2_System_Object_System_Object___ctor
                                                ((UnityAction_2_System_Object_System_Object_ *)
                                                 pEVar1,pOVar7,
                                                 MethodInfo__RequirementNotification____c__DisplayClass16_0___ShowGameTierRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                                 ,(MethodInfo *)0x0);
                                      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                                      ExecuteEvents_Execute_18
                                                ((GameObject *)pDVar14,(BaseEventData *)0x0,pEVar1,
                                                 bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                                );
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          else {
                            pDVar14 = (pMVar10->fields).data;
                            if (pDVar14 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                              pMVar6 = (MethodInfo *)
                                        mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Object,System::Object]::
                                        Dictionary_2_System_Object_System_Object__get_Item
                                                  (pDVar14,(Object *)StringLiteral_team,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                              uVar8 = CONCAT44(TypeInfo__MV__WorldObject__MVTeam,pMVar6);
                              if (pMVar6 != (MethodInfo *)0x0) {
                                if ((((Object__Class *)pMVar6->methodPointer)->_0).element_class !=
                                    (TypeInfo__MV__WorldObject__MVTeam->_0).element_class)
                                goto code_?;
                                data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                                method = pMVar6;
                                puVar20 = (undefined4 *)func_?();
                                this = (RequirementNotification *)*puVar20;
                                if (cRam_? == '\0') {
                                  method = (MethodInfo *)
                                           &
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                  ;
                                  data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                                  func_?();
                                  data = (Dictionary_2_System_Object_System_Object_ *)
                                         &
                                         bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                  ;
                                  func_?();
                                  this = (RequirementNotification *)
                                         &TypeInfo__UnityEngine__EventSystems__ExecuteEvents;
                                  func_?();
                                  func_?();
                                  func_?(&
                                                  TypeInfo__RequirementNotification____c__DisplayClass14_0
                                                 );
                                  cRam_? = '\x01';
                                }
                                method = (MethodInfo *)
                                         TypeInfo__RequirementNotification____c__DisplayClass14_0;
                                data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                                pOVar7 = (Object *)func_?();
                                if (pOVar7 != (Object *)0x0) {
                                  mscorlib.dll::System::ThrowHelper::
                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                            (pOVar7,ExceptionArgument__Enum_obj,pMVar11);
                                  pOVar7[1].klass = (Object__Class *)this;
                                  RequirementNotification_InstantiatePanel
                                            (this_02,(this_02->fields).TeamPanel,(MethodInfo *)0x0);
                                  pMVar21 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                      ((MethodInfo *)0x0);
                                  if ((pMVar21 != (MVNetworkGame *)0x0) &&
                                     (pMVar22 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                                          (pMVar21,(MethodInfo *)0x0),
                                     pMVar22 != (MVLocalPlayer *)0x0)) {
                                    if (pOVar7[1].klass ==
                                        (Object__Class *)(pMVar22->fields)._._Team_k__BackingField)
                                    {
                                      pMVar21 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                          ((MethodInfo *)0x0);
                                      if ((pMVar21 == (MVNetworkGame *)0x0) ||
                                         (this_01 = (pMVar21->fields).teamManager,
                                         this_01 == (MVTeamManager *)0x0)) goto code_?;
                                      iVar9 = MVTeamManager::MVTeamManager_TeamCount
                                                         (this_01,(MethodInfo *)0x0);
                                      bVar23 = iVar9 != 1;
                                    }
                                    else {
                                      bVar23 = false;
                                    }
                                    *(bool *)&pOVar7[2].klass = bVar23;
                                    if (bVar23 == false) {
                                      pSVar19 = (this_02->fields).OffSprite;
                                    }
                                    else {
                                      pSVar19 = (this_02->fields).OnSprite;
                                    }
                                    pOVar7[1].monitor = (MonitorData *)pSVar19;
                                    target_00 = (GameObject *)&pOVar7[1].monitor;
                                    func_?(target_00,pSVar19);
                                    pEVar1 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                              func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                                  );
                                    if (pEVar1 !=
                                        (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Events::
                                      UnityAction`2[System::Object,System::Object]::
                                      UnityAction_2_System_Object_System_Object___ctor
                                                ((UnityAction_2_System_Object_System_Object_ *)
                                                 pEVar1,pOVar7,
                                                 MethodInfo__RequirementNotification____c__DisplayClass14_0___ShowTeamRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                                 ,(MethodInfo *)0x0);
                                      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents
                                                  );
                                      }
                                      pMVar6 = 
                                      bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                      ;
                                      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                                      ExecuteEvents_Execute_18
                                                (target_00,(BaseEventData *)0x0,pEVar1,
                                                 bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                                );
                                      goto code_?;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        pDVar14 = (pMVar10->fields).data;
                        if (pDVar14 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                          pMVar6 = (MethodInfo *)
                                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Object,System::Object]::
                                    Dictionary_2_System_Object_System_Object__get_Item
                                              (pDVar14,(Object *)StringLiteral_starAmount,
                                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                              );
                          uVar8 = CONCAT44(TypeInfo__System__Int32,pMVar6);
                          if (pMVar6 != (MethodInfo *)0x0) {
                            if ((((Object__Class *)pMVar6->methodPointer)->_0).element_class !=
                                (TypeInfo__System__Int32->_0).element_class) goto code_?;
                            data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                            method = pMVar6;
                            puVar20 = (undefined4 *)func_?();
                            this = (RequirementNotification *)*puVar20;
                            if (cRam_? == '\0') {
                              method = (MethodInfo *)
                                       &
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                              ;
                              data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                              func_?();
                              data = (Dictionary_2_System_Object_System_Object_ *)
                                     &
                                     bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                              ;
                              func_?();
                              this = (RequirementNotification *)
                                     &TypeInfo__UnityEngine__EventSystems__ExecuteEvents;
                              func_?();
                              func_?();
                              func_?(&
                                              TypeInfo__RequirementNotification____c__DisplayClass13_0
                                             );
                              cRam_? = '\x01';
                            }
                            method = (MethodInfo *)
                                     TypeInfo__RequirementNotification____c__DisplayClass13_0;
                            data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                            pOVar7 = (Object *)func_?();
                            if (pOVar7 != (Object *)0x0) {
                              mscorlib.dll::System::ThrowHelper::
                              ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                        (pOVar7,ExceptionArgument__Enum_obj,method_00);
                              pOVar7[1].klass = (Object__Class *)this;
                              RequirementNotification_InstantiatePanel
                                        (this_02,(this_02->fields).StarPanel,(MethodInfo *)0x0);
                              pOVar24 = pOVar7[1].klass;
                              pMVar21 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                  ((MethodInfo *)0x0);
                              if ((pMVar21 != (MVNetworkGame *)0x0) &&
                                 (pMVar22 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                                      (pMVar21,(MethodInfo *)0x0),
                                 pMVar22 != (MVLocalPlayer *)0x0)) {
                                iVar9 = MVPlayer::MVPlayer_GetGameStat
                                                   ((MVPlayer *)pMVar22,
                                                    GameStatCounterType__Enum_Collectible,
                                                    (MethodInfo *)0x0);
                                *(bool *)&pOVar7[2].klass = (int)pOVar24 <= iVar9;
                                if (iVar9 < (int)pOVar24) {
                                  pSVar19 = (this_02->fields).OffSprite;
                                }
                                else {
                                  pSVar19 = (this_02->fields).OnSprite;
                                }
                                pOVar7[1].monitor = (MonitorData *)pSVar19;
                                func_?(&pOVar7[1].monitor);
                                target = 
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                ;
                                pEVar1 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                          func_?();
                                if (pEVar1 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
                                {
                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                  UnityAction`2[System::Object,System::Object]::
                                  UnityAction_2_System_Object_System_Object___ctor
                                            ((UnityAction_2_System_Object_System_Object_ *)pEVar1,
                                             pOVar7,
                                             MethodInfo__RequirementNotification____c__DisplayClass13_0___ShowStarRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                             ,(MethodInfo *)0x0);
                                  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                      cctor_finished_or_no_cctor == 0) {
                                    func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents
                                                  );
                                  }
                                  pMVar11 = (MethodInfo *)&UNK_?;
                                  pMVar6 = 
                                  bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                  ;
                                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                                  ExecuteEvents_Execute_18
                                            ((GameObject *)target,(BaseEventData *)0x0,pEVar1,
                                             bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                            );
                                  goto code_?;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    pDVar14 = (pMVar10->fields).data;
                    if (pDVar14 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                      pMVar6 = (MethodInfo *)
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Object,System::Object]::
                                Dictionary_2_System_Object_System_Object__get_Item
                                          (pDVar14,(Object *)StringLiteral_gameCoinAmount,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                          );
                      uVar8 = CONCAT44(TypeInfo__System__Int32,pMVar6);
                      if (pMVar6 != (MethodInfo *)0x0) {
                        if ((((Object__Class *)pMVar6->methodPointer)->_0).element_class !=
                            (TypeInfo__System__Int32->_0).element_class) goto code_?;
                        data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                        method = pMVar6;
                        puVar20 = (undefined4 *)func_?();
                        this = (RequirementNotification *)*puVar20;
                        if (cRam_? == '\0') {
                          method = (MethodInfo *)
                                   &
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                          ;
                          data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                          func_?();
                          data = (Dictionary_2_System_Object_System_Object_ *)
                                 &
                                 bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                          ;
                          func_?();
                          this = (RequirementNotification *)
                                 &TypeInfo__UnityEngine__EventSystems__ExecuteEvents;
                          func_?();
                          func_?();
                          func_?(&TypeInfo__RequirementNotification____c__DisplayClass12_0)
                          ;
                          cRam_? = '\x01';
                        }
                        method = (MethodInfo *)
                                 TypeInfo__RequirementNotification____c__DisplayClass12_0;
                        data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
                        pOVar7 = (Object *)func_?();
                        if (pOVar7 != (Object *)0x0) {
                          mscorlib.dll::System::ThrowHelper::
                          ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                    (pOVar7,ExceptionArgument__Enum_obj,(MethodInfo *)pEVar1);
                          pOVar7[1].klass = (Object__Class *)this;
                          RequirementNotification_InstantiatePanel
                                    (this_02,(this_02->fields).GamecoinPanel,(MethodInfo *)0x0);
                          pOVar24 = pOVar7[1].klass;
                          pMVar21 = MVGameControllerBase::MVGameControllerBase_get_Game
                                              ((MethodInfo *)0x0);
                          if ((pMVar21 != (MVNetworkGame *)0x0) &&
                             (this_00 = (pMVar21->fields)._GameCoinManager_k__BackingField,
                             this_00 != (MVGameCoinManager *)0x0)) {
                            iVar9 = MVGameCoinManager::MVGameCoinManager_get_GameCoinAmount
                                               (this_00,(MethodInfo *)0x0);
                            *(bool *)&pOVar7[2].klass = (int)pOVar24 <= iVar9;
                            if (iVar9 < (int)pOVar24) {
                              pSVar19 = (this_02->fields).OffSprite;
                            }
                            else {
                              pSVar19 = (this_02->fields).OnSprite;
                            }
                            pOVar7[1].monitor = (MonitorData *)pSVar19;
                            method_00 = (MethodInfo *)&pOVar7[1].monitor;
                            func_?(method_00,pSVar19);
                            pEVar1 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                      func_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                                  );
                            if (pEVar1 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System
                              ::Object,System::Object]::
                              UnityAction_2_System_Object_System_Object___ctor
                                        ((UnityAction_2_System_Object_System_Object_ *)pEVar1,
                                         pOVar7,
                                         MethodInfo__RequirementNotification____c__DisplayClass12_0___ShowGameCoinRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                         ,(MethodInfo *)0x0);
                              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                  cctor_finished_or_no_cctor == 0) {
                                func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                              }
                              pMVar11 = (MethodInfo *)&UNK_?;
                              pMVar6 = 
                              bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                              ;
                              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                              ExecuteEvents_Execute_18
                                        ((GameObject *)method_00,(BaseEventData *)0x0,pEVar1,
                                         bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                        );
                              goto code_?;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                pDVar14 = (pMVar10->fields).data;
                if (pDVar14 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,System::Object]::
                            Dictionary_2_System_Object_System_Object__get_Item
                                      (pDVar14,(Object *)StringLiteral_levelAmount,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                      );
                  uVar8 = CONCAT44(TypeInfo__System__Int32,pOVar7);
                  if (pOVar7 != (Object *)0x0) {
                    if ((pOVar7->klass->_0).element_class !=
                        (TypeInfo__System__Int32->_0).element_class) goto code_?;
                    puVar20 = (undefined4 *)func_?(pOVar7);
                    pOVar24 = (Object__Class *)*puVar20;
                    if (cRam_? == '\0') {
                      func_?(&
                                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                     );
                      func_?(&
                                      bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                     );
                      func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                      func_?(&
                                      MethodInfo__RequirementNotification____c__DisplayClass15_0___ShowLevelRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                     );
                      func_?(&TypeInfo__RequirementNotification____c__DisplayClass15_0);
                      cRam_? = '\x01';
                    }
                    pOVar7 = (Object *)
                              func_?(
                                             TypeInfo__RequirementNotification____c__DisplayClass15_0
                                             );
                    if (pOVar7 != (Object *)0x0) {
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                (pOVar7,ExceptionArgument__Enum_obj,method_00);
                      pOVar7[1].klass = pOVar24;
                      method_00 = (MethodInfo *)
                                  RequirementNotification_InstantiatePanel
                                            (this,(this->fields).LevelPanel,(MethodInfo *)0x0);
                      pOVar24 = pOVar7[1].klass;
                      pMVar21 = MVGameControllerBase::MVGameControllerBase_get_Game
                                          ((MethodInfo *)0x0);
                      if ((pMVar21 != (MVNetworkGame *)0x0) &&
                         (pMVar22 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                              (pMVar21,(MethodInfo *)0x0),
                         pMVar22 != (MVLocalPlayer *)0x0)) {
                        iVar3 = (pMVar22->fields)._.level;
                        *(bool *)&pOVar7[2].klass = (int)pOVar24 <= iVar3;
                        if (iVar3 < (int)pOVar24) {
                          pSVar19 = (this->fields).OffSprite;
                        }
                        else {
                          pSVar19 = (this->fields).OnSprite;
                        }
                        pOVar7[1].monitor = (MonitorData *)pSVar19;
                        func_?(&pOVar7[1].monitor,pSVar19);
                        pEVar1 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                  func_?(
                                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                                                 );
                        if (pEVar1 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                          Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                    ((UnityAction_2_System_Object_System_Object_ *)pEVar1,pOVar7,
                                     MethodInfo__RequirementNotification____c__DisplayClass15_0___ShowLevelRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                                     ,(MethodInfo *)0x0);
                          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                              cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                          }
                          pMVar11 = (MethodInfo *)&UNK_?;
                          pMVar6 = 
                          bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                          ;
                          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                          ExecuteEvents_Execute_18
                                    ((GameObject *)method_00,(BaseEventData *)0x0,pEVar1,
                                     bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                                    );
                          goto code_?;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar8 = func_?();
code_?:
  func_?(uVar8);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* GameObject InstantiatePanel(NotificationRequirementPanel) */

GameObject *
Assembly-CSharp.dll::RequirementNotification::RequirementNotification_InstantiatePanel
          (RequirementNotification *this,NotificationRequirementPanel *panel,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (panel != (NotificationRequirementPanel *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)panel,(MethodInfo *)0x0);
    this_00 = (this->fields).Layout;
    if (this_00 != (RectTransform *)0x0) {
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pGVar1 = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)pGVar1,parent,0,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                         );
      this_01 = (this->fields).PanelsToDestroy;
      if (this_01 != (List_1_UnityEngine_GameObject_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_01,(Object *)pGVar1,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                  );
        return pGVar1;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pGVar1 = (GameObject *)(*pcVar2)();
  return pGVar1;
}


/* Void ShowGameCoinRequirement(Int32) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowGameCoinRequirement
               (RequirementNotification *this,int32_t gameCoins,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                   );
    func_?(&
                    bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__RequirementNotification____c__DisplayClass12_0___ShowGameCoinRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RequirementNotification____c__DisplayClass12_0);
    cRam_? = '\x01';
  }
  target = (GameObject *)func_?(TypeInfo__RequirementNotification____c__DisplayClass12_0);
  if (target != (GameObject *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)target,ExceptionArgument__Enum_obj,unaff_EBX);
    (target->fields)._.m_CachedPtr = (void *)gameCoins;
    RequirementNotification_InstantiatePanel(this,(this->fields).GamecoinPanel,(MethodInfo *)0x0);
    pvVar1 = (target->fields)._.m_CachedPtr;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar2->fields)._GameCoinManager_k__BackingField,
       this_00 != (MVGameCoinManager *)0x0)) {
      iVar3 = MVGameCoinManager::MVGameCoinManager_get_GameCoinAmount(this_00,(MethodInfo *)0x0);
      *(bool *)&target[1].monitor = (int)pvVar1 <= iVar3;
      if (iVar3 < (int)pvVar1) {
        pGVar4 = (GameObject__Class *)(this->fields).OffSprite;
      }
      else {
        pGVar4 = (GameObject__Class *)(this->fields).OnSprite;
      }
      target[1].klass = pGVar4;
      func_?();
      functor = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      if (functor != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)functor,(Object *)target,
                   MethodInfo__RequirementNotification____c__DisplayClass12_0___ShowGameCoinRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18
                  (target,(BaseEventData *)0x0,functor,
                   bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowGameTierRequirement(GamePassTier) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowGameTierRequirement
               (RequirementNotification *this,GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                   );
    func_?(&
                    bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__RequirementNotification____c__DisplayClass16_0___ShowGameTierRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RequirementNotification____c__DisplayClass16_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__RequirementNotification____c__DisplayClass16_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    *(undefined1 *)&value[1].klass = (undefined1)tier;
    target = RequirementNotification_InstantiatePanel
                       (this,(this->fields).GameTierPanel,(MethodInfo *)0x0);
    *(undefined1 *)&value[2].klass = 0;
    pGVar1 = target;
    if (cRam_? == '\0') {
      pGVar1 = (GameObject *)&UNK_?;
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
      bVar2 = *(byte *)&value[1].klass;
      target = pGVar1;
      if (cRam_? == '\0') {
        target = (GameObject *)&UNK_?;
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar3 == (PlayerPlanetData *)0x0) goto code_?;
      *(bool *)&value[2].klass = bVar2 <= (pPVar3->fields).gamePassTier;
    }
    if (*(char *)&value[2].klass == '\0') {
      pSVar4 = (this->fields).OffSprite;
    }
    else {
      pSVar4 = (this->fields).OnSprite;
    }
    value[1].monitor = (MonitorData *)pSVar4;
    func_?(&value[1].monitor,pSVar4);
    functor = (ExecuteEvents_EventFunction_1_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                             );
    if (functor != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)functor,value,
                 MethodInfo__RequirementNotification____c__DisplayClass16_0___ShowGameTierRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18
                (target,(BaseEventData *)0x0,functor,
                 bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                );
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowLevelRequirement(Int32) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowLevelRequirement
               (RequirementNotification *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                   );
    func_?(&
                    bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__RequirementNotification____c__DisplayClass15_0___ShowLevelRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RequirementNotification____c__DisplayClass15_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__RequirementNotification____c__DisplayClass15_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EBX);
    value[1].klass = (Object__Class *)level;
    RequirementNotification_InstantiatePanel(this,(this->fields).LevelPanel,(MethodInfo *)0x0);
    pOVar1 = value[1].klass;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
      if (pMVar2 != (MVLocalPlayer *)0x0) {
        iVar3 = (pMVar2->fields)._.level;
        *(bool *)&value[2].klass = (int)pOVar1 <= iVar3;
        if (iVar3 < (int)pOVar1) {
          pSVar4 = (this->fields).OffSprite;
        }
        else {
          pSVar4 = (this->fields).OnSprite;
        }
        value[1].monitor = (MonitorData *)pSVar4;
        func_?();
        functor = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        if (functor != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)functor,value,
                     MethodInfo__RequirementNotification____c__DisplayClass15_0___ShowLevelRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18
                    ((GameObject *)&UNK_?,(BaseEventData *)0x0,functor,
                     bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowStarRequirement(Int32) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowStarRequirement
               (RequirementNotification *this,int32_t stars,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                   );
    func_?(&
                    bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__RequirementNotification____c__DisplayClass13_0___ShowStarRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RequirementNotification____c__DisplayClass13_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__RequirementNotification____c__DisplayClass13_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EBX);
    value[1].klass = (Object__Class *)stars;
    RequirementNotification_InstantiatePanel(this,(this->fields).StarPanel,(MethodInfo *)0x0);
    pOVar1 = value[1].klass;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
      if (this_01 != (MVLocalPlayer *)0x0) {
        iVar2 = MVPlayer::MVPlayer_GetGameStat
                          ((MVPlayer *)this_01,GameStatCounterType__Enum_Collectible,
                           (MethodInfo *)0x0);
        *(bool *)&value[2].klass = (int)pOVar1 <= iVar2;
        if (iVar2 < (int)pOVar1) {
          pSVar3 = (this->fields).OffSprite;
        }
        else {
          pSVar3 = (this->fields).OnSprite;
        }
        value[1].monitor = (MonitorData *)pSVar3;
        func_?();
        functor = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        if (functor != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)functor,value,
                     MethodInfo__RequirementNotification____c__DisplayClass13_0___ShowStarRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18
                    ((GameObject *)&UNK_?,(BaseEventData *)0x0,functor,
                     bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowTeamRequirement(MVTeam) */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification_ShowTeamRequirement
               (RequirementNotification *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>
                   );
    func_?(&
                    bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__RequirementNotification____c__DisplayClass14_0___ShowTeamRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__RequirementNotification____c__DisplayClass14_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__RequirementNotification____c__DisplayClass14_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)team;
    target = RequirementNotification_InstantiatePanel
                       (this,(this->fields).TeamPanel,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      if (pMVar2 != (MVLocalPlayer *)0x0) {
        if (value[1].klass == (Object__Class *)(pMVar2->fields)._._Team_k__BackingField) {
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 == (MVNetworkGame *)0x0) ||
             (this_00 = (pMVar1->fields).teamManager, this_00 == (MVTeamManager *)0x0))
          goto code_?;
          iVar3 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
          bVar4 = iVar3 != 1;
        }
        else {
          bVar4 = false;
        }
        *(bool *)&value[2].klass = bVar4;
        if (bVar4 == false) {
          pSVar5 = (this->fields).OffSprite;
        }
        else {
          pSVar5 = (this->fields).OnSprite;
        }
        value[1].monitor = (MonitorData *)pSVar5;
        func_?();
        functor = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
        if (functor != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)functor,value,
                     MethodInfo__RequirementNotification____c__DisplayClass14_0___ShowTeamRequirement_b__0_INotificationRequirementPanel__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18
                    (target,(BaseEventData *)0x0,functor,
                     bool_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__Execute<INotificationRequirementPanel>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<INotificationRequirementPanel>_
                    );
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* RequirementNotification() */

void Assembly-CSharp.dll::RequirementNotification::RequirementNotification__ctor
               (RequirementNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_GameObject_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  if (this_00 != (List_1_UnityEngine_GameObject_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    (this->fields).PanelsToDestroy = this_00;
    func_?(&(this->fields).PanelsToDestroy,this_00);
    Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::Object]::
    Singleton_1_System_Object___ctor((Singleton_1_System_Object_ *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

