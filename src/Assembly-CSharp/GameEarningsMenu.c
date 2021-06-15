
/* Int32 GetPercentage(Int32, Int32) */

int32_t Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_GetPercentage
                  (GameEarningsMenu *this,int32_t earnings,int32_t totalEarnings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (0 < totalEarnings) {
    f = ((float)earnings / (float)totalEarnings) * _UNK_?;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt(f,(MethodInfo *)0x0);
    return iVar1;
  }
  return 0x19;
}


/* Int32 GetTierEarnings(ProjectEarningsReport, GamePassTier) */

int32_t Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_GetTierEarnings
                  (GameEarningsMenu *this,ProjectEarningsReport *projectEarningsReport,
                  GamePassTier__Enum tier,MethodInfo *method)

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
  if ((((this_01 != (MVNetworkGame *)0x0) &&
       (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
       this_02 != (MVLocalPlayer *)0x0)) &&
      (key = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_02,(MethodInfo *)0x0),
      projectEarningsReport != (ProjectEarningsReport *)0x0)) &&
     (this_00 = (projectEarningsReport->fields).projectMemberEarningsReports,
     this_00 !=
     (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
      *)0x0)) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(projectEarningsReport->fields).projectMemberEarningsReports;
    if (((pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) &&
        (pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            (pDVar2,(int32_t)key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                            ), pTVar3 != (TerrainUtility_TerrainMap *)0x0)) &&
       ((fVar4 = (pTVar3->fields).m_patchSize.x, fVar4 != 0.0 &&
        (pDVar5 = *(Dictionary_2_MV_Common_GamePassTier_System_Int32_ **)((int)fVar4 + 8),
        pDVar5 != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0)))) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
              GamePassTier,System::Int32]::
              Dictionary_2_MV_Common_GamePassTier_System_Int32__ContainsKey
                        (pDVar5,(GamePassTier__Enum)key,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__ContainsKey_MV__Common__GamePassTier_
                        );
      if (bVar1 == 0) {
        return 0;
      }
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(projectEarningsReport->fields).projectMemberEarningsReports;
      if (((pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) &&
          (pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (pDVar2,(int32_t)key,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                              ), pTVar3 != (TerrainUtility_TerrainMap *)0x0)) &&
         ((fVar4 = (pTVar3->fields).m_patchSize.x, fVar4 != 0.0 &&
          (pDVar5 = *(Dictionary_2_MV_Common_GamePassTier_System_Int32_ **)((int)fVar4 + 8),
          pDVar5 != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0)))) {
        iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                GamePassTier,System::Int32]::
                Dictionary_2_MV_Common_GamePassTier_System_Int32__get_Item
                          (pDVar5,(GamePassTier__Enum)key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                          );
        return iVar6;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  iVar6 = (*pcVar7)();
  return iVar6;
}


/* Int32 GetTotalBoostEarnings(ProjectEarningsReport) */

int32_t Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_GetTotalBoostEarnings
                  (GameEarningsMenu *this,ProjectEarningsReport *projectEarningsReport,
                  MethodInfo *method)

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
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((((this_03 != (MVNetworkGame *)0x0) &&
       (this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0),
       this_04 != (MVLocalPlayer *)0x0)) &&
      (key = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_04,(MethodInfo *)0x0),
      projectEarningsReport != (ProjectEarningsReport *)0x0)) &&
     (this_00 = (projectEarningsReport->fields).projectMemberEarningsReports,
     this_00 !=
     (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
      *)0x0)) {
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                      );
    if (bVar4 == 0) {
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(projectEarningsReport->fields).projectMemberEarningsReports;
    iVar5 = 0;
    if (((this_01 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) &&
        (pTVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            (this_01,(int32_t)key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                            ), pTVar6 != (TerrainUtility_TerrainMap *)0x0)) &&
       ((fVar7 = (pTVar6->fields).m_patchSize.x, fVar7 != 0.0 &&
        ((this_02 = *(Dictionary_2_WinningConditionType_System_Object_ **)((int)fVar7 + 0xc),
         this_02 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0 &&
         (this_05 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[WinningConditionType,System::Object]::
                    Dictionary_2_WinningConditionType_System_Object__get_Values
                              (this_02,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Values__
                              ),
         this_05 !=
         (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)))))) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                  *)&stack0xffffffb4,this_05,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::String,_int>__GetEnumerator__
                );
      uStack_1 = 0;
      while (cVar8 = func_?(), cVar8 != '\0') {
        iVar9 = func_?();
        iVar5 = iVar5 + iVar9;
      }
      uStack_1 = 0xffffffff;
      func_?();
      *unaff_FS_OFFSET = uStack_3;
      return iVar5;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  iVar11 = (*pcVar10)();
  return iVar11;
}


/* Int32 GetTotalEarnings(ProjectEarningsReport) */

