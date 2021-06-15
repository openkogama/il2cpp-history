
/* Void SetActiveTeam(MVTeam) */

void Assembly-CSharp.dll::PlayerListSelector::PlayerListSelector_SetActiveTeam
               (PlayerListSelector *this,MVTeam__Enum team,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  MVar6 = MVTeam__Enum_Blue;
  auStack_7._16_4_ = (Object *)0x0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  auStack_7._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_7._4_4_ = (MonitorData *)0x0;
  auStack_7._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_7._12_4_ = 0;
  func_?();
  MStack_9 = team;
  puStack_10 = (undefined4 *)&stack0xffffffa4;
  puStack_4 = &stack0xffffffa4;
  message = (Object *)func_?(TypeInfo__MV__WorldObject__MVTeam,&MStack_9);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
  pDVar11 = (this->fields).playerLists;
  if (pDVar11 != (Dictionary_2_MV_WorldObject_MVTeam_PlayerList_ *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffb0,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar11,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__GetEnumerator__
                       );
    auStack_7._0_4_ = pDVar12->dictionary;
    auStack_7._4_4_ = pDVar12->next;
    auStack_7._8_4_ = pDVar12->stamp;
    auStack_7._12_4_ = (pDVar12->current).key;
    auStack_7._16_4_ = (pDVar12->current).value;
    uStack_1 = 0;
    while (cVar13 = func_?(), cVar13 != '\0') {
      KStack_8 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_7,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_PlayerList>__get_Current__
                            );
      in_stack_14 =
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_PlayerList>__get_Value__
      ;
      pCVar15 = (Component_1 *)func_?();
      if ((pCVar15 == (Component_1 *)0x0) ||
         (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             (pCVar15,(MethodInfo *)0x0), pGVar16 == (GameObject *)0x0))
      goto code_?;
      method_00 = (MethodInfo *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar16,0,(MethodInfo *)0x0);
    }
    *puStack_10 = 0x55;
    uStack_1 = 0xffffffff;
    method_01 = 
    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_PlayerList>__Dispose__
    ;
    func_?();
    pDVar11 = (this->fields).playerLists;
    if (((pDVar11 != (Dictionary_2_MV_WorldObject_MVTeam_PlayerList_ *)0x0) &&
        (pCVar15 = (Component_1 *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  MVTeam,System::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                            ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar11,team,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
                            ), MVar6 = team, pCVar15 != (Component_1 *)0x0)) &&
       (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           (pCVar15,in_stack_17), pGVar16 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar16,1,method_00);
      pDVar11 = (this->fields).playerLists;
      if (((pDVar11 != (Dictionary_2_MV_WorldObject_MVTeam_PlayerList_ *)0x0) &&
          (pCVar15 = (Component_1 *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                    MVTeam,System::Object]::
                    Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                              ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar11,team,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerList>__get_Item_MV__WorldObject__MVTeam_
                              ), pCVar15 != (Component_1 *)0x0)) &&
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              (pCVar15,method_01), this_00 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                  (this_00,in_stack_14);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  func_?();
  func_?(MVar6);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void Setup(Dictionary`2[MV.WorldObject.MVTeam,PlayerList]) */

void Assembly-CSharp.dll::PlayerListSelector::PlayerListSelector_Setup
               (PlayerListSelector *this,Dictionary_2_MV_WorldObject_MVTeam_PlayerList_ *playerLists
               ,MethodInfo *method)

{
  this_05 = (UnityEvent *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_04 = (MethodInfo *)&stack0xffffffb4;
  pMVar1 = (MethodInfo *)&stack0xffffffb4;
  func_?();
  (this->fields).playerLists = playerLists;
  method_01 = (Il2CppClass *)
              func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>)
  ;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)method_01,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__List__);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame *)0x0) {
    pSVar3 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                       ((DayNightCycle *)pMVar2,(MethodInfo *)0x0);
    method_02 = (Il2CppClass *)0x0;
    if (pSVar3 != (SkyParam *)0x0) {
      iVar4 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)pSVar3,(MethodInfo *)0x0);
      if (iVar4 == 1) {
        if (method_01 == (Il2CppClass *)0x0) goto code_?;
        method_02 = method_01;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)method_01,
                   UIPushOption__Enum_InvisibleBlocker|UIPushOption__Enum_Blocking,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                  );
      }
      else {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 == (MVNetworkGame *)0x0) ||
           (pSVar3 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                               ((DayNightCycle *)pMVar2,(MethodInfo *)0x0),
           pSVar3 == (SkyParam *)0x0)) goto code_?;
        method_01 = (Il2CppClass *)
                    MVTeamManager::MVTeamManager_GetTeamList
                              ((MVTeamManager *)pSVar3,(MethodInfo *)method_02);
      }
      if (method_01 != (Il2CppClass *)0x0) {
        pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                 List_1_UnityEngine_Color32__GetEnumerator
                           ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc0,
                            (List_1_UnityEngine_Color32_ *)method_01,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                           );
        method_03 = (_union_155)pLVar5->next;
        while( true ) {
          cVar6 = func_?();
          method_00 = 
          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
          ;
          if (cVar6 == '\0') {
            pMVar1->methodPointer = (Il2CppMethodPointer)0xe3;
            func_?();
            *unaff_FS_OFFSET = this_05;
            return;
          }
          mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
          Serialization::JsonProperty]::
          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&stack0xffffffd0,
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                    );
          this_01 = (ScaleAnimationBase *)func_?();
          ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_01);
          if (this_01 == (ScaleAnimationBase *)0x0) break;
          (this_01->fields).state = (int32_t)method_00;
          method_01 = (Il2CppClass *)method_00->name;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                              ((XpBoostParticlePreviewer *)method_01,
                               PlayerListSelectorButton_MethodInfo__UnityEngine__Object__Instantiate<PlayerListSelectorButton>_PlayerListSelectorButton_
                              );
          if (this_02 == (XpBoostParticlePreviewer *)0x0) break;
          this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this_02,(MethodInfo *)method_02);
          parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)method_00,(MethodInfo *)0x0);
          if (this_03 == (Transform *)0x0) break;
          method_02 = (Il2CppClass *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_03,parent,0,(MethodInfo *)method_03.genericMethod);
          this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this_02,(MethodInfo *)0x0);
          if (this_04 == (GameObject *)0x0) break;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_04,1,method_04);
          method_05 = (MethodInfo *)0x0;
          PlayerListSelectorButton::PlayerListSelectorButton_Initialize
                    ((PlayerListSelectorButton *)this_02,0xADDR,(MethodInfo *)0x0);
          (this_01->fields)._._._._.m_CachedPtr = &UNK_?;
          this_00 = (HoverCraftMotor *)(this_02->fields).previewCam;
          if (this_00 == (HoverCraftMotor *)0x0) break;
          this_05 = (UnityEvent *)
                    HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(this_00,method_00);
          this_06 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          pMVar1 = MethodInfo__PlayerListSelector___Setup_c__AnonStorey0____m__0__;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_06,(Object *)this_01,
                     MethodInfo__PlayerListSelector___Setup_c__AnonStorey0____m__0__,
                     (MethodInfo *)0x0);
          if (this_05 == (UnityEvent *)0x0) break;
          method_04 = (MethodInfo *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                    (this_05,(UnityAction *)this_06,method_05);
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

