
/* Color DefaultColor(String) */

Color * Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
        MeleeWeaponData_DefaultColor
                  (Color *__return_storage_ptr__,String *colorKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
  }
  hashtable = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->
              static_fields->defaultItemValues;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pCVar1 = Extensions::Extensions_GetColor(&CStack_2,hashtable,colorKey,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* Dictionary`2[System.Object,System.Object] DefaultData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
MeleeWeaponData_DefaultData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarItemType);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    func_?(&StringLiteral_itemData);
    func_?(&StringLiteral_itemType);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = MeleeWeaponData_DefaultItemData((MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_itemData,(Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    value_00 = (Object *)func_?(TypeInfo__MV__Common__AvatarItemType);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_itemType,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    return pDVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
  return pDVar1;
}


/* Dictionary`2[System.Object,System.Object] DefaultItemData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
MeleeWeaponData_DefaultItemData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
  }
  pDVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields
           ->defaultItemValues;
  this = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  if (this != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
    Regex+CachedCodeEntryKey,System::Object]::
    Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object___ctor_1
              (this,(IDictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
              );
    return (Dictionary_2_System_Object_System_Object_ *)this;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
  return pDVar1;
}


/* Object DefaultValue(String) */

Object * Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
         MeleeWeaponData_DefaultValue(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object_
                   );
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
  }
  pOVar1 = mscorlib.dll::System::Collections::Generic::CollectionExtensions::
           CollectionExtensions_GetValueOrDefault
                     ((IReadOnlyDictionary_2_System_Object_System_Object_ *)
                      TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->
                      static_fields->defaultItemValues,(Object *)key,
                      System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object_
                     );
  return pOVar1;
}


/* ValueTuple`2[MV.WorldObject.IntVector,MV.WorldObject.IntVector] GetEditPoints() */

ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
MeleeWeaponData_GetEditPoints
          (ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *__return_storage_ptr__,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__ValueTuple<MV::WorldObject::IntVector,_MV::WorldObject::IntVector>__ValueTuple_MV__WorldObject__IntVector__MV__WorldObject__IntVector_
                   );
    cRam_? = '\x01';
  }
  IStack_1.x = 0;
  IStack_1.y = 0;
  IStack_1.z = 0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            (&IStack_1,-4,-4,-2,(MethodInfo *)0x0);
  puStack_2 = (undefined *)0x0;
  iVar3 = 0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)&puStack_2,5,0x10,7,(MethodInfo *)0x0);
  puVar4 = puStack_2;
  (__return_storage_ptr__->Item1).x = 0;
  (__return_storage_ptr__->Item1).y = 0;
  (__return_storage_ptr__->Item1).z = 0;
  (__return_storage_ptr__->Item2).x = 0;
  (__return_storage_ptr__->Item2).y = 0;
  (__return_storage_ptr__->Item2).z = 0;
  item1.z = IStack_1.z;
  item1.x = IStack_1.x;
  item1.y = IStack_1.y;
  item2.z = iVar3;
  item2._0_4_ = puVar4;
  mscorlib.dll::System::ValueTuple`2[MV::WorldObject::IntVector,MV::WorldObject::IntVector]::
  ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector___ctor
            (__return_storage_ptr__,item1,item2,
             MethodInfo__System__ValueTuple<MV::WorldObject::IntVector,_MV::WorldObject::IntVector>__ValueTuple_MV__WorldObject__IntVector__MV__WorldObject__IntVector_
            );
  return __return_storage_ptr__;
}


/* Boolean IsLegacySword(Int32) */

bool Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
     MeleeWeaponData_IsLegacySword(int32_t itemId,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    if ((pMVar1->fields)._Region_k__BackingField == 4) {
      return itemId == 0x2875;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      if ((pMVar1->fields)._Region_k__BackingField != 2) {
        return itemId == 7;
      }
      return itemId == 0x1d74;
    }
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Single MaxValue(String) */

float Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
      MeleeWeaponData_MaxValue(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
  }
  hashtable = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->
              static_fields->maxValues;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  fVar1 = Extensions::Extensions_GetValueOrDefault_4
                    (hashtable,key,INFINITY,
                     float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                    );
  return fVar1;
}


/* ValueTuple`2[Single,Single] MinMaxValue(String) */

