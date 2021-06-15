
/* Void Dispose() */

void Assembly-CSharp.dll::PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
     PlayerListsLayout_CreatePlayerLists_c_Iterator0_Dispose
               (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *this,MethodInfo *method)

{
  (this->fields)._disposing = 1;
  (this->fields)._PC = -1;
  return;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
     PlayerListsLayout_CreatePlayerLists_c_Iterator0_MoveNext
               (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *this,MethodInfo *method)

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
  iStack_4 = -1;
  iVar5 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar5 == 0) {
    this_06 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
              func_?(TypeInfo__UnityEngine__WaitForEndOfFrame);
    WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
    WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_06,(MethodInfo *)0x0);
    (this->fields)._current = (Object *)this_06;
    if ((this->fields)._disposing == 0) {
      (this->fields)._PC = 1;
    }
    bVar6 = 1;
    goto code_?;
  }
  if (iVar5 != 1) {
code_?:
    bVar6 = 0;
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return bVar6;
  }
  pLVar7 = (this->fields).teams;
  if (pLVar7 == (List_1_MV_WorldObject_MVTeam_ *)0x0) {
code_?:
    pMVar8 = (MethodInfo *)0x0;
  }
  else {
    pMVar9 = (MethodInfo *)&UNK_?;
    pMVar8 = MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__;
    pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar7,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                        );
    (this->fields)._teamCount___0 = (int32_t)pOVar10;
    (this->fields)._teamNone___0 = 0;
    if (pOVar10 == (Object *)0x1) {
      (this->fields)._teamNone___0 = 1;
    }
    pPVar11 = (this->fields)._this;
    if ((pPVar11 != (PlayerListsLayout *)0x0) &&
       (pGVar12 = (pPVar11->fields).bottomGrid, pGVar12 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar12,0,(MethodInfo *)0x0);
      method_00 = 
      TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>;
      pDVar13 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__Dictionary__
                );
      (this->fields)._playerLists___0 = pDVar13;
      if ((this->fields)._teamNone___0 == 0) {
        pLVar7 = (this->fields).teams;
        if (pLVar7 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
          pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar7,
                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                              );
          if (2 < (int)pOVar10) {
            pPVar11 = (this->fields)._this;
            pMVar8 = (MethodInfo *)0x0;
            if ((pPVar11 == (PlayerListsLayout *)0x0) ||
               (pGVar12 = (pPVar11->fields).bottomGrid, pGVar12 == (GameObject *)0x0))
            goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar12,1,in_stack_14);
          }
          pMStack_15 = (MethodInfo *)(this->fields).teams;
          if (pMStack_15 != (MethodInfo *)0x0) {
            pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                 pMStack_15,
                                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                                );
            pPVar11 = (this->fields)._this;
            pMVar8 = (MethodInfo *)0x0;
            if ((pPVar11 == (PlayerListsLayout *)0x0) ||
               (pGVar12 = (pPVar11->fields).topGrid, pGVar12 == (GameObject *)0x0))
            goto code_?;
            pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar12,(MethodInfo *)method_00);
            if (pTVar16 != (Transform *)0x0) {
              pTVar17 = (Transform *)0x0;
              if (pTVar16->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
                pTVar17 = pTVar16;
              }
              pRVar18 = TypeInfo__UnityEngine__RectTransform;
              if (pTVar17 == (Transform *)0x0) goto code_?;
              pRVar19 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_get_rect
                                  ((Rect *)&stack0xffffff84,(RectTransform *)pTVar17,
                                   (MethodInfo *)0x0);
              pMVar9 = (MethodInfo *)pRVar19->m_Width;
              SubscribableVariableBase`1[System::Single]::
              SubscribableVariableBase_1_System_Single__get_Value
                        ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffff94,
                         (MethodInfo *)0x0);
              in_stack_20 =
                   (Dictionary_2_WinningConditionType_System_Object_ *)
                   UnityEngine__UI__HorizontalLayoutGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::HorizontalLayoutGroup>__
              ;
              this_01 = (ThemeSkybox *)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_GetComponent_58
                                  ((Component_1 *)pTVar17,
                                   UnityEngine__UI__HorizontalLayoutGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::HorizontalLayoutGroup>__
                                  );
              pMVar8 = (MethodInfo *)0x0;
              if (this_01 == (ThemeSkybox *)0x0) goto code_?;
              method_01 = (SubscribableVariableBase_1_System_Single___Class *)&UNK_?;
              ThemeSkybox::ThemeSkybox_get_FogDensity(this_01,pMVar9);
              pLVar7 = (this->fields).teams;
              iStack_21 = 0;
              if (pLVar7 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
                while( true ) {
                  pOVar22 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft
                            ::Json::Serialization::JsonProperty]::
                            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                       pLVar7,
                                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                                      );
                  if ((int)pOVar22 <= iStack_21) {
                    pPVar11 = (this->fields)._this;
                    pMVar8 = (MethodInfo *)0x0;
                    if (pPVar11 == (PlayerListsLayout *)0x0) goto code_?;
                    GStack_23 = (GameStatCounterType__Enum)(pPVar11->fields).typeToDisplay;
                    PlayerListsLayout::PlayerListsLayout_SortPlayerListsAfterScore
                              (pPVar11,(this->fields)._playerLists___0,(this->fields).teams,GStack_23
                               ,pMStack_15);
                    goto code_?;
                  }
                  pPVar11 = (this->fields)._this;
                  pLVar7 = (this->fields).teams;
                  if (pLVar7 == (List_1_MV_WorldObject_MVTeam_ *)0x0) break;
                  MVar24 = mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::
                           MVTeam]::List_1_MV_WorldObject_MVTeam__get_Item
                                     (pLVar7,iStack_21,
                                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                                     );
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  pMVar8 = (MethodInfo *)0x0;
                  if (this_02 == (MVNetworkGame *)0x0) goto code_?;
                  pMVar9 = (MethodInfo *)
                            DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                      ((DayNightCycle *)this_02,(MethodInfo *)0x0);
                  pLVar7 = (this->fields).teams;
                  if (pLVar7 == (List_1_MV_WorldObject_MVTeam_ *)0x0) break;
                  team = mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::MVTeam]
                         ::List_1_MV_WorldObject_MVTeam__get_Item
                                   (pLVar7,iStack_21,
                                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                                   );
                  pPVar25 = (this->fields)._this;
                  pMVar8 = (MethodInfo *)0x0;
                  if (pPVar25 == (PlayerListsLayout *)0x0) goto code_?;
                  GStack_26 = CONCAT31(GStack_26._1_3_,(pPVar25->fields).typeToDisplay);
                  if (pMVar9 == (MethodInfo *)0x0) goto code_?;
                  iVar27 = MVTeamManager::MVTeamManager_GetScore
                                     ((MVTeamManager *)pMVar9,team,GStack_26,in_stack_28);
                  pMVar8 = (MethodInfo *)0x0;
                  if (pPVar11 == (PlayerListsLayout *)0x0) goto code_?;
                  pPVar29 = PlayerListsLayout::PlayerListsLayout_CreatePlayerList
                                      (pPVar11,MVar24,iVar27,(MethodInfo *)method_01);
                  if ((pPVar29 == (PlayerListBase *)0x0) ||
                     (pMVar30 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_GetComponent_58
                                          ((Component_1 *)pPVar29,
                                           UnityEngine__UI__LayoutElement_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::LayoutElement>__
                                          ), pMVar30 == (MVInteractableBase *)0x0)) break;
                  func_?();
                  if (iStack_21 < 2) {
                    pMStack_15 = (MethodInfo *)
                                 UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_1_get_transform((Component_1 *)pPVar29,(MethodInfo *)0x0)
                    ;
                    pPVar11 = (this->fields)._this;
                    pMVar8 = (MethodInfo *)0x0;
                    if (pPVar11 == (PlayerListsLayout *)0x0) goto code_?;
                    pGVar12 = (pPVar11->fields).topGrid;
                  }
                  else {
                    func_?(0x28,pMVar30,(float)(3 < (int)pOVar10));
                    pMStack_15 = (MethodInfo *)
                                 UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_1_get_transform((Component_1 *)pPVar29,(MethodInfo *)0x0)
                    ;
                    pPVar11 = (this->fields)._this;
                    pMVar8 = (MethodInfo *)0x0;
                    if (pPVar11 == (PlayerListsLayout *)0x0) goto code_?;
                    pGVar12 = (pPVar11->fields).bottomGrid;
                  }
                  pMVar8 = (MethodInfo *)0x0;
                  if (pGVar12 == (GameObject *)0x0) goto code_?;
                  pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar12,(MethodInfo *)0x0);
                  pMVar8 = (MethodInfo *)0x0;
                  if (pMStack_15 == (MethodInfo *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                            ((Transform *)pMStack_15,pTVar16,0,pMVar9);
                  pDVar13 = (this->fields)._playerLists___0;
                  in_stack_20 =
                       (Dictionary_2_WinningConditionType_System_Object_ *)(this->fields).teams;
                  if ((in_stack_20 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0)
                     || (MVar24 = mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject
                                  ::MVTeam]::List_1_MV_WorldObject_MVTeam__get_Item
                                            ((List_1_MV_WorldObject_MVTeam_ *)in_stack_20,
                                             iStack_21,
                                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                                            ),
                        pDVar13 == (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)0x0))
                  break;
                  in_stack_28 = (MethodInfo *)&UNK_?;
                  method_01 = (SubscribableVariableBase_1_System_Single___Class *)
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__Add_MV__WorldObject__MVTeam__PlayerListBase_
                  ;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  MVTeam,System::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
                            ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar13,MVar24,
                             (Object *)pPVar29,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__Add_MV__WorldObject__MVTeam__PlayerListBase_
                            );
                  pLVar7 = (this->fields).teams;
                  iStack_21 = iStack_21 + 1;
                  if (pLVar7 == (List_1_MV_WorldObject_MVTeam_ *)0x0) break;
                }
              }
            }
          }
        }
        goto code_?;
      }
      pPVar11 = (this->fields)._this;
      pMVar8 = (MethodInfo *)0x0;
      if (pPVar11 != (PlayerListsLayout *)0x0) {
        pPVar29 = PlayerListsLayout::PlayerListsLayout_CreatePlayerList
                            (pPVar11,MVTeam__Enum_None,0,in_stack_31);
        pDVar13 = (this->fields)._playerLists___0;
        if (pDVar13 == (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::
        Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
                  ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar13,MVTeam__Enum_None,
                   (Object *)pPVar29,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__Add_MV__WorldObject__MVTeam__PlayerListBase_
                  );
        pMVar8 = (MethodInfo *)0x0;
        if (pPVar29 != (PlayerListBase *)0x0) {
          pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)pPVar29,in_stack_32);
          pPVar11 = (this->fields)._this;
          pMVar8 = (MethodInfo *)0x0;
          if ((pPVar11 != (PlayerListsLayout *)0x0) &&
             (pGVar12 = (pPVar11->fields).topGrid, pGVar12 != (GameObject *)0x0)) {
            pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar12,pMVar9);
            pMVar8 = (MethodInfo *)0x0;
            if (pTVar16 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar16,pTVar17,0,(MethodInfo *)0x0);
code_?:
              pPVar11 = (this->fields)._this;
              pMVar8 = (MethodInfo *)0x0;
              if (pPVar11 != (PlayerListsLayout *)0x0) {
                this_03 = PlayerListsLayout::PlayerListsLayout_GetSortedTeamLists
                                    (pPVar11,(this->fields).players,(this->fields).teams,
                                     (MethodInfo *)in_stack_20);
                (this->fields)._sortedTeamLists___0 = this_03;
                if (this_03 != (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)0x0) {
                  pDVar33 = mscorlib.dll::System::Collections::Generic::
                            Dictionary`2[WinningConditionType,System::Object]::
                            Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                                      ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                                        *)&stack0xffffff80,
                                       (Dictionary_2_WinningConditionType_System_Object_ *)this_03,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                                      );
                  this_00 = &(this->fields)._locvar0;
                  iVar27 = pDVar33->next;
                  iVar34 = pDVar33->stamp;
                  iVar35 = (pDVar33->current).key;
                  pLVar36 = (List_1_MVPlayer_ *)(pDVar33->current).value;
                  this_00->dictionary =
                       (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)pDVar33->dictionary;
                  (this->fields)._locvar0.next = iVar27;
                  (this->fields)._locvar0.stamp = iVar34;
                  (this->fields)._locvar0.current.key = iVar35;
                  (this->fields)._locvar0.current.value = pLVar36;
                  uStack_1 = 0;
                  iVar5 = iStack_4;
                  while (iStack_4 = iVar5, cVar37 = func_?(), cVar37 != '\0') {
                    LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)this_00,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Current__
                              );
                    this_04 = (List_1_UnityEngine_Color32_ *)func_?();
                    if (this_04 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                    List_1_UnityEngine_Color32__GetEnumerator
                              ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffff84,this_04,
                               MethodInfo__System__Collections__Generic__List<MVPlayer>__GetEnumerator__
                              );
                    uStack_1 = CONCAT31(uStack_1._1_3_,1);
