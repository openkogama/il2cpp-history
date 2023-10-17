
/* Int32 GetPercentage(Int32, Int32) */

int32_t Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_GetPercentage
                  (GameEarningsMenu *this,int32_t earnings,int32_t totalEarnings,MethodInfo *method)

{
  if (0 < totalEarnings) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar1 = ((float)earnings / (float)totalEarnings) * _UNK_?;
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar2 = (float10)func_?((double)fVar1);
    return (int)fVar2;
  }
  return 0x19;
}


/* Int32 GetTierEarnings(ProjectEarningsReport, GamePassTier) */

int32_t Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_GetTierEarnings
                  (GameEarningsMenu *this,ProjectEarningsReport *projectEarningsReport,
                  GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__ContainsKey_MV__Common__GamePassTier_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((((this_01 != (MVNetworkGame *)0x0) &&
       (pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
       pMVar1 != (MVLocalPlayer *)0x0)) && (projectEarningsReport != (ProjectEarningsReport *)0x0))
     && (pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                  (projectEarningsReport->fields).projectMemberEarningsReports,
        pDVar2 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
    pOVar3 = (Object *)(pMVar1->fields)._._ProfileID_k__BackingField;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (pDVar2,pOVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                      );
    if (bVar4 == 0) {
      return 0;
    }
    pDVar5 = (projectEarningsReport->fields).projectMemberEarningsReports;
    if (((pDVar5 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                     *)0x0) &&
        (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar5,
                             (Int32Enum__Enum)pOVar3,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                            ), pOVar6 != (Object *)0x0)) &&
       ((pOVar6[1].klass != (Object__Class *)0x0 &&
        (pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                  ((pOVar6[1].klass)->_0).name,
        pDVar2 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)))) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (pDVar2,(Object *)tier,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__ContainsKey_MV__Common__GamePassTier_
                        );
      if (bVar4 == 0) {
        return 0;
      }
      pDVar5 = (projectEarningsReport->fields).projectMemberEarningsReports;
      if (((pDVar5 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                       *)0x0) &&
          (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar5,
                               (Int32Enum__Enum)pOVar3,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                              ), pOVar3 != (Object *)0x0)) &&
         ((pOVar3[1].klass != (Object__Class *)0x0 &&
          (this_00 = (Dictionary_2_System_ByteEnum_System_Object_ *)((pOVar3[1].klass)->_0).name,
          this_00 != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0)))) {
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           (this_00,(ByteEnum__Enum)pDVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                           );
        return (int32_t)pOVar3;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  iVar8 = (*pcVar7)();
  return iVar8;
}


/* Int32 GetTotalBoostEarnings(ProjectEarningsReport) */

int32_t Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_GetTotalBoostEarnings
                  (GameEarningsMenu *this,ProjectEarningsReport *projectEarningsReport,
                  MethodInfo *method)

{
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::String,_int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::String,_int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::String,_int>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::String,_int>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_03 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      pOVar3 = (Object *)(pMVar2->fields)._._ProfileID_k__BackingField;
      if ((projectEarningsReport != (ProjectEarningsReport *)0x0) &&
         (this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                    (projectEarningsReport->fields).projectMemberEarningsReports,
         this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this_00,pOVar3,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                          );
        if (bVar4 == 0) {
          *unaff_FS_OFFSET = uVar1;
          return 0;
        }
        this_01 = (projectEarningsReport->fields).projectMemberEarningsReports;
        iVar5 = 0;
        if (this_01 !=
            (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
             *)0x0) {
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
                              (Int32Enum__Enum)pOVar3,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                             );
          if (((pOVar3 != (Object *)0x0) && (pOVar3[1].klass != (Object__Class *)0x0)) &&
             (this_02 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)((pOVar3[1].klass)->_0).namespaze,
             this_02 !=
             (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
             0x0)) {
            this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                                (this_02,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Values__
                                );
            if (this_04 !=
                (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)0x0) {
              pDVar6 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                       Regex+CachedCodeEntryKey,System::Object]::
                       Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                                 ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                   *)&stack0xffffffd8,this_04,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::String,_int>__GetEnumerator__
                                 );
              pOVar3 = (Object *)&stack0xffffffc4;
              pOVar7 = pDVar6->_currentValue;
              while( true ) {
                bVar4 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                        Object,System::Int32Enum]::
                        Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Int32Enum__MoveNext
                                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Int32Enum_
                                    *)&stack0xffffffc4,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::String,_int>__MoveNext__
                                  );
                if (bVar4 == 0) break;
                iVar5 = (int)&pOVar7->klass + iVar5;
              }
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        (pOVar3,(ExceptionArgument__Enum)
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::String,_int>__Dispose__
                         ,(MethodInfo *)0xffffffff);
              *unaff_FS_OFFSET = pOVar3;
              return iVar5;
            }
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  iVar9 = (*pcVar8)();
  return iVar9;
}


/* Int32 GetTotalEarnings(ProjectEarningsReport) */

