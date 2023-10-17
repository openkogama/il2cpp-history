
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
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
              (pEVar1->fields).gameBoosterEarningsGold;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)gameBooster,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                        );
      if (bVar2 == 0) {
        pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
                 (pEVar1->fields).gameBoosterEarningsGold;
        if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar3,(Object *)gameBooster,(Object *)0x0,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                  );
      }
      pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(pEVar1->fields).gameBoosterEarningsGold
      ;
      if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar3,(Object *)gameBooster,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                           );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar3,(Object *)gameBooster,(Object *)((int)&pOVar4->klass + goldAmount),
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
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
              (pEVar1->fields).gamePassTierEarningsGold;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)gamePassTier,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__ContainsKey_MV__Common__GamePassTier_
                        );
      if (bVar2 == 0) {
        pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
                 (pEVar1->fields).gamePassTierEarningsGold;
        if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar3,(Object *)gamePassTier,(Object *)0x0,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
                  );
      }
      pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
               (pEVar1->fields).gamePassTierEarningsGold;
      if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,gamePassTier,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                           );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar3,(Object *)gamePassTier,(Object *)((int)&pOVar4->klass + goldAmount),
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
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
  if (this_00 != (EarningsReport *)0x0) {
    EarningsReport::EarningsReport__ctor(this_00,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).earningsReport = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  if (this_00 != (EarningsReport *)0x0) {
    EarningsReport::EarningsReport__ctor(this_00,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).earningsReport = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    (this->fields).earningsReport = earningsReport;
    func_?(&this->fields,earningsReport);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