int32_t Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_GetTotalEarnings
                  (GameEarningsMenu *this,ProjectEarningsReport *projectEarningsReport,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_03 != (MVNetworkGame *)0x0) {
    this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
    if (this_04 != (MVLocalPlayer *)0x0) {
      key = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
            TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
            TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                      ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_04,(MethodInfo *)0x0);
      if ((projectEarningsReport != (ProjectEarningsReport *)0x0) &&
         (this_00 = (projectEarningsReport->fields).projectMemberEarningsReports,
         this_00 !=
         (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
          *)0x0)) {
        bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                          ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                          );
        if (bVar1 == 0) {
          return 0;
        }
        this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(projectEarningsReport->fields).projectMemberEarningsReports;
        if (this_01 !=
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) {
          pTVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (this_01,(int32_t)key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                             );
          if ((pTVar2 != (TerrainUtility_TerrainMap *)0x0) &&
             (this_02 = (EarningsReport *)(pTVar2->fields).m_patchSize.x,
             this_02 != (EarningsReport *)0x0)) {
            iVar3 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
                    EarningsReport::EarningsReport_get_TotalEarningsGold(this_02,(MethodInfo *)0x0);
            return iVar3;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Boolean IsPercentageWhole(Int32, Int32) */

bool Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_IsPercentageWhole
               (GameEarningsMenu *this,int32_t tierEarnings,int32_t totalEarnings,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (0 < totalEarnings) {
    f = ((float)tierEarnings / (float)totalEarnings) * _UNK_?;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt(f,(MethodInfo *)0x0);
    if (f == (float)iVar1) {
      return 1;
    }
  }
  return 0;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_OnDisable
               (GameEarningsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pLVar2 = (this->fields).transformsToExpand;
  (this->fields).currentFocusedEarning = -1;
  (this->fields).interpolationStartTime = 0.0;
  if (pLVar2 != (List_1_UnityEngine_RectTransform_ *)0x0) {
    while (pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                              ), iVar1 < (int)pOVar3) {
      pLVar4 = (this->fields).originalWidthPositionsList;
      if (pLVar4 == (List_1_System_Single_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
      List_1_System_Single__get_Item
                (pLVar4,iVar1,MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
      pLVar2 = (this->fields).transformsToExpand;
      if (pLVar2 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
      pRVar5 = (RectTransform *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,iVar1,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                         );
      pLVar2 = (this->fields).transformsToExpand;
      if ((pLVar2 == (List_1_UnityEngine_RectTransform_ *)0x0) ||
         (this_00 = (RectTransform *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,iVar1,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                              ), this_00 == (RectTransform *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                (this_00,(MethodInfo *)0x0);
      value.x = 0.0;
      value.y = 0.0;
      func_?();
      if (pRVar5 == (RectTransform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                (pRVar5,value,(MethodInfo *)0x0);
      pLVar2 = (this->fields).transformsToExpand;
      iVar1 = iVar1 + 1;
      if (pLVar2 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
    }
    pLVar2 = (this->fields).pieChartsToEnlargen;
    iVar1 = 0;
    if (pLVar2 != (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
  }
  goto code_?;
  while( true ) {
    fVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
            List_1_System_Single__get_Item
                      (pLVar4,iVar1,
                       MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    pLVar2 = (this->fields).pieChartsToEnlargen;
    if (pLVar2 == (List_1_UnityEngine_RectTransform_ *)0x0) break;
    pRVar5 = (RectTransform *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,iVar1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                       );
    value_00.y = fVar6;
    value_00.x = fVar6;
    func_?(&stack0xfffffff4);
    if (pRVar5 == (RectTransform *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (pRVar5,value_00,(MethodInfo *)0x0);
    pLVar2 = (this->fields).pieChartsToEnlargen;
    iVar1 = iVar1 + 1;
    if (pLVar2 == (List_1_UnityEngine_RectTransform_ *)0x0) break;
code_?:
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                       );
    if ((int)pOVar3 <= iVar1) {
      return;
    }
    pLVar4 = (this->fields).originalSizeList;
    if (pLVar4 == (List_1_System_Single_ *)0x0) break;
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnHighlightEarning(Int32) */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_OnHighlightEarning
               (GameEarningsMenu *this,int32_t earningEntered,MethodInfo *method)

{
  (this->fields).currentFocusedEarning = earningEntered;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).interpolationStartTime = fVar1;
  GameEarningsMenu_UpdateDisplayedText(this,(MethodInfo *)0x0);
  return;
}


/* Void OnProjectEarningsUpdatedCallback(ProjectEarningsReport) */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_OnProjectEarningsUpdatedCallback
               (GameEarningsMenu *this,ProjectEarningsReport *projectEarningsReport,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_03,(Object *)this,
             MethodInfo__GameEarningsMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
             ,
             MethodInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>__Action_System__Object__void__
            );
  pAVar2 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_03,(MethodInfo *)0x0);
  pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
  if (pAVar2 != (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                0x0) {
    if (pAVar2->klass ==
        TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
       ) {
      pAVar1 = pAVar2;
    }
    if (pAVar1 == (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                  0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_04 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_04,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar4 = cRam_? == '\0';
  (in_stack_5->fields).tierEarnings = (List_1_System_Int32_ *)this_04;
  if (bVar4) {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_05 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_05 != (MVNetworkGame *)0x0) {
    this_06 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_05,(MethodInfo *)0x0);
    if (this_06 != (MVLocalPlayer *)0x0) {
      key_00 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
               TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                         ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_06,(MethodInfo *)0x0
                         );
      key = 
      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
      ;
      if ((in_stack_6 != (ProjectEarningsReport *)0x0) &&
         (this_00 = (in_stack_6->fields).projectMemberEarningsReports,
         this_00 !=
         (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
          *)0x0)) {
        bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                          ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)key_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                          );
        if (bVar7 == 0) {
          UVar8 = UIPushOption__Enum_None;
        }
        else {
          this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)(in_stack_6->fields).projectMemberEarningsReports;
          if (this_01 ==
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) goto code_?;
          pTVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (this_01,(int32_t)key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                             );
          if ((pTVar9 == (TerrainUtility_TerrainMap *)0x0) ||
             (this_02 = (EarningsReport *)(pTVar9->fields).m_patchSize.x,
             this_02 == (EarningsReport *)0x0)) goto code_?;
          UVar8 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
                  EarningsReport::EarningsReport_get_TotalEarningsGold(this_02,(MethodInfo *)0x0);
        }
        if (this_04 != (List_1_UnityEngine_Vector4_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_04,UVar8,
                     MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          pLVar10 = (List_1_UIPushOption_ *)(in_stack_5->fields).tierEarnings;
          UVar8 = GameEarningsMenu_GetTotalBoostEarnings
                            (in_stack_5,in_stack_6,(MethodInfo *)0x0);
          if (pLVar10 != (List_1_UIPushOption_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      (pLVar10,UVar8,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
            pLVar10 = (List_1_UIPushOption_ *)(in_stack_5->fields).tierEarnings;
            UVar8 = GameEarningsMenu_GetTierEarnings
                              (in_stack_5,in_stack_6,GamePassTier__Enum_Tier1,
                               (MethodInfo *)0x0);
            if (pLVar10 != (List_1_UIPushOption_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        (pLVar10,UVar8,MethodInfo__System__Collections__Generic__List<int>__Add_int_)
              ;
              pLVar10 = (List_1_UIPushOption_ *)(in_stack_5->fields).tierEarnings;
              UVar8 = GameEarningsMenu_GetTierEarnings
                                (in_stack_5,in_stack_6,GamePassTier__Enum_Tier2,
                                 (MethodInfo *)0x0);
              if (pLVar10 != (List_1_UIPushOption_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                List_1_UIPushOption__Add
                          (pLVar10,UVar8,
                           MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                pLVar10 = (List_1_UIPushOption_ *)(in_stack_5->fields).tierEarnings;
                UVar8 = GameEarningsMenu_GetTierEarnings
                                  (in_stack_5,in_stack_6,GamePassTier__Enum_Tier3,
                                   (MethodInfo *)0x0);
                if (pLVar10 != (List_1_UIPushOption_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                  List_1_UIPushOption__Add
                            (pLVar10,UVar8,
                             MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                  pLVar11 = (in_stack_5->fields).tierEarnings;
                  if (pLVar11 != (List_1_System_Int32_ *)0x0) {
                    boostersEarnings =
                         mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                         List_1_System_Int32__get_Item
                                   (pLVar11,1,
                                    MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                   );
                    pLVar11 = (in_stack_5->fields).tierEarnings;
                    if (pLVar11 != (List_1_System_Int32_ *)0x0) {
                      tier1Earnings =
                           mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                           List_1_System_Int32__get_Item
                                     (pLVar11,2,
                                      MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                     );
                      pLVar11 = (in_stack_5->fields).tierEarnings;
                      if (pLVar11 != (List_1_System_Int32_ *)0x0) {
                        tier2Earnings =
                             mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                             List_1_System_Int32__get_Item
                                       (pLVar11,3,
                                        MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                       );
                        pLVar11 = (in_stack_5->fields).tierEarnings;
                        if (pLVar11 != (List_1_System_Int32_ *)0x0) {
                          tier3Earnings =
                               mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                               List_1_System_Int32__get_Item
                                         (pLVar11,4,
                                          MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                         );
                          pLVar11 = (in_stack_5->fields).tierEarnings;
                          if (pLVar11 != (List_1_System_Int32_ *)0x0) {
                            totalEarnings =
                                 mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                                 List_1_System_Int32__get_Item
                                           (pLVar11,0,
                                            MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                           );
                            GameEarningsMenu_UpdateEarningsText
                                      (in_stack_5,boostersEarnings,tier1Earnings,
                                       tier2Earnings,tier3Earnings,totalEarnings,(MethodInfo *)0x0);
                            GameEarningsMenu_UpdateEarningPieChart
                                      (in_stack_5,boostersEarnings,tier1Earnings,
                                       tier2Earnings,tier3Earnings,totalEarnings,(MethodInfo *)0x0);
                            GameEarningsMenu_UpdateDisplayedText
                                      (in_stack_5,(MethodInfo *)0x0);
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
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnStopHighlightEarning(Int32) */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_OnStopHighlightEarning
               (GameEarningsMenu *this,int32_t earningExited,MethodInfo *method)

{
  (this->fields).currentFocusedEarning = -1;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).interpolationStartTime = fVar1;
  GameEarningsMenu_UpdateDisplayedText(this,(MethodInfo *)0x0);
  return;
}


/* Void ResetHighlightEffects() */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_ResetHighlightEffects
               (GameEarningsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pLVar2 = (this->fields).transformsToExpand;
  (this->fields).currentFocusedEarning = -1;
  (this->fields).interpolationStartTime = 0.0;
  if (pLVar2 != (List_1_UnityEngine_RectTransform_ *)0x0) {
    while (pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                              ), iVar1 < (int)pOVar3) {
      pLVar4 = (this->fields).originalWidthPositionsList;
      if (pLVar4 == (List_1_System_Single_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
      List_1_System_Single__get_Item
                (pLVar4,iVar1,MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
      pLVar2 = (this->fields).transformsToExpand;
      if (pLVar2 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
      pRVar5 = (RectTransform *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,iVar1,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                         );
      pLVar2 = (this->fields).transformsToExpand;
      if ((pLVar2 == (List_1_UnityEngine_RectTransform_ *)0x0) ||
         (this_00 = (RectTransform *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,iVar1,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                              ), this_00 == (RectTransform *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                (this_00,(MethodInfo *)0x0);
      value.x = 0.0;
      value.y = 0.0;
      func_?();
      if (pRVar5 == (RectTransform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                (pRVar5,value,(MethodInfo *)0x0);
      pLVar2 = (this->fields).transformsToExpand;
      iVar1 = iVar1 + 1;
      if (pLVar2 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
    }
    pLVar2 = (this->fields).pieChartsToEnlargen;
    iVar1 = 0;
    if (pLVar2 != (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
  }
  goto code_?;
  while( true ) {
    fVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
            List_1_System_Single__get_Item
                      (pLVar4,iVar1,
                       MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    pLVar2 = (this->fields).pieChartsToEnlargen;
    if (pLVar2 == (List_1_UnityEngine_RectTransform_ *)0x0) break;
    pRVar5 = (RectTransform *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,iVar1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                       );
    value_00.y = fVar6;
    value_00.x = fVar6;
    func_?(&stack0xfffffff4);
    if (pRVar5 == (RectTransform *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (pRVar5,value_00,(MethodInfo *)0x0);
    pLVar2 = (this->fields).pieChartsToEnlargen;
    iVar1 = iVar1 + 1;
    if (pLVar2 == (List_1_UnityEngine_RectTransform_ *)0x0) break;
code_?:
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                       );
    if ((int)pOVar3 <= iVar1) {
      return;
    }
    pLVar4 = (this->fields).originalSizeList;
    if (pLVar4 == (List_1_System_Single_ *)0x0) break;
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetUpWaitingForProjectEarningsReportUI() */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_SetUpWaitingForProjectEarningsReportUI
               (GameEarningsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__GameEarningsMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
             ,
             MethodInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>__Action_System__Object__void__
            );
  pAVar2 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
  if (pAVar2 != (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                0x0) {
    if (pAVar2->klass ==
        TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
       ) {
      pAVar1 = pAVar2;
    }
    if (pAVar1 == (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                  0x0) {
      func_?();
      goto code_?;
    }
  }
  TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar1;
  pTVar3 = (this->fields).totalEarningsAmount;
  if (pTVar3 != (Text *)0x0) {
    (*(code *)(pTVar3->klass->vtable).set_text.method)();
    pTVar3 = (this->fields).boostEarningPercentage;
    if (pTVar3 != (Text *)0x0) {
      (*(code *)(pTVar3->klass->vtable).set_text.method)();
      pTVar3 = (this->fields).tier1EarningPercentage;
      if (pTVar3 != (Text *)0x0) {
        (*(code *)(pTVar3->klass->vtable).set_text.method)();
        pTVar3 = (this->fields).tier2EarningPercentage;
        if (pTVar3 != (Text *)0x0) {
          (*(code *)(pTVar3->klass->vtable).set_text.method)();
          pTVar3 = (this->fields).tier3EarningPercentage;
          if (pTVar3 != (Text *)0x0) {
            (*(code *)(pTVar3->klass->vtable).set_text.method)();
            pTVar3 = (this->fields).displayedEarningsDescriptionText;
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            if (pTVar3 != (Text *)0x0) {
              (*(code *)(pTVar3->klass->vtable).set_text.method)();
              pTVar3 = (this->fields).displayedEarningsAmountText;
              if (pTVar3 != (Text *)0x0) {
                (*(code *)(pTVar3->klass->vtable).set_text.method)();
                pIVar4 = (this->fields).boostCircularImage;
                if (pIVar4 != (Image *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                            (pIVar4,0.25,(MethodInfo *)0x0);
                  pIVar4 = (this->fields).tier1CircularImage;
                  if (pIVar4 != (Image *)0x0) {
                    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                              (pIVar4,0.25,(MethodInfo *)0x0);
                    pIVar4 = (this->fields).tier2CircularImage;
                    if (pIVar4 != (Image *)0x0) {
                      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                                (pIVar4,0.25,(MethodInfo *)0x0);
                      pIVar4 = (this->fields).tier3CircularImage;
                      if (pIVar4 != (Image *)0x0) {
                        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                                  (pIVar4,0.25,(MethodInfo *)0x0);
                        pIVar4 = (this->fields).tier2CircularImage;
                        if (pIVar4 != (Image *)0x0) {
                          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_transform
                                             ((Component_1 *)pIVar4,(MethodInfo *)0x0);
                          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                            func_?(TypeInfo__UnityEngine__Vector3);
                          }
                          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                   Vector3_get_forward((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0
                                                      );
                          if (pTVar5 != (Transform *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                                      (pTVar5,*pVVar6,-90.0,(MethodInfo *)0x0);
                            pIVar4 = (this->fields).tier2CircularImage;
                            if (pIVar4 != (Image *)0x0) {
                              pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_1_get_transform
                                                 ((Component_1 *)pIVar4,(MethodInfo *)0x0);
                              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                       Vector3_get_forward((Vector3 *)&stack0xfffffff0,
                                                           (MethodInfo *)0x0);
                              if (pTVar5 != (Transform *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_Rotate_5(pTVar5,*pVVar6,-180.0,(MethodInfo *)0x0);
                                pIVar4 = (this->fields).tier3CircularImage;
                                if (pIVar4 != (Image *)0x0) {
                                  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                           Component_1_get_transform
                                                     ((Component_1 *)pIVar4,(MethodInfo *)0x0);
                                  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                           Vector3_get_forward((Vector3 *)&stack0xfffffff0,
                                                               (MethodInfo *)0x0);
                                  if (pTVar5 != (Transform *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_Rotate_5(pTVar5,*pVVar6,-270.0,(MethodInfo *)0x0);
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


/* Void Start() */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_Start
               (GameEarningsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSStack_1 = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  pMStack_2 = (MonitorData *)0x0;
  pLVar3 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<float>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar3,MethodInfo__System__Collections__Generic__List<float>__List__);
  pLVar4 = (this->fields).transformsToExpand;
  (this->fields).originalWidthPositionsList = (List_1_System_Single_ *)pLVar3;
  iVar5 = 0;
  if (pLVar4 != (List_1_UnityEngine_RectTransform_ *)0x0) {
    while (pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                              ), iVar5 < (int)pOVar6) {
      pLVar4 = (this->fields).transformsToExpand;
      pLVar7 = (this->fields).originalWidthPositionsList;
      if ((pLVar4 == (List_1_UnityEngine_RectTransform_ *)0x0) ||
         (pRVar8 = (RectTransform *)
                   mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar4,iVar5,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                             ), pRVar8 == (RectTransform *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                ((Rect *)&stack0xffffffcc,pRVar8,(MethodInfo *)0x0);
      fVar9 = SubscribableVariableBase`1[System::Single]::
              SubscribableVariableBase_1_System_Single__get_Value
                        ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffec,
                         (MethodInfo *)0x0);
      if (pLVar7 == (List_1_System_Single_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Single]::List_1_System_Single__Add
                (pLVar7,fVar9,MethodInfo__System__Collections__Generic__List<float>__Add_float_);
      pLVar4 = (this->fields).transformsToExpand;
      iVar5 = iVar5 + 1;
      if (pLVar4 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
    }
    pLVar3 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar3,MethodInfo__System__Collections__Generic__List<float>__List__);
    pLVar4 = (this->fields).pieChartsToEnlargen;
    (this->fields).originalSizeList = (List_1_System_Single_ *)pLVar3;
    iVar5 = 0;
    if (pLVar4 != (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
  }
  goto code_?;
  while( true ) {
    pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffcc,pRVar8,(MethodInfo *)0x0);
    pSStack_1 = (SubscribableVariableBase_1_System_Single___Class *)pRVar10->m_XMin;
    pMStack_2 = (MonitorData *)pRVar10->m_YMin;
    fVar9 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value
                      ((SubscribableVariableBase_1_System_Single_ *)&pSStack_1,(MethodInfo *)0x0);
    if (pLVar7 == (List_1_System_Single_ *)0x0) break;
    mscorlib.dll::System::Collections::Generic::List`1[System::Single]::List_1_System_Single__Add
              (pLVar7,fVar9,MethodInfo__System__Collections__Generic__List<float>__Add_float_);
    pLVar4 = (this->fields).pieChartsToEnlargen;
    iVar5 = iVar5 + 1;
    if (pLVar4 == (List_1_UnityEngine_RectTransform_ *)0x0) break;
code_?:
    pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                       );
    if ((int)pOVar6 <= iVar5) {
      projectEarningsReport =
           GamePassesProjectEarningsManager::
           GamePassesProjectEarningsManager_get_ProjectEarningReport((MethodInfo *)0x0);
      if (projectEarningsReport != (ProjectEarningsReport *)0x0) {
        GameEarningsMenu_UpdateEarningsData(this,projectEarningsReport,(MethodInfo *)0x0);
        return;
      }
      GameEarningsMenu_SetUpWaitingForProjectEarningsReportUI(this,(MethodInfo *)0x0);
      return;
    }
    pLVar4 = (this->fields).pieChartsToEnlargen;
    pLVar7 = (this->fields).originalSizeList;
    if ((pLVar4 == (List_1_UnityEngine_RectTransform_ *)0x0) ||
       (pRVar8 = (RectTransform *)
                 mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar4,iVar5,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                           ), pRVar8 == (RectTransform *)0x0)) break;
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_Update
               (GameEarningsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (this->fields).interpolationStartTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (fVar2 + _UNK_? < fVar1) {
    return;
  }
  pLVar3 = (this->fields).transformsToExpand;
  iVar4 = 0;
  if (pLVar3 != (List_1_UnityEngine_RectTransform_ *)0x0) {
    while (pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                              ), iVar4 < (int)pOVar5) {
      pLVar6 = (this->fields).originalWidthPositionsList;
      if (pLVar6 == (List_1_System_Single_ *)0x0) goto code_?;
      fVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
               List_1_System_Single__get_Item
                         (pLVar6,iVar4,
                          MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
      if (iVar4 == (this->fields).currentFocusedEarning) {
        fVar2 = (this->fields).widthExpandAmount + fVar2;
      }
      pLVar3 = (this->fields).transformsToExpand;
      if ((pLVar3 == (List_1_UnityEngine_RectTransform_ *)0x0) ||
         (pRVar7 = (RectTransform *)
                   mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,iVar4,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                             ), pRVar7 == (RectTransform *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                ((Rect *)&stack0xffffffb4,pRVar7,(MethodInfo *)0x0);
      fVar8 = SubscribableVariableBase`1[System::Single]::
               SubscribableVariableBase_1_System_Single__get_Value
                         ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffd4,
                          (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                         (fVar8,fVar2,fVar1,(MethodInfo *)0x0);
      pLVar3 = (this->fields).transformsToExpand;
      if (pLVar3 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
      pRVar7 = (RectTransform *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,iVar4,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                         );
      pLVar3 = (this->fields).transformsToExpand;
      if ((pLVar3 == (List_1_UnityEngine_RectTransform_ *)0x0) ||
         (this_00 = (RectTransform *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,iVar4,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                              ), this_00 == (RectTransform *)0x0)) goto code_?;
      VVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                        (this_00,(MethodInfo *)0x0);
      value.x = 0.0;
      value.y = 0.0;
      func_?(&stack0xffffffec,fVar2,VVar9.y);
      if (pRVar7 == (RectTransform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                (pRVar7,value,(MethodInfo *)0x0);
      pLVar3 = (this->fields).transformsToExpand;
      iVar4 = iVar4 + 1;
      if (pLVar3 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
    }
    pLVar3 = (this->fields).pieChartsToEnlargen;
    iVar4 = 0;
    if (pLVar3 != (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
code_?:
  pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                     );
  if ((int)pOVar5 <= iVar4) {
    return;
  }
  pLVar6 = (this->fields).originalSizeList;
  if (pLVar6 == (List_1_System_Single_ *)0x0) goto code_?;
  fVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
           List_1_System_Single__get_Item
                     (pLVar6,iVar4,
                      MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
  if (iVar4 == (this->fields).currentFocusedEarning) {
    fVar2 = (this->fields).pieChartSizeIncreasePercentage * fVar2;
  }
  pLVar3 = (this->fields).pieChartsToEnlargen;
  if ((pLVar3 == (List_1_UnityEngine_RectTransform_ *)0x0) ||
     (pRVar7 = (RectTransform *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,iVar4,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                         ), pRVar7 == (RectTransform *)0x0)) goto code_?;
  pRVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                     ((Rect *)&stack0xffffffb4,pRVar7,(MethodInfo *)0x0);
  fVar8 = SubscribableVariableBase`1[System::Single]::
           SubscribableVariableBase_1_System_Single__get_Value
                     ((SubscribableVariableBase_1_System_Single_ *)pRVar11->m_YMin,
                      (MethodInfo *)pRVar11->m_Width);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp(fVar8,fVar2,fVar1,(MethodInfo *)0x0);
  pLVar3 = (this->fields).pieChartsToEnlargen;
  if (pLVar3 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
  pRVar7 = (RectTransform *)
           mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
           IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                     ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,iVar4,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                     );
  VVar9.y = (float)&stack0xffffffec;
  VVar9.x = (float)&UNK_?;
  func_?();
  if (pRVar7 == (RectTransform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
            (pRVar7,VVar9,(MethodInfo *)0x0);
  pLVar3 = (this->fields).pieChartsToEnlargen;
  iVar4 = iVar4 + 1;
  if (pLVar3 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
  goto code_?;
}


/* Void UpdateDisplayedText() */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_UpdateDisplayedText
               (GameEarningsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = this;
  iVar2 = (this->fields).currentFocusedEarning;
  pGVar3 = (this->fields).displayedSmallGoldIcon;
  if (iVar2 == -1) {
    if (pGVar3 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      pGVar3 = (pGVar1->fields).displayedLargeGoldIcon;
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,1,(MethodInfo *)0x0);
        pTVar4 = (pGVar1->fields).displayedEarningsDescriptionText;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        if (pTVar4 != (Text *)0x0) {
          (*(code *)(pTVar4->klass->vtable).set_text.method)();
          pTVar4 = (pGVar1->fields).displayedEarningsAmountText;
          if (pTVar4 != (Text *)0x0) {
            (*(code *)(pTVar4->klass->vtable).set_text.method)();
            return;
          }
        }
      }
    }
    goto code_?;
  }
  if (iVar2 == 0) {
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,1,(MethodInfo *)0x0);
    pGVar3 = (pGVar1->fields).displayedLargeGoldIcon;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,0,(MethodInfo *)0x0);
    pTVar4 = (pGVar1->fields).displayedEarningsDescriptionText;
    if (pTVar4 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar4->klass->vtable).set_text.method)();
    pLVar5 = (pGVar1->fields).tierEarnings;
    pTVar4 = (pGVar1->fields).displayedEarningsAmountText;
    if (pLVar5 == (List_1_System_Int32_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::List_1_System_Int32__get_Item
              (pLVar5,(pGVar1->fields).currentFocusedEarning + 1,
               MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    func_?();
  }
  else {
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,1,(MethodInfo *)0x0);
    pGVar3 = (pGVar1->fields).displayedLargeGoldIcon;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,0,(MethodInfo *)0x0);
    this = (GameEarningsMenu *)(pGVar1->fields).currentFocusedEarning;
    pTVar4 = (pGVar1->fields).displayedEarningsDescriptionText;
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&this);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    mscorlib.dll::System::String::String_Concat
              ((Object *)StringLiteral_Game_Tier_,arg1,(MethodInfo *)0x0);
    if (pTVar4 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar4->klass->vtable).set_text.method)();
    pLVar5 = (pGVar1->fields).tierEarnings;
    pTVar4 = (pGVar1->fields).displayedEarningsAmountText;
    if (pLVar5 == (List_1_System_Int32_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::List_1_System_Int32__get_Item
              (pLVar5,(pGVar1->fields).currentFocusedEarning + 1,
               MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    func_?();
  }
  if (pTVar4 != (Text *)0x0) {
    (*(code *)(pTVar4->klass->vtable).set_text.method)();
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateEarningPieChart(Int32, Int32, Int32, Int32, Int32) */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_UpdateEarningPieChart
               (GameEarningsMenu *this,int32_t boostersEarnings,int32_t tier1Earnings,
               int32_t tier2Earnings,int32_t tier3Earnings,int32_t totalEarnings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).boostCircularImage;
  if (totalEarnings < 1) {
    if (pIVar1 == (Image *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount(pIVar1,0.25,(MethodInfo *)0x0);
    pIVar1 = (this->fields).tier1CircularImage;
    if (pIVar1 == (Image *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount(pIVar1,0.25,(MethodInfo *)0x0);
    pIVar1 = (this->fields).tier2CircularImage;
    if (pIVar1 == (Image *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount(pIVar1,0.25,(MethodInfo *)0x0);
    pIVar1 = (this->fields).tier3CircularImage;
    fVar2 = _UNK_?;
    if (pIVar1 == (Image *)0x0) goto code_?;
  }
  else {
    if (pIVar1 == (Image *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
              (pIVar1,(float)boostersEarnings / (float)totalEarnings,(MethodInfo *)0x0);
    pIVar1 = (this->fields).tier1CircularImage;
    if (pIVar1 == (Image *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
              (pIVar1,(float)tier1Earnings / (float)totalEarnings,(MethodInfo *)0x0);
    pIVar1 = (this->fields).tier2CircularImage;
    if (pIVar1 == (Image *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
              (pIVar1,(float)tier2Earnings / (float)totalEarnings,(MethodInfo *)0x0);
    pIVar1 = (this->fields).tier3CircularImage;
    if (pIVar1 == (Image *)0x0) goto code_?;
    fVar2 = (float)tier3Earnings / (float)totalEarnings;
  }
  puVar3 = &UNK_?;
  UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount(pIVar1,fVar2,(MethodInfo *)0x0);
  angle = (float)pIVar1 * _UNK_?;
  pIVar4 = (this->fields).tier1CircularImage;
  if (pIVar4 != (Image *)0x0) {
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pIVar4,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                       ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
    if (pTVar5 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                (pTVar5,*pVVar6,angle,(MethodInfo *)0x0);
      pIVar4 = (this->fields).tier2CircularImage;
      if (pIVar4 != (Image *)0x0) {
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pIVar4,(MethodInfo *)0x0);
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                           ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
        if (pTVar5 != (Transform *)0x0) {
          fVar2 = fVar2 + (float)pIVar1;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                    (pTVar5,*pVVar6,fVar2 * _UNK_?,(MethodInfo *)0x0);
          pIVar1 = (this->fields).tier3CircularImage;
          if (pIVar1 != (Image *)0x0) {
            pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pIVar1,(MethodInfo *)0x0);
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                               ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
            if (pTVar5 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                        (pTVar5,*pVVar6,(fVar2 + (float)puVar3) * _UNK_?,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateEarningsData(ProjectEarningsReport) */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_UpdateEarningsData
               (GameEarningsMenu *this,ProjectEarningsReport *projectEarningsReport,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_03 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_03,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar1 = cRam_? == '\0';
  (this->fields).tierEarnings = (List_1_System_Int32_ *)this_03;
  if (bVar1) {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_04 != (MVNetworkGame *)0x0) {
    this_05 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_04,(MethodInfo *)0x0);
    if (this_05 != (MVLocalPlayer *)0x0) {
      key_00 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
               TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
               TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                         ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_05,(MethodInfo *)0x0
                         );
      key = 
      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
      ;
      if ((projectEarningsReport != (ProjectEarningsReport *)0x0) &&
         (this_00 = (projectEarningsReport->fields).projectMemberEarningsReports,
         this_00 !=
         (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
          *)0x0)) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                          ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)key_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                          );
        if (bVar2 == 0) {
          UVar3 = UIPushOption__Enum_None;
        }
        else {
          this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)(projectEarningsReport->fields).projectMemberEarningsReports;
          if (this_01 ==
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) goto code_?;
          pTVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (this_01,(int32_t)key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                             );
          if ((pTVar4 == (TerrainUtility_TerrainMap *)0x0) ||
             (this_02 = (EarningsReport *)(pTVar4->fields).m_patchSize.x,
             this_02 == (EarningsReport *)0x0)) goto code_?;
          UVar3 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
                  EarningsReport::EarningsReport_get_TotalEarningsGold(this_02,(MethodInfo *)0x0);
        }
        if (this_03 != (List_1_UnityEngine_Vector4_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_03,UVar3,
                     MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          pLVar5 = (List_1_UIPushOption_ *)(this->fields).tierEarnings;
          UVar3 = GameEarningsMenu_GetTotalBoostEarnings
                            (this,projectEarningsReport,(MethodInfo *)0x0);
          if (pLVar5 != (List_1_UIPushOption_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      (pLVar5,UVar3,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
            pLVar5 = (List_1_UIPushOption_ *)(this->fields).tierEarnings;
            UVar3 = GameEarningsMenu_GetTierEarnings
                              (this,projectEarningsReport,GamePassTier__Enum_Tier1,(MethodInfo *)0x0
                              );
            if (pLVar5 != (List_1_UIPushOption_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        (pLVar5,UVar3,MethodInfo__System__Collections__Generic__List<int>__Add_int_)
              ;
              pLVar5 = (List_1_UIPushOption_ *)(this->fields).tierEarnings;
              UVar3 = GameEarningsMenu_GetTierEarnings
                                (this,projectEarningsReport,GamePassTier__Enum_Tier2,
                                 (MethodInfo *)0x0);
              if (pLVar5 != (List_1_UIPushOption_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                List_1_UIPushOption__Add
                          (pLVar5,UVar3,
                           MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                pLVar5 = (List_1_UIPushOption_ *)(this->fields).tierEarnings;
                UVar3 = GameEarningsMenu_GetTierEarnings
                                  (this,projectEarningsReport,GamePassTier__Enum_Tier3,
                                   (MethodInfo *)0x0);
                if (pLVar5 != (List_1_UIPushOption_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                  List_1_UIPushOption__Add
                            (pLVar5,UVar3,
                             MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                  pLVar6 = (this->fields).tierEarnings;
                  if (pLVar6 != (List_1_System_Int32_ *)0x0) {
                    boostersEarnings =
                         mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                         List_1_System_Int32__get_Item
                                   (pLVar6,1,
                                    MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                   );
                    pLVar6 = (this->fields).tierEarnings;
                    if (pLVar6 != (List_1_System_Int32_ *)0x0) {
                      tier1Earnings =
                           mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                           List_1_System_Int32__get_Item
                                     (pLVar6,2,
                                      MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                     );
                      pLVar6 = (this->fields).tierEarnings;
                      if (pLVar6 != (List_1_System_Int32_ *)0x0) {
                        tier2Earnings =
                             mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                             List_1_System_Int32__get_Item
                                       (pLVar6,3,
                                        MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                       );
                        pLVar6 = (this->fields).tierEarnings;
                        if (pLVar6 != (List_1_System_Int32_ *)0x0) {
                          tier3Earnings =
                               mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                               List_1_System_Int32__get_Item
                                         (pLVar6,4,
                                          MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                         );
                          pLVar6 = (this->fields).tierEarnings;
                          if (pLVar6 != (List_1_System_Int32_ *)0x0) {
                            totalEarnings =
                                 mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                                 List_1_System_Int32__get_Item
                                           (pLVar6,0,
                                            MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                           );
                            GameEarningsMenu_UpdateEarningsText
                                      (this,boostersEarnings,tier1Earnings,tier2Earnings,
                                       tier3Earnings,totalEarnings,(MethodInfo *)0x0);
                            GameEarningsMenu_UpdateEarningPieChart
                                      (this,boostersEarnings,tier1Earnings,tier2Earnings,
                                       tier3Earnings,totalEarnings,(MethodInfo *)0x0);
                            GameEarningsMenu_UpdateDisplayedText(this,(MethodInfo *)0x0);
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
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateEarningsText(Int32, Int32, Int32, Int32, Int32) */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_UpdateEarningsText
               (GameEarningsMenu *this,int32_t boostersEarnings,int32_t tier1Earnings,
               int32_t tier2Earnings,int32_t tier3Earnings,int32_t totalEarnings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).totalEarningsAmount;
  this_00 = (String *)func_?(&totalEarnings,StringLiteral_N0,0);
  if ((this_00 != (String *)0x0) &&
     (mscorlib.dll::System::String::String_Replace_1
                (this_00,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
     pTVar1 != (Text *)0x0)) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
    if ((float)totalEarnings <= 0.0) {
      pTVar1 = (this->fields).boostEarningPercentage;
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
        pTVar1 = (this->fields).tier1EarningPercentage;
        if (pTVar1 != (Text *)0x0) {
          (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
          pTVar1 = (this->fields).tier2EarningPercentage;
          if (pTVar1 != (Text *)0x0) {
            (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
            pTVar1 = (this->fields).tier3EarningPercentage;
            if (pTVar1 != (Text *)0x0) {
              (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
              return;
            }
          }
        }
      }
    }
    else {
      iVar2 = GameEarningsMenu_GetPercentage(this,boostersEarnings,totalEarnings,(MethodInfo *)0x0);
      pTVar1 = (Text *)GameEarningsMenu_GetPercentage
                                 (this,tier1Earnings,totalEarnings,(MethodInfo *)0x0);
      pTStack_3 = pTVar1;
      iVar4 = GameEarningsMenu_GetPercentage(this,tier2Earnings,totalEarnings,(MethodInfo *)0x0);
      pTStack_5 = (Text *)iVar4;
      iStack_6 = GameEarningsMenu_GetPercentage(this,tier3Earnings,totalEarnings,(MethodInfo *)0x0)
      ;
      iVar7 = iStack_6 + iVar4 + (int)pTVar1 + iVar2;
      if (iVar7 < 100) {
        iVar8 = 0;
        iVar7 = 100 - iVar7;
        do {
          iVar2 = totalEarnings;
          if (iVar8 < 1) {
            method = (MethodInfo *)boostersEarnings;
            totalEarnings = (int32_t)this;
            bVar9 = GameEarningsMenu_IsPercentageWhole
                              (this,boostersEarnings,iVar2,(MethodInfo *)0x0);
            if (bVar9 != 0) goto code_?;
          }
          else {
code_?:
            iVar2 = totalEarnings;
            if (iVar8 < 2) {
              method = (MethodInfo *)tier1Earnings;
              totalEarnings = (int32_t)this;
              bVar9 = GameEarningsMenu_IsPercentageWhole(this,tier1Earnings,iVar2,(MethodInfo *)0x0)
              ;
              if (bVar9 == 0) {
                pTStack_3 = (Text *)((int)pTStack_3 + 1);
                goto code_?;
              }
            }
            iVar2 = totalEarnings;
            if (iVar8 < 3) {
              method = (MethodInfo *)tier2Earnings;
              totalEarnings = (int32_t)this;
              bVar9 = GameEarningsMenu_IsPercentageWhole(this,tier2Earnings,iVar2,(MethodInfo *)0x0)
              ;
              if (bVar9 == 0) {
                pTStack_5 = (Text *)((int)pTStack_5 + 1);
                goto code_?;
              }
            }
            iStack_6 = iStack_6 + 1;
          }
code_?:
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + -1;
          pTVar1 = pTStack_3;
        } while (iVar7 != 0);
      }
      pTStack_3 = (this->fields).boostEarningPercentage;
      method = (MethodInfo *)&UNK_?;
      pTStack_5 = (Text *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      mscorlib.dll::System::String::String_Concat_1
                ((Object *)StringLiteral_Boosters__,(Object *)pTStack_5,(Object *)::StringLiteral___
                 ,(MethodInfo *)0x0);
      if (pTStack_3 != (Text *)0x0) {
        (*(code *)(pTStack_3->klass->vtable).set_text.method)(pTStack_3);
        pTStack_5 = (this->fields).tier1EarningPercentage;
        iStack_10 = (int)pTVar1;
        pOVar11 = (Object *)func_?(TypeInfo__System__Int32,&iStack_10);
        mscorlib.dll::System::String::String_Concat_1
                  ((Object *)StringLiteral_Game_Tier_1__,pOVar11,(Object *)::StringLiteral___,
                   (MethodInfo *)0x0);
        if (pTStack_5 != (Text *)0x0) {
          (*(code *)(pTStack_5->klass->vtable).set_text.method)(pTStack_5);
          pTVar1 = (this->fields).tier2EarningPercentage;
          pOVar11 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffe8);
          mscorlib.dll::System::String::String_Concat_1
                    ((Object *)StringLiteral_Game_Tier_2__,pOVar11,(Object *)::StringLiteral___,
                     (MethodInfo *)0x0);
          if (pTVar1 != (Text *)0x0) {
            (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
            pTVar1 = (this->fields).tier3EarningPercentage;
            pOVar11 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffe4);
            mscorlib.dll::System::String::String_Concat_1
                      ((Object *)StringLiteral_Game_Tier_3__,pOVar11,(Object *)::StringLiteral___,
                       (MethodInfo *)0x0);
            if (pTVar1 != (Text *)0x0) {
              (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* GameEarningsMenu() */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu__ctor
               (GameEarningsMenu *this,MethodInfo *method)

{
  (this->fields).currentFocusedEarning = -1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

