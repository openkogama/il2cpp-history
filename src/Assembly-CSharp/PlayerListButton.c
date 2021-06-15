
/* Void Awake() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_Awake
               (PlayerListButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar1 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVAvatar *)0x0) {
    pMVar2 = MVAvatar::MVAvatar_get_Shield(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      pDVar3 = (Delegate *)(pMVar2->fields)._._.sendInterval;
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,MethodInfo__PlayerListButton__UpdateButton__,
                 (MethodInfo *)0x0);
      pDStack_5 = mscorlib.dll::System::Delegate::Delegate_Combine
                             (pDVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
      pDVar3 = (Delegate *)0x0;
      if (pDStack_5 != (Delegate *)0x0) {
        if ((Action__Class *)pDStack_5->klass == TypeInfo__System__Action) {
          pDVar3 = pDStack_5;
        }
        if (pDVar3 == (Delegate *)0x0) goto code_?;
      }
      (pMVar2->fields)._._.sendInterval = (float)pDVar3;
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar6 != (MVNetworkGame *)0x0) {
        pSVar7 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)pMVar6,(MethodInfo *)0x0);
        if (pSVar7 != (SkyParam *)0x0) {
          pDVar3 = (Delegate *)(pSVar7->fields).TopColor.g;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this,MethodInfo__PlayerListButton__UpdateButton__,
                     (MethodInfo *)0x0);
          pDStack_5 = mscorlib.dll::System::Delegate::Delegate_Combine
                                 (pDVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
          pDVar3 = (Delegate *)0x0;
          if (pDStack_5 != (Delegate *)0x0) {
            if ((MVTeamManager_OnTeamsUpdatedDelegate__Class *)pDStack_5->klass ==
                TypeInfo__MVTeamManager__OnTeamsUpdatedDelegate) {
              pDVar3 = pDStack_5;
            }
            if (pDVar3 == (Delegate *)0x0) goto code_?;
          }
          (pSVar7->fields).TopColor.g = (float)pDVar3;
          pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar6 != (MVNetworkGame *)0x0) {
            pTVar8 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                ((CloudyThemeBase *)pMVar6,(MethodInfo *)0x0);
            if (pTVar8 != (ThemeSkybox *)0x0) {
              pDVar3 = (Delegate *)(pTVar8->fields).skyboxMaterial;
              pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar4,(Object *)this,MethodInfo__PlayerListButton__ViewNotification__,
                         (MethodInfo *)0x0);
              pDStack_5 = mscorlib.dll::System::Delegate::Delegate_Combine
                                     (pDVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
              pDVar3 = (Delegate *)0x0;
              if (pDStack_5 != (Delegate *)0x0) {
                if ((UnityAction__Class *)pDStack_5->klass ==
                    TypeInfo__UnityEngine__Events__UnityAction) {
                  pDVar3 = pDStack_5;
                }
                if (pDVar3 == (Delegate *)0x0) goto code_?;
              }
              (pTVar8->fields).skyboxMaterial = (Material *)pDVar3;
              pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar6 != (MVNetworkGame *)0x0) {
                pTVar8 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                    ((CloudyThemeBase *)pMVar6,(MethodInfo *)0x0);
                if (pTVar8 != (ThemeSkybox *)0x0) {
                  pDVar3 = (Delegate *)(pTVar8->fields)._topColor.r;
                  pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar4,(Object *)this,
                             MethodInfo__PlayerListButton__PendingCountChanged_int_,
                             MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                            );
                  pDStack_5 = mscorlib.dll::System::Delegate::Delegate_Combine
                                         (pDVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
                  pDVar3 = (Delegate *)0x0;
                  if (pDStack_5 != (Delegate *)0x0) {
                    if ((UnityAction_1_System_Int32___Class *)pDStack_5->klass ==
                        TypeInfo__UnityEngine__Events__UnityAction<int>) {
                      pDVar3 = pDStack_5;
                    }
                    if (pDVar3 == (Delegate *)0x0) goto code_?;
                  }
                  (pTVar8->fields)._topColor.r = (float)pDVar3;
                  pMVar1 = (MVAvatar *)
                           MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (pMVar1 != (MVAvatar *)0x0) {
                    pMVar2 = MVAvatar::MVAvatar_get_Shield(pMVar1,(MethodInfo *)0x0);
                    if (pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                      pDVar3 = (Delegate *)(pMVar2->fields)._._.lastSendTime;
                      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                *)func_?();
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                      SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                (pUVar4,(Object *)this,
                                 MethodInfo__PlayerListButton__OnPlayerListReady__,(MethodInfo *)0x0
                                );
                      pDStack_5 = mscorlib.dll::System::Delegate::Delegate_Combine
                                             (pDVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
                      pDVar3 = (Delegate *)0x0;
                      if (pDStack_5 != (Delegate *)0x0) {
                        if ((Action__Class *)pDStack_5->klass == TypeInfo__System__Action) {
                          pDVar3 = pDStack_5;
                        }
                        if (pDVar3 == (Delegate *)0x0) goto code_?;
                      }
                      (pMVar2->fields)._._.lastSendTime = (float)pDVar3;
                      pDStack_5 = (Delegate *)*unaff_FS_OFFSET;
                      *unaff_FS_OFFSET = &pDStack_5;
                      if (cRam_? == '\0') {
                        func_?(_UNK_?);
                        cRam_? = '\x01';
                      }
                      func_?();
                      if (cRam_? == '\0') {
                        func_?(_UNK_?);
                        cRam_? = '\x01';
                      }
                      pTVar9 = (this->fields).playersCount;
                      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                        func_?(TypeInfo__MVGameControllerBase);
                      }
                      pMVar1 = (MVAvatar *)
                               MVGameControllerBase::MVGameControllerBase_get_Game
                                         ((MethodInfo *)0x0);
                      if ((pMVar1 != (MVAvatar *)0x0) &&
                         (pMVar2 = MVAvatar::MVAvatar_get_Shield(pMVar1,(MethodInfo *)0x0),
                         pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
                        MVPlayerContainer::MVPlayerContainer_get_Count
                                  ((MVPlayerContainer *)pMVar2,(MethodInfo *)0x0);
                        pMVar10 = (MethodInfo *)0x0;
                        uVar11 = func_?();
                        if (pTVar9 != (Text *)0x0) {
                          (*(code *)(pTVar9->klass->vtable).set_text.method)(pTVar9,uVar11);
                          if (cRam_? == '\0') {
                            func_?(_UNK_?);
                            cRam_? = '\x01';
                          }
                          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                            func_?(TypeInfo__MVGameControllerBase);
                          }
                          pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game
                                             ((MethodInfo *)0x0);
                          if ((pMVar6 != (MVNetworkGame *)0x0) &&
                             (pSVar7 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                                  ((DayNightCycle *)pMVar6,(MethodInfo *)0x0),
                             pSVar7 != (SkyParam *)0x0)) {
                            iVar12 = MVTeamManager::MVTeamManager_TeamCount
                                               ((MVTeamManager *)pSVar7,pMVar10);
                            if (iVar12 < 2) {
                              button = (this->fields).button;
                              if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000)
                                   != 0) && ((TypeInfo__Styles->_1).cctor_started == 0)) {
                                func_?();
                              }
                              team = (IKogamaSetting *)0x5;
                            }
                            else {
                              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr
                                   & 0x2000000) != 0) &&
                                 ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                                func_?();
                              }
                              pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                 ((MethodInfo *)0x0);
                              if ((pMVar6 == (MVNetworkGame *)0x0) ||
                                 (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                                      (pMVar6,(MethodInfo *)0x0),
                                 this_01 == (MVLocalPlayer *)0x0)) goto code_?;
                              team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::
                                     KogamaSettingsCore::KogamaSettingTypes::
                                     KogamaSettingNumericBase`1[System::Single]::
                                     KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                               ((KogamaSettingNumericBase_1_System_Single_ *)this_01
                                                ,pMVar10);
                              button = (this->fields).button;
                              if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000)
                                   != 0) && ((TypeInfo__Styles->_1).cctor_started == 0)) {
                                func_?();
                              }
                            }
                            Styles::Styles_SetStyle_4
                                      (button,ButtonStyle__Enum_RegularButton,(MVTeam__Enum)team,
                                       SoundStyle__Enum_NoSound,(MethodInfo *)0x0);
                            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                                 0x2000000) != 0) &&
                               ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                              func_?(TypeInfo__MVGameControllerBase);
                            }
                            pMVar1 = (MVAvatar *)
                                     MVGameControllerBase::MVGameControllerBase_get_Game
                                               ((MethodInfo *)0x0);
                            if (((pMVar1 != (MVAvatar *)0x0) &&
                                (pMVar2 = MVAvatar::MVAvatar_get_Shield(pMVar1,(MethodInfo *)0x0),
                                pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0)) &&
                               (pDVar13 = MVPlayerContainer::MVPlayerContainer_get_Values
                                                    ((MVPlayerContainer *)pMVar2,pMVar10),
                               pDVar13 !=
                               (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)
                               0x0)) {
                              pMVar10 = (MethodInfo *)&stack0xffffff98;
                              this_03 = 
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                              ;
                              pDVar14 = mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System
                                        ::Object]::
                                        Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                                                  ((
                                                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                                                  *)pMVar10,
                                                  (
                                                  Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                                                  *)pDVar13,
                                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                                                  );
                              pMVar15 = (MethodInfo *)(pDVar14->host_enumerator).current.key;
                              do {
                                do {
                                  method_01 = 
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                                  ;
                                  cVar16 = func_?();
                                  if (cVar16 == '\0') goto code_?;
                                  this_02 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                                            func_?();
                                  method_00 = this_03;
                                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.
                                              methodPtr & 0x2000000) != 0) &&
                                     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                                    func_?(TypeInfo__MVGameControllerBase);
                                    method_00 = this_03;
                                  }
                                  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                     ((MethodInfo *)0x0);
                                  if (((pMVar6 == (MVNetworkGame *)0x0) ||
                                      (pTVar8 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                                           ((CloudyThemeBase *)pMVar6,
                                                            (MethodInfo *)0x0),
                                      pTVar8 == (ThemeSkybox *)0x0)) ||
                                     (this_03 = (MethodInfo *)
                                                System.Core.dll::System::Linq::
                                                Enumerable+<CreateSelectIterator>c__Iterator10`2[System
                                                ::Collections::Generic::KeyValuePair`2[System::
                                                Object,System::Object],System::Object]::
                                                Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                                          ((
                                                  Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                                  *)pTVar8,pMVar10),
                                     this_02 == (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0
                                     )) goto code_?;
                                  pMVar10 = (MethodInfo *)&UNK_?;
                                  pOVar17 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                                            TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                                            TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                                      (this_02,method_00);
                                  if (this_03 == (MethodInfo *)0x0) goto code_?;
                                  item._4_4_ = 
                                  MethodInfo__System__Collections__Generic__List<int>__Contains_int_
                                  ;
                                  item.rgba = (int32_t)pOVar17;
                                  bVar18 = mscorlib.dll::System::Collections::Generic::
                                          List`1[UnityEngine::Color32]::
                                          List_1_UnityEngine_Color32__Contains
                                                    ((List_1_UnityEngine_Color32_ *)this_03,item,
                                                     (MethodInfo *)in_stack_19);
                                } while (bVar18 == 0);
                                pDVar20 = (this->fields).prevPlayerListState;
                                in_stack_19 = (Il2CppClass *)&UNK_?;
                                pOVar17 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                                          TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                                          TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                                    (this_02,(MethodInfo *)0x0);
                                if (pDVar20 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0)
                                goto code_?;
                                bVar18 = mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32,System::Object]::
                                        Dictionary_2_System_Int32_System_Object__ContainsKey
                                                  ((Dictionary_2_System_Int32_System_Object_ *)
                                                   pDVar20,(int32_t)pOVar17,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                                                  );
                              } while (bVar18 != 0);
                              this_00 = (this->fields).notification;
                              if ((this_00 != (Image *)0x0) &&
                                 (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_1_get_gameObject
                                                      ((Component_1 *)this_00,method_01),
                                 this_04 != (GameObject *)0x0)) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(this_04,1,pMVar15);
code_?:
                                iVar21 = 0x98;
                                iStack_22 = 0;
                                func_?();
                                if (iVar21 == 0x98) {
                                  iStack_22 = -1;
                                }
                                pDVar20 = (Dictionary_2_System_Int32_MVPlayer_ *)func_?();
                                System.Core.dll::System::Collections::Generic::
                                HashSet`1[AvatarModifierPackage+AvatarModifier]::
                                HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                                          ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                                           pDVar20,
                                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__
                                          );
                                (this->fields).prevPlayerListState = pDVar20;
                                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.
                                            methodPtr & 0x2000000) != 0) &&
                                   ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                                  func_?(TypeInfo__MVGameControllerBase);
                                }
                                pMVar1 = (MVAvatar *)
                                         MVGameControllerBase::MVGameControllerBase_get_Game
                                                   ((MethodInfo *)0x0);
                                if (pMVar1 != (MVAvatar *)0x0) {
                                  pMVar15 = (MethodInfo *)&UNK_?;
                                  pMVar2 = MVAvatar::MVAvatar_get_Shield(pMVar1,(MethodInfo *)0x0);
                                  if ((pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0) &&
                                     (pDVar13 = MVPlayerContainer::MVPlayerContainer_get_Values
                                                          ((MVPlayerContainer *)pMVar2,pMVar10),
                                     pDVar13 !=
                                     (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_
                                      *)0x0)) {
                                    mscorlib.dll::System::Collections::Generic::
                                    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System
                                    ::Object]::
                                    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                                                *)&stack0xffffff98,
                                               (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                                                *)pDVar13,
                                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                                              );
                                    while( true ) {
                                      cVar16 = func_?();
                                      if (cVar16 == '\0') {
                                        *(undefined4 *)(&stack0xffffff90 + iStack_22 * 4) = 0xf6;
                                        func_?();
                                        *unaff_FS_OFFSET = pDStack_5;
                                        return;
                                      }
                                      this_05 = (NamedThemeAttribute_1_UnityEngine_Color_ *)
                                                func_?();
                                      pDVar20 = (this->fields).prevPlayerListState;
                                      if ((this_05 ==
                                           (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) ||
                                         (pMVar15 = (MethodInfo *)
                                                    ThemeAttributes::
                                                    NamedThemeAttribute`1[UnityEngine::Color]::
                                                                                                        
                                                  NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                                            (this_05,pMVar15),
                                         pDVar20 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0))
                                      break;
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32,System::Object]::
                                      Dictionary_2_System_Int32_System_Object__Add
                                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar20
                                                 ,(int32_t)pMVar15,(Object *)this_05,
                                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                                                );
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
code_?:
                      func_?();
                      func_?();
                      func_?();
                      pcVar23 = (code *)swi(3);
                      (*pcVar23)();
                      return;
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
  func_?();
  pDStack_5 = extraout_ECX;
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void CreatePlayerList() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_CreatePlayerList
               (PlayerListButton *this,MethodInfo *method)

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
  uStack_6 = GameStatCounterType__Enum_None;
  func_?();
  puStack_4 = &stack0xffffffac;
  pDVar7 = (Dictionary_2_System_Int32_MVPlayer_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar7,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
  (this->fields).prevPlayerListState = pDVar7;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVAvatar *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    this_02 = MVAvatar::MVAvatar_get_Shield(this_01,(MethodInfo *)0x0);
    if ((this_02 != (MVRuntimeDataVariableClampedFloat *)0x0) &&
       (this_03 = MVPlayerContainer::MVPlayerContainer_get_Values
                            ((MVPlayerContainer *)this_02,(MethodInfo *)0x0),
       this_03 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                  *)&stack0xffffffb8,
                 (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                 this_03,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                );
      uStack_1 = 0;
      while (cVar8 = func_?(), cVar8 != '\0') {
        this_04 = (NamedThemeAttribute_1_UnityEngine_Color_ *)func_?();
        pDVar7 = (this->fields).prevPlayerListState;
        if ((this_04 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) ||
           (method_00 = (MethodInfo *)
                        ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                        NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_04,method_00),
           pDVar7 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0)) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,(int32_t)method_00,
                   (Object *)this_04,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                  );
      }
      uStack_1 = 0xffffffff;
      func_?();
      this_00 = (this->fields).notification;
      if ((this_00 != (Image *)0x0) &&
         (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this_00,in_stack_10), pGVar9 != (GameObject *)0x0
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar9,0,in_stack_11);
        pGVar9 = (this->fields).currPlayerLists;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pGVar9,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar12 == 0) {
          original = (this->fields).playerListsPrefab;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          this_05 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                              ((XpBoostParticlePreviewer *)original,
                               PlayerListsLayout_MethodInfo__UnityEngine__Object__Instantiate<PlayerListsLayout>_PlayerListsLayout_
                              );
          if (this_05 == (XpBoostParticlePreviewer *)0x0) goto code_?;
          pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this_05,(MethodInfo *)0x0);
          (this->fields).currPlayerLists = pGVar9;
          WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
                    ((GameStatCounterType__Enum *)&uStack_6,(MethodInfo *)0x0);
          (this_05->fields).layersToRender = (int32_t)(this->fields).playerListsPrefab;
          *(undefined1 *)&(this_05->fields).previewTexture = uStack_6;
          (this_05->fields)._PreviewGameObject_k__BackingField = (GameObject *)0x2;
          pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          this_06 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)this_06,(Object *)this,
                     MethodInfo__PlayerListButton___CreatePlayerList_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
        }
        else {
          (this->fields).currPlayerLists = (GameObject *)0x0;
          pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (TypeInfo__PlayerListButton->static_fields->__f__am_cache0 ==
              (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            this_07 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_07,(Object *)0x0,
                       MethodInfo__PlayerListButton___CreatePlayerList_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            TypeInfo__PlayerListButton->static_fields->__f__am_cache0 =
                 (ExecuteEvents_EventFunction_1_IUIStack_ *)this_07;
          }
          this_06 = TypeInfo__PlayerListButton->static_fields->__f__am_cache0;
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar9,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_06,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnPlayerListReady() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_OnPlayerListReady
               (PlayerListButton *this,MethodInfo *method)

{
  uStack_1._0_2_ = 0xffff;
  uStack_1._2_1_ = 0xff;
  uStack_1._3_1_ = 0xff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (uint32_t)&uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_4 = (MethodInfo *)&stack0xffffffac;
  func_?();
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar5 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar5 != (MVAvatar *)0x0) {
    pMVar6 = (MethodInfo *)&UNK_?;
    pMVar7 = MVAvatar::MVAvatar_get_Shield(pMVar5,(MethodInfo *)0x0);
    if (pMVar7 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      pDVar8 = (Delegate *)(pMVar7->fields)._._.lastSendTime;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,MethodInfo__PlayerListButton__OnPlayerListReady__,
                 (MethodInfo *)0x0);
      pDVar9 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar8,(Delegate *)this_01,(MethodInfo *)0x0);
      pDVar8 = (Delegate *)0x0;
      if (pDVar9 != (Delegate *)0x0) {
        if ((Action__Class *)pDVar9->klass == TypeInfo__System__Action) {
          pDVar8 = pDVar9;
        }
        pAVar10 = TypeInfo__System__Action;
        if (pDVar8 == (Delegate *)0x0) goto code_?;
      }
      (pMVar7->fields)._._.lastSendTime = (float)pDVar8;
      pMVar5 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar5 != (MVAvatar *)0x0) &&
          (pMVar7 = MVAvatar::MVAvatar_get_Shield(pMVar5,in_stack_11),
          pMVar7 != (MVRuntimeDataVariableClampedFloat *)0x0)) &&
         (this_02 = MVPlayerContainer::MVPlayerContainer_get_Values
                              ((MVPlayerContainer *)pMVar7,pMVar6),
         this_02 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
        pDVar12 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                             *)&stack0xffffffb8,
                            (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                             *)this_02,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                           );
        pMVar6 = (MethodInfo *)(pDVar12->host_enumerator).next;
        method_02 = (MethodInfo *)(pDVar12->host_enumerator).current.key;
        uStack_1._0_2_ = 0;
        uStack_1._2_1_ = 0;
        uStack_1._3_1_ = 0;
        do {
          method_00 = (MethodInfo *)&stack0xffffffcc;
          cVar13 = func_?();
          if (cVar13 == '\0') goto code_?;
          pMStack_4 = 
          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
          ;
          this_03 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)func_?();
          method_01 = in_stack_14;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
            method_01 = in_stack_14;
          }
          this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((this_04 == (MVNetworkGame *)0x0) ||
              (this_05 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                   ((CloudyThemeBase *)this_04,(MethodInfo *)0x0),
              this_05 == (ThemeSkybox *)0x0)) ||
             ((in_stack_14 =
                    (Il2CppClass *)
                    System.Core.dll::System::Linq::
                    Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                    JsonSchemaType]::
                    Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                              ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                                *)this_05,method_00),
              this_03 == (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0 ||
              (key = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                     TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                     TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                               (this_03,(MethodInfo *)method_01),
              in_stack_14 == (Il2CppClass *)0x0)))) goto code_?;
          bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                            ((Dictionary_2_System_Int32_System_Object_ *)in_stack_14,
                             (int32_t)key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsKey_int_
                            );
        } while (bVar15 == 0);
        this_00 = (this->fields).notification;
        if ((this_00 != (Image *)0x0) &&
           (this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)this_00,pMVar6), this_06 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_06,1,method_02);
code_?:
          pMStack_4->methodPointer = (Il2CppMethodPointer)0xa1;
          uStack_1._0_2_ = 0xffff;
          uStack_1._2_1_ = 0xff;
          uStack_1._3_1_ = 0xff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pDVar9 = extraout_ECX;
  pAVar10 = extraout_EDX;
code_?:
  func_?(pDVar9,pAVar10);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void PendingCountChanged(Int32) */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_PendingCountChanged
               (PlayerListButton *this,int32_t pending,MethodInfo *method)

