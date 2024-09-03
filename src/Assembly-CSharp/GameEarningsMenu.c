
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
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((((this_02 != (MVNetworkGame *)0x0) &&
       (pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0),
       pMVar1 != (MVLocalPlayer *)0x0)) && (projectEarningsReport != (ProjectEarningsReport *)0x0))
     && (pDVar2 = (projectEarningsReport->fields).projectMemberEarningsReports,
        pDVar2 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                   *)0x0)) {
    iVar3 = (pMVar1->fields)._._ProfileID_k__BackingField;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar2,iVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                      );
    if (bVar4 == 0) {
      return 0;
    }
    pDVar2 = (projectEarningsReport->fields).projectMemberEarningsReports;
    if (((pDVar2 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                     *)0x0) &&
        (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,iVar3,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                            ), pOVar5 != (Object *)0x0)) &&
       ((pOVar5[1].klass != (Object__Class *)0x0 &&
        (this_00 = (Dictionary_2_System_ByteEnum_System_Single_ *)((pOVar5[1].klass)->_0).name,
        this_00 != (Dictionary_2_System_ByteEnum_System_Single_ *)0x0)))) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                        (this_00,tier,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__ContainsKey_MV__Common__GamePassTier_
                        );
      if (bVar4 == 0) {
        return 0;
      }
      pDVar2 = (projectEarningsReport->fields).projectMemberEarningsReports;
      if (((pDVar2 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                       *)0x0) &&
          (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,iVar3,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                              ), pOVar5 != (Object *)0x0)) &&
         ((pOVar5[1].klass != (Object__Class *)0x0 &&
          (this_01 = (Dictionary_2_System_ByteEnum_System_Object_ *)((pOVar5[1].klass)->_0).name,
          this_01 != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0)))) {
        pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           (this_01,(ByteEnum__Enum)this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                           );
        return (int32_t)pOVar5;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  iVar3 = (*pcVar6)();
  return iVar3;
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
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      iVar3 = (pMVar2->fields)._._ProfileID_k__BackingField;
      if ((projectEarningsReport != (ProjectEarningsReport *)0x0) &&
         (pDVar4 = (projectEarningsReport->fields).projectMemberEarningsReports,
         pDVar4 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                    *)0x0)) {
        bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32_System_Single_ *)pDVar4,iVar3,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                          );
        if (bVar5 == 0) {
          *unaff_FS_OFFSET = uVar1;
          return 0;
        }
        pDVar4 = (projectEarningsReport->fields).projectMemberEarningsReports;
        iVar6 = 0;
        if (pDVar4 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                       *)0x0) {
          pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,iVar3,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                             );
          if (((pOVar7 != (Object *)0x0) && (pOVar7[1].klass != (Object__Class *)0x0)) &&
             (this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)((pOVar7[1].klass)->_0).namespaze,
             this_00 !=
             (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)0x0)) {
            this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                                (this_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Values__
                                );
            if (this_02 !=
                (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)0x0) {
              pDVar8 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::
                       StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                       Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                 ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                   *)&stack0xffffffd8,this_02,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::String,_int>__GetEnumerator__
                                 );
              pOVar7 = (Object *)&stack0xffffffc4;
              pOVar9 = pDVar8->_currentValue;
              while( true ) {
                bVar5 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                        UInt32,System::Int32]::
                        Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Int32__MoveNext
                                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Int32_
                                    *)&stack0xffffffc4,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::String,_int>__MoveNext__
                                  );
                if (bVar5 == 0) break;
                iVar6 = (int)&pOVar9->klass + iVar6;
              }
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        (pOVar7,(ExceptionArgument__Enum)
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::String,_int>__Dispose__
                         ,(MethodInfo *)0xffffffff);
              *unaff_FS_OFFSET = pOVar7;
              return iVar6;
            }
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  iVar3 = (*pcVar10)();
  return iVar3;
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
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (((pMVar1 != (MVLocalPlayer *)0x0) && (projectEarningsReport != (ProjectEarningsReport *)0x0)
        ) && (pDVar2 = (projectEarningsReport->fields).projectMemberEarningsReports,
             pDVar2 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                        *)0x0)) {
      iVar3 = (pMVar1->fields)._._ProfileID_k__BackingField;
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar2,iVar3,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        );
      if (bVar4 == 0) {
        return 0;
      }
      pDVar2 = (projectEarningsReport->fields).projectMemberEarningsReports;
      if (pDVar2 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                     *)0x0) {
        pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,iVar3,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                           );
        if ((pOVar5 != (Object *)0x0) && (pOVar5[1].klass != (Object__Class *)0x0)) {
          iVar3 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
                  EarningsReport::EarningsReport_get_TotalEarningsGold
                            ((EarningsReport *)pOVar5[1].klass,(MethodInfo *)0x0);
          return iVar3;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  iVar3 = (*pcVar6)();
  return iVar3;
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
  this_00 = in_stack_1;
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
  pAVar2 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                           );
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__GameEarningsMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
             ,(MethodInfo *)0x0);
  pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pDVar3 == (Delegate *)0x0) {
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
         (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
  }
  else {
    pAVar2 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
              func_?();
    if (pAVar2 ==
        (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar2;
    iVar5 = func_?();
    if (iVar5 == 0) goto code_?;
  }
  func_?();
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pLVar6 = (List_1_System_Int32_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  (in_stack_1->fields).tierEarnings = pLVar6;
  func_?(&(in_stack_1->fields).tierEarnings);
  pLVar6 = (in_stack_1->fields).tierEarnings;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 != (MVNetworkGame *)0x0) {
    pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
    if (((pMVar7 != (MVLocalPlayer *)0x0) && (in_stack_8 != (ProjectEarningsReport *)0x0))
       && (pDVar9 = (in_stack_8->fields).projectMemberEarningsReports,
          pDVar9 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                     *)0x0)) {
      iVar10 = (pMVar7->fields)._._ProfileID_k__BackingField;
      bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar9,iVar10,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        );
      if (bVar11 == 0) {
        in_stack_1 = (GameEarningsMenu *)0x0;
code_?:
        pMVar12 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
        if (pLVar6 != (List_1_System_Int32_ *)0x0) {
          piVar13 = &(pLVar6->fields)._version;
          *piVar13 = *piVar13 + 1;
          pIVar14 = (pLVar6->fields)._items;
          if (pIVar14 != (Int32__Array *)0x0) {
            uVar15 = (pLVar6->fields)._size;
            if (uVar15 < pIVar14->max_length) {
              (pLVar6->fields)._size = uVar15 + 1;
              if (pIVar14->max_length <= uVar15) goto code_?;
              pIVar14->vector[uVar15] = (int32_t)in_stack_1;
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
              List_1_System_Int32__AddWithResize
                        (pLVar6,(int32_t)in_stack_1,pMVar12->klass->rgctx_data[0xe].method);
            }
            pLVar6 = (this_00->fields).tierEarnings;
            iVar10 = GameEarningsMenu_GetTotalBoostEarnings
                               (this_00,in_stack_8,(MethodInfo *)0x0);
            pMVar12 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
            if (pLVar6 != (List_1_System_Int32_ *)0x0) {
              piVar13 = &(pLVar6->fields)._version;
              *piVar13 = *piVar13 + 1;
              pIVar14 = (pLVar6->fields)._items;
              if (pIVar14 != (Int32__Array *)0x0) {
                uVar15 = (pLVar6->fields)._size;
                if (uVar15 < pIVar14->max_length) {
                  (pLVar6->fields)._size = uVar15 + 1;
                  if (pIVar14->max_length <= uVar15) goto code_?;
                  pIVar14->vector[uVar15] = iVar10;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__AddWithResize
                            (pLVar6,iVar10,pMVar12->klass->rgctx_data[0xe].method);
                }
                pLVar6 = (this_00->fields).tierEarnings;
                iVar10 = GameEarningsMenu_GetTierEarnings
                                   (this_00,in_stack_8,GamePassTier__Enum_Tier1,
                                    (MethodInfo *)0x0);
                pMVar12 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                if (pLVar6 != (List_1_System_Int32_ *)0x0) {
                  piVar13 = &(pLVar6->fields)._version;
                  *piVar13 = *piVar13 + 1;
                  pIVar14 = (pLVar6->fields)._items;
                  if (pIVar14 != (Int32__Array *)0x0) {
                    uVar15 = (pLVar6->fields)._size;
                    if (uVar15 < pIVar14->max_length) {
                      (pLVar6->fields)._size = uVar15 + 1;
                      if (pIVar14->max_length <= uVar15) goto code_?;
                      pIVar14->vector[uVar15] = iVar10;
                    }
                    else {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                      List_1_System_Int32__AddWithResize
                                (pLVar6,iVar10,pMVar12->klass->rgctx_data[0xe].method);
                    }
                    pLVar6 = (this_00->fields).tierEarnings;
                    iVar10 = GameEarningsMenu_GetTierEarnings
                                       (this_00,in_stack_8,GamePassTier__Enum_Tier2,
                                        (MethodInfo *)0x0);
                    pMVar12 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                    if (pLVar6 != (List_1_System_Int32_ *)0x0) {
                      piVar13 = &(pLVar6->fields)._version;
                      *piVar13 = *piVar13 + 1;
                      pIVar14 = (pLVar6->fields)._items;
                      if (pIVar14 != (Int32__Array *)0x0) {
                        uVar15 = (pLVar6->fields)._size;
                        if (uVar15 < pIVar14->max_length) {
                          (pLVar6->fields)._size = uVar15 + 1;
                          if (pIVar14->max_length <= uVar15) goto code_?;
                          pIVar14->vector[uVar15] = iVar10;
                        }
                        else {
                          mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                          List_1_System_Int32__AddWithResize
                                    (pLVar6,iVar10,pMVar12->klass->rgctx_data[0xe].method);
                        }
                        pLVar6 = (this_00->fields).tierEarnings;
                        iVar10 = GameEarningsMenu_GetTierEarnings
                                           (this_00,in_stack_8,GamePassTier__Enum_Tier3,
                                            (MethodInfo *)0x0);
                        pMVar12 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                        if (pLVar6 != (List_1_System_Int32_ *)0x0) {
                          piVar13 = &(pLVar6->fields)._version;
                          *piVar13 = *piVar13 + 1;
                          pIVar14 = (pLVar6->fields)._items;
                          if (pIVar14 != (Int32__Array *)0x0) {
                            uVar15 = (pLVar6->fields)._size;
                            if (uVar15 < pIVar14->max_length) {
                              (pLVar6->fields)._size = uVar15 + 1;
                              if (pIVar14->max_length <= uVar15) goto code_?;
                              pIVar14->vector[uVar15] = iVar10;
                            }
                            else {
                              mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                              List_1_System_Int32__AddWithResize
                                        (pLVar6,iVar10,pMVar12->klass->rgctx_data[0xe].method);
                            }
                            pLVar16 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                      *)(this_00->fields).tierEarnings;
                            if (pLVar16 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                           *)0x0) {
                              boostersEarnings =
                                   mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                   RegularExpressions::RegexCharClass+SingleRange]::
                                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                             (pLVar16,1,
                                              MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                             );
                              pLVar16 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                        *)(this_00->fields).tierEarnings;
                              if (pLVar16 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                             *)0x0) {
                                tier1Earnings =
                                     mscorlib.dll::System::Collections::Generic::List`1[System::Text
                                     ::RegularExpressions::RegexCharClass+SingleRange]::
                                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                               (pLVar16,2,
                                                MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                               );
                                pLVar16 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                          *)(this_00->fields).tierEarnings;
                                if (pLVar16 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                               *)0x0) {
                                  tier2Earnings =
                                       mscorlib.dll::System::Collections::Generic::List`1[System::
                                       Text::RegularExpressions::RegexCharClass+SingleRange]::
                                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                 (pLVar16,3,
                                                  MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                                 );
                                  pLVar16 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                            *)(this_00->fields).tierEarnings;
                                  if (pLVar16 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                 *)0x0) {
                                    tier3Earnings =
                                         mscorlib.dll::System::Collections::Generic::List`1[System::
                                         Text::RegularExpressions::RegexCharClass+SingleRange]::
                                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                   (pLVar16,4,
                                                  MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                                  );
                                    pLVar16 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                              *)(this_00->fields).tierEarnings;
                                    if (pLVar16 != (
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)0x0) {
                                      totalEarnings =
                                           mscorlib.dll::System::Collections::Generic::List`1[System
                                           ::Text::RegularExpressions::RegexCharClass+SingleRange]::
                                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                     (pLVar16,0,
                                                  MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                                  );
                                      GameEarningsMenu_UpdateEarningsText
                                                (this_00,(int32_t)boostersEarnings,
                                                 (int32_t)tier1Earnings,(int32_t)tier2Earnings,
                                                 (int32_t)tier3Earnings,(int32_t)totalEarnings,
                                                 (MethodInfo *)0x0);
                                      GameEarningsMenu_UpdateEarningPieChart
                                                (this_00,(int32_t)boostersEarnings,
                                                 (int32_t)tier1Earnings,(int32_t)tier2Earnings,
                                                 (int32_t)tier3Earnings,(int32_t)totalEarnings,
                                                 (MethodInfo *)0x0);
                                      GameEarningsMenu_UpdateDisplayedText
                                                (this_00,(MethodInfo *)0x0);
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
      else {
        pDVar9 = (in_stack_8->fields).projectMemberEarningsReports;
        if (pDVar9 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                       *)0x0) {
          pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar9,iVar10,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                              );
          if ((pOVar17 != (Object *)0x0) && (pOVar17[1].klass != (Object__Class *)0x0)) {
            in_stack_1 =
                 (GameEarningsMenu *)
                 MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
                 EarningsReport::EarningsReport_get_TotalEarningsGold
                           ((EarningsReport *)pOVar17[1].klass,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                           );
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__GameEarningsMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
         (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
code_?:
    func_?();
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
                                     Component_get_transform((Component *)pIVar4,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              func_?();
                              cRam_? = '\x01';
                            }
                            if (pTVar5 != (Transform *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                                        (pTVar5,TypeInfo__UnityEngine__Vector3->static_fields->
                                                forwardVector,-90.0,(MethodInfo *)0x0);
                              pIVar4 = (this->fields).tier2CircularImage;
                              if (pIVar4 != (Image *)0x0) {
                                pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_get_transform
                                                   ((Component *)pIVar4,(MethodInfo *)0x0);
                                if (cRam_? == '\0') {
                                  func_?();
                                  cRam_? = '\x01';
                                }
                                if (pTVar5 != (Transform *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_Rotate_5(pTVar5,TypeInfo__UnityEngine__Vector3->
                                                            static_fields->forwardVector,-180.0,
                                                     (MethodInfo *)0x0);
                                  pIVar4 = (this->fields).tier3CircularImage;
                                  if (pIVar4 != (Image *)0x0) {
                                    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                             Component_get_transform
                                                       ((Component *)pIVar4,(MethodInfo *)0x0);
                                    if (cRam_? == '\0') {
                                      func_?();
                                      cRam_? = '\x01';
                                    }
                                    if (pTVar5 != (Transform *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_Rotate_5(pTVar5,TypeInfo__UnityEngine__Vector3->
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
  else {
    pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
             func_?();
    if (pAVar1 != (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                  0x0) {
      TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar1;
      iVar6 = func_?();
      if (iVar6 != 0) goto code_?;
    }
    func_?();
  }
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
  pLVar1 = (List_1_System_Single_ *)
           func_?(TypeInfo__System__Collections__Generic__List<float>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<float>__List__);
  (this->fields).originalWidthPositionsList = pLVar1;
  func_?(&(this->fields).originalWidthPositionsList,pLVar1);
  pLVar2 = (this->fields).transformsToExpand;
  iVar3 = 0;
  if (pLVar2 != (List_1_UnityEngine_RectTransform_ *)0x0) {
    while (iVar3 < (pLVar2->fields)._size) {
      pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).transformsToExpand;
      pLVar1 = (this->fields).originalWidthPositionsList;
      if ((pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar4,iVar3,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                            ), RVar5 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                          ((Rect *)&stack0xffffffdc,(RectTransform *)RVar5,(MethodInfo *)0x0);
      pMVar7 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
      fVar8 = pRVar6->m_Width;
      if (pLVar1 == (List_1_System_Single_ *)0x0) goto code_?;
      piVar9 = &(pLVar1->fields)._version;
      *piVar9 = *piVar9 + 1;
      pSVar10 = (pLVar1->fields)._items;
      if (pSVar10 == (Single__Array *)0x0) goto code_?;
      uVar11 = (pLVar1->fields)._size;
      if (uVar11 < pSVar10->max_length) {
        (pLVar1->fields)._size = uVar11 + 1;
        if (pSVar10->max_length <= uVar11) goto code_?;
        pSVar10->vector[uVar11] = fVar8;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
        List_1_System_Single__AddWithResize(pLVar1,fVar8,pMVar7->klass->rgctx_data[0xe].method);
      }
      pLVar2 = (this->fields).transformsToExpand;
      iVar3 = iVar3 + 1;
      if (pLVar2 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
    }
    pLVar1 = (List_1_System_Single_ *)
             func_?(TypeInfo__System__Collections__Generic__List<float>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<float>__List__);
    (this->fields).originalSizeList = pLVar1;
    func_?(&(this->fields).originalSizeList,pLVar1);
    pLVar2 = (this->fields).pieChartsToEnlargen;
    iVar3 = 0;
    if (pLVar2 != (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
  }
  goto code_?;
  while( true ) {
    pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                        ((Rect *)&stack0xffffffdc,(RectTransform *)RVar5,(MethodInfo *)0x0);
    pMVar7 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
    fVar8 = pRVar6->m_Width;
    if (pLVar1 == (List_1_System_Single_ *)0x0) break;
    piVar9 = &(pLVar1->fields)._version;
    *piVar9 = *piVar9 + 1;
    pSVar10 = (pLVar1->fields)._items;
    if (pSVar10 == (Single__Array *)0x0) break;
    uVar11 = (pLVar1->fields)._size;
    if (uVar11 < pSVar10->max_length) {
      (pLVar1->fields)._size = uVar11 + 1;
      if (pSVar10->max_length <= uVar11) goto code_?;
      pSVar10->vector[uVar11] = fVar8;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
      List_1_System_Single__AddWithResize(pLVar1,fVar8,pMVar7->klass->rgctx_data[0xe].method);
    }
    pLVar2 = (this->fields).pieChartsToEnlargen;
    iVar3 = iVar3 + 1;
    if (pLVar2 == (List_1_UnityEngine_RectTransform_ *)0x0) break;
code_?:
    if ((pLVar2->fields)._size <= iVar3) {
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
    pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).pieChartsToEnlargen;
    pLVar1 = (this->fields).originalSizeList;
    if ((pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar4,iVar3,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                          ), RVar5 == (RegexCharClass_SingleRange)0x0)) break;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  fVar2 = 0.0;
  this = pGVar3;
  if (pLVar4 != (List_1_UnityEngine_RectTransform_ *)0x0) {
    while ((int)fVar2 < (pLVar4->fields)._size) {
      pLVar5 = (pGVar1->fields).originalWidthPositionsList;
      if (pLVar5 == (List_1_System_Single_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
      List_1_System_Single__get_Item
                (pLVar5,(int32_t)fVar2,
                 MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
      pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pGVar1->fields).transformsToExpand;
      if ((pLVar6 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar6,(int32_t)fVar2,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                            ), RVar7 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                ((Rect *)&stack0xffffffc8,(RectTransform *)RVar7,(MethodInfo *)0x0);
      pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pGVar1->fields).transformsToExpand;
      if (pLVar6 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      fVar8 = fVar2;
      RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar6,(int32_t)fVar2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                        );
      pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pGVar1->fields).transformsToExpand;
      if ((pLVar6 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (this_00 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar6,(int32_t)fVar2,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                              ), this_00 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      VVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                        ((RectTransform *)this_00,(MethodInfo *)0x0);
      VVar9.y = VVar9.y;
      fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                         ((float)this,(MethodInfo *)0x0);
      this = (GameEarningsMenu *)(fVar10 * ((float)this_00 - fVar8) + fVar8);
      if (RVar7 == (RegexCharClass_SingleRange)0x0) goto code_?;
      VVar9.y = VVar9.y;
      VVar9.x = (float)this;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                ((RectTransform *)RVar7,VVar9,(MethodInfo *)0x0);
      pLVar4 = (pGVar1->fields).transformsToExpand;
      fVar2 = (float)((int)fVar2 + 1);
      if (pLVar4 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
    }
    pLVar4 = (pGVar1->fields).pieChartsToEnlargen;
    index = 0;
    if (pLVar4 != (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
code_?:
  if ((pLVar4->fields)._size <= index) {
    return;
  }
  pLVar5 = (pGVar1->fields).originalSizeList;
  if (pLVar5 == (List_1_System_Single_ *)0x0) goto code_?;
  fVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
           List_1_System_Single__get_Item
                     (pLVar5,index,
                      MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
  if (index == (pGVar1->fields).currentFocusedEarning) {
    fVar2 = fVar2 * (pGVar1->fields).pieChartSizeIncreasePercentage;
  }
  pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (pGVar1->fields).pieChartsToEnlargen;
  if ((pLVar6 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
     (RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar6,index,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                        ), RVar7 == (RegexCharClass_SingleRange)0x0)) goto code_?;
  pRVar12 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                     ((Rect *)&stack0xffffffc8,(RectTransform *)RVar7,(MethodInfo *)0x0);
  pGVar3 = this;
  fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                     ((float)this,(MethodInfo *)0x0);
  pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (pGVar1->fields).pieChartsToEnlargen;
  fVar2 = fVar8 * (fVar2 - pRVar12->m_Width) + (float)pGVar3;
  if ((pLVar6 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
     (RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar6,index,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                        ), RVar7 == (RegexCharClass_SingleRange)0x0)) goto code_?;
  value.y = fVar2;
  value.x = fVar2;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
            ((RectTransform *)RVar7,value,(MethodInfo *)0x0);
  pLVar4 = (pGVar1->fields).pieChartsToEnlargen;
  index = index + 1;
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
          (*(code *)(pTVar2->klass->vtable).set_text.method)();
          pTVar2 = (this->fields).displayedEarningsAmountText;
          if (pTVar2 != (Text *)0x0) {
            (*(code *)(pTVar2->klass->vtable).set_text.method)();
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
  (*(code *)(pTVar3->vtable).set_text.method)();
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
      (*(code *)(pTVar2->klass->vtable).set_text.method)();
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
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Int32_ *)
           func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
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
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (((pMVar2 != (MVLocalPlayer *)0x0) &&
        (projectEarningsReport != (ProjectEarningsReport *)0x0)) &&
       (pDVar3 = (projectEarningsReport->fields).projectMemberEarningsReports,
       pDVar3 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                  *)0x0)) {
      iVar4 = (pMVar2->fields)._._ProfileID_k__BackingField;
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar3,iVar4,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        );
      if (bVar5 == 0) {
        this = (GameEarningsMenu *)0x0;
code_?:
        pMVar6 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
        if (pLVar1 != (List_1_System_Int32_ *)0x0) {
          piVar7 = &(pLVar1->fields)._version;
          *piVar7 = *piVar7 + 1;
          pIVar8 = (pLVar1->fields)._items;
          if (pIVar8 != (Int32__Array *)0x0) {
            uVar9 = (pLVar1->fields)._size;
            if (uVar9 < pIVar8->max_length) {
              (pLVar1->fields)._size = uVar9 + 1;
              if (pIVar8->max_length <= uVar9) goto code_?;
              pIVar8->vector[uVar9] = (int32_t)this;
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
              List_1_System_Int32__AddWithResize
                        (pLVar1,(int32_t)this,pMVar6->klass->rgctx_data[0xe].method);
            }
            pLVar1 = (this_00->fields).tierEarnings;
            iVar4 = GameEarningsMenu_GetTotalBoostEarnings
                               (this_00,projectEarningsReport,(MethodInfo *)0x0);
            pMVar6 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
            if (pLVar1 != (List_1_System_Int32_ *)0x0) {
              piVar7 = &(pLVar1->fields)._version;
              *piVar7 = *piVar7 + 1;
              pIVar8 = (pLVar1->fields)._items;
              if (pIVar8 != (Int32__Array *)0x0) {
                uVar9 = (pLVar1->fields)._size;
                if (uVar9 < pIVar8->max_length) {
                  (pLVar1->fields)._size = uVar9 + 1;
                  if (pIVar8->max_length <= uVar9) goto code_?;
                  pIVar8->vector[uVar9] = iVar4;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__AddWithResize
                            (pLVar1,iVar4,pMVar6->klass->rgctx_data[0xe].method);
                }
                pLVar1 = (this_00->fields).tierEarnings;
                iVar4 = GameEarningsMenu_GetTierEarnings
                                   (this_00,projectEarningsReport,GamePassTier__Enum_Tier1,
                                    (MethodInfo *)0x0);
                pMVar6 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                if (pLVar1 != (List_1_System_Int32_ *)0x0) {
                  piVar7 = &(pLVar1->fields)._version;
                  *piVar7 = *piVar7 + 1;
                  pIVar8 = (pLVar1->fields)._items;
                  if (pIVar8 != (Int32__Array *)0x0) {
                    uVar9 = (pLVar1->fields)._size;
                    if (uVar9 < pIVar8->max_length) {
                      (pLVar1->fields)._size = uVar9 + 1;
                      if (pIVar8->max_length <= uVar9) goto code_?;
                      pIVar8->vector[uVar9] = iVar4;
                    }
                    else {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                      List_1_System_Int32__AddWithResize
                                (pLVar1,iVar4,pMVar6->klass->rgctx_data[0xe].method);
                    }
                    pLVar1 = (this_00->fields).tierEarnings;
                    iVar4 = GameEarningsMenu_GetTierEarnings
                                       (this_00,projectEarningsReport,GamePassTier__Enum_Tier2,
                                        (MethodInfo *)0x0);
                    pMVar6 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                    if (pLVar1 != (List_1_System_Int32_ *)0x0) {
                      piVar7 = &(pLVar1->fields)._version;
                      *piVar7 = *piVar7 + 1;
                      pIVar8 = (pLVar1->fields)._items;
                      if (pIVar8 != (Int32__Array *)0x0) {
                        uVar9 = (pLVar1->fields)._size;
                        if (uVar9 < pIVar8->max_length) {
                          (pLVar1->fields)._size = uVar9 + 1;
                          if (pIVar8->max_length <= uVar9) goto code_?;
                          pIVar8->vector[uVar9] = iVar4;
                        }
                        else {
                          mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                          List_1_System_Int32__AddWithResize
                                    (pLVar1,iVar4,pMVar6->klass->rgctx_data[0xe].method);
                        }
                        pLVar1 = (this_00->fields).tierEarnings;
                        iVar4 = GameEarningsMenu_GetTierEarnings
                                           (this_00,projectEarningsReport,GamePassTier__Enum_Tier3,
                                            (MethodInfo *)0x0);
                        pMVar6 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                        if (pLVar1 != (List_1_System_Int32_ *)0x0) {
                          piVar7 = &(pLVar1->fields)._version;
                          *piVar7 = *piVar7 + 1;
                          pIVar8 = (pLVar1->fields)._items;
                          if (pIVar8 != (Int32__Array *)0x0) {
                            uVar9 = (pLVar1->fields)._size;
                            if (uVar9 < pIVar8->max_length) {
                              (pLVar1->fields)._size = uVar9 + 1;
                              if (pIVar8->max_length <= uVar9) goto code_?;
                              pIVar8->vector[uVar9] = iVar4;
                            }
                            else {
                              mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                              List_1_System_Int32__AddWithResize
                                        (pLVar1,iVar4,pMVar6->klass->rgctx_data[0xe].method);
                            }
                            pLVar10 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                      *)(this_00->fields).tierEarnings;
                            if (pLVar10 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                           *)0x0) {
                              boostersEarnings =
                                   mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                   RegularExpressions::RegexCharClass+SingleRange]::
                                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                             (pLVar10,1,
                                              MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                             );
                              pLVar10 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                        *)(this_00->fields).tierEarnings;
                              if (pLVar10 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                             *)0x0) {
                                tier1Earnings =
                                     mscorlib.dll::System::Collections::Generic::List`1[System::Text
                                     ::RegularExpressions::RegexCharClass+SingleRange]::
                                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                               (pLVar10,2,
                                                MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                               );
                                pLVar10 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                          *)(this_00->fields).tierEarnings;
                                if (pLVar10 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                               *)0x0) {
                                  tier2Earnings =
                                       mscorlib.dll::System::Collections::Generic::List`1[System::
                                       Text::RegularExpressions::RegexCharClass+SingleRange]::
                                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                 (pLVar10,3,
                                                  MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                                 );
                                  pLVar10 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                            *)(this_00->fields).tierEarnings;
                                  if (pLVar10 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                 *)0x0) {
                                    tier3Earnings =
                                         mscorlib.dll::System::Collections::Generic::List`1[System::
                                         Text::RegularExpressions::RegexCharClass+SingleRange]::
                                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                   (pLVar10,4,
                                                  MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                                  );
                                    pLVar10 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                              *)(this_00->fields).tierEarnings;
                                    if (pLVar10 != (
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)0x0) {
                                      totalEarnings =
                                           mscorlib.dll::System::Collections::Generic::List`1[System
                                           ::Text::RegularExpressions::RegexCharClass+SingleRange]::
                                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                     (pLVar10,0,
                                                  MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                                  );
                                      GameEarningsMenu_UpdateEarningsText
                                                (this_00,(int32_t)boostersEarnings,
                                                 (int32_t)tier1Earnings,(int32_t)tier2Earnings,
                                                 (int32_t)tier3Earnings,(int32_t)totalEarnings,
                                                 (MethodInfo *)0x0);
                                      GameEarningsMenu_UpdateEarningPieChart
                                                (this_00,(int32_t)boostersEarnings,
                                                 (int32_t)tier1Earnings,(int32_t)tier2Earnings,
                                                 (int32_t)tier3Earnings,(int32_t)totalEarnings,
                                                 (MethodInfo *)0x0);
                                      GameEarningsMenu_UpdateDisplayedText
                                                (this_00,(MethodInfo *)0x0);
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
      else {
        pDVar3 = (projectEarningsReport->fields).projectMemberEarningsReports;
        if (pDVar3 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                       *)0x0) {
          pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,iVar4,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                              );
          if ((pOVar11 != (Object *)0x0) && (pOVar11[1].klass != (Object__Class *)0x0)) {
            this = (GameEarningsMenu *)
                   MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
                   EarningsReport::EarningsReport_get_TotalEarningsGold
                             ((EarningsReport *)pOVar11[1].klass,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
    (*(code *)(pTVar1->klass->vtable).set_text.method)();
    if ((float)totalEarnings <= 0.0) {
      pTVar1 = (this->fields).boostEarningPercentage;
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)();
        pTVar1 = (this->fields).tier1EarningPercentage;
        if (pTVar1 != (Text *)0x0) {
          (*(code *)(pTVar1->klass->vtable).set_text.method)();
          pTVar1 = (this->fields).tier2EarningPercentage;
          if (pTVar1 != (Text *)0x0) {
            (*(code *)(pTVar1->klass->vtable).set_text.method)();
            pTVar1 = (this->fields).tier3EarningPercentage;
            if (pTVar1 != (Text *)0x0) {
              (*(code *)(pTVar1->klass->vtable).set_text.method)();
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
        (*(code *)(pTVar1->klass->vtable).set_text.method)();
        pTVar1 = (this->fields).tier1EarningPercentage;
        pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
        mscorlib.dll::System::String::String_Concat_4
                  (StringLiteral_Game_Tier_1__,pSVar2,::StringLiteral___,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          (*(code *)(pTVar1->klass->vtable).set_text.method)();
          pTVar1 = (this->fields).tier2EarningPercentage;
          pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
          mscorlib.dll::System::String::String_Concat_4
                    (StringLiteral_Game_Tier_2__,pSVar2,::StringLiteral___,(MethodInfo *)0x0);
          if (pTVar1 != (Text *)0x0) {
            (*(code *)(pTVar1->klass->vtable).set_text.method)();
            pTVar1 = (this->fields).tier3EarningPercentage;
            pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                               ((Int32 *)&stack0xffffffec,(MethodInfo *)0x0);
            mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_Game_Tier_3__,pSVar2,::StringLiteral___,(MethodInfo *)0x0);
            if (pTVar1 != (Text *)0x0) {
              (*(code *)(pTVar1->klass->vtable).set_text.method)();
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