code_?:
                    cVar37 = func_?(&stack0xffffffa4,
                                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__MoveNext__
                                           );
                    if (cVar37 != '\0') {
                      this_05 = (KogamaSettingNumericBase_1_System_Single_ *)
                                mscorlib.dll::System::Collections::ObjectModel::
                                Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                            *)&stack0xffffffa4,
                                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__get_Current__
                                          );
                      pMVar8 = (MethodInfo *)0x0;
                      if (this_05 != (KogamaSettingNumericBase_1_System_Single_ *)0x0) {
                        key = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore
                              ::KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                              KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                        (this_05,(MethodInfo *)0x0);
                        if ((this->fields)._teamNone___0 == 0) goto code_?;
                        key = (IKogamaSetting *)0x5;
                        goto code_?;
                      }
                      goto code_?;
                    }
                    iVar38 = iStack_4 + 1;
                    uStack_1 = uStack_1 & 0xffffff00;
                    *(undefined4 *)(&stack0xffffff74 + iVar38 * 4) = 0x30a;
                    func_?(&stack0xffffffa4,
                                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__Dispose__
                                   );
                    iVar5 = iVar38;
                    if (((iVar38 != -1) && (*(int *)(&stack0xffffff74 + iVar38 * 4) == 0x30a)) &&
                       (iVar5 = iStack_4, iVar38 < 0)) {
                      iVar5 = iVar38;
                    }
                  }
                  *(undefined4 *)(&stack0xffffff78 + iStack_4 * 4) = 0x331;
                  uStack_1 = 0xffffffff;
                  func_?();
                  (this->fields)._PC = -1;
                  goto code_?;
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  pTVar16 = (Transform *)func_?(pMVar8);
  pRVar18 = extraout_ECX;
code_?:
  func_?(pTVar16,pRVar18);
  func_?();
  func_?();
  pcVar39 = (code *)swi(3);
  bVar6 = (*pcVar39)();
  return bVar6;
code_?:
  if (key != (IKogamaSetting *)0x5) {
code_?:
    pDVar13 = (this->fields)._playerLists___0;
    if ((pDVar13 == (Dictionary_2_MV_WorldObject_MVTeam_PlayerListBase_ *)0x0) ||
       (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  MVTeam,System::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                            ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar13,
                             (MVTeam__Enum)key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListBase>__get_Item_MV__WorldObject__MVTeam_
                            ), pOVar10 == (Object *)0x0)) goto code_?;
    func_?();
  }
  goto code_?;
}


/* Void Reset() */

void Assembly-CSharp.dll::PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
     PlayerListsLayout_CreatePlayerLists_c_Iterator0_Reset
               (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Object System.Collections.IEnumerator.get_Current() */

Object * Assembly-CSharp.dll::PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
         PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                   (PlayerListsLayout_CreatePlayerLists_c_Iterator0 *this,MethodInfo *method)

{
  return (this->fields)._current;
}

