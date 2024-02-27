
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
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pDVar1 = MeleeWeaponData_DefaultItemData((MethodInfo *)0x0);
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_itemData,
               (Object *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    value = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_itemType,
               value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    return (Dictionary_2_System_Object_System_Object_ *)this;
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
  dictionary = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->
               static_fields->defaultItemValues;
  this = (Dictionary_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object___ctor_1
            (this,(IDictionary_2_System_Object_System_Object_ *)dictionary,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
            );
  return this;
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
           CollectionExtensions_GetValueOrDefault_1
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
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_Name,
               (Object *)StringLiteral_Sword,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_Damage,
               pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_ImpulseStrength,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    puStack_3 = &stack0xfffffff0;
    pSStack_4 = TypeInfo__System__Single;
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_RecoilStrength,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_AttackAnimationTime,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_AttackCooldown,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_Range,
               pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_Radius,
               pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    puStack_5 = (undefined *)0x1;
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_FireSoundEffect,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    uStack_6 = 1;
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_HitSoundEffect,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pAVar7 = (Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              (pAVar7,__6D6ED29E7B71395FD414437CC70BAB636F696CFEACF98E9AAFA4492C3E3F8719_Field,
               (MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_TrailColor,(Object *)pAVar7,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pAVar7 = (Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              (pAVar7,__0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field,
               (MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_HitEffectColor,(Object *)pAVar7,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields->
    defaultItemValues = (Dictionary_2_System_Object_System_Object_ *)pDVar1;
    func_?();
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    puStack_3 = (undefined1 *)0x0;
    pOVar2 = (Object *)func_?();
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_Damage,
                 pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pSStack_4 = (Single__Class *)0x0;
      pOVar2 = (Object *)func_?(TypeInfo__System__Single,&pSStack_4);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ImpulseStrength,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffcc);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_RecoilStrength,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      puStack_3 = &stack0xffffffc8;
      pSStack_4 = TypeInfo__System__Single;
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_AttackAnimationTime,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_AttackCooldown,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_Range,
                 pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields->
      minValues = (Dictionary_2_System_Object_System_Object_ *)pDVar1;
      func_?();
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      pOVar2 = (Object *)func_?();
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_Damage,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffb8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ImpulseStrength,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffb4);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_RecoilStrength,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        puStack_3 = &stack0xffffffb0;
        pSStack_4 = TypeInfo__System__Single;
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_AttackAnimationTime,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_AttackCooldown,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_Range
                   ,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields->
        maxValues = (Dictionary_2_System_Object_System_Object_ *)pDVar1;
        func_?();
        pSVar8 = (String__Array *)func_?();
        pSVar9 = StringLiteral_none;
        if (pSVar8 != (String__Array *)0x0) {
          if (pSVar8->max_length == 0) goto code_?;
          pSVar8->vector[0] = StringLiteral_none;
          func_?(pSVar8->vector,pSVar9);
          pSVar9 = StringLiteral_sword_swing;
          if (pSVar8->max_length < 2) goto code_?;
          pSVar8->vector[1] = StringLiteral_sword_swing;
          func_?(pSVar8->vector + 1,pSVar9);
          pSVar9 = StringLiteral_laser_swing;
          if (pSVar8->max_length < 3) goto code_?;
          pSVar8->vector[2] = StringLiteral_laser_swing;
          func_?(pSVar8->vector + 2,pSVar9);
          pSVar9 = StringLiteral_woosh;
          if (pSVar8->max_length < 4) goto code_?;
          pSVar8->vector[3] = StringLiteral_woosh;
          func_?(pSVar8->vector + 3,pSVar9);
          pSVar9 = StringLiteral_shotgun;
          if (pSVar8->max_length < 5) goto code_?;
          pSVar8->vector[4] = StringLiteral_shotgun;
          func_?(pSVar8->vector + 4,pSVar9);
          TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields->
          fireSoundEffects = pSVar8;
          func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData
                           ->static_fields->fireSoundEffects,pSVar8);
          pSVar8 = (String__Array *)func_?(TypeInfo__System__String,9);
          pSVar9 = StringLiteral_none;
          if (pSVar8 != (String__Array *)0x0) {
            if (pSVar8->max_length != 0) {
              pSVar8->vector[0] = StringLiteral_none;
              func_?(pSVar8->vector,pSVar9);
              pSVar9 = StringLiteral_slash;
              if (1 < pSVar8->max_length) {
                pSVar8->vector[1] = StringLiteral_slash;
                func_?(pSVar8->vector + 1,pSVar9);
                pSVar9 = StringLiteral_metal_clash;
                if (2 < pSVar8->max_length) {
                  pSVar8->vector[2] = StringLiteral_metal_clash;
                  func_?(pSVar8->vector + 2,pSVar9);
                  pSVar9 = StringLiteral_laser;
                  if (3 < pSVar8->max_length) {
                    pSVar8->vector[3] = StringLiteral_laser;
                    func_?(pSVar8->vector + 3,pSVar9);
                    pSVar9 = StringLiteral_slap;
                    if (4 < pSVar8->max_length) {
                      pSVar8->vector[4] = StringLiteral_slap;
                      func_?(pSVar8->vector + 4,pSVar9);
                      pSVar9 = StringLiteral_bonk;
                      if (5 < pSVar8->max_length) {
                        pSVar8->vector[5] = StringLiteral_bonk;
                        func_?(pSVar8->vector + 5,pSVar9);
                        pSVar9 = StringLiteral_punch;
                        if (6 < pSVar8->max_length) {
                          pSVar8->vector[6] = StringLiteral_punch;
                          func_?(pSVar8->vector + 6,pSVar9);
                          pSVar9 = StringLiteral_heavy_thud;
                          if (7 < pSVar8->max_length) {
                            pSVar8->vector[7] = StringLiteral_heavy_thud;
                            func_?(pSVar8->vector + 7,pSVar9);
                            pSVar9 = StringLiteral_explosion;
                            if (8 < pSVar8->max_length) {
                              pSVar8->vector[8] = StringLiteral_explosion;
                              func_?(pSVar8->vector + 8,pSVar9);
                              TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData
                              ->static_fields->hitSoundEffects = pSVar8;
                              func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData
                                               ->static_fields->hitSoundEffects,pSVar8);
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
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