ValueTuple_2_Single_Single_
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
MeleeWeaponData_MinMaxValue(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    func_?(&MethodInfo__System__ValueTuple<float,_float>__ValueTuple_float__float_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
  }
  if (cRam_? == '\0') {
    func_?(&
                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
  }
  pDVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields
           ->minValues;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  Extensions::Extensions_GetValueOrDefault_4
            (pDVar1,key,0.0,
             float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
            );
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pDVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields
           ->maxValues;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  item1 = 
  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
  ;
  item2 = Extensions::Extensions_GetValueOrDefault_4
                    (pDVar1,key,INFINITY,
                     float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                    );
  VVar2.Item1 = 0.0;
  VVar2.Item2 = 0.0;
  mscorlib.dll::System::ValueTuple`2[Single,Single]::ValueTuple_2_Single_Single___ctor
            ((ValueTuple_2_Single_Single_ *)&stack0xfffffff0,(float)item1,item2,
             MethodInfo__System__ValueTuple<float,_float>__ValueTuple_float__float_);
  return VVar2;
}


/* Single MinValue(String) */

float Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
      MeleeWeaponData_MinValue(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
  }
  hashtable = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->
              static_fields->minValues;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  fVar1 = Extensions::Extensions_GetValueOrDefault_4
                    (hashtable,key,0.0,
                     float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                    );
  return fVar1;
}


/* MeleeWeaponData() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
     MeleeWeaponData__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&::_0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
    func_?(&_6D6ED29E7B71395FD414437CC70BAB636F696CFEACF98E9AAFA4492C3E3F8719_Field);
    func_?(&StringLiteral_none);
    func_?(&StringLiteral_Damage);
    func_?(&StringLiteral_slash);
    func_?(&StringLiteral_heavy_thud);
    func_?(&StringLiteral_ImpulseStrength);
    func_?(&StringLiteral_laser);
    func_?(&StringLiteral_Radius);
    func_?(&StringLiteral_TrailColor);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_laser_swing);
    func_?(&StringLiteral_AttackAnimationTime);
    func_?(&StringLiteral_AttackCooldown);
    func_?(&StringLiteral_HitSoundEffect);
    func_?(&StringLiteral_bonk);
    func_?(&StringLiteral_punch);
    func_?(&StringLiteral_shotgun);
    func_?(&StringLiteral_RecoilStrength);
    func_?(&StringLiteral_slap);
    func_?(&StringLiteral_Sword);
    func_?(&StringLiteral_sword_swing);
    func_?(&StringLiteral_metal_clash);
    func_?(&StringLiteral_woosh);
    func_?(&StringLiteral_FireSoundEffect);
    func_?(&StringLiteral_Range);
    func_?(&StringLiteral_HitEffectColor);
    func_?(&StringLiteral_explosion);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_Name,(Object *)StringLiteral_Sword,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_Damage,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_ImpulseStrength,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    puStack_4 = &stack0xfffffff0;
    pSStack_5 = TypeInfo__System__Single;
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_RecoilStrength,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_AttackAnimationTime,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_AttackCooldown,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_Range,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_Radius,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    puStack_6 = (undefined *)0x1;
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_FireSoundEffect,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    uStack_7 = 1;
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_HitSoundEffect,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pAVar8 = (Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              (pAVar8,__6D6ED29E7B71395FD414437CC70BAB636F696CFEACF98E9AAFA4492C3E3F8719_Field,
               (MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_TrailColor,(Object *)pAVar8,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pAVar8 = (Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              (pAVar8,__0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field,
               (MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_HitEffectColor,(Object *)pAVar8,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields->
    defaultItemValues = pDVar1;
    func_?();
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    puStack_4 = (undefined1 *)0x0;
    pOVar3 = (Object *)func_?(TypeInfo__System__Single,&puStack_4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_Damage,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSStack_5 = (Single__Class *)0x0;
    pOVar3 = (Object *)func_?(TypeInfo__System__Single,&pSStack_5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_ImpulseStrength,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffcc);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_RecoilStrength,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_AttackAnimationTime,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_AttackCooldown,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_Range,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields->
    minValues = pDVar1;
    func_?();
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffbc);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_Damage,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffb8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_ImpulseStrength,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffb4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_RecoilStrength,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_AttackAnimationTime,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_AttackCooldown,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar3 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)StringLiteral_Range,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields->
    maxValues = pDVar1;
    func_?();
    pSVar9 = (String__Array *)func_?();
    if (pSVar9 == (String__Array *)0x0) goto code_?;
    if ((StringLiteral_none != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral_none,(pSVar9->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    pSVar11 = StringLiteral_none;
    if (pSVar9->max_length == 0) goto code_?;
    pSVar9->vector[0] = StringLiteral_none;
    func_?(pSVar9->vector,pSVar11);
    if ((StringLiteral_sword_swing != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral_sword_swing,(pSVar9->klass->_0).element_class),
       iVar10 == 0)) goto code_?;
    pSVar11 = StringLiteral_sword_swing;
    if (pSVar9->max_length < 2) goto code_?;
    pSVar9->vector[1] = StringLiteral_sword_swing;
    func_?(pSVar9->vector + 1,pSVar11);
    if ((StringLiteral_laser_swing != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral_laser_swing,(pSVar9->klass->_0).element_class),
       iVar10 == 0)) goto code_?;
    pSVar11 = StringLiteral_laser_swing;
    if (pSVar9->max_length < 3) goto code_?;
    pSVar9->vector[2] = StringLiteral_laser_swing;
    func_?(pSVar9->vector + 2,pSVar11);
    if ((StringLiteral_woosh != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral_woosh,(pSVar9->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    pSVar11 = StringLiteral_woosh;
    if (pSVar9->max_length < 4) goto code_?;
    pSVar9->vector[3] = StringLiteral_woosh;
    func_?(pSVar9->vector + 3,pSVar11);
    if ((StringLiteral_shotgun != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral_shotgun,(pSVar9->klass->_0).element_class), iVar10 == 0
       )) goto code_?;
    pSVar11 = StringLiteral_shotgun;
    if (pSVar9->max_length < 5) goto code_?;
    pSVar9->vector[4] = StringLiteral_shotgun;
    func_?(pSVar9->vector + 4,pSVar11);
    TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields->
    fireSoundEffects = pSVar9;
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->
                     static_fields->fireSoundEffects,pSVar9);
    pSVar9 = (String__Array *)func_?(TypeInfo__System__String,9);
    if (pSVar9 == (String__Array *)0x0) goto code_?;
    if ((StringLiteral_none != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral_none,(pSVar9->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    pSVar11 = StringLiteral_none;
    if (pSVar9->max_length == 0) goto code_?;
    pSVar9->vector[0] = StringLiteral_none;
    func_?(pSVar9->vector,pSVar11);
    if ((StringLiteral_slash != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral_slash,(pSVar9->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    pSVar11 = StringLiteral_slash;
    if (pSVar9->max_length < 2) goto code_?;
    pSVar9->vector[1] = StringLiteral_slash;
    func_?(pSVar9->vector + 1,pSVar11);
    if ((StringLiteral_metal_clash != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral_metal_clash,(pSVar9->klass->_0).element_class),
       iVar10 == 0)) goto code_?;
    pSVar11 = StringLiteral_metal_clash;
    if (pSVar9->max_length < 3) goto code_?;
    pSVar9->vector[2] = StringLiteral_metal_clash;
    func_?(pSVar9->vector + 2,pSVar11);
    if ((StringLiteral_laser != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral_laser,(pSVar9->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    pSVar11 = StringLiteral_laser;
    if (pSVar9->max_length < 4) goto code_?;
    pSVar9->vector[3] = StringLiteral_laser;
    func_?(pSVar9->vector + 3,pSVar11);
    if ((StringLiteral_slap != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral_slap,(pSVar9->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    pSVar11 = StringLiteral_slap;
    if (pSVar9->max_length < 5) goto code_?;
    pSVar9->vector[4] = StringLiteral_slap;
    func_?(pSVar9->vector + 4,pSVar11);
    if ((StringLiteral_bonk != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral_bonk,(pSVar9->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    pSVar11 = StringLiteral_bonk;
    if (pSVar9->max_length < 6) goto code_?;
    pSVar9->vector[5] = StringLiteral_bonk;
    func_?(pSVar9->vector + 5,pSVar11);
    if ((StringLiteral_punch != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral_punch,(pSVar9->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    pSVar11 = StringLiteral_punch;
    if (pSVar9->max_length < 7) goto code_?;
    pSVar9->vector[6] = StringLiteral_punch;
    func_?(pSVar9->vector + 6,pSVar11);
    if ((StringLiteral_heavy_thud != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral_heavy_thud,(pSVar9->klass->_0).element_class),
       iVar10 == 0)) goto code_?;
    pSVar11 = StringLiteral_heavy_thud;
    if (pSVar9->max_length < 8) goto code_?;
    pSVar9->vector[7] = StringLiteral_heavy_thud;
    func_?(pSVar9->vector + 7,pSVar11);
    if ((StringLiteral_explosion == (String *)0x0) ||
       (iVar10 = func_?(StringLiteral_explosion,(pSVar9->klass->_0).element_class),
       iVar10 != 0)) {
      pSVar11 = StringLiteral_explosion;
      if (8 < pSVar9->max_length) {
        pSVar9->vector[8] = StringLiteral_explosion;
        func_?(pSVar9->vector + 8,pSVar11);
        TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields->
        hitSoundEffects = pSVar9;
        func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->
                         static_fields->hitSoundEffects,pSVar9);
        return;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0);
  func_?(uVar2);
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

