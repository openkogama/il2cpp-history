
/* Void AddGameBoosterGoldRevenue(Int32, String) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
     ProjectMemberEarningsReport::ProjectMemberEarningsReport_AddGameBoosterGoldRevenue
               (ProjectMemberEarningsReport *this,int32_t goldAmount,String *gameBooster,
               MethodInfo *method)

{
  pEVar1 = (this->fields).earningsReport;
  if (pEVar1 != (EarningsReport *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__set_Item_System__String__int_
                     );
      cRam_? = '\x01';
    }
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (pEVar1->fields).gameBoosterEarningsGold;
    if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (pDVar2,(Object *)gameBooster,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                        );
      if (bVar3 == 0) {
        this_00 = (pEVar1->fields).gameBoosterEarningsGold;
        if (this_00 == (Dictionary_2_System_String_System_Int32_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
        Dictionary_2_System_Object_System_Int32__Add
                  ((Dictionary_2_System_Object_System_Int32_ *)this_00,(Object *)gameBooster,0,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                  );
      }
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (pEVar1->fields).gameBoosterEarningsGold;
      if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar2,(Object *)gameBooster,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                          );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
        Dictionary_2_System_Object_System_Int32__set_Item
                  ((Dictionary_2_System_Object_System_Int32_ *)pDVar2,(Object *)gameBooster,
                   TVar4.m_Index + goldAmount,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__set_Item_System__String__int_
                  );
        return;
      }
    }
  }
code_?:
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AddTierGoldRevenue(Int32, GamePassTier) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
     ProjectMemberEarningsReport::ProjectMemberEarningsReport_AddTierGoldRevenue
               (ProjectMemberEarningsReport *this,int32_t goldAmount,GamePassTier__Enum gamePassTier
               ,MethodInfo *method)

{
  pEVar1 = (this->fields).earningsReport;
  if (pEVar1 != (EarningsReport *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                     );
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_ByteEnum_System_Single_ *)
              (pEVar1->fields).gamePassTierEarningsGold;
    if (this_00 != (Dictionary_2_System_ByteEnum_System_Single_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                        (this_00,gamePassTier,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__ContainsKey_MV__Common__GamePassTier_
                        );
      if (bVar2 == 0) {
        this_01 = (pEVar1->fields).gamePassTierEarningsGold;
        if (this_01 == (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Int32]::
        Dictionary_2_System_ByteEnum_System_Int32__Add
                  ((Dictionary_2_System_ByteEnum_System_Int32_ *)this_01,gamePassTier,0,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
                  );
      }
      this_02 = (Dictionary_2_System_ByteEnum_System_Object_ *)
                (pEVar1->fields).gamePassTierEarningsGold;
      if (this_02 != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           (this_02,gamePassTier,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                           );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Int32]::
        Dictionary_2_System_ByteEnum_System_Int32__set_Item
                  ((Dictionary_2_System_ByteEnum_System_Int32_ *)this_02,gamePassTier,
                   (int)&pOVar3->klass + goldAmount,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                  );
        return;
      }
    }
  }
code_?:
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
         ProjectMemberEarningsReport::ProjectMemberEarningsReport_ToString
                   (ProjectMemberEarningsReport *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__0___);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Format
                     (StringLiteral__0___,(Object *)(this->fields).earningsReport,(MethodInfo *)0x0)
  ;
  return pSVar1;
}


/* ProjectMemberEarningsReport() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
     ProjectMemberEarningsReport::ProjectMemberEarningsReport__ctor
               (ProjectMemberEarningsReport *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__EarningsReport);
    cRam_? = '\x01';
  }
  this_00 = (EarningsReport *)
            func_?(
                           TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__EarningsReport
                           );
  EarningsReport::EarningsReport__ctor(this_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&this->fields;
  ((ProjectMemberEarningsReport__Fields *)method_00)->earningsReport = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* ProjectMemberEarningsReport(EarningsReport) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
     ProjectMemberEarningsReport::ProjectMemberEarningsReport__ctor_1
               (ProjectMemberEarningsReport *this,EarningsReport *earningsReport,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__EarningsReport);
    cRam_? = '\x01';
  }
  this_00 = (EarningsReport *)
            func_?(
                           TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__EarningsReport
                           );
  EarningsReport::EarningsReport__ctor(this_00,(MethodInfo *)0x0);
  pPVar1 = &this->fields;
  pPVar1->earningsReport = this_00;
  method_00 = (MethodInfo *)pPVar1;
  func_?(pPVar1,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  pPVar1->earningsReport = earningsReport;
  func_?(pPVar1,earningsReport);
  return;
}

