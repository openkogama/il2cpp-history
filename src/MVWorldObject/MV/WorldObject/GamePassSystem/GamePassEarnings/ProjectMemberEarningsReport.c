
/* Void AddGameBoosterGoldRevenue(Int32, String) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
     ProjectMemberEarningsReport::ProjectMemberEarningsReport_AddGameBoosterGoldRevenue
               (ProjectMemberEarningsReport *this,int32_t goldAmount,String *gameBooster,
               MethodInfo *method)

{
  pEVar1 = (this->fields).earningsReport;
  if (pEVar1 == (EarningsReport *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar3 = (pEVar1->fields).gameBoosterEarningsGold;
  if (pDVar3 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
            Dictionary_2_System_Object_System_Int32__ContainsKey
                      ((Dictionary_2_System_Object_System_Int32_ *)pDVar3,(Object *)gameBooster,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                      );
    if (bVar4 == 0) {
      pDVar3 = (pEVar1->fields).gameBoosterEarningsGold;
      if (pDVar3 == (Dictionary_2_System_String_System_Int32_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar3,(Object *)gameBooster,0,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
    }
    pDVar3 = (pEVar1->fields).gameBoosterEarningsGold;
    if (pDVar3 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]
              ::Dictionary_2_System_Object_System_Int32__get_Item
                        ((Dictionary_2_System_Object_System_Int32_ *)pDVar3,(Object *)gameBooster,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                        );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__set_Item
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar3,(Object *)gameBooster,
                 (int)&gameBooster->klass + iVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__set_Item_System__String__int_
                );
      return;
    }
  }
code_?:
  func_?();
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
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar3 = (pEVar1->fields).gamePassTierEarningsGold;
  if (pDVar3 != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System
            ::Int32]::Dictionary_2_MV_Common_GamePassTier_System_Int32__ContainsKey
                      (pDVar3,gamePassTier,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__ContainsKey_MV__Common__GamePassTier_
                      );
    if (bVar4 == 0) {
      pDVar3 = (pEVar1->fields).gamePassTierEarningsGold;
      if (pDVar3 == (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System::
      Int32]::Dictionary_2_MV_Common_GamePassTier_System_Int32__Add
                (pDVar3,gamePassTier,0,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
                );
    }
    pDVar3 = (pEVar1->fields).gamePassTierEarningsGold;
    if (pDVar3 != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
              GamePassTier,System::Int32]::
              Dictionary_2_MV_Common_GamePassTier_System_Int32__get_Item
                        (pDVar3,gamePassTier,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                        );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System::
      Int32]::Dictionary_2_MV_Common_GamePassTier_System_Int32__set_Item
                (pDVar3,gamePassTier,iVar5 + gamePassTier,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                );
      return;
    }
  }
code_?:
  func_?();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  arg0 = (this->fields).earningsReport;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Format
                     (StringLiteral__0___,(Object *)arg0,(MethodInfo *)0x0);
  return pSVar1;
}


/* ProjectMemberEarningsReport() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
     ProjectMemberEarningsReport::ProjectMemberEarningsReport__ctor
               (ProjectMemberEarningsReport *this,MethodInfo *method)

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
  return;
}


/* ProjectMemberEarningsReport(EarningsReport) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
     ProjectMemberEarningsReport::ProjectMemberEarningsReport__ctor_1
               (ProjectMemberEarningsReport *this,EarningsReport *earningsReport,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MV__WorldObject__GamePassSystem__GamePassEarnings__EarningsReport;
  this_00 = (EarningsReport *)func_?();
  EarningsReport::EarningsReport__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).earningsReport = this_00;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).earningsReport = earningsReport;
  return;
}

