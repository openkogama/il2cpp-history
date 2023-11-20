
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
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Add_int__MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectMemberEarningsReport_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_bool>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_bool>__get_Key__);
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_bool>__get_Value__)
    ;
    func_?(&
                    TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectMemberEarningsReport
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  DStack_7._current.value = 0;
  DStack_7._current._5_3_ = 0;
  DStack_7._getEnumeratorRetType = 0;
  DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Byte_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  if (projectMembers != (Dictionary_2_System_Int32_System_Boolean_ *)0x0) {
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_9,(Dictionary_2_System_UInt32_System_Object_ *)projectMembers,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_bool>__GetEnumerator__
                       );
    uStack_10 = 0;
    DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Byte_ *)pDVar8->_dictionary;
    DStack_7._version = pDVar8->_version;
    DStack_7._index = pDVar8->_index;
    DStack_7._current.key = (pDVar8->_current).key;
    DStack_7._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
    uStack_1 = 1;
    pDStack_11 = &DStack_7;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Byte]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Byte__MoveNext
                        (&DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__MoveNext__
                        );
      uVar13 = DStack_7._16_8_;
      key = DStack_7._current.key;
      if (bVar12 == 0) break;
      uStack_14 = DStack_7._current.value;
      uStack_15 = DStack_7._current._5_3_;
      pDVar16 = (this->fields).projectMemberEarningsReports;
      DStack_7._16_8_ = uVar13;
      if (pDVar16 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                     *)0x0) goto code_?;
      bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar16,DStack_7._current.key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        );
      if (bVar12 == 0) {
        pDVar16 = (this->fields).projectMemberEarningsReports;
        pPStack_17 = (ProjectMemberEarningsReport *)func_?();
        ProjectMemberEarningsReport::ProjectMemberEarningsReport__ctor(pPStack_17,(MethodInfo *)0x0)
        ;
        if (pDVar16 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar16,key,(Object *)pPStack_17,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Add_int__MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectMemberEarningsReport_
                  );
      }
      goldAmount = goldPerSubscriberMember;
      if (uStack_14 == 0) {
        goldAmount = goldPerRegularMember;
      }
      pDVar16 = (this->fields).projectMemberEarningsReports;
      if (pDVar16 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                     *)0x0) goto code_?;
      this_01 = (ProjectMemberEarningsReport *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar16,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                          );
      if (this_01 == (ProjectMemberEarningsReport *)0x0) goto code_?;
      projectMembers = (Dictionary_2_System_Int32_System_Boolean_ *)&UNK_?;
      ProjectMemberEarningsReport::ProjectMemberEarningsReport_AddGameBoosterGoldRevenue
                (this_01,goldAmount,gameBooster,(MethodInfo *)0x0);
      iStack_6 = iStack_6 + goldAmount;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__Dispose__
               ,(MethodInfo *)projectMembers);
    uStack_1 = 0xffffffff;
    this_00 = (this->fields).earningsReport;
    if (this_00 != (EarningsReport *)0x0) {
      EarningsReport::EarningsReport_AddGameBoosterGoldRevenue
                (this_00,iStack_6,gameBooster,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Add_int__MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectMemberEarningsReport_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_bool>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_bool>__get_Key__);
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_bool>__get_Value__)
    ;
    func_?(&
                    TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectMemberEarningsReport
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  DStack_7._current.value = 0;
  DStack_7._current._5_3_ = 0;
  DStack_7._getEnumeratorRetType = 0;
  DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Byte_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  if (projectMembers != (Dictionary_2_System_Int32_System_Boolean_ *)0x0) {
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_9,(Dictionary_2_System_UInt32_System_Object_ *)projectMembers,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_bool>__GetEnumerator__
                       );
    uStack_10 = 0;
    DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Byte_ *)pDVar8->_dictionary;
    DStack_7._version = pDVar8->_version;
    DStack_7._index = pDVar8->_index;
    DStack_7._current.key = (pDVar8->_current).key;
    DStack_7._16_8_ = *(undefined8 *)&(pDVar8->_current).value;
    uStack_1 = 1;
    pDStack_11 = &DStack_7;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Byte]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Byte__MoveNext
                        (&DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__MoveNext__
                        );
      uVar13 = DStack_7._16_8_;
      key = DStack_7._current.key;
      if (bVar12 == 0) break;
      uStack_14 = DStack_7._current.value;
      uStack_15 = DStack_7._current._5_3_;
      pDVar16 = (this->fields).projectMemberEarningsReports;
      DStack_7._16_8_ = uVar13;
      if (pDVar16 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                     *)0x0) goto code_?;
      bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar16,DStack_7._current.key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        );
      if (bVar12 == 0) {
        pDVar16 = (this->fields).projectMemberEarningsReports;
        pPStack_17 = (ProjectMemberEarningsReport *)func_?();
        ProjectMemberEarningsReport::ProjectMemberEarningsReport__ctor(pPStack_17,(MethodInfo *)0x0)
        ;
        if (pDVar16 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar16,key,(Object *)pPStack_17,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Add_int__MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectMemberEarningsReport_
                  );
      }
      goldAmount = goldPerSubscriberMember;
      if (uStack_14 == 0) {
        goldAmount = goldPerRegularMember;
      }
      pDVar16 = (this->fields).projectMemberEarningsReports;
      if (pDVar16 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                     *)0x0) goto code_?;
      this_01 = (ProjectMemberEarningsReport *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar16,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                          );
      if (this_01 == (ProjectMemberEarningsReport *)0x0) goto code_?;
      projectMembers = (Dictionary_2_System_Int32_System_Boolean_ *)&UNK_?;
      ProjectMemberEarningsReport::ProjectMemberEarningsReport_AddTierGoldRevenue
                (this_01,goldAmount,gamePassTier,(MethodInfo *)0x0);
      iStack_6 = iStack_6 + goldAmount;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__Dispose__
               ,(MethodInfo *)projectMembers);
    uStack_1 = 0xffffffff;
    this_00 = (this->fields).earningsReport;
    if (this_00 != (EarningsReport *)0x0) {
      EarningsReport::EarningsReport_AddTierGoldRevenue
                (this_00,iStack_6,gamePassTier,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport
         ::ProjectEarningsReport_ToString(ProjectEarningsReport *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Value__
                   );
    func_?(&StringLiteral__0____1__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  pEVar7 = (this->fields).earningsReport;
  if (pEVar7 != (EarningsReport *)0x0) {
    pSVar8 = (String *)
             (*(code *)(pEVar7->klass->vtable).ToString.method)(pEVar7,pEVar7->klass[1]._0.image);
    this_00 = (Dictionary_2_System_UInt32_System_Object_ *)
              (this->fields).projectMemberEarningsReports;
    if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          &stack0xffffffa4,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__GetEnumerator__
                         );
      uStack_10 = 0;
      DStack_6._dictionary = pDVar9->_dictionary;
      DStack_6._version = pDVar9->_version;
      DStack_6._index = pDVar9->_index;
      DStack_6._current.key = (pDVar9->_current).key;
      DStack_6._16_8_ = *(undefined8 *)&(pDVar9->_current).value;
      uStack_1 = 1;
      pDStack_11 = &DStack_6;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__MoveNext__
                          );
        if (bVar12 == 0) break;
        uStack_13 = DStack_6._current.key;
        uStack_14 = DStack_6._current.key;
        pOStack_15 = DStack_6._current.value;
        arg0 = (Object *)func_?();
        str1 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral__0____1__,arg0,pOStack_15,(MethodInfo *)0x0);
        pSVar8 = mscorlib.dll::System::String::String_Concat_3(pSVar8,str1,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Dispose__
                 ,in_stack_16);
      *unaff_FS_OFFSET = uStack_3;
      return pSVar8;
    }
  }
  uVar17 = func_?();
  func_?(uVar17);
  pcVar18 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar18)();
  return pSVar8;
}


