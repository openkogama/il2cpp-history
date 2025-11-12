
/* Void AddGameBoosterGoldRevenue(Int32, Int32, String, Dictionary`2[System.Int32,System.Boolean])
    */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport::
     ProjectEarningsReport_AddGameBoosterGoldRevenue
               (ProjectEarningsReport *this,int32_t goldPerRegularMember,
               int32_t goldPerSubscriberMember,String *gameBooster,
               Dictionary_2_System_Int32_System_Boolean_ *projectMembers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Add_int__MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectMemberEarningsReport_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_bool>__GetEnumerator__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_bool>__get_Key__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_bool>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectMemberEarningsReport
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  goldAmount_00 = 0;
  if (projectMembers != (Dictionary_2_System_Int32_System_Boolean_ *)0x0) {
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&uStack_2 >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    iStack_6 = (projectMembers->fields)._version;
    uStack_7 = 2;
    uStack_8 = 0;
    uStack_9 = 0;
    uStack_10 = 0;
    uStack_11 = 2;
    uStack_2 = 0;
    puStack_12 = &uStack_13;
    uStack_13 = projectMembers;
    while( true ) {
      cVar14 = FUN_?(&uStack_13,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__MoveNext__
                           );
      uVar15 = uStack_10;
      if (cVar14 == '\0') break;
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                (this->fields).projectMemberEarningsReports;
      if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
      goto code_?;
      key = (int32_t)uStack_10;
      iVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (iVar16 < 0) {
        pDVar17 = (this->fields).projectMemberEarningsReports;
        this_02 = (ProjectMemberEarningsReport *)
                  FUN_?(
                               TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectMemberEarningsReport
                               );
        ProjectMemberEarningsReport::ProjectMemberEarningsReport__ctor(this_02,(MethodInfo *)0x0);
        if (pDVar17 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar17,key,(Object *)this_02,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)projectMembers >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Add_int__MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectMemberEarningsReport_
                   ->klass->rgctx_data[0x22].method);
      }
      projectMembers._4_1_ = (char)((ulonglong)uVar15 >> 0x20);
      goldAmount = goldPerRegularMember;
      if (projectMembers._4_1_ != '\0') {
        goldAmount = goldPerSubscriberMember;
      }
      pDVar17 = (this->fields).projectMemberEarningsReports;
      if (pDVar17 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                     *)0x0) goto code_?;
      pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar17,key,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                         );
      if (pOVar18 == (Object *)0x0) goto code_?;
      if (pOVar18[1].klass == (Object__Class *)0x0) goto code_?;
      projectMembers = (Dictionary_2_System_Int32_System_Boolean_ *)0x0;
      EarningsReport::EarningsReport_AddGameBoosterGoldRevenue
                ((EarningsReport *)pOVar18[1].klass,goldAmount,gameBooster,(MethodInfo *)0x0);
      goldAmount_00 = goldAmount_00 + goldAmount;
    }
    this_01 = (this->fields).earningsReport;
    if (this_01 != (EarningsReport *)0x0) {
      EarningsReport::EarningsReport_AddGameBoosterGoldRevenue
                (this_01,goldAmount_00,gameBooster,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void AddTierGoldRevenue(Int32, Int32, GamePassTier, Dictionary`2[System.Int32,System.Boolean]) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport::
     ProjectEarningsReport_AddTierGoldRevenue
               (ProjectEarningsReport *this,int32_t goldPerRegularMember,
               int32_t goldPerSubscriberMember,GamePassTier__Enum gamePassTier,
               Dictionary_2_System_Int32_System_Boolean_ *projectMembers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Add_int__MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectMemberEarningsReport_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_bool>__GetEnumerator__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_bool>__get_Key__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_bool>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectMemberEarningsReport
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  goldAmount_00 = 0;
  if (projectMembers != (Dictionary_2_System_Int32_System_Boolean_ *)0x0) {
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&uStack_2 >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    iStack_6 = (projectMembers->fields)._version;
    uStack_7 = 2;
    uStack_8 = 0;
    uStack_9 = 0;
    uStack_10 = 0;
    uStack_11 = 2;
    uStack_2 = 0;
    puStack_12 = &uStack_13;
    uStack_13 = projectMembers;
    while( true ) {
      cVar14 = FUN_?(&uStack_13,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_bool>__MoveNext__
                           );
      uVar15 = uStack_10;
      if (cVar14 == '\0') break;
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                (this->fields).projectMemberEarningsReports;
      if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
      goto code_?;
      key = (int32_t)uStack_10;
      iVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (iVar16 < 0) {
        pDVar17 = (this->fields).projectMemberEarningsReports;
        this_02 = (ProjectMemberEarningsReport *)
                  FUN_?(
                               TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectMemberEarningsReport
                               );
        ProjectMemberEarningsReport::ProjectMemberEarningsReport__ctor(this_02,(MethodInfo *)0x0);
        if (pDVar17 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar17,key,(Object *)this_02,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)projectMembers >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Add_int__MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectMemberEarningsReport_
                   ->klass->rgctx_data[0x22].method);
      }
      projectMembers._4_1_ = (char)((ulonglong)uVar15 >> 0x20);
      goldAmount = goldPerRegularMember;
      if (projectMembers._4_1_ != '\0') {
        goldAmount = goldPerSubscriberMember;
      }
      pDVar17 = (this->fields).projectMemberEarningsReports;
      if (pDVar17 == (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                     *)0x0) goto code_?;
      pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar17,key,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                         );
      if (pOVar18 == (Object *)0x0) goto code_?;
      if (pOVar18[1].klass == (Object__Class *)0x0) goto code_?;
      projectMembers = (Dictionary_2_System_Int32_System_Boolean_ *)0x0;
      EarningsReport::EarningsReport_AddTierGoldRevenue
                ((EarningsReport *)pOVar18[1].klass,goldAmount,gamePassTier & 0xff,(MethodInfo *)0x0)
      ;
      goldAmount_00 = goldAmount_00 + goldAmount;
    }
    this_01 = (this->fields).earningsReport;
    if (this_01 != (EarningsReport *)0x0) {
      EarningsReport::EarningsReport_AddTierGoldRevenue
                (this_01,goldAmount_00,gamePassTier & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport
         ::ProjectEarningsReport_ToString(ProjectEarningsReport *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0____1__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).earningsReport;
  if (pEVar1 != (EarningsReport *)0x0) {
    pSVar2 = (String *)
             (*(pEVar1->klass->vtable).ToString.methodPtr)
                       (pEVar1,(pEVar1->klass->vtable).ToString.method);
    PStack_3._arg0 = (Object *)(this->fields).projectMemberEarningsReports;
    if ((Dictionary_2_System_UInt32_System_Object_ *)PStack_3._arg0 !=
        (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      PStack_3._arg2 = (Object *)0x0;
      PStack_3._args = (Object__Array *)0x0;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&PStack_3 >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
      PStack_3._arg1 =
           (Object *)
           (ulonglong)
           (uint)(((Dictionary_2_System_UInt32_System_Object_ *)PStack_3._arg0)->fields)._version;
      uStack_8 = 2;
      auStack_9._8_8_ = PStack_3._arg1;
      KStack_10.key = 0;
      KStack_10._4_4_ = 0;
      KStack_10.value = (Object *)0x0;
      uStack_11._0_4_ = 2;
      uStack_11._4_4_ = 0;
      uStack_12 = 0;
      puStack_13 = auStack_9;
      auStack_9._0_8_ = PStack_3._arg0;
      while (bVar14 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                                auStack_9,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__MoveNext__
                               ), arg1 = KStack_10.value, bVar14 != 0) {
        auStackX_8[0] = KStack_10.key;
        arg0 = (Object *)FUN_?(uRam_?,auStackX_8);
        pSVar15 = StringLiteral__0____1__;
        PStack_16._arg0 = (Object *)0x0;
        PStack_16._arg1 = (Object *)0x0;
        PStack_16._arg2 = (Object *)0x0;
        PStack_16._args = (Object__Array *)0x0;
        mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                  (&PStack_16,arg0,arg1,(MethodInfo *)0x0);
        PStack_3._arg0 = PStack_16._arg0;
        PStack_3._arg1 = PStack_16._arg1;
        PStack_3._arg2 = PStack_16._arg2;
        PStack_3._args = PStack_16._args;
        pSVar15 = mscorlib.dll::System::String::String_FormatHelper
                           ((IFormatProvider *)0x0,pSVar15,&PStack_3,(MethodInfo *)0x0);
        pSVar2 = mscorlib.dll::System::String::String_Concat_4(pSVar2,pSVar15,(MethodInfo *)0x0);
      }
      return pSVar2;
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar17)();
  return pSVar2;
}


/* ProjectEarningsReport() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport::
     ProjectEarningsReport__ctor(ProjectEarningsReport *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__EarningsReport);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (EarningsReport *)
            FUN_?(
                         TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__EarningsReport
                         );
  EarningsReport::EarningsReport__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).earningsReport = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).projectMemberEarningsReports =
       (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
        *)this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).projectMemberEarningsReports >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__EarningsReport);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (EarningsReport *)
            FUN_?(
                         TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__EarningsReport
                         );
  EarningsReport::EarningsReport__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).earningsReport = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__Dictionary__
            );
  iVar6 = iRam_?;
  (this->fields).projectMemberEarningsReports =
       (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
        *)this_01;
  if (iVar6 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).projectMemberEarningsReports >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar1);
  }
  (this->fields).earningsReport = earningsReport;
  iVar7 = 0;
  if (iVar6 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar1);
  }
  (this->fields).projectMemberEarningsReports = projectMemberEarningsReports;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).projectMemberEarningsReports >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

