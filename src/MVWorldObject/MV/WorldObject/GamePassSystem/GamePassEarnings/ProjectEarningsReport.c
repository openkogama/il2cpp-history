
/* Void AddGameBoosterGoldRevenue(Int32, Int32, String, Dictionary`2[System.Int32,System.Boolean])
    */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport::
     ProjectEarningsReport_AddGameBoosterGoldRevenue
               (ProjectEarningsReport *this,int32_t goldPerRegularMember,
               int32_t goldPerSubscriberMember,String *gameBooster,
               Dictionary_2_System_Int32_System_Boolean_ *projectMembers,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  goldAmount = 0;
  iStack_8 = 0;
  puStack_9 = (undefined4 *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  if (projectMembers != (Dictionary_2_System_Int32_System_Boolean_ *)0x0) {
    puStack_9 = (undefined4 *)&stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffac,
                        (Dictionary_2_WinningConditionType_System_Object_ *)projectMembers,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_bool>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar10->dictionary;
    auStack_6._4_4_ = pDVar10->next;
    auStack_6._8_4_ = pDVar10->stamp;
    auStack_6._12_4_ = (pDVar10->current).key;
    auStack_6._16_4_ = (pDVar10->current).value;
    uStack_1 = 0;
    while (cVar11 = func_?(), cVar11 != '\0') {
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__get_Current__
                            );
      pDVar12 = (this->fields).projectMemberEarningsReports;
      iVar13 = func_?();
      unaff_ESI = (ProjectMemberEarningsReport *)0x0;
      if (pDVar12 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                     *)0x0) goto code_?;
      bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,iVar13,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        );
      if (bVar14 == 0) {
        pDVar12 = (this->fields).projectMemberEarningsReports;
        iStack_15 = func_?();
        unaff_ESI = (ProjectMemberEarningsReport *)func_?();
        ProjectMemberEarningsReport::ProjectMemberEarningsReport__ctor(unaff_ESI,(MethodInfo *)0x0);
        if (pDVar12 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,iStack_15,(Object *)unaff_ESI,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Add_int__MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectMemberEarningsReport_
                  );
      }
      cVar11 = func_?();
      unaff_ESI = (ProjectMemberEarningsReport *)goldPerRegularMember;
      if (cVar11 != '\0') {
        unaff_ESI = (ProjectMemberEarningsReport *)goldPerSubscriberMember;
      }
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).projectMemberEarningsReports;
      iVar13 = func_?();
      if ((this_00 ==
           (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)0x0) ||
         (this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (this_00,iVar13,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                              ), this_02 == (TerrainUtility_TerrainMap *)0x0))
      goto code_?;
      ProjectMemberEarningsReport::ProjectMemberEarningsReport_AddGameBoosterGoldRevenue
                ((ProjectMemberEarningsReport *)this_02,(int32_t)unaff_ESI,gameBooster,
                 (MethodInfo *)0x0);
      goldAmount = (int)&unaff_ESI->klass + goldAmount;
      iStack_8 = goldAmount;
    }
    unaff_ESI = (ProjectMemberEarningsReport *)0x0;
    *puStack_9 = 0x82;
    uStack_1 = 0xffffffff;
    func_?();
    this_01 = (this->fields).earningsReport;
    if (this_01 != (EarningsReport *)0x0) {
      EarningsReport::EarningsReport_AddGameBoosterGoldRevenue
                (this_01,goldAmount,gameBooster,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?(0);
  func_?(unaff_ESI,0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void AddTierGoldRevenue(Int32, Int32, GamePassTier, Dictionary`2[System.Int32,System.Boolean]) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport::
     ProjectEarningsReport_AddTierGoldRevenue
               (ProjectEarningsReport *this,int32_t goldPerRegularMember,
               int32_t goldPerSubscriberMember,GamePassTier__Enum gamePassTier,
               Dictionary_2_System_Int32_System_Boolean_ *projectMembers,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  goldAmount = 0;
  iStack_8 = 0;
  puStack_9 = (undefined4 *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  if (projectMembers != (Dictionary_2_System_Int32_System_Boolean_ *)0x0) {
    puStack_9 = (undefined4 *)&stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffac,
                        (Dictionary_2_WinningConditionType_System_Object_ *)projectMembers,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_bool>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar10->dictionary;
    auStack_6._4_4_ = pDVar10->next;
    auStack_6._8_4_ = pDVar10->stamp;
    auStack_6._12_4_ = (pDVar10->current).key;
    auStack_6._16_4_ = (pDVar10->current).value;
    uStack_1 = 0;
    while (cVar11 = func_?(), cVar11 != '\0') {
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__get_Current__
                            );
      pDVar12 = (this->fields).projectMemberEarningsReports;
      iVar13 = func_?();
      unaff_ESI = (ProjectMemberEarningsReport *)0x0;
      if (pDVar12 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                     *)0x0) goto code_?;
      bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,iVar13,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        );
      if (bVar14 == 0) {
        pDVar12 = (this->fields).projectMemberEarningsReports;
        iStack_15 = func_?();
        unaff_ESI = (ProjectMemberEarningsReport *)func_?();
        ProjectMemberEarningsReport::ProjectMemberEarningsReport__ctor(unaff_ESI,(MethodInfo *)0x0);
        if (pDVar12 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,iStack_15,(Object *)unaff_ESI,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Add_int__MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectMemberEarningsReport_
                  );
      }
      cVar11 = func_?();
      unaff_ESI = (ProjectMemberEarningsReport *)goldPerRegularMember;
      if (cVar11 != '\0') {
        unaff_ESI = (ProjectMemberEarningsReport *)goldPerSubscriberMember;
      }
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).projectMemberEarningsReports;
      iVar13 = func_?();
      if ((this_00 ==
           (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)0x0) ||
         (this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                              (this_00,iVar13,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                              ), this_02 == (TerrainUtility_TerrainMap *)0x0))
      goto code_?;
      ProjectMemberEarningsReport::ProjectMemberEarningsReport_AddTierGoldRevenue
                ((ProjectMemberEarningsReport *)this_02,(int32_t)unaff_ESI,gamePassTier,
                 (MethodInfo *)0x0);
      goldAmount = (int)&unaff_ESI->klass + goldAmount;
      iStack_8 = goldAmount;
    }
    unaff_ESI = (ProjectMemberEarningsReport *)0x0;
    *puStack_9 = 0x82;
    uStack_1 = 0xffffffff;
    func_?();
    this_01 = (this->fields).earningsReport;
    if (this_01 != (EarningsReport *)0x0) {
      EarningsReport::EarningsReport_AddTierGoldRevenue
                (this_01,goldAmount,gamePassTier,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?(0);
  func_?(unaff_ESI,0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport
         ::ProjectEarningsReport_ToString(ProjectEarningsReport *this,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = 0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  pEVar8 = (this->fields).earningsReport;
  pLStack_9 = (Link__Array *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  if (pEVar8 != (EarningsReport *)0x0) {
    pLStack_9 = (Link__Array *)&stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    pSVar10 = (String *)
             (*(code *)(pEVar8->klass->vtable).ToString.method)(pEVar8,pEVar8->klass[1]._0.image);
    this_00 = (this->fields).projectMemberEarningsReports;
    if (this_00 !=
        (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
         *)0x0) {
      pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         (&DStack_12,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__GetEnumerator__
                         );
      auStack_6._0_4_ = pDVar11->dictionary;
      auStack_6._4_4_ = pDVar11->next;
      auStack_6._8_4_ = pDVar11->stamp;
      auStack_6._12_4_ = (pDVar11->current).key;
      auStack_6._16_4_ = (pDVar11->current).value;
      iStack_1 = 0;
      while (cVar13 = func_?(), cVar13 != '\0') {
        KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Current__
                              );
        DStack_12.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
        DStack_12.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Key__
        ;
        pOStack_14 = (Object__Array *)func_?();
        DStack_12.next = (int32_t)&pOStack_14;
        DStack_12.dictionary =
             (Dictionary_2_WinningConditionType_System_Object_ *)TypeInfo__System__Int32;
        pWStack_15 = (WinningConditionType__Enum__Array *)func_?();
        DStack_12.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
        DStack_12.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Value__
        ;
        arg1 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        str1 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral__0____1__,(Object *)pWStack_15,arg1,(MethodInfo *)0x0);
        pSVar10 = mscorlib.dll::System::String::String_Concat_2(pSVar10,str1,(MethodInfo *)0x0);
      }
      pLStack_9->klass = (Link__Array__Class *)0x5f;
      iStack_1 = -1;
      func_?();
      *unaff_FS_OFFSET = iStack_3;
      return pSVar10;
    }
  }
  func_?(0);
  func_?();
  pcVar16 = (code *)swi(3);
  pSVar10 = (String *)(*pcVar16)();
  return pSVar10;
}


/* ProjectEarningsReport() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport::
     ProjectEarningsReport__ctor(ProjectEarningsReport *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EarningsReport *)
            func_?(
                           TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__EarningsReport
                           );
  EarningsReport::EarningsReport__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).earningsReport = this_00;
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>
  ;
  this_01 = (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
             *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Dictionary__
            );
  (this->fields).projectMemberEarningsReports = this_01;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}


/* ProjectEarningsReport(EarningsReport,
   Dictionary`2[System.Int32,MV.WorldObject.GamePassSystem.GamePassEarnings.ProjectMemberEarningsReport])
    */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport::
     ProjectEarningsReport__ctor_1
               (ProjectEarningsReport *this,EarningsReport *earningsReport,
               Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
               *projectMemberEarningsReports,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (EarningsReport *)
            func_?(
                           TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__EarningsReport
                           );
  EarningsReport::EarningsReport__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).earningsReport = this_00;
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>
  ;
  this_01 = (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
             *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Dictionary__
            );
  (this->fields).projectMemberEarningsReports = this_01;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).earningsReport = earningsReport;
  (this->fields).projectMemberEarningsReports = projectMemberEarningsReports;
  return;
}