/* ProjectEarningsReport() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport::
     ProjectEarningsReport__ctor(ProjectEarningsReport *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>
                   );
    func_?(&TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__EarningsReport);
    cRam_? = '\x01';
  }
  this_00 = (EarningsReport *)
            func_?(
                           TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__EarningsReport
                           );
  EarningsReport::EarningsReport__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).earningsReport = this_00;
  func_?(&this->fields,this_00);
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Dictionary__
            );
  method_00 = (MethodInfo *)&(this->fields).projectMemberEarningsReports;
  (this->fields).projectMemberEarningsReports =
       (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
        *)this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>
                   );
    func_?(&TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__EarningsReport);
    cRam_? = '\x01';
  }
  this_00 = (EarningsReport *)
            func_?(
                           TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__EarningsReport
                           );
  EarningsReport::EarningsReport__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).earningsReport = this_00;
  func_?(&this->fields,this_00);
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Dictionary__
            );
  method_00 = (MethodInfo *)&(this->fields).projectMemberEarningsReports;
  (this->fields).projectMemberEarningsReports =
       (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
        *)this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).earningsReport = earningsReport;
  func_?(&this->fields,earningsReport);
  (this->fields).projectMemberEarningsReports = projectMemberEarningsReports;
  func_?(&(this->fields).projectMemberEarningsReports,projectMemberEarningsReports);
  return;
}