int32_t Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_GetTotalEarnings
                  (GameEarningsMenu *this,ProjectEarningsReport *projectEarningsReport,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
    if (((pMVar1 != (MVLocalPlayer *)0x0) && (projectEarningsReport != (ProjectEarningsReport *)0x0)
        ) && (this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                        (projectEarningsReport->fields).projectMemberEarningsReports,
             this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
      pOVar2 = (Object *)(pMVar1->fields)._._ProfileID_k__BackingField;
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,pOVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        );
      if (bVar3 == 0) {
        return 0;
      }
      this_01 = (projectEarningsReport->fields).projectMemberEarningsReports;
      if (this_01 !=
          (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
           *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
                            (Int32Enum__Enum)pOVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                           );
        if ((pOVar2 != (Object *)0x0) && (pOVar2[1].klass != (Object__Class *)0x0)) {
          iVar4 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
                  EarningsReport::EarningsReport_get_TotalEarningsGold
                            ((EarningsReport *)pOVar2[1].klass,(MethodInfo *)0x0);
          return iVar4;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* Boolean IsPercentageWhole(Int32, Int32) */

bool Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_IsPercentageWhole
               (GameEarningsMenu *this,int32_t tierEarnings,int32_t totalEarnings,MethodInfo *method
               )

{
  if (0 < totalEarnings) {
    fVar1 = ((float)tierEarnings / (float)totalEarnings) * _UNK_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar2 = (float10)func_?((double)fVar1);
    if (fVar1 == (float)(int)fVar2) {
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pLVar2 = (this->fields).transformsToExpand;
  (this->fields).currentFocusedEarning = -1;
  (this->fields).interpolationStartTime = 0.0;
  if (pLVar2 != (List_1_UnityEngine_RectTransform_ *)0x0) {
    while (iVar1 < (pLVar2->fields)._size) {
      pLVar3 = (this->fields).originalWidthPositionsList;
      if (pLVar3 == (List_1_System_Single_ *)0x0) goto code_?;
      fVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
              List_1_System_Single__get_Item
                        (pLVar3,iVar1,
                         MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
      pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).transformsToExpand;
      if (pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar5,iVar1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                        );
      pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).transformsToExpand;
      if ((pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (this_00 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar5,iVar1,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                              ), this_00 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      VVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                        ((RectTransform *)this_00,(MethodInfo *)0x0);
      if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
      VVar7.y = VVar7.y;
      VVar7.x = fVar4;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                ((RectTransform *)RVar6,VVar7,(MethodInfo *)0x0);
      pLVar2 = (this->fields).transformsToExpand;
      iVar1 = iVar1 + 1;
      if (pLVar2 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
    }
    pLVar2 = (this->fields).pieChartsToEnlargen;
    iVar1 = 0;
    if (pLVar2 != (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
code_?:
  if ((pLVar2->fields)._size <= iVar1) {
    return;
  }
  pLVar3 = (this->fields).originalSizeList;
  if (pLVar3 == (List_1_System_Single_ *)0x0) goto code_?;
  fVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
          List_1_System_Single__get_Item
                    (pLVar3,iVar1,
                     MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
  pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).pieChartsToEnlargen;
  if ((pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
     (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar5,iVar1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                        ), RVar6 == (RegexCharClass_SingleRange)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
            ((RectTransform *)RVar6,(Vector2)((ulonglong)(uint)fVar4 << 0x20),(MethodInfo *)0x0);
  pLVar2 = (this->fields).pieChartsToEnlargen;
  iVar1 = iVar1 + 1;
  if (pLVar2 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
  goto code_?;
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
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                   );
    func_?(&
                    MethodInfo__GameEarningsMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                   );
    func_?(&TypeInfo__GamePassesProjectEarningsManager);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_02 = (Action_1_Object_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                           );
  if (this_02 == (Action_1_Object_ *)0x0) {
    func_?();
    goto code_?;
  }
  mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
            (this_02,(Object *)this,
             MethodInfo__GameEarningsMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_02,(MethodInfo *)0x0);
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
         (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
  }
  else {
    pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
             func_?();
    if (pAVar1 == (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                  0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar1;
    iVar4 = func_?();
    if (iVar4 == 0) goto code_?;
  }
  func_?();
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  pLVar5 = (List_1_System_Int32_ *)
           func_?(TypeInfo__System__Collections__Generic__List<int>);
  if (pLVar5 != (List_1_System_Int32_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar5,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    (in_stack_6->fields).tierEarnings = pLVar5;
    func_?(&(in_stack_6->fields).tierEarnings,pLVar5);
    pLVar5 = (in_stack_6->fields).tierEarnings;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_03 != (MVNetworkGame *)0x0) {
      pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
      if (((pMVar7 != (MVLocalPlayer *)0x0) && (in_stack_8 != (ProjectEarningsReport *)0x0))
         && (this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                       (in_stack_8->fields).projectMemberEarningsReports,
            this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
        pOVar9 = (Object *)(pMVar7->fields)._._ProfileID_k__BackingField;
        bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this_00,pOVar9,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                          );
        if (bVar10 == 0) {
          iVar11 = 0;
        }
        else {
          this_01 = (in_stack_8->fields).projectMemberEarningsReports;
          if (this_01 ==
              (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
               *)0x0) goto code_?;
          pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
                              (Int32Enum__Enum)pOVar9,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                             );
          if ((pOVar9 == (Object *)0x0) || (pOVar9[1].klass == (Object__Class *)0x0))
          goto code_?;
          iVar11 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
                   EarningsReport::EarningsReport_get_TotalEarningsGold
                             ((EarningsReport *)pOVar9[1].klass,(MethodInfo *)0x0);
        }
        if (pLVar5 != (List_1_System_Int32_ *)0x0) {
          func_?(pLVar5,iVar11,
                          MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          pLVar5 = (in_stack_6->fields).tierEarnings;
          iVar11 = GameEarningsMenu_GetTotalBoostEarnings
                             (in_stack_6,in_stack_8,(MethodInfo *)0x0);
          if (pLVar5 != (List_1_System_Int32_ *)0x0) {
            func_?(pLVar5,iVar11,
                            MethodInfo__System__Collections__Generic__List<int>__Add_int_);
            pLVar5 = (in_stack_6->fields).tierEarnings;
            iVar11 = GameEarningsMenu_GetTierEarnings
                               (in_stack_6,in_stack_8,GamePassTier__Enum_Tier1,
                                (MethodInfo *)0x0);
            if (pLVar5 != (List_1_System_Int32_ *)0x0) {
              func_?(pLVar5,iVar11,
                              MethodInfo__System__Collections__Generic__List<int>__Add_int_);
              pLVar5 = (in_stack_6->fields).tierEarnings;
              iVar11 = GameEarningsMenu_GetTierEarnings
                                 (in_stack_6,in_stack_8,GamePassTier__Enum_Tier2,
                                  (MethodInfo *)0x0);
              if (pLVar5 != (List_1_System_Int32_ *)0x0) {
                func_?(pLVar5,iVar11,
                                MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                pLVar5 = (in_stack_6->fields).tierEarnings;
                iVar11 = GameEarningsMenu_GetTierEarnings
                                   (in_stack_6,in_stack_8,GamePassTier__Enum_Tier3,
                                    (MethodInfo *)0x0);
                if (pLVar5 != (List_1_System_Int32_ *)0x0) {
                  func_?(pLVar5,iVar11,
                                  MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                  pLVar12 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           (in_stack_6->fields).tierEarnings;
                  if (pLVar12 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )0x0) {
                    boostersEarnings =
                         mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (pLVar12,1,
                                    MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                   );
                    pLVar12 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             (in_stack_6->fields).tierEarnings;
                    if (pLVar12 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)0x0) {
                      tier1Earnings =
                           mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar12,2,
                                      MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                     );
                      pLVar12 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               (in_stack_6->fields).tierEarnings;
                      if (pLVar12 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)0x0) {
                        tier2Earnings =
                             mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                             RegularExpressions::RegexCharClass+SingleRange]::
                             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                       (pLVar12,3,
                                        MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                       );
                        pLVar12 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)(in_stack_6->fields).tierEarnings;
                        if (pLVar12 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                       *)0x0) {
                          tier3Earnings =
                               mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                               RegularExpressions::RegexCharClass+SingleRange]::
                               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                         (pLVar12,4,
                                          MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                         );
                          pLVar12 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)(in_stack_6->fields).tierEarnings;
                          if (pLVar12 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                         *)0x0) {
                            totalEarnings =
                                 mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                 RegularExpressions::RegexCharClass+SingleRange]::
                                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                           (pLVar12,0,
                                            MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                           );
                            GameEarningsMenu_UpdateEarningsText
                                      (in_stack_6,(int32_t)boostersEarnings,
                                       (int32_t)tier1Earnings,(int32_t)tier2Earnings,
                                       (int32_t)tier3Earnings,(int32_t)totalEarnings,
                                       (MethodInfo *)0x0);
                            GameEarningsMenu_UpdateEarningPieChart
                                      (in_stack_6,(int32_t)boostersEarnings,
                                       (int32_t)tier1Earnings,(int32_t)tier2Earnings,
                                       (int32_t)tier3Earnings,(int32_t)totalEarnings,
                                       (MethodInfo *)0x0);
                            GameEarningsMenu_UpdateDisplayedText
                                      (in_stack_6,(MethodInfo *)0x0);
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pLVar2 = (this->fields).transformsToExpand;
  (this->fields).currentFocusedEarning = -1;
  (this->fields).interpolationStartTime = 0.0;
  if (pLVar2 != (List_1_UnityEngine_RectTransform_ *)0x0) {
    while (iVar1 < (pLVar2->fields)._size) {
      pLVar3 = (this->fields).originalWidthPositionsList;
      if (pLVar3 == (List_1_System_Single_ *)0x0) goto code_?;
      fVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
              List_1_System_Single__get_Item
                        (pLVar3,iVar1,
                         MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
      pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).transformsToExpand;
      if (pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar5,iVar1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                        );
      pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).transformsToExpand;
      if ((pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (this_00 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar5,iVar1,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                              ), this_00 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      VVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                        ((RectTransform *)this_00,(MethodInfo *)0x0);
      if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
      VVar7.y = VVar7.y;
      VVar7.x = fVar4;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                ((RectTransform *)RVar6,VVar7,(MethodInfo *)0x0);
      pLVar2 = (this->fields).transformsToExpand;
      iVar1 = iVar1 + 1;
      if (pLVar2 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
    }
    pLVar2 = (this->fields).pieChartsToEnlargen;
    iVar1 = 0;
    if (pLVar2 != (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
code_?:
  if ((pLVar2->fields)._size <= iVar1) {
    return;
  }
  pLVar3 = (this->fields).originalSizeList;
  if (pLVar3 == (List_1_System_Single_ *)0x0) goto code_?;
  fVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
          List_1_System_Single__get_Item
                    (pLVar3,iVar1,
                     MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
  pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).pieChartsToEnlargen;
  if ((pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
     (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar5,iVar1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                        ), RVar6 == (RegexCharClass_SingleRange)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
            ((RectTransform *)RVar6,(Vector2)((ulonglong)(uint)fVar4 << 0x20),(MethodInfo *)0x0);
  pLVar2 = (this->fields).pieChartsToEnlargen;
  iVar1 = iVar1 + 1;
  if (pLVar2 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
  goto code_?;
}


/* Void SetUpWaitingForProjectEarningsReportUI() */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_SetUpWaitingForProjectEarningsReportUI
               (GameEarningsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                   );
    func_?(&
                    MethodInfo__GameEarningsMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                   );
    func_?(&TypeInfo__GamePassesProjectEarningsManager);
    func_?(&StringLiteral_Game_Tier_2______);
    func_?(&StringLiteral_Game_Tier_1______);
    func_?(&StringLiteral_Boosters______);
    func_?(&StringLiteral_Game_Tier_3______);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral___);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_00 = (Action_1_Object_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                           );
  if (this_00 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__GameEarningsMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
               ,(MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
           (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
    }
    else {
      pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
               func_?();
      if (pAVar1 == (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_
                     *)0x0) goto code_?;
      TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar1;
      iVar3 = func_?();
      if (iVar3 == 0) goto code_?;
    }
    func_?();
    pTVar4 = (this->fields).totalEarningsAmount;
    if (pTVar4 != (Text *)0x0) {
      (*(pTVar4->klass->vtable).set_text.methodPtr)
                (pTVar4,::StringLiteral___,(pTVar4->klass->vtable).set_text.method);
      pTVar4 = (this->fields).boostEarningPercentage;
      if (pTVar4 != (Text *)0x0) {
        (*(pTVar4->klass->vtable).set_text.methodPtr)
                  (pTVar4,StringLiteral_Boosters______,(pTVar4->klass->vtable).set_text.method);
        pTVar4 = (this->fields).tier1EarningPercentage;
        if (pTVar4 != (Text *)0x0) {
          (*(pTVar4->klass->vtable).set_text.methodPtr)
                    (pTVar4,StringLiteral_Game_Tier_1______,(pTVar4->klass->vtable).set_text.method)
          ;
          pTVar4 = (this->fields).tier2EarningPercentage;
          if (pTVar4 != (Text *)0x0) {
            (*(pTVar4->klass->vtable).set_text.methodPtr)
                      (pTVar4,StringLiteral_Game_Tier_2______,
                       (pTVar4->klass->vtable).set_text.method);
            pTVar4 = (this->fields).tier3EarningPercentage;
            if (pTVar4 != (Text *)0x0) {
              (*(pTVar4->klass->vtable).set_text.methodPtr)
                        (pTVar4,StringLiteral_Game_Tier_3______,
                         (pTVar4->klass->vtable).set_text.method);
              pTVar4 = (this->fields).displayedEarningsDescriptionText;
              if (pTVar4 != (Text *)0x0) {
                (*(pTVar4->klass->vtable).set_text.methodPtr)
                          (pTVar4,::StringLiteral__,(pTVar4->klass->vtable).set_text.method);
                pTVar4 = (this->fields).displayedEarningsAmountText;
                if (pTVar4 != (Text *)0x0) {
                  (*(pTVar4->klass->vtable).set_text.methodPtr)
                            (pTVar4,::StringLiteral__,(pTVar4->klass->vtable).set_text.method);
                  pIVar5 = (this->fields).boostCircularImage;
                  if (pIVar5 != (Image *)0x0) {
                    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                              (pIVar5,0.25,(MethodInfo *)0x0);
                    pIVar5 = (this->fields).tier1CircularImage;
                    if (pIVar5 != (Image *)0x0) {
                      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                                (pIVar5,0.25,(MethodInfo *)0x0);
                      pIVar5 = (this->fields).tier2CircularImage;
                      if (pIVar5 != (Image *)0x0) {
                        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                                  (pIVar5,0.25,(MethodInfo *)0x0);
                        pIVar5 = (this->fields).tier3CircularImage;
                        if (pIVar5 != (Image *)0x0) {
                          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                                    (pIVar5,0.25,(MethodInfo *)0x0);
                          pIVar5 = (this->fields).tier2CircularImage;
                          if (pIVar5 != (Image *)0x0) {
                            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_get_transform((Component *)pIVar5,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              func_?(&TypeInfo__UnityEngine__Vector3);
                              cRam_? = '\x01';
                            }
                            if (pTVar6 != (Transform *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                                        (pTVar6,TypeInfo__UnityEngine__Vector3->static_fields->
                                                forwardVector,-90.0,(MethodInfo *)0x0);
                              pIVar5 = (this->fields).tier2CircularImage;
                              if (pIVar5 != (Image *)0x0) {
                                pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_get_transform
                                                   ((Component *)pIVar5,(MethodInfo *)0x0);
                                if (cRam_? == '\0') {
                                  func_?();
                                  cRam_? = '\x01';
                                }
                                if (pTVar6 != (Transform *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_Rotate_5(pTVar6,TypeInfo__UnityEngine__Vector3->
                                                            static_fields->forwardVector,-180.0,
                                                     (MethodInfo *)0x0);
                                  pIVar5 = (this->fields).tier3CircularImage;
                                  if (pIVar5 != (Image *)0x0) {
                                    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                             Component_get_transform
                                                       ((Component *)pIVar5,(MethodInfo *)0x0);
                                    if (cRam_? == '\0') {
                                      func_?();
                                      cRam_? = '\x01';
                                    }
                                    if (pTVar6 != (Transform *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_Rotate_5(pTVar6,TypeInfo__UnityEngine__Vector3->
                                                                static_fields->forwardVector,-270.0,
                                                         (MethodInfo *)0x0);
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
  }
  func_?();
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
    func_?(&MethodInfo__System__Collections__Generic__List<float>__Add_float_);
    func_?(&MethodInfo__System__Collections__Generic__List<float>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<float>);
    cRam_? = '\x01';
  }
  IStack_1.rgctxDataDummy = (void *)0x0;
  IStack_2.rgctxDataDummy = (void *)0x0;
  IStack_3.rgctxDataDummy = (void *)0x0;
  IStack_4.rgctxDataDummy = (void *)0x0;
  pLVar5 = (List_1_System_Single_ *)
           func_?(TypeInfo__System__Collections__Generic__List<float>);
  if (pLVar5 != (List_1_System_Single_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar5,
               MethodInfo__System__Collections__Generic__List<float>__List__);
    (this->fields).originalWidthPositionsList = pLVar5;
    func_?(&(this->fields).originalWidthPositionsList,pLVar5);
    pLVar6 = (this->fields).transformsToExpand;
    iVar7 = 0;
    if (pLVar6 != (List_1_UnityEngine_RectTransform_ *)0x0) {
      while (iVar7 < (pLVar6->fields)._size) {
        pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).transformsToExpand;
        pLVar5 = (this->fields).originalWidthPositionsList;
        if ((pLVar8 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar8,iVar7,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                              ), RVar9 == (RegexCharClass_SingleRange)0x0)) goto code_?;
        pIVar10 = (Il2CppRGCTXData *)
                 UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                           (&RStack_11,(RectTransform *)RVar9,(MethodInfo *)0x0);
        IStack_1 = *pIVar10;
        IStack_2 = pIVar10[1];
        IStack_3 = pIVar10[2];
        IStack_4 = pIVar10[3];
        fStack_12 = SubscribableVariableBase`1[System::Single]::
                   SubscribableVariableBase_1_System_Single__get_Value
                             ((SubscribableVariableBase_1_System_Single_ *)&IStack_1,
                              (MethodInfo *)0x0);
        pMVar13 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
        if (pLVar5 == (List_1_System_Single_ *)0x0) goto code_?;
        piVar14 = &(pLVar5->fields)._version;
        *piVar14 = *piVar14 + 1;
        pSVar15 = (pLVar5->fields)._items;
        if (pSVar15 == (Single__Array *)0x0) goto code_?;
        uVar16 = (pLVar5->fields)._size;
        if (uVar16 < pSVar15->max_length) {
          (pLVar5->fields)._size = uVar16 + 1;
          if (pSVar15->max_length <= uVar16) goto code_?;
          pSVar15->vector[uVar16] = fStack_12;
        }
        else {
          IStack_1 = pMVar13->klass->rgctx_data[0xb];
          RStack_11.m_YMin = (float)&UNK_?;
          RStack_11.m_Width = (float)pLVar5;
          RStack_11.m_Height = fStack_12;
          (*(pMVar13->klass->rgctx_data[0xb].method)->virtualMethodPointer)();
        }
        pLVar6 = (this->fields).transformsToExpand;
        iVar7 = iVar7 + 1;
        if (pLVar6 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
      }
      pLVar5 = (List_1_System_Single_ *)
               func_?(TypeInfo__System__Collections__Generic__List<float>);
      if (pLVar5 != (List_1_System_Single_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)pLVar5,
                   MethodInfo__System__Collections__Generic__List<float>__List__);
        (this->fields).originalSizeList = pLVar5;
        func_?(&(this->fields).originalSizeList,pLVar5);
        pLVar6 = (this->fields).pieChartsToEnlargen;
        iVar7 = 0;
        if (pLVar6 != (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
      }
    }
  }
  goto code_?;
  while( true ) {
    pIVar10 = (Il2CppRGCTXData *)
             UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       (&RStack_11,(RectTransform *)RVar9,(MethodInfo *)0x0);
    IStack_1 = *pIVar10;
    IStack_2 = pIVar10[1];
    IStack_3 = pIVar10[2];
    IStack_4 = pIVar10[3];
    fStack_12 = SubscribableVariableBase`1[System::Single]::
               SubscribableVariableBase_1_System_Single__get_Value
                         ((SubscribableVariableBase_1_System_Single_ *)&IStack_1,(MethodInfo *)0x0)
    ;
    pMVar13 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
    if (pLVar5 == (List_1_System_Single_ *)0x0) break;
    piVar14 = &(pLVar5->fields)._version;
    *piVar14 = *piVar14 + 1;
    pSVar15 = (pLVar5->fields)._items;
    if (pSVar15 == (Single__Array *)0x0) break;
    uVar16 = (pLVar5->fields)._size;
    if (uVar16 < pSVar15->max_length) {
      (pLVar5->fields)._size = uVar16 + 1;
      if (pSVar15->max_length <= uVar16) goto code_?;
      pSVar15->vector[uVar16] = fStack_12;
    }
    else {
      IStack_1 = pMVar13->klass->rgctx_data[0xb];
      RStack_11.m_YMin = (float)&UNK_?;
      RStack_11.m_Width = (float)pLVar5;
      RStack_11.m_Height = fStack_12;
      (*(pMVar13->klass->rgctx_data[0xb].method)->virtualMethodPointer)();
    }
    pLVar6 = (this->fields).pieChartsToEnlargen;
    iVar7 = iVar7 + 1;
    if (pLVar6 == (List_1_UnityEngine_RectTransform_ *)0x0) break;
code_?:
    if ((pLVar6->fields)._size <= iVar7) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesProjectEarningsManager);
        cRam_? = '\x01';
      }
      projectEarningsReport =
           TypeInfo__GamePassesProjectEarningsManager->static_fields->projectEarningReport;
      if (projectEarningsReport != (ProjectEarningsReport *)0x0) {
        GameEarningsMenu_UpdateEarningsData(this,projectEarningsReport,(MethodInfo *)0x0);
        return;
      }
      GameEarningsMenu_SetUpWaitingForProjectEarningsReportUI(this,(MethodInfo *)0x0);
      return;
    }
    pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).pieChartsToEnlargen;
    pLVar5 = (this->fields).originalSizeList;
    if ((pLVar8 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar8,iVar7,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                          ), RVar9 == (RegexCharClass_SingleRange)0x0)) break;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_Update
               (GameEarningsMenu *this,MethodInfo *method)

{
  pGVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    cRam_? = '\x01';
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pGVar3 = (GameEarningsMenu *)(fVar2 - (this->fields).interpolationStartTime);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (fVar2 + _UNK_? < (float)pGVar3) {
    return;
  }
  pLVar4 = (this->fields).transformsToExpand;
  iVar5 = 0;
  this = pGVar3;
  if (pLVar4 != (List_1_UnityEngine_RectTransform_ *)0x0) {
    while (iVar5 < (pLVar4->fields)._size) {
      pLVar6 = (pGVar1->fields).originalWidthPositionsList;
      if (pLVar6 == (List_1_System_Single_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
      List_1_System_Single__get_Item
                (pLVar6,iVar5,MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
      pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pGVar1->fields).transformsToExpand;
      if ((pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar7,iVar5,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                            ), RVar8 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      pRVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                         ((Rect *)&stack0xffffffc4,(RectTransform *)RVar8,(MethodInfo *)0x0);
      SubscribableVariableBase`1[System::Single]::
      SubscribableVariableBase_1_System_Single__get_Value
                ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffd4,
                 (MethodInfo *)pRVar9->m_XMin);
      pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pGVar1->fields).transformsToExpand;
      if (pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar7,iVar5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                        );
      pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pGVar1->fields).transformsToExpand;
      if ((pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (pMVar10 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_,
         this_00 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar7,iVar5,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                             ), this_00 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      puVar11 = &UNK_?;
      VVar12 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                         ((RectTransform *)this_00,(MethodInfo *)0x0);
      fVar2 = VVar12.y;
      fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                         ((float)this,(MethodInfo *)0x0);
      if (RVar8 == (RegexCharClass_SingleRange)0x0) goto code_?;
      VVar12.y = fVar2;
      VVar12.x = fVar13 * ((float)puVar11 - (float)pMVar10) + (float)pMVar10;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                ((RectTransform *)RVar8,VVar12,(MethodInfo *)0x0);
      pLVar4 = (pGVar1->fields).transformsToExpand;
      iVar5 = iVar5 + 1;
      this = (GameEarningsMenu *)RVar8;
      if (pLVar4 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
    }
    pLVar4 = (pGVar1->fields).pieChartsToEnlargen;
    iVar5 = 0;
    if (pLVar4 != (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
code_?:
  if ((pLVar4->fields)._size <= iVar5) {
    return;
  }
  pLVar6 = (pGVar1->fields).originalSizeList;
  if (pLVar6 == (List_1_System_Single_ *)0x0) goto code_?;
  fVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
           List_1_System_Single__get_Item
                     (pLVar6,iVar5,
                      MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
  if (iVar5 == (pGVar1->fields).currentFocusedEarning) {
    fVar2 = fVar2 * (pGVar1->fields).pieChartSizeIncreasePercentage;
  }
  pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (pGVar1->fields).pieChartsToEnlargen;
  if ((pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
     (RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar7,iVar5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                        ), RVar8 == (RegexCharClass_SingleRange)0x0)) goto code_?;
  pRVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                     ((Rect *)&stack0xffffffc4,(RectTransform *)RVar8,(MethodInfo *)0x0);
  fVar13 = SubscribableVariableBase`1[System::Single]::
           SubscribableVariableBase_1_System_Single__get_Value
                     ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffd4,
                      (MethodInfo *)pRVar9->m_XMin);
  fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                     ((float)this,(MethodInfo *)0x0);
  pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (pGVar1->fields).pieChartsToEnlargen;
  fVar13 = fVar15 * (fVar2 - fVar13) + fVar13;
  if ((pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
     (RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar7,iVar5,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                        ), RVar8 == (RegexCharClass_SingleRange)0x0)) goto code_?;
  value.y = fVar13;
  value.x = fVar13;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
            ((RectTransform *)RVar8,value,(MethodInfo *)0x0);
  pLVar4 = (pGVar1->fields).pieChartsToEnlargen;
  iVar5 = iVar5 + 1;
  if (pLVar4 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
  goto code_?;
}


/* Void UpdateDisplayedText() */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_UpdateDisplayedText
               (GameEarningsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    func_?(&StringLiteral_Boosters_);
    func_?(&StringLiteral_Game_Tier_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).displayedSmallGoldIcon;
  if ((this->fields).currentFocusedEarning == -1) {
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields).displayedLargeGoldIcon;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,1,(MethodInfo *)0x0);
        pTVar2 = (this->fields).displayedEarningsDescriptionText;
        if (pTVar2 != (Text *)0x0) {
          (*(pTVar2->klass->vtable).set_text.methodPtr)();
          pTVar2 = (this->fields).displayedEarningsAmountText;
          if (pTVar2 != (Text *)0x0) {
            (*(pTVar2->klass->vtable).set_text.methodPtr)();
            return;
          }
        }
      }
    }
    goto code_?;
  }
  if ((this->fields).currentFocusedEarning == 0) {
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).displayedLargeGoldIcon;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pTVar2 = (this->fields).displayedEarningsDescriptionText;
    if (pTVar2 == (Text *)0x0) goto code_?;
    pTVar3 = pTVar2->klass;
  }
  else {
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).displayedLargeGoldIcon;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pTVar2 = (this->fields).displayedEarningsDescriptionText;
    str1 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).currentFocusedEarning,(MethodInfo *)0x0);
    mscorlib.dll::System::String::String_Concat_3(StringLiteral_Game_Tier_,str1,(MethodInfo *)0x0);
    if (pTVar2 == (Text *)0x0) goto code_?;
    pTVar3 = pTVar2->klass;
  }
  (*(pTVar3->vtable).set_text.methodPtr)();
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).tierEarnings;
  pTVar2 = (this->fields).displayedEarningsAmountText;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
              (this_00,(this->fields).currentFocusedEarning + 1,
               MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      (*(pTVar2->klass->vtable).set_text.methodPtr)();
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateEarningPieChart(Int32, Int32, Int32, Int32, Int32) */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_UpdateEarningPieChart
               (GameEarningsMenu *this,int32_t boostersEarnings,int32_t tier1Earnings,
               int32_t tier2Earnings,int32_t tier3Earnings,int32_t totalEarnings,MethodInfo *method)

{
  pIVar1 = (this->fields).boostCircularImage;
  if (totalEarnings < 1) {
    if (pIVar1 == (Image *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount(pIVar1,0.25,(MethodInfo *)0x0);
    pIVar1 = (this->fields).tier1CircularImage;
    totalEarnings = (int32_t)_UNK_?;
    if (pIVar1 == (Image *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount(pIVar1,0.25,(MethodInfo *)0x0);
    pIVar1 = (this->fields).tier2CircularImage;
    if (pIVar1 == (Image *)0x0) goto code_?;
    fVar2 = 0.25;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount(pIVar1,0.25,(MethodInfo *)0x0);
    pIVar1 = (this->fields).tier3CircularImage;
    fVar3 = _UNK_?;
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
    fVar2 = (float)tier2Earnings / (float)totalEarnings;
    if (pIVar1 == (Image *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount(pIVar1,fVar2,(MethodInfo *)0x0)
    ;
    pIVar1 = (this->fields).tier3CircularImage;
    if (pIVar1 == (Image *)0x0) goto code_?;
    fVar3 = (float)tier3Earnings / (float)totalEarnings;
    totalEarnings = (int32_t)((float)tier1Earnings / (float)totalEarnings);
  }
  UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount(pIVar1,fVar3,(MethodInfo *)0x0);
  fVar2 = fVar2 * _UNK_?;
  pIVar1 = (this->fields).tier1CircularImage;
  if (pIVar1 != (Image *)0x0) {
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pIVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      totalEarnings = (int32_t)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    if (pTVar4 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                (pTVar4,TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,fVar2,
                 (MethodInfo *)0x0);
      pIVar1 = (this->fields).tier2CircularImage;
      fVar3 = ((float)totalEarnings + fVar2) * _UNK_?;
      if (pIVar1 != (Image *)0x0) {
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pIVar1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          totalEarnings = (int32_t)&UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        if (pTVar4 != (Transform *)0x0) {
          fVar2 = (TypeInfo__UnityEngine__Vector3->static_fields->forwardVector).z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                    (pTVar4,TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,fVar3,
                     (MethodInfo *)0x0);
          pIVar1 = (this->fields).tier3CircularImage;
          totalEarnings = (int32_t)(((float)totalEarnings + fVar3 + fVar2) * _UNK_?);
          if (pIVar1 != (Image *)0x0) {
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pIVar1,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              totalEarnings = (int32_t)&UNK_?;
              func_?();
              cRam_? = '\x01';
            }
            if (pTVar4 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                        (pTVar4,TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                         (float)totalEarnings,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateEarningsData(ProjectEarningsReport) */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_UpdateEarningsData
               (GameEarningsMenu *this,ProjectEarningsReport *projectEarningsReport,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Int32_ *)
           func_?(TypeInfo__System__Collections__Generic__List<int>);
  if (pLVar1 != (List_1_System_Int32_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    (this->fields).tierEarnings = pLVar1;
    func_?(&(this->fields).tierEarnings,pLVar1);
    pLVar1 = (this->fields).tierEarnings;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_02 != (MVNetworkGame *)0x0) {
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
      if (((pMVar2 != (MVLocalPlayer *)0x0) &&
          (projectEarningsReport != (ProjectEarningsReport *)0x0)) &&
         (this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                    (projectEarningsReport->fields).projectMemberEarningsReports,
         this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
        pOVar3 = (Object *)(pMVar2->fields)._._ProfileID_k__BackingField;
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this_00,pOVar3,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                          );
        if (bVar4 == 0) {
          iVar5 = 0;
        }
        else {
          this_01 = (projectEarningsReport->fields).projectMemberEarningsReports;
          if (this_01 ==
              (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
               *)0x0) goto code_?;
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
                              (Int32Enum__Enum)pOVar3,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                             );
          if ((pOVar3 == (Object *)0x0) || (pOVar3[1].klass == (Object__Class *)0x0))
          goto code_?;
          iVar5 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
                  EarningsReport::EarningsReport_get_TotalEarningsGold
                            ((EarningsReport *)pOVar3[1].klass,(MethodInfo *)0x0);
        }
        if (pLVar1 != (List_1_System_Int32_ *)0x0) {
          func_?(pLVar1,iVar5,MethodInfo__System__Collections__Generic__List<int>__Add_int_
                         );
          pLVar1 = (this->fields).tierEarnings;
          iVar5 = GameEarningsMenu_GetTotalBoostEarnings
                            (this,projectEarningsReport,(MethodInfo *)0x0);
          if (pLVar1 != (List_1_System_Int32_ *)0x0) {
            func_?(pLVar1,iVar5,
                            MethodInfo__System__Collections__Generic__List<int>__Add_int_);
            pLVar1 = (this->fields).tierEarnings;
            iVar5 = GameEarningsMenu_GetTierEarnings
                              (this,projectEarningsReport,GamePassTier__Enum_Tier1,(MethodInfo *)0x0
                              );
            if (pLVar1 != (List_1_System_Int32_ *)0x0) {
              func_?(pLVar1,iVar5,
                              MethodInfo__System__Collections__Generic__List<int>__Add_int_);
              pLVar1 = (this->fields).tierEarnings;
              iVar5 = GameEarningsMenu_GetTierEarnings
                                (this,projectEarningsReport,GamePassTier__Enum_Tier2,
                                 (MethodInfo *)0x0);
              if (pLVar1 != (List_1_System_Int32_ *)0x0) {
                func_?(pLVar1,iVar5,
                                MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                pLVar1 = (this->fields).tierEarnings;
                iVar5 = GameEarningsMenu_GetTierEarnings
                                  (this,projectEarningsReport,GamePassTier__Enum_Tier3,
                                   (MethodInfo *)0x0);
                if (pLVar1 != (List_1_System_Int32_ *)0x0) {
                  func_?(pLVar1,iVar5,
                                  MethodInfo__System__Collections__Generic__List<int>__Add_int_);
                  pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           (this->fields).tierEarnings;
                  if (pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )0x0) {
                    boostersEarnings =
                         mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (pLVar6,1,
                                    MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                   );
                    pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             (this->fields).tierEarnings;
                    if (pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)0x0) {
                      tier1Earnings =
                           mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                           RegularExpressions::RegexCharClass+SingleRange]::
                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                     (pLVar6,2,
                                      MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                     );
                      pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               (this->fields).tierEarnings;
                      if (pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)0x0) {
                        tier2Earnings =
                             mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                             RegularExpressions::RegexCharClass+SingleRange]::
                             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                       (pLVar6,3,
                                        MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                       );
                        pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)(this->fields).tierEarnings;
                        if (pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                       *)0x0) {
                          tier3Earnings =
                               mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                               RegularExpressions::RegexCharClass+SingleRange]::
                               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                         (pLVar6,4,
                                          MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                         );
                          pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)(this->fields).tierEarnings;
                          if (pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                         *)0x0) {
                            totalEarnings =
                                 mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                 RegularExpressions::RegexCharClass+SingleRange]::
                                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                           (pLVar6,0,
                                            MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                           );
                            GameEarningsMenu_UpdateEarningsText
                                      (this,(int32_t)boostersEarnings,(int32_t)tier1Earnings,
                                       (int32_t)tier2Earnings,(int32_t)tier3Earnings,
                                       (int32_t)totalEarnings,(MethodInfo *)0x0);
                            GameEarningsMenu_UpdateEarningPieChart
                                      (this,(int32_t)boostersEarnings,(int32_t)tier1Earnings,
                                       (int32_t)tier2Earnings,(int32_t)tier3Earnings,
                                       (int32_t)totalEarnings,(MethodInfo *)0x0);
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
    func_?(&StringLiteral_Game_Tier_1__0__);
    func_?(&StringLiteral_Boosters__);
    func_?(&StringLiteral_Game_Tier_2__0__);
    func_?(&StringLiteral_Game_Tier_2__);
    func_?(&StringLiteral_Game_Tier_3__);
    func_?(&StringLiteral_Game_Tier_1__);
    func_?(&StringLiteral_Boosters__0__);
    func_?(&StringLiteral_N0);
    func_?(&::StringLiteral___);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Game_Tier_3__0__);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).totalEarningsAmount;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString_1
                     ((Int32 *)&totalEarnings,StringLiteral_N0,(MethodInfo *)0x0);
  if ((pSVar2 != (String *)0x0) &&
     (mscorlib.dll::System::String::String_Replace_1
                (pSVar2,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
     pTVar1 != (Text *)0x0)) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)();
    if ((float)totalEarnings <= 0.0) {
      pTVar1 = (this->fields).boostEarningPercentage;
      if (pTVar1 != (Text *)0x0) {
        (*(pTVar1->klass->vtable).set_text.methodPtr)();
        pTVar1 = (this->fields).tier1EarningPercentage;
        if (pTVar1 != (Text *)0x0) {
          (*(pTVar1->klass->vtable).set_text.methodPtr)();
          pTVar1 = (this->fields).tier2EarningPercentage;
          if (pTVar1 != (Text *)0x0) {
            (*(pTVar1->klass->vtable).set_text.methodPtr)();
            pTVar1 = (this->fields).tier3EarningPercentage;
            if (pTVar1 != (Text *)0x0) {
              (*(pTVar1->klass->vtable).set_text.methodPtr)();
              return;
            }
          }
        }
      }
    }
    else {
      iVar3 = GameEarningsMenu_GetPercentage(this,boostersEarnings,totalEarnings,(MethodInfo *)0x0);
      GameEarningsMenu_GetPercentage(this,tier1Earnings,iVar3,(MethodInfo *)0x0);
      GameEarningsMenu_GetPercentage(this,tier2Earnings,totalEarnings,(MethodInfo *)0x0);
      IVar4.m_value = (int32_t)this;
      IVar5.m_value = totalEarnings;
      iVar3 = GameEarningsMenu_GetPercentage(this,tier3Earnings,totalEarnings,(MethodInfo *)0x0);
      iVar6 = iVar3 + IVar4.m_value + tier3Earnings + IVar5.m_value;
      if (iVar6 < 100) {
        iVar7 = 0;
        iVar6 = 100 - iVar6;
        do {
          if (iVar7 < 1) {
            in_stack_8 = &UNK_?;
            bVar9 = GameEarningsMenu_IsPercentageWhole
                              (this,boostersEarnings,totalEarnings,(MethodInfo *)0x0);
            if (bVar9 != 0) goto code_?;
          }
          else {
code_?:
            if (iVar7 < 2) {
              in_stack_8 = &UNK_?;
              bVar9 = GameEarningsMenu_IsPercentageWhole
                                (this,tier1Earnings,totalEarnings,(MethodInfo *)0x0);
              if (bVar9 == 0) goto code_?;
            }
            if (iVar7 < 3) {
              in_stack_8 = &UNK_?;
              GameEarningsMenu_IsPercentageWhole(this,tier2Earnings,totalEarnings,(MethodInfo *)0x0)
              ;
            }
          }
code_?:
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      pTVar1 = (this->fields).boostEarningPercentage;
      pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
      mscorlib.dll::System::String::String_Concat_4
                (StringLiteral_Boosters__,pSVar2,::StringLiteral___,(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        (*(pTVar1->klass->vtable).set_text.methodPtr)();
        pTVar1 = (this->fields).tier1EarningPercentage;
        pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
        mscorlib.dll::System::String::String_Concat_4
                  (StringLiteral_Game_Tier_1__,pSVar2,::StringLiteral___,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          (*(pTVar1->klass->vtable).set_text.methodPtr)();
          pTVar1 = (this->fields).tier2EarningPercentage;
          pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
          mscorlib.dll::System::String::String_Concat_4
                    (StringLiteral_Game_Tier_2__,pSVar2,::StringLiteral___,(MethodInfo *)0x0);
          if (pTVar1 != (Text *)0x0) {
            (*(pTVar1->klass->vtable).set_text.methodPtr)();
            pTVar1 = (this->fields).tier3EarningPercentage;
            pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                               ((Int32 *)&stack0xffffffec,(MethodInfo *)0x0);
            mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_Game_Tier_3__,pSVar2,::StringLiteral___,(MethodInfo *)0x0);
            if (pTVar1 != (Text *)0x0) {
              (*(pTVar1->klass->vtable).set_text.methodPtr)();
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* GameEarningsMenu() */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu__ctor
               (GameEarningsMenu *this,MethodInfo *method)

{
  (this->fields).currentFocusedEarning = -1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

