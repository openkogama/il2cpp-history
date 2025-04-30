
/* Void Awake() */

void Assembly-CSharp.dll::VehicleBlinker::VehicleBlinker_Awake
               (VehicleBlinker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?();
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Dictionary__)
  ;
  uVar1 = (this->fields).blinkDamageColor.r;
  uVar2 = (this->fields).blinkDamageColor.g;
  uVar3 = (this->fields).blinkDamageColor.b;
  color_01.b = (float)uVar3;
  color_01.g = (float)uVar2;
  color_01.r = (float)uVar1;
  fVar4 = (this->fields).blinkDamageColor.a;
  pMVar5 = (this->fields)._.blinkMaterial;
  pBVar6 = (Blinker *)func_?();
  color_01.a = fVar4;
  Blinker::Blinker__ctor(pBVar6,4.0,pMVar5,color_01,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,(Object *)pBVar6,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
              );
    pMVar5 = (this->fields)._.blinkMaterial;
    uVar7 = (this->fields).blinkHealingColor.r;
    uVar8 = (this->fields).blinkHealingColor.g;
    uVar9 = (this->fields).blinkHealingColor.b;
    color.b = (float)uVar9;
    color.g = (float)uVar8;
    color.r = (float)uVar7;
    fVar4 = (this->fields).blinkHealingColor.a;
    pBVar6 = (Blinker *)func_?();
    color.a = fVar4;
    Blinker::Blinker__ctor(pBVar6,4.0,pMVar5,color,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,8,(Object *)pBVar6,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
              );
    uVar10 = this_00[1].fields._freeCount;
    uVar11 = this_00[1].fields._version;
    uVar12 = this_00[1].fields._comparer;
    color_00.b = (float)uVar12;
    color_00.g = (float)uVar11;
    color_00.r = (float)uVar10;
    pDVar13 = this_00[1].fields._keys;
    pMVar5 = (Material *)(this_00->fields)._count;
    pBVar6 = (Blinker *)func_?();
    color_00.a = (float)pDVar13;
    Blinker::Blinker__ctor(pBVar6,4.0,pMVar5,color_00,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,5,(Object *)pBVar6,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
              );
    (this_00->fields)._comparer = (IEqualityComparer_1_System_Int32Enum_ *)this_00;
    func_?();
    return;
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* VehicleBlinker() */

void Assembly-CSharp.dll::VehicleBlinker::VehicleBlinker__ctor
               (VehicleBlinker *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).blinkDamageColor.r = _UNK_?;
  (this->fields).blinkDamageColor.g = fVar3;
  (this->fields).blinkDamageColor.b = fVar2;
  (this->fields).blinkDamageColor.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).blinkHealingColor.r = _UNK_?;
  (this->fields).blinkHealingColor.g = fVar3;
  (this->fields).blinkHealingColor.b = fVar2;
  (this->fields).blinkHealingColor.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).blinkAboutToExpireColor.r = _UNK_?;
  (this->fields).blinkAboutToExpireColor.g = fVar3;
  (this->fields).blinkAboutToExpireColor.b = fVar2;
  (this->fields).blinkAboutToExpireColor.a = fVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

