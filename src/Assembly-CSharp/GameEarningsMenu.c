
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
  projectEarningsReport_00 = in_stack_1;
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
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(
                              TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                              );
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__GameEarningsMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
             ,(MethodInfo *)0x0);
  pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pDVar3 == (Delegate *)0x0) {
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
         (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
  }
  else {
    pAVar2 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
             func_?();
    if (pAVar2 == (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                  0x0) {
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
  ppLVar7 = &(in_stack_8->fields).tierEarnings;
  *ppLVar7 = pLVar6;
  func_?(ppLVar7,pLVar6);
  pLVar6 = *ppLVar7;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (((pMVar9 != (MVLocalPlayer *)0x0) && (in_stack_1 != (ProjectEarningsReport *)0x0))
       && (pDVar10 = (in_stack_1->fields).projectMemberEarningsReports,
          pDVar10 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                     *)0x0)) {
      iVar11 = (pMVar9->fields)._._ProfileID_k__BackingField;
      bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar10,iVar11,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        );
      if (bVar12 == 0) {
        in_stack_1 = (ProjectEarningsReport *)0x0;
code_?:
        pMVar13 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
        if (pLVar6 != (List_1_System_Int32_ *)0x0) {
          piVar14 = &(pLVar6->fields)._version;
          *piVar14 = *piVar14 + 1;
          pIVar15 = (pLVar6->fields)._items;
          if (pIVar15 != (Int32__Array *)0x0) {
            uVar16 = (pLVar6->fields)._size;
            if (uVar16 < pIVar15->max_length) {
              (pLVar6->fields)._size = uVar16 + 1;
              if (pIVar15->max_length <= uVar16) goto code_?;
              pIVar15->vector[uVar16] = (int32_t)in_stack_1;
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
              List_1_System_Int32__AddWithResize
                        (pLVar6,(int32_t)in_stack_1,pMVar13->klass->rgctx_data[0xe].method);
            }
            pLVar6 = *ppLVar7;
            iVar11 = GameEarningsMenu_GetTotalBoostEarnings
                               (in_stack_8,projectEarningsReport_00,(MethodInfo *)0x0);
            pMVar13 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
            if (pLVar6 != (List_1_System_Int32_ *)0x0) {
              piVar14 = &(pLVar6->fields)._version;
              *piVar14 = *piVar14 + 1;
              pIVar15 = (pLVar6->fields)._items;
              if (pIVar15 != (Int32__Array *)0x0) {
                uVar16 = (pLVar6->fields)._size;
                if (uVar16 < pIVar15->max_length) {
                  (pLVar6->fields)._size = uVar16 + 1;
                  if (pIVar15->max_length <= uVar16) goto code_?;
                  pIVar15->vector[uVar16] = iVar11;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__AddWithResize
                            (pLVar6,iVar11,pMVar13->klass->rgctx_data[0xe].method);
                }
                pLVar6 = *ppLVar7;
                iVar11 = GameEarningsMenu_GetTierEarnings
                                   (in_stack_8,projectEarningsReport_00,
                                    GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
                pMVar13 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                if (pLVar6 != (List_1_System_Int32_ *)0x0) {
                  piVar14 = &(pLVar6->fields)._version;
                  *piVar14 = *piVar14 + 1;
                  pIVar15 = (pLVar6->fields)._items;
                  if (pIVar15 != (Int32__Array *)0x0) {
                    uVar16 = (pLVar6->fields)._size;
                    if (uVar16 < pIVar15->max_length) {
                      (pLVar6->fields)._size = uVar16 + 1;
                      if (pIVar15->max_length <= uVar16) goto code_?;
                      pIVar15->vector[uVar16] = iVar11;
                    }
                    else {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                      List_1_System_Int32__AddWithResize
                                (pLVar6,iVar11,pMVar13->klass->rgctx_data[0xe].method);
                    }
                    pLVar6 = *ppLVar7;
                    iVar11 = GameEarningsMenu_GetTierEarnings
                                       (in_stack_8,projectEarningsReport_00,
                                        GamePassTier__Enum_Tier2,(MethodInfo *)0x0);
                    pMVar13 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                    if (pLVar6 != (List_1_System_Int32_ *)0x0) {
                      piVar14 = &(pLVar6->fields)._version;
                      *piVar14 = *piVar14 + 1;
                      pIVar15 = (pLVar6->fields)._items;
                      if (pIVar15 != (Int32__Array *)0x0) {
                        uVar16 = (pLVar6->fields)._size;
                        if (uVar16 < pIVar15->max_length) {
                          (pLVar6->fields)._size = uVar16 + 1;
                          if (pIVar15->max_length <= uVar16) goto code_?;
                          pIVar15->vector[uVar16] = iVar11;
                        }
                        else {
                          mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                          List_1_System_Int32__AddWithResize
                                    (pLVar6,iVar11,pMVar13->klass->rgctx_data[0xe].method);
                        }
                        pLVar6 = *ppLVar7;
                        iVar11 = GameEarningsMenu_GetTierEarnings
                                           (in_stack_8,projectEarningsReport_00,
                                            GamePassTier__Enum_Tier3,(MethodInfo *)0x0);
                        pMVar13 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                        if (pLVar6 != (List_1_System_Int32_ *)0x0) {
                          piVar14 = &(pLVar6->fields)._version;
                          *piVar14 = *piVar14 + 1;
                          pIVar15 = (pLVar6->fields)._items;
                          if (pIVar15 != (Int32__Array *)0x0) {
                            uVar16 = (pLVar6->fields)._size;
                            if (uVar16 < pIVar15->max_length) {
                              (pLVar6->fields)._size = uVar16 + 1;
                              if (pIVar15->max_length <= uVar16) goto code_?;
                              pIVar15->vector[uVar16] = iVar11;
                            }
                            else {
                              mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                              List_1_System_Int32__AddWithResize
                                        (pLVar6,iVar11,pMVar13->klass->rgctx_data[0xe].method);
                            }
                            if ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )*ppLVar7 !=
                                (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )0x0) {
                              boostersEarnings =
                                   mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                   RegularExpressions::RegexCharClass+SingleRange]::
                                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                             ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                               *)*ppLVar7,1,
                                              MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                             );
                              if ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)*ppLVar7 !=
                                  (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)0x0) {
                                tier1Earnings =
                                     mscorlib.dll::System::Collections::Generic::List`1[System::Text
                                     ::RegularExpressions::RegexCharClass+SingleRange]::
                                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                               ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                 *)*ppLVar7,2,
                                                MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                               );
                                if ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)*ppLVar7 !=
                                    (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)0x0) {
                                  tier2Earnings =
                                       mscorlib.dll::System::Collections::Generic::List`1[System::
                                       Text::RegularExpressions::RegexCharClass+SingleRange]::
                                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                 ((
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)*ppLVar7,3,
                                                  MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                                 );
                                  if ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                       *)*ppLVar7 !=
                                      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                       *)0x0) {
                                    tier3Earnings =
                                         mscorlib.dll::System::Collections::Generic::List`1[System::
                                         Text::RegularExpressions::RegexCharClass+SingleRange]::
                                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                   ((
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)*ppLVar7,4,
                                                  MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                                  );
                                    if ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                         *)*ppLVar7 !=
                                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                         *)0x0) {
                                      totalEarnings =
                                           mscorlib.dll::System::Collections::Generic::List`1[System
                                           ::Text::RegularExpressions::RegexCharClass+SingleRange]::
                                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                     ((
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)*ppLVar7,0,
                                                  MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                                  );
                                      GameEarningsMenu_UpdateEarningsText
                                                (in_stack_8,(int32_t)boostersEarnings,
                                                 (int32_t)tier1Earnings,(int32_t)tier2Earnings,
                                                 (int32_t)tier3Earnings,(int32_t)totalEarnings,
                                                 (MethodInfo *)0x0);
                                      GameEarningsMenu_UpdateEarningPieChart
                                                (in_stack_8,(int32_t)boostersEarnings,
                                                 (int32_t)tier1Earnings,(int32_t)tier2Earnings,
                                                 (int32_t)tier3Earnings,(int32_t)totalEarnings,
                                                 (MethodInfo *)0x0);
                                      GameEarningsMenu_UpdateDisplayedText
                                                (in_stack_8,(MethodInfo *)0x0);
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
        pDVar10 = (in_stack_1->fields).projectMemberEarningsReports;
        if (pDVar10 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                       *)0x0) {
          in_stack_8 =
               (GameEarningsMenu *)
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
          ;
          pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar10,iVar11,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                              );
          if ((pOVar17 != (Object *)0x0) && (pOVar17[1].klass != (Object__Class *)0x0)) {
            in_stack_1 =
                 (ProjectEarningsReport *)
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
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(
                              TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                              );
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
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
  if (fVar2 + (float)_UNK_? < (float)pGVar3) {
    return;
  }
  pLVar4 = (this->fields).transformsToExpand;
  fVar2 = 0.0;
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
                ((Rect *)&stack0xffffffc4,(RectTransform *)RVar7,(MethodInfo *)0x0);
      this = (GameEarningsMenu *)0x0;
      if ((0.0 <= (float)pGVar3) && (this = _UNK_?, (float)pGVar3 <= (float)_UNK_?)) {
        this = pGVar3;
      }
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
      pGVar3 = (GameEarningsMenu *)(((float)this_00 - fVar8) * (float)this + fVar8);
      if (RVar7 == (RegexCharClass_SingleRange)0x0) goto code_?;
      VVar9.y = VVar9.y;
      VVar9.x = (float)pGVar3;
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  pRVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                     ((Rect *)&stack0xffffffc4,(RectTransform *)RVar7,(MethodInfo *)0x0);
  fVar8 = pRVar11->m_Width;
  if ((float)pGVar3 < 0.0) {
    pGVar12 = (GameEarningsMenu *)0x0;
  }
  else {
    pGVar12 = _UNK_?;
    if ((float)pGVar3 <= (float)_UNK_?) {
      pGVar12 = pGVar3;
    }
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
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
            ((RectTransform *)RVar7,
             (Vector2)((ulonglong)(uint)((fVar2 - fVar8) * (float)pGVar12 + fVar8) << 0x20),
             (MethodInfo *)0x0);
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
  iVar1 = (this->fields).currentFocusedEarning;
  this_00 = &(this->fields).currentFocusedEarning;
  pGVar2 = (this->fields).displayedSmallGoldIcon;
  if (iVar1 == -1) {
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      pGVar2 = (this->fields).displayedLargeGoldIcon;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        pTVar3 = (this->fields).displayedEarningsDescriptionText;
        if (pTVar3 != (Text *)0x0) {
          (*(code *)(pTVar3->klass->vtable).set_text.method)();
          pTVar3 = (this->fields).displayedEarningsAmountText;
          if (pTVar3 != (Text *)0x0) {
            (*(code *)(pTVar3->klass->vtable).set_text.method)
                      (pTVar3,::StringLiteral__,
                       (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            return;
          }
        }
      }
    }
    goto code_?;
  }
  if (iVar1 == 0) {
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,1,(MethodInfo *)0x0);
    pGVar2 = (this->fields).displayedLargeGoldIcon;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    pTVar3 = (this->fields).displayedEarningsDescriptionText;
    if (pTVar3 == (Text *)0x0) goto code_?;
    pTVar4 = pTVar3->klass;
  }
  else {
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,1,(MethodInfo *)0x0);
    pGVar2 = (this->fields).displayedLargeGoldIcon;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    pTVar3 = (this->fields).displayedEarningsDescriptionText;
    pSVar5 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)this_00,(MethodInfo *)0x0);
    mscorlib.dll::System::String::String_Concat_3(StringLiteral_Game_Tier_,pSVar5,(MethodInfo *)0x0)
    ;
    if (pTVar3 == (Text *)0x0) goto code_?;
    pTVar4 = pTVar3->klass;
  }
  (*(code *)(pTVar4->vtable).set_text.method)();
  this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).tierEarnings;
  pTVar3 = (this->fields).displayedEarningsAmountText;
  if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
              (this_01,*this_00 + 1,
               MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
    if (pTVar3 != (Text *)0x0) {
      (*(code *)(pTVar3->klass->vtable).set_text.method)
                (pTVar3,pSVar5,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      return;
    }
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
    this_00 = (this->fields).tier3CircularImage;
    fVar2 = _UNK_?;
    if (this_00 == (Image *)0x0) goto code_?;
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
    this_00 = (this->fields).tier3CircularImage;
    if (this_00 == (Image *)0x0) goto code_?;
    fVar2 = (float)tier3Earnings / (float)totalEarnings;
  }
  UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount(this_00,fVar2,(MethodInfo *)0x0);
  totalEarnings = (int32_t)((float)pIVar1 * _UNK_?);
  pIVar1 = (this->fields).tier1CircularImage;
  if (pIVar1 != (Image *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pIVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      totalEarnings = (int32_t)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    if (pTVar3 != (Transform *)0x0) {
      fVar2 = (TypeInfo__UnityEngine__Vector3->static_fields->forwardVector).z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                (pTVar3,TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                 (float)totalEarnings,(MethodInfo *)0x0);
      pIVar1 = (this->fields).tier2CircularImage;
      totalEarnings = (int32_t)(((float)totalEarnings + fVar2) * _UNK_?);
      if (pIVar1 != (Image *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pIVar1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          totalEarnings = (int32_t)&UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        if (pTVar3 != (Transform *)0x0) {
          pVVar4 = &TypeInfo__UnityEngine__Vector3->static_fields->forwardVector;
          fVar2 = pVVar4->y;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                    (pTVar3,*pVVar4,(float)totalEarnings,(MethodInfo *)0x0);
          pIVar1 = (this->fields).tier3CircularImage;
          fVar2 = ((float)totalEarnings + fVar2) * _UNK_?;
          if (pIVar1 != (Image *)0x0) {
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pIVar1,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (pTVar3 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                        (pTVar3,TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,fVar2,
                         (MethodInfo *)0x0);
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
  projectEarningsReport_00 = projectEarningsReport;
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
  ppLVar2 = &(this->fields).tierEarnings;
  *ppLVar2 = pLVar1;
  func_?(ppLVar2,pLVar1);
  pLVar1 = *ppLVar2;
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
    pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (((pMVar3 != (MVLocalPlayer *)0x0) && (projectEarningsReport != (ProjectEarningsReport *)0x0)
        ) && (pDVar4 = (projectEarningsReport->fields).projectMemberEarningsReports,
             pDVar4 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                        *)0x0)) {
      iVar5 = (pMVar3->fields)._._ProfileID_k__BackingField;
      bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar4,iVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        );
      if (bVar6 == 0) {
        projectEarningsReport = (ProjectEarningsReport *)0x0;
code_?:
        pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
        if (pLVar1 != (List_1_System_Int32_ *)0x0) {
          piVar8 = &(pLVar1->fields)._version;
          *piVar8 = *piVar8 + 1;
          pIVar9 = (pLVar1->fields)._items;
          if (pIVar9 != (Int32__Array *)0x0) {
            uVar10 = (pLVar1->fields)._size;
            if (uVar10 < pIVar9->max_length) {
              (pLVar1->fields)._size = uVar10 + 1;
              if (pIVar9->max_length <= uVar10) goto code_?;
              pIVar9->vector[uVar10] = (int32_t)projectEarningsReport;
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
              List_1_System_Int32__AddWithResize
                        (pLVar1,(int32_t)projectEarningsReport,pMVar7->klass->rgctx_data[0xe].method
                        );
            }
            pLVar1 = *ppLVar2;
            iVar5 = GameEarningsMenu_GetTotalBoostEarnings
                               (this,projectEarningsReport_00,(MethodInfo *)0x0);
            pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
            if (pLVar1 != (List_1_System_Int32_ *)0x0) {
              piVar8 = &(pLVar1->fields)._version;
              *piVar8 = *piVar8 + 1;
              pIVar9 = (pLVar1->fields)._items;
              if (pIVar9 != (Int32__Array *)0x0) {
                uVar10 = (pLVar1->fields)._size;
                if (uVar10 < pIVar9->max_length) {
                  (pLVar1->fields)._size = uVar10 + 1;
                  if (pIVar9->max_length <= uVar10) goto code_?;
                  pIVar9->vector[uVar10] = iVar5;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__AddWithResize
                            (pLVar1,iVar5,pMVar7->klass->rgctx_data[0xe].method);
                }
                pLVar1 = *ppLVar2;
                iVar5 = GameEarningsMenu_GetTierEarnings
                                   (this,projectEarningsReport_00,GamePassTier__Enum_Tier1,
                                    (MethodInfo *)0x0);
                pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                if (pLVar1 != (List_1_System_Int32_ *)0x0) {
                  piVar8 = &(pLVar1->fields)._version;
                  *piVar8 = *piVar8 + 1;
                  pIVar9 = (pLVar1->fields)._items;
                  if (pIVar9 != (Int32__Array *)0x0) {
                    uVar10 = (pLVar1->fields)._size;
                    if (uVar10 < pIVar9->max_length) {
                      (pLVar1->fields)._size = uVar10 + 1;
                      if (pIVar9->max_length <= uVar10) goto code_?;
                      pIVar9->vector[uVar10] = iVar5;
                    }
                    else {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                      List_1_System_Int32__AddWithResize
                                (pLVar1,iVar5,pMVar7->klass->rgctx_data[0xe].method);
                    }
                    pLVar1 = *ppLVar2;
                    iVar5 = GameEarningsMenu_GetTierEarnings
                                       (this,projectEarningsReport_00,GamePassTier__Enum_Tier2,
                                        (MethodInfo *)0x0);
                    pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                    if (pLVar1 != (List_1_System_Int32_ *)0x0) {
                      piVar8 = &(pLVar1->fields)._version;
                      *piVar8 = *piVar8 + 1;
                      pIVar9 = (pLVar1->fields)._items;
                      if (pIVar9 != (Int32__Array *)0x0) {
                        uVar10 = (pLVar1->fields)._size;
                        if (uVar10 < pIVar9->max_length) {
                          (pLVar1->fields)._size = uVar10 + 1;
                          if (pIVar9->max_length <= uVar10) goto code_?;
                          pIVar9->vector[uVar10] = iVar5;
                        }
                        else {
                          mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                          List_1_System_Int32__AddWithResize
                                    (pLVar1,iVar5,pMVar7->klass->rgctx_data[0xe].method);
                        }
                        pLVar1 = *ppLVar2;
                        iVar5 = GameEarningsMenu_GetTierEarnings
                                           (this,projectEarningsReport_00,GamePassTier__Enum_Tier3,
                                            (MethodInfo *)0x0);
                        pMVar7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                        if (pLVar1 != (List_1_System_Int32_ *)0x0) {
                          piVar8 = &(pLVar1->fields)._version;
                          *piVar8 = *piVar8 + 1;
                          pIVar9 = (pLVar1->fields)._items;
                          if (pIVar9 != (Int32__Array *)0x0) {
                            uVar10 = (pLVar1->fields)._size;
                            if (uVar10 < pIVar9->max_length) {
                              (pLVar1->fields)._size = uVar10 + 1;
                              if (pIVar9->max_length <= uVar10) goto code_?;
                              pIVar9->vector[uVar10] = iVar5;
                            }
                            else {
                              mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                              List_1_System_Int32__AddWithResize
                                        (pLVar1,iVar5,pMVar7->klass->rgctx_data[0xe].method);
                            }
                            if ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )*ppLVar2 !=
                                (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )0x0) {
                              boostersEarnings =
                                   mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                   RegularExpressions::RegexCharClass+SingleRange]::
                                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                             ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                               *)*ppLVar2,1,
                                              MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                             );
                              if ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)*ppLVar2 !=
                                  (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)0x0) {
                                tier1Earnings =
                                     mscorlib.dll::System::Collections::Generic::List`1[System::Text
                                     ::RegularExpressions::RegexCharClass+SingleRange]::
                                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                               ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                 *)*ppLVar2,2,
                                                MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                               );
                                if ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)*ppLVar2 !=
                                    (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)0x0) {
                                  tier2Earnings =
                                       mscorlib.dll::System::Collections::Generic::List`1[System::
                                       Text::RegularExpressions::RegexCharClass+SingleRange]::
                                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                 ((
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)*ppLVar2,3,
                                                  MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                                 );
                                  if ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                       *)*ppLVar2 !=
                                      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                       *)0x0) {
                                    tier3Earnings =
                                         mscorlib.dll::System::Collections::Generic::List`1[System::
                                         Text::RegularExpressions::RegexCharClass+SingleRange]::
                                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                   ((
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)*ppLVar2,4,
                                                  MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                                  );
                                    if ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                         *)*ppLVar2 !=
                                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                         *)0x0) {
                                      totalEarnings =
                                           mscorlib.dll::System::Collections::Generic::List`1[System
                                           ::Text::RegularExpressions::RegexCharClass+SingleRange]::
                                           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                     ((
                                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                                  *)*ppLVar2,0,
                                                  MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                                  );
                                      GameEarningsMenu_UpdateEarningsText
                                                (this,(int32_t)boostersEarnings,
                                                 (int32_t)tier1Earnings,(int32_t)tier2Earnings,
                                                 (int32_t)tier3Earnings,(int32_t)totalEarnings,
                                                 (MethodInfo *)0x0);
                                      GameEarningsMenu_UpdateEarningPieChart
                                                (this,(int32_t)boostersEarnings,
                                                 (int32_t)tier1Earnings,(int32_t)tier2Earnings,
                                                 (int32_t)tier3Earnings,(int32_t)totalEarnings,
                                                 (MethodInfo *)0x0);
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
          }
        }
      }
      else {
        pDVar4 = (projectEarningsReport->fields).projectMemberEarningsReports;
        if (pDVar4 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                       *)0x0) {
          this = (GameEarningsMenu *)
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
          ;
          pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,iVar5,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                              );
          if ((pOVar11 != (Object *)0x0) && (pOVar11[1].klass != (Object__Class *)0x0)) {
            projectEarningsReport =
                 (ProjectEarningsReport *)
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

