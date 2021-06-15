
/* PlayerListBase CreatePlayerList(MVTeam, Int32) */

PlayerListBase *
Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_CreatePlayerList
          (PlayerListsLayout *this,MVTeam__Enum team,int32_t score,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).playerListPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      PlayerListBase_MethodInfo__UnityEngine__Object__Instantiate<PlayerListBase>_PlayerListBase_
                     );
  if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)pXVar1,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      (*pXVar1->klass[1]._0.gc_desc)(pXVar1,team,score,(this->fields).typeToDisplay);
      return (PlayerListBase *)pXVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pPVar3 = (PlayerListBase *)(*pcVar2)();
  return pPVar3;
}


/* IEnumerator CreatePlayerLists(IEnumerable`1[MVPlayer], List`1[MV.WorldObject.MVTeam]) */

IEnumerator *
Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_CreatePlayerLists
          (PlayerListsLayout *this,IEnumerable_1_MVPlayer_ *players,
          List_1_MV_WorldObject_MVTeam_ *teams,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PlayerListsLayout___CreatePlayerLists_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.z = (float)players;
    this_00[1].fields.state = (int32_t)this;
    (this_00->fields)._._._._.m_CachedPtr = teams;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Dictionary`2[MV.WorldObject.MVTeam,List`1[MVPlayer]] GetSortedTeamLists(IEnumerable`1[MVPlayer],
   List`1[MV.WorldObject.MVTeam]) */

Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *
Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_GetSortedTeamLists
          (PlayerListsLayout *this,IEnumerable_1_MVPlayer_ *players,
          List_1_MV_WorldObject_MVTeam_ *teams,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff70;
  puVar5 = &stack0xffffff70;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_03 = (KogamaSettingNumericBase_1_System_Single_ *)0x0;
  iStack_6 = 0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  func_?();
  uStack_9 = 0xffffffff;
  piStack_10 = (int *)&stack0xffffff70;
  puStack_4 = &stack0xffffff70;
  pDVar11 = (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>
                          );
  pDStack_12 = pDVar11;
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar11,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dictionary__
            );
  pDStack_13 = pDVar11;
  if (teams != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
    pLVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)(auStack_15 + 4),
                        (List_1_UnityEngine_Color32_ *)teams,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                       );
    CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar14->l;
    CStack_7.monitor = (MonitorData *)pLVar14->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar14->ver;
    CStack_7.fields.syncRoot = (Object *)(pLVar14->current).rgba;
    uStack_1 = 0;
    while (cVar16 = func_?(), cVar16 != '\0') {
      this_03 = (KogamaSettingNumericBase_1_System_Single_ *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_7,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                          );
      this_00 = (List_1_UnityEngine_Vector4_ *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                (this_00,MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
      if (pDStack_12 == (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::
      Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
                ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDStack_12,
                 (MVTeam__Enum)this_03,(Object *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__List<MVPlayer>_
                );
    }
    uStack_9 = 0;
    this_03 = (KogamaSettingNumericBase_1_System_Single_ *)0x0;
    *piStack_10 = 0x45;
    teams = (List_1_MV_WorldObject_MVTeam_ *)0x0;
    uStack_1 = 0xffffffff;
    func_?();
    if (*piStack_10 == 0x45) {
      teams = (List_1_MV_WorldObject_MVTeam_ *)0xffffffff;
      uStack_9 = 0xffffffff;
    }
    if (players != (IEnumerable_1_MVPlayer_ *)0x0) {
      piVar17 = (int *)func_?(0,
                                      TypeInfo__System__Collections__Generic__IEnumerable<MVPlayer>)
      ;
      uStack_1 = 2;
      piStack_18 = piVar17;
      while (piVar17 != (int *)0x0) {
        iStack_19 = *piVar17;
        uVar20 = 0;
        uStack_21 = 0;
        uVar22 = *(ushort *)(iStack_19 + 0xb6);
        uStack_23 = (uint)uVar22;
        if (uVar22 != 0) {
          do {
            piVar17 = piStack_18;
            if (*(IEnumerator__Class **)(*(int *)(iStack_19 + 0x58) + (uint)uVar20 * 8) ==
                TypeInfo__System__Collections__IEnumerator) {
              puVar24 = (undefined4 *)
                       (*piStack_18 +
                       (*(int *)(*(int *)(*piStack_18 + 0x58) + 4 + (uint)uVar20 * 8) + 0x19) * 8);
              goto code_?;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar22);
        }
        puVar24 = (undefined4 *)func_?(piVar17,TypeInfo__System__Collections__IEnumerator);
code_?:
        cVar16 = (*(code *)*puVar24)(piVar17);
        if (cVar16 == '\0') {
          pLVar25 = (List_1_MV_WorldObject_MVTeam_ *)((int)&teams->klass + 1);
          piStack_10[(int)pLVar25] = 0x9d;
          uStack_1 = 0xffffffff;
          if (piVar17 != (int *)0x0) {
            func_?(0,TypeInfo__System__IDisposable);
          }
          iVar26 = iStack_6;
          if (iStack_6 != 0) goto code_?;
          if (((pLVar25 != (List_1_MV_WorldObject_MVTeam_ *)0xffffffff) &&
              (piStack_10[(int)pLVar25] == 0x9d)) && (-1 < (int)pLVar25)) {
            pLVar25 = teams;
          }
          teams = pLVar25;
          this_03 = (KogamaSettingNumericBase_1_System_Single_ *)0x0;
          if (pDStack_12 != (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)0x0) {
            pDVar11 = pDStack_12;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
            Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                      ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                       auStack_15,(Dictionary_2_WinningConditionType_System_Object_ *)pDStack_12,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                      );
            uStack_1 = 4;
            goto code_?;
          }
          break;
        }
        iStack_19 = *piVar17;
        uVar20 = 0;
        uStack_23 = 0;
        uVar22 = *(ushort *)(iStack_19 + 0xb6);
        uStack_21 = (uint)uVar22;
        if (uVar22 != 0) {
          do {
            piVar17 = piStack_18;
            if (*(IEnumerator_1_MVPlayer___Class **)(*(int *)(iStack_19 + 0x58) + (uint)uVar20 * 8)
                == TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>) {
              puVar24 = (undefined4 *)
                       (*piStack_18 +
                       (*(int *)(*(int *)(*piStack_18 + 0x58) + 4 + (uint)uVar20 * 8) + 0x18) * 8);
              goto code_?;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar22);
        }
        puVar24 = (undefined4 *)
                 func_?(piVar17,
                                 TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>);
code_?:
        this_03 = (KogamaSettingNumericBase_1_System_Single_ *)(*(code *)*puVar24)(piVar17);
        if (this_03 == (KogamaSettingNumericBase_1_System_Single_ *)0x0) break;
        key = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
              KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
              KogamaSettingNumericBase_1_System_Single__get_KogamaSetting(this_03,(MethodInfo *)0x0)
        ;
        if (key != (IKogamaSetting *)0x5) {
          if ((pDStack_12 == (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)0x0) ||
             (this_01 = (List_1_UIPushOption_ *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                        MVTeam,System::Object]::
                        Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                                  ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDStack_12,
                                   (MVTeam__Enum)key,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Item_MV__WorldObject__MVTeam_
                                  ), this_01 == (List_1_UIPushOption_ *)0x0)) break;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    (this_01,(UIPushOption__Enum)this_03,
                     MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
        }
      }
    }
  }
code_?:
  func_?();
  iVar26 = func_?(this_03,0);
code_?:
  func_?(iVar26,0);
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  pDVar11 = (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)(*pcVar27)();
  return pDVar11;
code_?:
  cVar16 = func_?();
  pDVar28 = pDStack_12;
  iVar26 = iStack_6;
  if (cVar16 == '\0') goto code_?;
  KStack_8 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                        ((LevelRewardsManager *)&stack0xffffff7c,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Current__
                        );
  this_02 = (List_1_VoxelHit_ *)func_?();
  pDVar28 = (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)pDVar28,0.0,(MethodInfo *)pDVar11);
  this_03 = (KogamaSettingNumericBase_1_System_Single_ *)0x0;
  if (this_02 == (List_1_VoxelHit_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__Sort_1
            (this_02,(IComparer_1_VoxelHit_ *)pDVar28,
             MethodInfo__System__Collections__Generic__List<MVPlayer>__Sort_System__Collections__Generic__IComparer<MVPlayer>_
            );
  pDVar11 = pDVar28;
  goto code_?;
code_?:
  piStack_10[(int)((int)&teams->klass + 1)] = 0xe3;
  uStack_1 = 0xffffffff;
  func_?();
  if (iVar26 == 0) {
    *unaff_FS_OFFSET = uStack_3;
    return pDVar28;
  }
  goto code_?;
}


/* Void Initialize(PlayerListsLayout, GameStatCounterType, UIPushOption) */

void Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_Initialize
               (PlayerListsLayout *this,PlayerListsLayout *playerListsPrefab,
               GameStatCounterType__Enum typeToDisplay,UIPushOption__Enum pushOptions,
               MethodInfo *method)

{
  (this->fields).playerListsPrefab = playerListsPrefab;
  (this->fields).typeToDisplay = (undefined1)typeToDisplay;
  (this->fields).pushOptions = pushOptions;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_OnDestroy
               (PlayerListsLayout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVAvatar *)0x0) &&
     (pMVar3 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0),
     pMVar3 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
    pDVar4 = (Delegate *)(pMVar3->fields)._._.sendInterval;
    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar5,unaff_EDI,MethodInfo__PlayerListsLayout__ReCreate__,(MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
    pDVar4 = (Delegate *)0x0;
    if (pDVar6 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar6->klass == TypeInfo__System__Action) {
        pDVar4 = pDVar6;
      }
      pFVar7 = (FriendList_OnFriendListUpdatedDelegate__Class *)TypeInfo__System__Action;
      if (pDVar4 == (Delegate *)0x0) goto code_?;
    }
    (pMVar3->fields)._._.sendInterval = (float)pDVar4;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (pTVar8 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                           ((CloudyThemeBase *)pMVar2,(MethodInfo *)0x0),
       pTVar8 != (ThemeSkybox *)0x0)) {
      pDVar4 = (pTVar8->fields)._._._._._.m_CachedPtr;
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)&UNK_?,MethodInfo__PlayerListsLayout__ReCreate__,
                 (MethodInfo *)0x0);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
      pDVar4 = (Delegate *)0x0;
      if (pDVar6 == (Delegate *)0x0) {
code_?:
        (pTVar8->fields)._._._._._.m_CachedPtr = pDVar4;
        return;
      }
      if ((FriendList_OnFriendListUpdatedDelegate__Class *)pDVar6->klass ==
          TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
        pDVar4 = pDVar6;
      }
      pFVar7 = TypeInfo__FriendList__OnFriendListUpdatedDelegate;
      if (pDVar4 != (Delegate *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
  pDVar6 = extraout_ECX;
  pFVar7 = (FriendList_OnFriendListUpdatedDelegate__Class *)extraout_EDX;
code_?:
  func_?(pDVar6,pFVar7);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ReCreate() */

void Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_ReCreate
               (PlayerListsLayout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PlayerListsLayout___ReCreate_c__AnonStorey1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
              ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__PlayerListsLayout->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)0x0,
                 MethodInfo__PlayerListsLayout___ReCreate_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__PlayerListsLayout->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar1;
    }
    pEVar2 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__PlayerListsLayout->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              ((GameObject *)
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
               ,(BaseEventData *)0x0,pEVar2,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    original = (this->fields).playerListsPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pXVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)original,
                        PlayerListsLayout_MethodInfo__UnityEngine__Object__Instantiate<PlayerListsLayout>_PlayerListsLayout_
                       );
    (this_00->fields)._._._._.m_CachedPtr = pXVar3;
    uVar4 = (this->fields).typeToDisplay;
    pGVar5 = (GameObject *)(this->fields).pushOptions;
    if (pXVar3 != (XpBoostParticlePreviewer *)0x0) {
      (pXVar3->fields).layersToRender = (int32_t)(this->fields).playerListsPrefab;
      *(uint8_t *)&(pXVar3->fields).previewTexture = uVar4;
      (pXVar3->fields)._PreviewGameObject_k__BackingField = pGVar5;
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__PlayerListsLayout->static_fields->__f__am_cache1 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        pUVar1 = this_01;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)0x0,
                   MethodInfo__PlayerListsLayout___ReCreate_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__PlayerListsLayout->static_fields->__f__am_cache1 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
      }
      pEVar2 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__PlayerListsLayout->static_fields->__f__am_cache1;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                ((GameObject *)pUVar1,(BaseEventData *)0x0,pEVar2,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)this_00,
                 MethodInfo__PlayerListsLayout___ReCreate_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar5,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar1
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SortPlayerListsAfterScore(Dictionary`2[MV.WorldObject.MVTeam,PlayerListBase],
   List`1[MV.WorldObject.MVTeam], GameStatCounterType) */

void Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_SortPlayerListsAfterScore
               (PlayerListsLayout *this,
               Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *playerLists,
               List_1_MV_WorldObject_MVTeam_ *teams,GameStatCounterType__Enum typeToDisplay,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6.klass = (List_1_UnityEngine_Color32___Class *)0x0;
  LStack_6.monitor = (MonitorData *)0x0;
  LStack_6.fields._items = (Color32__Array *)0x0;
  LStack_6.fields._size = 0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  this_00 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)
            func_?(TypeInfo__System__Collections__Generic__List<PlayerListBase>);
  method_01 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)&UNK_?;
  pDStack_8 = this_00;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_00,
             MethodInfo__System__Collections__Generic__List<PlayerListBase>__List__);
  if (teams == (List_1_MV_WorldObject_MVTeam_ *)0x0) {
code_?:
    pDVar9 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)0x0;
  }
  else {
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_11,
                        (List_1_UnityEngine_Color32_ *)teams,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                       );
    LStack_6.klass = (List_1_UnityEngine_Color32___Class *)pLVar10->l;
    LStack_6.monitor = (MonitorData *)pLVar10->next;
    LStack_6.fields._items = (Color32__Array *)pLVar10->ver;
    LStack_6.fields._size = (pLVar10->current).rgba;
    uStack_1 = 0;
    while( true ) {
      do {
        auStack_11._4_4_ =
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
        ;
        auStack_11._0_4_ = &LStack_6;
        cVar12 = func_?();
        if (cVar12 == '\0') {
          *puStack_7 = 0xe9;
          uStack_1 = 0xffffffff;
          func_?(&LStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                         );
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pDStack_13 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                &LStack_6,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                               );
        bVar14 = false;
        unaff_ESI = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)0x0;
        while( true ) {
          if (this_00 == (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)0x0)
          goto code_?;
          pOVar15 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                              MethodInfo__System__Collections__Generic__List<PlayerListBase>__get_Count__
                             );
          if ((int)pOVar15 <= (int)unaff_ESI) break;
          if (bVar14) {
            pDVar9 = this_00;
            in_stack_16 =
                 (MVGameControllerBase__Class *)
                 MethodInfo__System__Collections__Generic__List<PlayerListBase>__get_Item_int_;
            pCVar17 = (Component_1 *)
                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                                (int32_t)unaff_ESI,
                                MethodInfo__System__Collections__Generic__List<PlayerListBase>__get_Item_int_
                               );
            if (pCVar17 == (Component_1 *)0x0) goto code_?;
            pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               (pCVar17,(MethodInfo *)0x0);
            method_01 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)0x0;
            if (pTVar18 == (Transform *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                      (pTVar18,(MethodInfo *)0x0);
            unaff_ESI = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)
                        ((int)&unaff_ESI->klass + 1);
          }
          else {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              in_stack_16 = TypeInfo__MVGameControllerBase;
              func_?();
            }
            pMVar19 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            pDVar9 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)0x0;
            if (pMVar19 == (MVNetworkGame *)0x0) goto code_?;
            pSVar20 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                ((DayNightCycle *)pMVar19,(MethodInfo *)0x0);
            pDVar9 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)0x0;
            if (pSVar20 == (SkyParam *)0x0) goto code_?;
            iStack_21 = MVTeamManager::MVTeamManager_GetScore
                                  ((MVTeamManager *)pSVar20,(MVTeam__Enum)pDStack_13,typeToDisplay,
                                   (MethodInfo *)in_stack_16);
            pMVar19 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            pDVar9 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)0x0;
            if (pMVar19 == (MVNetworkGame *)0x0) goto code_?;
            pSVar20 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                ((DayNightCycle *)pMVar19,(MethodInfo *)method_01);
            method_01 = pDStack_8;
            method_00 = (MethodInfo *)
                        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                   pDStack_8,(int32_t)unaff_ESI,
                                   MethodInfo__System__Collections__Generic__List<PlayerListBase>__get_Item_int_
                                  );
            if (method_00 == (MethodInfo *)0x0) goto code_?;
            team = func_?();
            pDVar9 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)0x0;
            if (pSVar20 == (SkyParam *)0x0) goto code_?;
            in_stack_16 =
                 (MVGameControllerBase__Class *)
                 MVTeamManager::MVTeamManager_GetScore
                           ((MVTeamManager *)pSVar20,team,typeToDisplay,(MethodInfo *)0x0);
            bVar22 = WinningConditionControl::WinningConditionControl_IsNewScoreBetter
                              (iStack_21,(int32_t)in_stack_16,typeToDisplay,(MethodInfo *)0x0)
            ;
            if (bVar22 == 0) {
              unaff_ESI = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)
                          ((int)&unaff_ESI->klass + 1);
              this_00 = pDStack_8;
            }
            else {
              if (playerLists == (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)0x0)
              goto code_?;
              pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                       MVTeam,System::Object]::
                       Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                                 ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)playerLists,
                                  (MVTeam__Enum)pDStack_13,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__get_Item_MV__WorldObject__MVTeam_
                                 );
              this_00 = pDStack_8;
              method_01 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)&UNK_?;
              item._4_4_ = 
              MethodInfo__System__Collections__Generic__List<PlayerListBase>__Insert_int__PlayerListBase_
              ;
              item.rgba = (int32_t)pOVar15;
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
              List_1_UnityEngine_Color32__Insert
                        ((List_1_UnityEngine_Color32_ *)pDStack_8,(int32_t)unaff_ESI,item,method_00
                        );
              bVar14 = true;
              unaff_ESI = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)
                          ((int)&unaff_ESI->klass + 1);
            }
          }
        }
      } while (bVar14);
      unaff_ESI = playerLists;
      if (playerLists == (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)0x0)
      goto code_?;
      pDVar9 = playerLists;
      pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               MVTeam,System::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                         ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)playerLists,
                          (MVTeam__Enum)pDStack_13,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__get_Item_MV__WorldObject__MVTeam_
                         );
      in_stack_16 = (MVGameControllerBase__Class *)&UNK_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pOVar15,
                 MethodInfo__System__Collections__Generic__List<PlayerListBase>__Add_PlayerListBase_
                );
      method_01 = pDStack_13;
      pCVar17 = (Component_1 *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               MVTeam,System::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                         ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)playerLists,
                          (MVTeam__Enum)pDStack_13,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__get_Item_MV__WorldObject__MVTeam_
                         );
      if (pCVar17 == (Component_1 *)0x0) break;
      pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         (pCVar17,(MethodInfo *)0x0);
      if (pTVar18 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                (pTVar18,(MethodInfo *)0x0);
    }
  }
