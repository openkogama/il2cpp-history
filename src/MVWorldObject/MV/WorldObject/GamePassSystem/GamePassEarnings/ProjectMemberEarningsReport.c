
/* Void AddGameBoosterGoldRevenue(Int32, String) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
     ProjectMemberEarningsReport::ProjectMemberEarningsReport_AddGameBoosterGoldRevenue
               (ProjectMemberEarningsReport *this,int32_t goldAmount,String *gameBooster,
               MethodInfo *method)

{
  pEVar1 = (this->fields).earningsReport;
  if (pEVar1 == (EarningsReport *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                  ,CONCAT44(in_register_00000014,goldAmount),gameBooster,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__set_Item_System__String__int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(pEVar1->fields).gameBoosterEarningsGold;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)gameBooster,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (iVar4 < 0) {
      pDVar5 = (pEVar1->fields).gameBoosterEarningsGold;
      if (pDVar5 == (Dictionary_2_System_String_System_Int32_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__TryInsert
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar5,(Object *)gameBooster,0,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                 ->klass->rgctx_data[0x22].method);
    }
    pDVar5 = (pEVar1->fields).gameBoosterEarningsGold;
    if (pDVar5 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
      IVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Int32Enum]::Dictionary_2_System_Object_System_Int32Enum__get_Item
                        ((Dictionary_2_System_Object_System_Int32Enum_ *)pDVar5,
                         (Object *)gameBooster,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                        );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__TryInsert
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar5,(Object *)gameBooster,
                 IVar6 + goldAmount,(InsertionBehavior__Enum)CONCAT71((uint7)(uint3)(IVar6 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__set_Item_System__String__int_
                 ->klass->rgctx_data[0x22].method);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddTierGoldRevenue(Int32, GamePassTier) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
     ProjectMemberEarningsReport::ProjectMemberEarningsReport_AddTierGoldRevenue
               (ProjectMemberEarningsReport *this,int32_t goldAmount,GamePassTier__Enum gamePassTier
               ,MethodInfo *method)

{
  pEVar1 = (this->fields).earningsReport;
  if (pEVar1 == (EarningsReport *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
                  ,CONCAT44(in_register_00000014,goldAmount),
                  CONCAT44(in_register_00000084,gamePassTier),0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__ContainsKey_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_System_Single_ *)(pEVar1->fields).gamePassTierEarningsGold
  ;
  if (this_00 != (Dictionary_2_System_ByteEnum_System_Single_ *)0x0) {
    iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
            Single]::Dictionary_2_System_ByteEnum_System_Single__FindEntry
                      (this_00,gamePassTier & 0xff,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__ContainsKey_MV__Common__GamePassTier_
                       ->klass->rgctx_data[0x21].method);
    if (iVar4 < 0) {
      pDVar5 = (pEVar1->fields).gamePassTierEarningsGold;
      if (pDVar5 == (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Int32]::
      Dictionary_2_System_ByteEnum_System_Int32__TryInsert
                ((Dictionary_2_System_ByteEnum_System_Int32_ *)pDVar5,gamePassTier & 0xff,0,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
                 ->klass->rgctx_data[0x22].method);
    }
    pDVar5 = (pEVar1->fields).gamePassTierEarningsGold;
    if (pDVar5 != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
      iVar6 = FUN_?(pDVar5,(char)gamePassTier);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Int32]::
      Dictionary_2_System_ByteEnum_System_Int32__TryInsert
                ((Dictionary_2_System_ByteEnum_System_Int32_ *)pDVar5,gamePassTier & 0xff,
                 iVar6 + goldAmount,
                 (InsertionBehavior__Enum)CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                 ->klass->rgctx_data[0x22].method);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
         ProjectMemberEarningsReport::ProjectMemberEarningsReport_ToString
                   (ProjectMemberEarningsReport *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__0___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral__0___;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor
            (&PStack_2,(Object *)(this->fields).earningsReport,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* ProjectMemberEarningsReport() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
     ProjectMemberEarningsReport::ProjectMemberEarningsReport__ctor
               (ProjectMemberEarningsReport *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* ProjectMemberEarningsReport(EarningsReport) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
     ProjectMemberEarningsReport::ProjectMemberEarningsReport__ctor_1
               (ProjectMemberEarningsReport *this,EarningsReport *earningsReport,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
  iVar1 = iRam_?;
  (this->fields).earningsReport = this_00;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).earningsReport = earningsReport;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}