{
  this_00 = (this->fields).notification;
  if ((this_00 == (Image *)0x0) ||
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0)) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0))
  {
    uVar3 = func_?(&UNK_?,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(0);
  return;
}


/* Void UpdateButton() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_UpdateButton
               (PlayerListButton *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar4 = (this->fields).playersCount;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar5 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar5 != (MVAvatar *)0x0) &&
     (pMVar6 = MVAvatar::MVAvatar_get_Shield(pMVar5,(MethodInfo *)0x0),
     pMVar6 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
    MVPlayerContainer::MVPlayerContainer_get_Count((MVPlayerContainer *)pMVar6,(MethodInfo *)0x0);
    pMVar7 = (MethodInfo *)0x0;
    uVar8 = func_?();
    if (pTVar4 != (Text *)0x0) {
      (*(code *)(pTVar4->klass->vtable).set_text.method)(pTVar4,uVar8);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar9 != (MVNetworkGame *)0x0) &&
         (this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                              ((DayNightCycle *)pMVar9,(MethodInfo *)0x0),
         this_01 != (SkyParam *)0x0)) {
        iVar10 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_01,pMVar7);
        if (iVar10 < 2) {
          button = (this->fields).button;
          if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Styles->_1).cctor_started == 0)) {
            func_?();
          }
          team = (IKogamaSetting *)0x5;
        }
        else {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar9 == (MVNetworkGame *)0x0) ||
             (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar9,(MethodInfo *)0x0),
             this_02 == (MVLocalPlayer *)0x0)) goto code_?;
          team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                 KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                           ((KogamaSettingNumericBase_1_System_Single_ *)this_02,pMVar7);
          button = (this->fields).button;
          if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Styles->_1).cctor_started == 0)) {
            func_?();
          }
        }
        Styles::Styles_SetStyle_4
                  (button,ButtonStyle__Enum_RegularButton,(MVTeam__Enum)team,
                   SoundStyle__Enum_NoSound,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar5 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar5 != (MVAvatar *)0x0) &&
            (pMVar6 = MVAvatar::MVAvatar_get_Shield(pMVar5,(MethodInfo *)0x0),
            pMVar6 != (MVRuntimeDataVariableClampedFloat *)0x0)) &&
           (pDVar11 = MVPlayerContainer::MVPlayerContainer_get_Values
                                ((MVPlayerContainer *)pMVar6,pMVar7),
           pDVar11 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
          pMVar7 = (MethodInfo *)&stack0xffffff98;
          this_05 = 
          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
          ;
          pDVar12 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                                *)pMVar7,
                               (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                                *)pDVar11,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                              );
          pMVar13 = (MethodInfo *)(pDVar12->host_enumerator).current.key;
          uStack_1 = 0;
          do {
            do {
              method_01 = 
              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
              ;
              cVar14 = func_?();
              if (cVar14 == '\0') goto code_?;
              this_03 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)func_?();
              method_00 = this_05;
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
                method_00 = this_05;
              }
              pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar9 == (MVNetworkGame *)0x0) ||
                  (this_04 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                       ((CloudyThemeBase *)pMVar9,(MethodInfo *)0x0),
                  this_04 == (ThemeSkybox *)0x0)) ||
                 (this_05 = (MethodInfo *)
                            System.Core.dll::System::Linq::
                            Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::
                            Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
                            Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                      ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                        *)this_04,pMVar7),
                 this_03 == (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0))
              goto code_?;
              pMVar7 = (MethodInfo *)&UNK_?;
              pOVar15 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                        TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                        TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                  (this_03,method_00);
              if (this_05 == (MethodInfo *)0x0) goto code_?;
              item._4_4_ = MethodInfo__System__Collections__Generic__List<int>__Contains_int_;
              item.rgba = (int32_t)pOVar15;
              bVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                      List_1_UnityEngine_Color32__Contains
                                ((List_1_UnityEngine_Color32_ *)this_05,item,
                                 (MethodInfo *)in_stack_17);
            } while (bVar16 == 0);
            pDVar18 = (this->fields).prevPlayerListState;
            in_stack_17 = (Il2CppClass *)&UNK_?;
            pOVar15 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                      TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                      TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                (this_03,(MethodInfo *)0x0);
            if (pDVar18 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
            bVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar18,(int32_t)pOVar15,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                              );
          } while (bVar16 != 0);
          this_00 = (this->fields).notification;
          if ((this_00 != (Image *)0x0) &&
             (this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_gameObject((Component_1 *)this_00,method_01),
             this_06 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_06,1,pMVar13);
code_?:
            iVar19 = 0x98;
            iStack_20 = 0;
            uStack_1 = 0xffffffff;
            func_?();
            if (iVar19 == 0x98) {
              iStack_20 = -1;
            }
            pDVar18 = (Dictionary_2_System_Int32_MVPlayer_ *)func_?();
            System.Core.dll::System::Collections::Generic::
            HashSet`1[AvatarModifierPackage+AvatarModifier]::
            HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                      ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar18,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__
                      );
            (this->fields).prevPlayerListState = pDVar18;
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar5 = (MVAvatar *)
                     MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar5 != (MVAvatar *)0x0) {
              pMVar13 = (MethodInfo *)&UNK_?;
              pMVar6 = MVAvatar::MVAvatar_get_Shield(pMVar5,(MethodInfo *)0x0);
              if ((pMVar6 != (MVRuntimeDataVariableClampedFloat *)0x0) &&
                 (pDVar11 = MVPlayerContainer::MVPlayerContainer_get_Values
                                      ((MVPlayerContainer *)pMVar6,pMVar7),
                 pDVar11 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0))
              {
                mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                            *)&stack0xffffff98,
                           (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                            *)pDVar11,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                          );
                uStack_1 = 2;
                while( true ) {
                  cVar14 = func_?();
                  if (cVar14 == '\0') {
                    *(undefined4 *)(&stack0xffffff90 + iStack_20 * 4) = 0xf6;
                    uStack_1 = 0xffffffff;
                    func_?();
                    *unaff_FS_OFFSET = uStack_3;
                    return;
                  }
                  this_07 = (NamedThemeAttribute_1_UnityEngine_Color_ *)func_?();
                  pDVar18 = (this->fields).prevPlayerListState;
                  if ((this_07 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) ||
                     (pMVar13 = (MethodInfo *)
                                ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                                NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_07,pMVar13),
                     pDVar18 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0)) break;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__Add
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar18,(int32_t)pMVar13,
                             (Object *)this_07,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Add_int__MVPlayer_
                            );
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void UpdatePlayersCount() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_UpdatePlayersCount
               (PlayerListButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playersCount;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVAvatar *)0x0) {
    this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      MVPlayerContainer::MVPlayerContainer_get_Count((MVPlayerContainer *)this_01,(MethodInfo *)0x0)
      ;
      func_?();
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateTeamColor() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_UpdateTeamColor
               (PlayerListButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                        ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (this_00 != (SkyParam *)0x0) {
      iVar2 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_00,(MethodInfo *)0x0);
      if (iVar2 < 2) {
        pBVar3 = *(Button **)(unaff_ESI + 0x10);
        if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Styles->_1).cctor_started == 0)) {
          func_?();
        }
        Styles::Styles_SetStyle_4
                  (pBVar3,ButtonStyle__Enum_RegularButton,MVTeam__Enum_None,SoundStyle__Enum_NoSound
                   ,(MethodInfo *)0x0);
        return;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        if (this_01 != (MVLocalPlayer *)0x0) {
          team = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                 KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                           ((KogamaSettingNumericBase_1_System_Single_ *)this_01,(MethodInfo *)0x0);
          pBVar3 = _UNK_?;
          if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Styles->_1).cctor_started == 0)) {
            func_?();
          }
          Styles::Styles_SetStyle_4
                    (pBVar3,ButtonStyle__Enum_RegularButton,(MVTeam__Enum)team,
                     SoundStyle__Enum_NoSound,(MethodInfo *)0x0);
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


/* Void ViewNotification() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton_ViewNotification
               (PlayerListButton *this,MethodInfo *method)

{
  this_00 = (this->fields).notification;
  if (this_00 != (Image *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <CreatePlayerList>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton__CreatePlayerList_m__0
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,0xc);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <CreatePlayerList>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton__CreatePlayerList_m__1
               (PlayerListButton *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).currPlayerLists;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                       (this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pOVar1,2,0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* PlayerListButton() */

void Assembly-CSharp.dll::PlayerListButton::PlayerListButton__ctor
               (PlayerListButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MVPlayer_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__Dictionary__);
  (this->fields).prevPlayerListState = this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