code_?:
  func_?(pDVar9);
  func_?(unaff_ESI,0,0);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout_Start
               (PlayerListsLayout *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVAvatar *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    pMVar2 = MVAvatar::MVAvatar_get_Shield(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      pDVar3 = MVPlayerContainer::MVPlayerContainer_get_Values
                         ((MVPlayerContainer *)pMVar2,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar4 != (MVNetworkGame *)0x0) {
        this_00 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)pMVar4,(MethodInfo *)0x0);
        if (this_00 != (SkyParam *)0x0) {
          pLVar5 = MVTeamManager::MVTeamManager_GetTeamList
                             ((MVTeamManager *)this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_01 = (ScaleAnimationBase *)func_?();
          ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,method_00);
          if (this_01 != (ScaleAnimationBase *)0x0) {
            (this_01->fields)._._._._.m_CachedPtr = pLVar5;
            (this_01->fields).originalScale.z = (float)pDVar3;
            this_01[1].fields.state = (int32_t)&UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_StartCoroutine_Auto
                      ((MonoBehaviour *)&UNK_?,(IEnumerator *)this_01,(MethodInfo *)0x0);
            pMVar1 = (MVAvatar *)
                     MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar1 != (MVAvatar *)0x0) {
              pMVar2 = MVAvatar::MVAvatar_get_Shield(pMVar1,(MethodInfo *)0x0);
              if (pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                pDVar6 = (Delegate *)(pMVar2->fields)._._.sendInterval;
                pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar7,(Object *)&UNK_?,MethodInfo__PlayerListsLayout__ReCreate__,
                           (MethodInfo *)0x0);
                pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                                   (pDVar6,(Delegate *)pUVar7,(MethodInfo *)0x0);
                pDVar6 = (Delegate *)0x0;
                if (pDVar8 != (Delegate *)0x0) {
                  if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
                    pDVar6 = pDVar8;
                  }
                  if (pDVar6 == (Delegate *)0x0) goto code_?;
                }
                (pMVar2->fields)._._.sendInterval = (float)pDVar6;
                pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar4 != (MVNetworkGame *)0x0) {
                  pTVar9 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                      ((CloudyThemeBase *)pMVar4,(MethodInfo *)0x0);
                  if (pTVar9 != (ThemeSkybox *)0x0) {
                    pDVar6 = (pTVar9->fields)._._._._._.m_CachedPtr;
                    pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar7,(Object *)&UNK_?,
                               MethodInfo__PlayerListsLayout__ReCreate__,(MethodInfo *)0x0);
                    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                                       (pDVar6,(Delegate *)pUVar7,(MethodInfo *)0x0);
                    pDVar6 = (Delegate *)0x0;
                    if (pDVar8 == (Delegate *)0x0) {
code_?:
                      (pTVar9->fields)._._._._._.m_CachedPtr = pDVar6;
                      return;
                    }
                    if ((FriendList_OnFriendListUpdatedDelegate__Class *)pDVar8->klass ==
                        TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
                      pDVar6 = pDVar8;
                    }
                    if (pDVar6 != (Delegate *)0x0) goto code_?;
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
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void <ReCreate>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout__ReCreate_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ReCreate>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerListsLayout::PlayerListsLayout__ReCreate_m__1
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,0xc);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

