
/* Color DefaultColor(String) */

Color * Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
        CustomGunData_DefaultColor
                  (Color *__return_storage_ptr__,String *colorKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  hashtable = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
              defaultItemValues;
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
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
CustomGunData_DefaultData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarItemType);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
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
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pDVar1 = CustomGunData_DefaultItemData((MethodInfo *)0x0);
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
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
CustomGunData_DefaultItemData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  dictionary = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields
               ->defaultItemValues;
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

Object * Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
         CustomGunData_DefaultValue(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object_
                   );
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  pOVar1 = mscorlib.dll::System::Collections::Generic::CollectionExtensions::
           CollectionExtensions_GetValueOrDefault_1
                     ((IReadOnlyDictionary_2_System_Object_System_Object_ *)
                      TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->
                      static_fields->defaultItemValues,(Object *)key,
                      System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::Object,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::Object,_System::Object>__System__Object_
                     );
  return pOVar1;
}


/* Vector3 DefaultVector3(String) */

Vector3 * Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
          CustomGunData_DefaultVector3
                    (Vector3 *__return_storage_ptr__,String *vectorKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  hashtable = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
              defaultItemValues;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pVVar1 = Extensions::Extensions_GetVector3(&VStack_2,hashtable,vectorKey,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* ValueTuple`2[MV.WorldObject.IntVector,MV.WorldObject.IntVector] GetEditPoints() */

ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
CustomGunData_GetEditPoints
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
            (&IStack_1,-9,-5,-10,(MethodInfo *)0x0);
  puStack_2 = (undefined *)0x0;
  iVar3 = 0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)&puStack_2,8,0xb,0x1e,(MethodInfo *)0x0);
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


/* Single MaxValue(String) */

float Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
      CustomGunData_MaxValue(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    func_?(&
                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                   );
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  hashtable = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
              maxValues;
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
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
CustomGunData_MinMaxValue(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    func_?(&MethodInfo__System__ValueTuple<float,_float>__ValueTuple_float__float_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    func_?(&
                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                   );
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  pDVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
           minValues;
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
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pDVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
           maxValues;
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

float Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
      CustomGunData_MinValue(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    func_?(&
                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                   );
    func_?(&TypeInfo__Extensions);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  hashtable = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
              minValues;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  fVar1 = Extensions::Extensions_GetValueOrDefault_4
                    (hashtable,key,0.0,
                     float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                    );
  return fVar1;
}


/* CustomGunData() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
     CustomGunData__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
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
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&::_0EAB6EC6C45C3A2EC1742291A27C6FB6908AFF29C125F56BF5965A533C912B69_Field);
    func_?(&::_29E8A442F33CAD2057FDF54C9813CABDA2DE1FD86ED9E64B53C4DE75741A912C_Field);
    func_?(&_96B0D9B648215260DFA72CA32240379ACDCD3D78B11C81DB373C18C4338E0CE5_Field);
    func_?(&A480DB650E94CE07AD8E7C752477FE0541ED8CB69D8D8FD0A6A0AFEF4F1F4B01_Field);
    func_?(&AB3776AA1ACE09050C5F3A211263CAB0D47E5204C66736DEBED306D523698D19_Field);
    func_?(&E2D30C16FEB57BB0C779D0E4B61C96D66CE9C5E7A066B1A39A2574D4FD13B2D0_Field);
    func_?(&StringLiteral_heavy_machine_gun);
    func_?(&StringLiteral_plasma_cannon);
    func_?(&StringLiteral_pistol);
    func_?(&StringLiteral_ChargeSoundEffect);
    func_?(&StringLiteral_none);
    func_?(&StringLiteral_Damage);
    func_?(&StringLiteral_flamethrower);
    func_?(&StringLiteral_MuzzleFlareColor);
    func_?(&StringLiteral_ProjectileTrailColor);
    func_?(&StringLiteral_slash);
    func_?(&StringLiteral_ChargeZoomEnabled);
    func_?(&StringLiteral_heavy_thud);
    func_?(&StringLiteral_MuzzleFlareSize);
    func_?(&StringLiteral_MuzzleFlareOnFire);
    func_?(&StringLiteral_mini_gun);
    func_?(&StringLiteral_electric);
    func_?(&StringLiteral_spell_wave);
    func_?(&StringLiteral_spell_flare);
    func_?(&StringLiteral_heavy_revolver);
    func_?(&StringLiteral_small_pistol);
    func_?(&StringLiteral_MuzzleDirection);
    func_?(&StringLiteral_sci_fi);
    func_?(&StringLiteral_ProjectileSize);
    func_?(&StringLiteral_spell_burst);
    func_?(&StringLiteral_SparksSize);
    func_?(&StringLiteral_ImpulseStrength);
    func_?(&StringLiteral_laser);
    func_?(&StringLiteral_Radius);
    func_?(&StringLiteral_ChargeSoundEffectVolume);
    func_?(&StringLiteral_boiling);
    func_?(&StringLiteral_microwave);
    func_?(&StringLiteral_ChargeParticlesEnabled);
    func_?(&StringLiteral_spell_rocket);
    func_?(&StringLiteral_burst_blaster);
    func_?(&StringLiteral_burst);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_silenced_smg);
    func_?(&StringLiteral_cannon);
    func_?(&StringLiteral_automatic_rifle);
    func_?(&StringLiteral_AttackAnimationTime);
    func_?(&StringLiteral_ricochet);
    func_?(&StringLiteral_ProjectilesPerShot);
    func_?(&StringLiteral_SmokeOnFire);
    func_?(&StringLiteral_MuzzlePosition);
    func_?(&StringLiteral_rail_gun);
    func_?(&StringLiteral_ChargeTime);
    func_?(&StringLiteral_silenced_pistol);
    func_?(&StringLiteral_machine_gun);
    func_?(&StringLiteral_MovementSpeedWhileHeld);
    func_?(&StringLiteral_bullet);
    func_?(&StringLiteral_bazooka);
    func_?(&StringLiteral_musket);
    func_?(&StringLiteral_pop);
    func_?(&StringLiteral_arrow);
    func_?(&StringLiteral_FireMode);
    func_?(&StringLiteral_railgun);
    func_?(&StringLiteral_potato_cannon);
    func_?(&StringLiteral_AttackCooldown);
    func_?(&StringLiteral_spinning);
    func_?(&StringLiteral_smg);
    func_?(&StringLiteral_HitSoundEffect);
    func_?(&StringLiteral_ChargeZoomTime);
    func_?(&StringLiteral_semi_auto);
    func_?(&StringLiteral_oculus);
    func_?(&StringLiteral_light_bullet);
    func_?(&StringLiteral_FireSoundEffectVolume);
    func_?(&StringLiteral_screwdriver);
    func_?(&StringLiteral_light_smg);
    func_?(&StringLiteral_bonk);
    func_?(&StringLiteral_ChargeZoomAmmount);
    func_?(&StringLiteral_SparksColor);
    func_?(&StringLiteral_ThirdPersonCamera);
    func_?(&StringLiteral_heavy_automatic_rifle);
    func_?(&StringLiteral_SparksOnHit);
    func_?(&StringLiteral_heavy_smg);
    func_?(&StringLiteral_punch);
    func_?(&StringLiteral_laser_gun);
    func_?(&StringLiteral_shotgun);
    func_?(&StringLiteral_Gun);
    func_?(&StringLiteral_blaster);
    func_?(&StringLiteral_BurstCooldownBetweenShots);
    func_?(&StringLiteral_RecoilStrength);
    func_?(&StringLiteral_sniper);
    func_?(&StringLiteral_heavy_blaster);
    func_?(&StringLiteral_full_auto);
    func_?(&StringLiteral_magical);
    func_?(&StringLiteral_minigun);
    func_?(&StringLiteral_wind_up_toy);
    func_?(&StringLiteral_slap);
    func_?(&StringLiteral_MaxAmmo);
    func_?(&StringLiteral_ProjectileColor);
    func_?(&StringLiteral_ChargeParticlesSize);
    func_?(&StringLiteral_engine);
    func_?(&StringLiteral_metal_clash);
    func_?(&StringLiteral_small_smg);
    func_?(&StringLiteral_ChargeParticlesColor);
    func_?(&StringLiteral_revolver);
    func_?(&StringLiteral_HitSoundEffectVolume);
    func_?(&StringLiteral_woosh);
    func_?(&StringLiteral_ProjectileSpeed);
    func_?(&StringLiteral_ShotsPerBurst);
    func_?(&StringLiteral_FireSoundEffect);
    func_?(&StringLiteral_Range);
    func_?(&StringLiteral_ChargeEnabled);
    func_?(&StringLiteral_air_cannon);
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
               (Object *)StringLiteral_Gun,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_MaxAmmo,
               pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    puStack_3 = (undefined *)0x41700000;
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&puStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_Damage,
               pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_ImpulseStrength,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
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
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_Radius,
               pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_FireSoundEffect,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_FireSoundEffectVolume,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_HitSoundEffect,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_HitSoundEffectVolume,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    puStack_4 = (undefined *)0x41000000;
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_MovementSpeedWhileHeld,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    uStack_5 = 0;
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_FireMode,
               pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pAVar6 = (Array *)func_?();
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              (pAVar6,__96B0D9B648215260DFA72CA32240379ACDCD3D78B11C81DB373C18C4338E0CE5_Field,
               (MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
               (Object *)StringLiteral_MuzzlePosition,(Object *)pAVar6,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar2 = (Object *)func_?();
    if (pOVar2 != (Object *)0x0) {
      if (pOVar2[1].monitor < (MonitorData *)0x3) goto code_?;
      pOVar2[3].klass = (Object__Class *)0x3f800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_MuzzleDirection,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffffb);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_MuzzleFlareOnFire,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      puStack_7 = (undefined1 *)0x41200000;
      pOVar2 = (Object *)func_?(TypeInfo__System__Single,&puStack_7);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_MuzzleFlareSize,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pAVar6 = (Array *)func_?();
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
      RuntimeHelpers_InitializeArray_1
                (pAVar6,__0EAB6EC6C45C3A2EC1742291A27C6FB6908AFF29C125F56BF5965A533C912B69_Field,
                 (MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_MuzzleFlareColor,(Object *)pAVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ThirdPersonCamera,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_SmokeOnFire,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ShotsPerBurst,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_BurstCooldownBetweenShots,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ProjectilesPerShot,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeEnabled,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeTime,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeSoundEffect,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeSoundEffectVolume,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeParticlesEnabled,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeParticlesSize,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pAVar6 = (Array *)func_?();
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
      RuntimeHelpers_InitializeArray_1
                (pAVar6,_A480DB650E94CE07AD8E7C752477FE0541ED8CB69D8D8FD0A6A0AFEF4F1F4B01_Field,
                 (MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeParticlesColor,(Object *)pAVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeZoomEnabled,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeZoomAmmount,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ChargeZoomTime,pOVar2,
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
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ProjectileSpeed,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ProjectileSize,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pAVar6 = (Array *)func_?();
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
      RuntimeHelpers_InitializeArray_1
                (pAVar6,__29E8A442F33CAD2057FDF54C9813CABDA2DE1FD86ED9E64B53C4DE75741A912C_Field,
                 (MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ProjectileColor,(Object *)pAVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pAVar6 = (Array *)func_?();
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
      RuntimeHelpers_InitializeArray_1
                (pAVar6,_E2D30C16FEB57BB0C779D0E4B61C96D66CE9C5E7A066B1A39A2574D4FD13B2D0_Field,
                 (MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_ProjectileTrailColor,(Object *)pAVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_SparksOnHit,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_SparksSize,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pAVar6 = (Array *)func_?();
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
      RuntimeHelpers_InitializeArray_1
                (pAVar6,_AB3776AA1ACE09050C5F3A211263CAB0D47E5204C66736DEBED306D523698D19_Field,
                 (MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_SparksColor,(Object *)pAVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
      defaultItemValues = (Dictionary_2_System_Object_System_Object_ *)pDVar1;
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
                   (Object *)StringLiteral_MaxAmmo,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffff80);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_Damage,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffff7c);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ImpulseStrength,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
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
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_Radius,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_FireSoundEffectVolume,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_HitSoundEffectVolume,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_MovementSpeedWhileHeld,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_MuzzleFlareSize,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ShotsPerBurst,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_BurstCooldownBetweenShots,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ProjectilesPerShot,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ChargeTime,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        puStack_7 = &stack0xffffff48;
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ChargeSoundEffectVolume,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ChargeParticlesSize,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ChargeZoomAmmount,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        puStack_3 = &stack0xffffff3c;
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ChargeZoomTime,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_Range
                   ,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ProjectileSpeed,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_ProjectileSize,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pOVar2 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_SparksSize,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
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
                     (Object *)StringLiteral_MaxAmmo,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar2 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffff24);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_Damage,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar2 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffff20);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ImpulseStrength,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
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
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_Radius,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar2 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_FireSoundEffectVolume,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar2 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_HitSoundEffectVolume,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar2 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_MovementSpeedWhileHeld,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar2 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_MuzzleFlareSize,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar2 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ShotsPerBurst,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar2 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_BurstCooldownBetweenShots,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar2 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ProjectilesPerShot,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar2 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ChargeTime,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          puStack_7 = &stack0xfffffeec;
          pOVar2 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ChargeSoundEffectVolume,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar2 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ChargeParticlesSize,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar2 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ChargeZoomAmmount,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          puStack_3 = &stack0xfffffee0;
          pOVar2 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ChargeZoomTime,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar2 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_Range,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar2 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ProjectileSpeed,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar2 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_ProjectileSize,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar2 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_SparksSize,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
          maxValues = (Dictionary_2_System_Object_System_Object_ *)pDVar1;
          func_?();
          pSVar8 = (String__Array *)func_?();
          pSVar9 = TM::TM__(StringLiteral_semi_auto,(MethodInfo *)0x0);
          if (pSVar8 != (String__Array *)0x0) {
            if (pSVar8->max_length == 0) goto code_?;
            pSVar8->vector[0] = pSVar9;
            func_?(pSVar8->vector,pSVar9);
            pSVar9 = TM::TM__(StringLiteral_full_auto,(MethodInfo *)0x0);
            if (pSVar8->max_length < 2) goto code_?;
            pSVar8->vector[1] = pSVar9;
            func_?(pSVar8->vector + 1,pSVar9);
            pSVar9 = TM::TM__(StringLiteral_burst,(MethodInfo *)0x0);
            if (pSVar8->max_length < 3) goto code_?;
            pSVar8->vector[2] = pSVar9;
            func_?(pSVar8->vector + 2,pSVar9);
            TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
            fireModes = pSVar8;
            func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->
                             static_fields->fireModes,pSVar8);
            pSVar8 = (String__Array *)func_?(TypeInfo__System__String,0x24);
            pSVar9 = TM::TM__(StringLiteral_none,(MethodInfo *)0x0);
            if (pSVar8 != (String__Array *)0x0) {
              if (pSVar8->max_length == 0) goto code_?;
              pSVar8->vector[0] = pSVar9;
              func_?(pSVar8->vector,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_pistol,(MethodInfo *)0x0);
              if (pSVar8->max_length < 2) goto code_?;
              pSVar8->vector[1] = pSVar9;
              func_?(pSVar8->vector + 1,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_small_pistol,(MethodInfo *)0x0);
              if (pSVar8->max_length < 3) goto code_?;
              pSVar8->vector[2] = pSVar9;
              func_?(pSVar8->vector + 2,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_silenced_pistol,(MethodInfo *)0x0);
              if (pSVar8->max_length < 4) goto code_?;
              pSVar8->vector[3] = pSVar9;
              func_?(pSVar8->vector + 3,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_revolver,(MethodInfo *)0x0);
              if (pSVar8->max_length < 5) goto code_?;
              pSVar8->vector[4] = pSVar9;
              func_?(pSVar8->vector + 4,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_heavy_revolver,(MethodInfo *)0x0);
              if (pSVar8->max_length < 6) goto code_?;
              pSVar8->vector[5] = pSVar9;
              func_?(pSVar8->vector + 5,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_automatic_rifle,(MethodInfo *)0x0);
              if (pSVar8->max_length < 7) goto code_?;
              pSVar8->vector[6] = pSVar9;
              func_?(pSVar8->vector + 6,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_heavy_automatic_rifle,(MethodInfo *)0x0);
              if (pSVar8->max_length < 8) goto code_?;
              pSVar8->vector[7] = pSVar9;
              func_?(pSVar8->vector + 7,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_machine_gun,(MethodInfo *)0x0);
              if (pSVar8->max_length < 9) goto code_?;
              pSVar8->vector[8] = pSVar9;
              func_?(pSVar8->vector + 8,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_heavy_machine_gun,(MethodInfo *)0x0);
              if (pSVar8->max_length < 10) goto code_?;
              pSVar8->vector[9] = pSVar9;
              func_?(pSVar8->vector + 9,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_minigun,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0xb) goto code_?;
              pSVar8->vector[10] = pSVar9;
              func_?(pSVar8->vector + 10,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_smg,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0xc) goto code_?;
              pSVar8->vector[0xb] = pSVar9;
              func_?(pSVar8->vector + 0xb,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_heavy_smg,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0xd) goto code_?;
              pSVar8->vector[0xc] = pSVar9;
              func_?(pSVar8->vector + 0xc,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_light_smg,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0xe) goto code_?;
              pSVar8->vector[0xd] = pSVar9;
              func_?(pSVar8->vector + 0xd,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_small_smg,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0xf) goto code_?;
              pSVar8->vector[0xe] = pSVar9;
              func_?(pSVar8->vector + 0xe,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_silenced_smg,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x10) goto code_?;
              pSVar8->vector[0xf] = pSVar9;
              func_?(pSVar8->vector + 0xf,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_bazooka,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x11) goto code_?;
              pSVar8->vector[0x10] = pSVar9;
              func_?(pSVar8->vector + 0x10,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_shotgun,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x12) goto code_?;
              pSVar8->vector[0x11] = pSVar9;
              func_?(pSVar8->vector + 0x11,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_rail_gun,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x13) goto code_?;
              pSVar8->vector[0x12] = pSVar9;
              func_?(pSVar8->vector + 0x12,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_flamethrower,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x14) goto code_?;
              pSVar8->vector[0x13] = pSVar9;
              func_?(pSVar8->vector + 0x13,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_sniper,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x15) goto code_?;
              pSVar8->vector[0x14] = pSVar9;
              func_?(pSVar8->vector + 0x14,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_laser_gun,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x16) goto code_?;
              pSVar8->vector[0x15] = pSVar9;
              func_?(pSVar8->vector + 0x15,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_blaster,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x17) goto code_?;
              pSVar8->vector[0x16] = pSVar9;
              func_?(pSVar8->vector + 0x16,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_burst_blaster,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x18) goto code_?;
              pSVar8->vector[0x17] = pSVar9;
              func_?(pSVar8->vector + 0x17,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_heavy_blaster,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x19) goto code_?;
              pSVar8->vector[0x18] = pSVar9;
              func_?(pSVar8->vector + 0x18,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_plasma_cannon,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x1a) goto code_?;
              pSVar8->vector[0x19] = pSVar9;
              func_?(pSVar8->vector + 0x19,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_musket,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x1b) goto code_?;
              pSVar8->vector[0x1a] = pSVar9;
              func_?(pSVar8->vector + 0x1a,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_cannon,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x1c) goto code_?;
              pSVar8->vector[0x1b] = pSVar9;
              func_?(pSVar8->vector + 0x1b,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_air_cannon,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x1d) goto code_?;
              pSVar8->vector[0x1c] = pSVar9;
              func_?(pSVar8->vector + 0x1c,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_potato_cannon,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x1e) goto code_?;
              pSVar8->vector[0x1d] = pSVar9;
              func_?(pSVar8->vector + 0x1d,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_spell_wave,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x1f) goto code_?;
              pSVar8->vector[0x1e] = pSVar9;
              func_?(pSVar8->vector + 0x1e,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_spell_flare,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x20) goto code_?;
              pSVar8->vector[0x1f] = pSVar9;
              func_?(pSVar8->vector + 0x1f,pSVar9);
              pSVar10 = (String__Array__Class *)TM::TM__(StringLiteral_spell_burst,(MethodInfo *)0x0)
              ;
              if (pSVar8->max_length < 0x21) goto code_?;
              pSVar8[1].klass = pSVar10;
              func_?(pSVar8 + 1,pSVar10);
              pSVar9 = TM::TM__(StringLiteral_spell_rocket,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x22) goto code_?;
              pSVar8[1].monitor = (MonitorData *)pSVar9;
              func_?(&pSVar8[1].monitor,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_woosh,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x23) goto code_?;
              pSVar8[1].bounds = (Il2CppArrayBounds *)pSVar9;
              func_?(&pSVar8[1].bounds,pSVar9);
              pSVar9 = TM::TM__(StringLiteral_spinning,(MethodInfo *)0x0);
              if (pSVar8->max_length < 0x24) goto code_?;
              pSVar8[1].max_length = (il2cpp_array_size_t)pSVar9;
              func_?(&pSVar8[1].max_length,pSVar9);
              TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields->
              fireSoundEffects = pSVar8;
              func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData
                               ->static_fields->fireSoundEffects,pSVar8);
              pSVar8 = (String__Array *)func_?(TypeInfo__System__String,0xe);
              pSVar9 = TM::TM__(StringLiteral_none,(MethodInfo *)0x0);
              if (pSVar8 != (String__Array *)0x0) {
                if (pSVar8->max_length == 0) goto code_?;
                pSVar8->vector[0] = pSVar9;
                func_?(pSVar8->vector,pSVar9);
                pSVar9 = TM::TM__(StringLiteral_bullet,(MethodInfo *)0x0);
                if (pSVar8->max_length < 2) goto code_?;
                pSVar8->vector[1] = pSVar9;
                func_?(pSVar8->vector + 1,pSVar9);
                pSVar9 = TM::TM__(StringLiteral_light_bullet,(MethodInfo *)0x0);
                if (pSVar8->max_length < 3) goto code_?;
                pSVar8->vector[2] = pSVar9;
                func_?(pSVar8->vector + 2,pSVar9);
                pSVar9 = TM::TM__(StringLiteral_ricochet,(MethodInfo *)0x0);
                if (pSVar8->max_length < 4) goto code_?;
                pSVar8->vector[3] = pSVar9;
                func_?(pSVar8->vector + 3,pSVar9);
                pSVar9 = TM::TM__(StringLiteral_metal_clash,(MethodInfo *)0x0);
                if (pSVar8->max_length < 5) goto code_?;
                pSVar8->vector[4] = pSVar9;
                func_?(pSVar8->vector + 4,pSVar9);
                pSVar9 = TM::TM__(StringLiteral_arrow,(MethodInfo *)0x0);
                if (pSVar8->max_length < 6) goto code_?;
                pSVar8->vector[5] = pSVar9;
                func_?(pSVar8->vector + 5,pSVar9);
                pSVar9 = TM::TM__(StringLiteral_slap,(MethodInfo *)0x0);
                if (pSVar8->max_length < 7) goto code_?;
                pSVar8->vector[6] = pSVar9;
                func_?(pSVar8->vector + 6,pSVar9);
                pSVar9 = TM::TM__(StringLiteral_bonk,(MethodInfo *)0x0);
                if (pSVar8->max_length < 8) goto code_?;
                pSVar8->vector[7] = pSVar9;
                func_?(pSVar8->vector + 7,pSVar9);
                pSVar9 = TM::TM__(StringLiteral_punch,(MethodInfo *)0x0);
                if (pSVar8->max_length < 9) goto code_?;
                pSVar8->vector[8] = pSVar9;
                func_?(pSVar8->vector + 8,pSVar9);
                pSVar9 = TM::TM__(StringLiteral_heavy_thud,(MethodInfo *)0x0);
                if (pSVar8->max_length < 10) goto code_?;
                pSVar8->vector[9] = pSVar9;
                func_?(pSVar8->vector + 9,pSVar9);
                pSVar9 = TM::TM__(StringLiteral_explosion,(MethodInfo *)0x0);
                if (pSVar8->max_length < 0xb) goto code_?;
                pSVar8->vector[10] = pSVar9;
                func_?(pSVar8->vector + 10,pSVar9);
                pSVar9 = TM::TM__(StringLiteral_pop,(MethodInfo *)0x0);
                if (pSVar8->max_length < 0xc) goto code_?;
                pSVar8->vector[0xb] = pSVar9;
                func_?(pSVar8->vector + 0xb,pSVar9);
                pSVar9 = TM::TM__(StringLiteral_laser,(MethodInfo *)0x0);
                if (pSVar8->max_length < 0xd) goto code_?;
                pSVar8->vector[0xc] = pSVar9;
                func_?(pSVar8->vector + 0xc,pSVar9);
                pSVar9 = TM::TM__(StringLiteral_slash,(MethodInfo *)0x0);
                if (pSVar8->max_length < 0xe) goto code_?;
                pSVar8->vector[0xd] = pSVar9;
                func_?(pSVar8->vector + 0xd,pSVar9);
                TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields
                ->hitSoundEffects = pSVar8;
                func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData
                                 ->static_fields->hitSoundEffects,pSVar8);
                pSVar8 = (String__Array *)func_?(TypeInfo__System__String,0xc);
                pSVar9 = TM::TM__(StringLiteral_none,(MethodInfo *)0x0);
                if (pSVar8 != (String__Array *)0x0) {
                  if (pSVar8->max_length != 0) {
                    pSVar8->vector[0] = pSVar9;
                    func_?(pSVar8->vector,pSVar9);
                    pSVar9 = TM::TM__(StringLiteral_mini_gun,(MethodInfo *)0x0);
                    if (1 < pSVar8->max_length) {
                      pSVar8->vector[1] = pSVar9;
                      func_?(pSVar8->vector + 1,pSVar9);
                      pSVar9 = TM::TM__(StringLiteral_electric,(MethodInfo *)0x0);
                      if (2 < pSVar8->max_length) {
                        pSVar8->vector[2] = pSVar9;
                        func_?(pSVar8->vector + 2,pSVar9);
                        pSVar9 = TM::TM__(StringLiteral_railgun,(MethodInfo *)0x0);
                        if (3 < pSVar8->max_length) {
                          pSVar8->vector[3] = pSVar9;
                          func_?(pSVar8->vector + 3,pSVar9);
                          pSVar9 = TM::TM__(StringLiteral_engine,(MethodInfo *)0x0);
                          if (4 < pSVar8->max_length) {
                            pSVar8->vector[4] = pSVar9;
                            func_?(pSVar8->vector + 4,pSVar9);
                            pSVar9 = TM::TM__(StringLiteral_wind_up_toy,(MethodInfo *)0x0);
                            if (5 < pSVar8->max_length) {
                              pSVar8->vector[5] = pSVar9;
                              func_?(pSVar8->vector + 5,pSVar9);
                              pSVar9 = TM::TM__(StringLiteral_oculus,(MethodInfo *)0x0);
                              if (6 < pSVar8->max_length) {
                                pSVar8->vector[6] = pSVar9;
                                func_?(pSVar8->vector + 6,pSVar9);
                                pSVar9 = TM::TM__(StringLiteral_boiling,(MethodInfo *)0x0);
                                if (7 < pSVar8->max_length) {
                                  pSVar8->vector[7] = pSVar9;
                                  func_?(pSVar8->vector + 7,pSVar9);
                                  pSVar9 = TM::TM__(StringLiteral_sci_fi,(MethodInfo *)0x0);
                                  if (8 < pSVar8->max_length) {
                                    pSVar8->vector[8] = pSVar9;
                                    func_?(pSVar8->vector + 8,pSVar9);
                                    pSVar9 = TM::TM__(StringLiteral_magical,(MethodInfo *)0x0);
                                    if (9 < pSVar8->max_length) {
                                      pSVar8->vector[9] = pSVar9;
                                      func_?(pSVar8->vector + 9,pSVar9);
                                      pSVar9 = TM::TM__(StringLiteral_microwave,(MethodInfo *)0x0);
                                      if (10 < pSVar8->max_length) {
                                        pSVar8->vector[10] = pSVar9;
                                        func_?(pSVar8->vector + 10,pSVar9);
                                        pSVar9 = TM::TM__(StringLiteral_screwdriver,
                                                          (MethodInfo *)0x0);
                                        if (0xb < pSVar8->max_length) {
                                          pSVar8->vector[0xb] = pSVar9;
                                          func_?(pSVar8->vector + 0xb,pSVar9);
                                          TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData
                                          ->static_fields->chargeSoundEffects = pSVar8;
                                          func_?(&
                                                  TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData
                                                  ->static_fields->chargeSoundEffects,pSVar8);
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
                      }
                    }
                  }
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

