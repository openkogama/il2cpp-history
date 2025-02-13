
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::
     CustomGunSettings::CustomGunSettings_Initialize
               (CustomGunSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                   );
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__System__Func<System::String,_System::ValueTuple<float,_float>_>);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    CustomItemAudioPlayer_MethodInfo__UnityEngine__Object__Instantiate<CustomItemAudioPlayer>_CustomItemAudioPlayer__UnityEngine__Transform_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_ChargeSoundEffect);
    func_?(&StringLiteral_Damage);
    func_?(&StringLiteral_MuzzleFlareColor);
    func_?(&StringLiteral_ProjectileTrailColor);
    func_?(&StringLiteral_ChargeZoomEnabled);
    func_?(&StringLiteral_MuzzleFlareSize);
    func_?(&StringLiteral_MuzzleFlareOnFire);
    func_?(&StringLiteral_ProjectileSize);
    func_?(&StringLiteral_SparksSize);
    func_?(&StringLiteral_ImpulseStrength);
    func_?(&StringLiteral_Radius);
    func_?(&StringLiteral_ChargeSoundEffectVolume);
    func_?(&StringLiteral_ChargeParticlesEnabled);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_AttackAnimationTime);
    func_?(&StringLiteral_ProjectilesPerShot);
    func_?(&StringLiteral_SmokeOnFire);
    func_?(&StringLiteral_ChargeTime);
    func_?(&StringLiteral_MovementSpeedWhileHeld);
    func_?(&StringLiteral_FireMode);
    func_?(&StringLiteral_AttackCooldown);
    func_?(&StringLiteral_HitSoundEffect);
    func_?(&StringLiteral_ChargeZoomTime);
    func_?(&StringLiteral_FireSoundEffectVolume);
    func_?(&StringLiteral_itemData);
    func_?(&StringLiteral_ChargeZoomAmmount);
    func_?(&StringLiteral_SparksColor);
    func_?(&StringLiteral_ThirdPersonCamera);
    func_?(&StringLiteral_SparksOnHit);
    func_?(&StringLiteral_BurstCooldownBetweenShots);
    func_?(&StringLiteral_RecoilStrength);
    func_?(&StringLiteral_MaxAmmo);
    func_?(&StringLiteral_ProjectileColor);
    func_?(&StringLiteral_ChargeParticlesSize);
    func_?(&StringLiteral_ChargeParticlesColor);
    func_?(&StringLiteral_HitSoundEffectVolume);
    func_?(&StringLiteral_ProjectileSpeed);
    func_?(&StringLiteral_ShotsPerBurst);
    func_?(&StringLiteral_FireSoundEffect);
    func_?(&StringLiteral_Range);
    func_?(&StringLiteral_ChargeEnabled);
    cRam_? = '\x01';
  }
  if (woID == -1) {
    if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    }
    pDVar1 = Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::CustomGunData_DefaultData
                       ((MethodInfo *)0x0);
    (this->fields)._.data = pDVar1;
    func_?(&(this->fields)._.data,pDVar1);
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._.data;
    if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar2,(Object *)StringLiteral_itemData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    unaff_EDI.m_Index =
         (int32_t)TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
    ;
    if (TVar3.m_Index == 0) {
      (this->fields)._.itemData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    else {
      if ((*(byte *)(*(int *)TVar3.m_Index + 0xb8) <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)TVar3.m_Index + 100) + -4 +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      (this->fields)._.itemData = (Dictionary_2_System_Object_System_Object_ *)TVar3.m_Index;
      if ((*(byte *)(*(int *)TVar3.m_Index + 0xb8) <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         (unaff_EDI.m_Index =
               (int32_t)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
         *(Dictionary_2_System_Object_System_Object___Class **)
          (*(int *)(*(int *)TVar3.m_Index + 100) + -4 +
          (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment * 4) !=
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
    }
code_?:
    func_?();
    pCVar4 = (this->fields).fireAudioPlayer;
    pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    if (pCVar5 == (Camera *)0x0) goto code_?;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pCVar5,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCVar4 = (CustomItemAudioPlayer *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                        ((Object *)pCVar4,pTVar6,
                         CustomItemAudioPlayer_MethodInfo__UnityEngine__Object__Instantiate<CustomItemAudioPlayer>_CustomItemAudioPlayer__UnityEngine__Transform_
                        );
    (this->fields).fireAudioPlayer = pCVar4;
    func_?();
    unaff_EDI.m_Index = (int32_t)(this->fields).chargeAudioPlayer;
    pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    if (pCVar5 == (Camera *)0x0) goto code_?;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pCVar5,(MethodInfo *)0x0);
    pCVar4 = (CustomItemAudioPlayer *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                        ((Object *)unaff_EDI.m_Index,pTVar6,
                         CustomItemAudioPlayer_MethodInfo__UnityEngine__Object__Instantiate<CustomItemAudioPlayer>_CustomItemAudioPlayer__UnityEngine__Transform_
                        );
    (this->fields).chargeAudioPlayer = pCVar4;
    func_?(&(this->fields).chargeAudioPlayer);
    unaff_EDI.m_Index = (int32_t)(this->fields).hitAudioPlayer;
    pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    if (pCVar5 == (Camera *)0x0) goto code_?;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pCVar5,(MethodInfo *)0x0);
    pCVar4 = (CustomItemAudioPlayer *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                        ((Object *)unaff_EDI.m_Index,pTVar6,
                         CustomItemAudioPlayer_MethodInfo__UnityEngine__Object__Instantiate<CustomItemAudioPlayer>_CustomItemAudioPlayer__UnityEngine__Transform_
                        );
    (this->fields).hitAudioPlayer = pCVar4;
    func_?(&(this->fields).hitAudioPlayer);
    unaff_EDI.m_Index = (int32_t)(this->fields).fireAudioPlayer;
    if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if ((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI.m_Index ==
        (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    CustomItemAudioPlayer::CustomItemAudioPlayer_Initialize
              ((CustomItemAudioPlayer *)unaff_EDI.m_Index,
               TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields
               ->fireSoundEffects,(MethodInfo *)0x0);
    pCVar4 = (this->fields).chargeAudioPlayer;
    if (pCVar4 == (CustomItemAudioPlayer *)0x0) goto code_?;
    CustomItemAudioPlayer::CustomItemAudioPlayer_Initialize
              (pCVar4,TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->
                       static_fields->chargeSoundEffects,(MethodInfo *)0x0);
    pCVar4 = (this->fields).hitAudioPlayer;
    if (pCVar4 == (CustomItemAudioPlayer *)0x0) goto code_?;
    CustomItemAudioPlayer::CustomItemAudioPlayer_Initialize
              (pCVar4,TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->
                       static_fields->hitSoundEffects,(MethodInfo *)0x0);
    this_00 = (this->fields)._.settingsBase;
    if (this_00 == (SettingsBase *)0x0) goto code_?;
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,(GameObject *)0x0,MVWorldObjectDocumentationType__Enum_CustomGun,
               (MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._.itemData;
    unaff_EDI.m_Index = (int32_t)(this->fields).nameInputField;
    if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar2,(Object *)StringLiteral_Name,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI.m_Index ==
        (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    value.m_Index = 0;
    if (TVar3.m_Index == 0) {
code_?:
      SettingsInputField::SettingsInputField_Initialize
                ((SettingsInputField *)unaff_EDI.m_Index,StringLiteral_Name,(String *)value.m_Index,
                 (MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).weaponDamageInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_Damage,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).maxAmmoInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_MaxAmmo,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).impulseStrengthInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_ImpulseStrength,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).recoilStrengthInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_RecoilStrength,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).attackAnimationInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_AttackAnimationTime,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).attackCooldownInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_AttackCooldown,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).spreadInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_Radius,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).fireSoundVolumeInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_FireSoundEffectVolume,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).hitSoundVolumeInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_HitSoundEffectVolume,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).movementSpeedInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_MovementSpeedWhileHeld,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).shotsPerBurstInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_ShotsPerBurst,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).burstCooldownBetweenShotsInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_BurstCooldownBetweenShots,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).muzzleFlareSizeInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_MuzzleFlareSize,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).projectilesPerShotInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_ProjectilesPerShot,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).chargeTimeInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_ChargeTime,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).chargeSoundVolumeInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_ChargeSoundEffectVolume,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).chargeZoomAmmountInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_ChargeZoomAmmount,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).chargeZoomTimeInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_ChargeZoomTime,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).chargeParticlesSizeInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_ChargeParticlesSize,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).rangeInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_Range,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).projectileSpeedInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_ProjectileSpeed,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      pSVar7 = (this->fields).projectileSizeInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      unaff_EDI.m_Index = 0;
      if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                (pSVar7,StringLiteral_ProjectileSize,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.itemData;
      unaff_EDI.m_Index = (int32_t)(this->fields).sparksSizeInputSlider;
      pFVar8 = (Func_2_Object_ValueTuple_2_Single_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,ValueTuple`2[Single,Single]]::
      Func_2_Object_ValueTuple_2_Single_Single___ctor
                (pFVar8,(Object *)0x0,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__MinMaxValue_System__String_
                 ,(MethodInfo *)0x0);
      if ((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI.m_Index ==
          (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                ((SettingsInputFieldSlider *)unaff_EDI.m_Index,StringLiteral_SparksSize,pDVar1,
                 (Func_2_String_ValueTuple_2_Single_Single_ *)pFVar8,(MethodInfo *)0x0);
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._.itemData;
      pSVar9 = (this->fields).fireModeDropdown;
      if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (pDVar2,(Object *)StringLiteral_FireMode,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      pSVar10 = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->static_fields
                ->fireModes;
      if (pSVar10 == (String__Array *)0x0) goto code_?;
      pLVar11 = Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
                SettingsUI_GetAcceptableIndexes
                          ((SettingsUI *)this,pSVar10->max_length,(MethodInfo *)0x0);
      if ((pSVar9 == (SettingsDropdown *)0x0) || (unaff_EDI.m_Index == 0)) goto code_?;
      if (*(Il2CppClass **)(*(int *)unaff_EDI.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar12 = (int32_t *)func_?();
        SettingsDropdown::SettingsDropdown_Initialize
                  (pSVar9,StringLiteral_FireMode,*piVar12,pSVar10,pLVar11,(MethodInfo *)0x0);
        pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields)._.itemData;
        pSVar9 = (this->fields).chargeSoundEffectDropdown;
        if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (pDVar2,(Object *)StringLiteral_ChargeSoundEffect,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        pSVar10 = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->
                  static_fields->chargeSoundEffects;
        if (pSVar10 == (String__Array *)0x0) goto code_?;
        pLVar11 = Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
                  SettingsUI_GetAcceptableIndexes
                            ((SettingsUI *)this,pSVar10->max_length,(MethodInfo *)0x0);
        if ((pSVar9 == (SettingsDropdown *)0x0) || (unaff_EDI.m_Index == 0)) goto code_?;
        if (*(Il2CppClass **)(*(int *)unaff_EDI.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar12 = (int32_t *)func_?();
        SettingsDropdown::SettingsDropdown_Initialize
                  (pSVar9,StringLiteral_ChargeSoundEffect,*piVar12,pSVar10,pLVar11,(MethodInfo *)0x0
                  );
        pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields)._.itemData;
        pSVar9 = (this->fields).fireSoundEffectDropdown;
        if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (pDVar2,(Object *)StringLiteral_FireSoundEffect,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        pSVar10 = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->
                  static_fields->fireSoundEffects;
        if (pSVar10 == (String__Array *)0x0) goto code_?;
        pLVar11 = Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
                  SettingsUI_GetAcceptableIndexes
                            ((SettingsUI *)this,pSVar10->max_length,(MethodInfo *)0x0);
        if ((pSVar9 == (SettingsDropdown *)0x0) || (unaff_EDI.m_Index == 0)) goto code_?;
        if (*(Il2CppClass **)(*(int *)unaff_EDI.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar12 = (int32_t *)func_?();
        SettingsDropdown::SettingsDropdown_Initialize
                  (pSVar9,StringLiteral_FireSoundEffect,*piVar12,pSVar10,pLVar11,(MethodInfo *)0x0);
        pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields)._.itemData;
        pSVar9 = (this->fields).hitSoundEffectDropdown;
        if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (pDVar2,(Object *)StringLiteral_HitSoundEffect,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        pSVar10 = TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->
                  static_fields->hitSoundEffects;
        if (pSVar10 == (String__Array *)0x0) goto code_?;
        pLVar11 = Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::
                  SettingsUI_GetAcceptableIndexes
                            ((SettingsUI *)this,pSVar10->max_length,(MethodInfo *)0x0);
        if ((pSVar9 == (SettingsDropdown *)0x0) || (unaff_EDI.m_Index == 0)) goto code_?;
        if (*(Il2CppClass **)(*(int *)unaff_EDI.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar12 = (int32_t *)func_?();
        SettingsDropdown::SettingsDropdown_Initialize
                  (pSVar9,StringLiteral_HitSoundEffect,*piVar12,pSVar10,pLVar11,(MethodInfo *)0x0);
        pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields)._.itemData;
        unaff_EDI.m_Index = (int32_t)(this->fields).thirdPersonCameraToggle;
        if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar2,(Object *)StringLiteral_ThirdPersonCamera,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI.m_Index ==
             (Dictionary_2_System_Object_System_Object___Class *)0x0) || (TVar3.m_Index == 0))
        goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
            (TypeInfo__System__Boolean->_0).element_class) {
          pbVar13 = (bool *)func_?();
          SettingsToggle::SettingsToggle_Initialize
                    ((SettingsToggle *)unaff_EDI.m_Index,StringLiteral_ThirdPersonCamera,*pbVar13,
                     (MethodInfo *)0x0);
          pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   (this->fields)._.itemData;
          unaff_EDI.m_Index = (int32_t)(this->fields).muzzleFlareOnFireToggle;
          if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
            TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               (pDVar2,(Object *)StringLiteral_MuzzleFlareOnFire,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI.m_Index !=
                 (Dictionary_2_System_Object_System_Object___Class *)0x0) && (TVar3.m_Index != 0))
            {
              if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                  (TypeInfo__System__Boolean->_0).element_class) goto code_?;
              pbVar13 = (bool *)func_?();
              SettingsToggle::SettingsToggle_Initialize
                        ((SettingsToggle *)unaff_EDI.m_Index,StringLiteral_MuzzleFlareOnFire,
                         *pbVar13,(MethodInfo *)0x0);
              pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       (this->fields)._.itemData;
              unaff_EDI.m_Index = (int32_t)(this->fields).smokeOnFireToggle;
              if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
                TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                   (pDVar2,(Object *)StringLiteral_SmokeOnFire,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if (((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI.m_Index !=
                     (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
                   (TVar3.m_Index != 0)) {
                  if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                      (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                  pbVar13 = (bool *)func_?();
                  SettingsToggle::SettingsToggle_Initialize
                            ((SettingsToggle *)unaff_EDI.m_Index,StringLiteral_SmokeOnFire,*pbVar13,
                             (MethodInfo *)0x0);
                  pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                           (this->fields)._.itemData;
                  unaff_EDI.m_Index = (int32_t)(this->fields).chargeEnabledToggle;
                  if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
                  {
                    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,UnityEngine::UIElements::TextureId]::
                             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                       (pDVar2,(Object *)StringLiteral_ChargeEnabled,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       );
                    if (((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI.m_Index !=
                         (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
                       (TVar3.m_Index != 0)) {
                      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                          (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                      pbVar13 = (bool *)func_?();
                      SettingsToggle::SettingsToggle_Initialize
                                ((SettingsToggle *)unaff_EDI.m_Index,StringLiteral_ChargeEnabled,
                                 *pbVar13,(MethodInfo *)0x0);
                      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               (this->fields)._.itemData;
                      unaff_EDI.m_Index = (int32_t)(this->fields).chargeParticlesToggle;
                      if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                    0x0) {
                        TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Object,UnityEngine::UIElements::TextureId]::
                                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                           (pDVar2,(Object *)StringLiteral_ChargeParticlesEnabled,
                                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                           );
                        if (((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI.m_Index
                             != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
                           (TVar3.m_Index != 0)) {
                          if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                              (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                          pbVar13 = (bool *)func_?();
                          SettingsToggle::SettingsToggle_Initialize
                                    ((SettingsToggle *)unaff_EDI.m_Index,
                                     StringLiteral_ChargeParticlesEnabled,*pbVar13,(MethodInfo *)0x0
                                    );
                          pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                   (this->fields)._.itemData;
                          unaff_EDI.m_Index = (int32_t)(this->fields).chargeZoomToggle;
                          if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                         *)0x0) {
                            TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                     ::Object,UnityEngine::UIElements::TextureId]::
                                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                               (pDVar2,(Object *)StringLiteral_ChargeZoomEnabled,
                                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                               );
                            if (((Dictionary_2_System_Object_System_Object___Class *)
                                 unaff_EDI.m_Index !=
                                 (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
                               (TVar3.m_Index != 0)) {
                              if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                                  (TypeInfo__System__Boolean->_0).element_class)
                              goto code_?;
                              pbVar13 = (bool *)func_?();
                              SettingsToggle::SettingsToggle_Initialize
                                        ((SettingsToggle *)unaff_EDI.m_Index,
                                         StringLiteral_ChargeZoomEnabled,*pbVar13,(MethodInfo *)0x0)
                              ;
                              pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                        *)(this->fields)._.itemData;
                              unaff_EDI.m_Index = (int32_t)(this->fields).sparksOnHitToggle;
                              if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                             *)0x0) {
                                TVar3 = mscorlib.dll::System::Collections::Generic::
                                         Dictionary`2[System::Object,UnityEngine::UIElements::
                                         TextureId]::
                                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                                   (pDVar2,(Object *)StringLiteral_SparksOnHit,
                                                                                                        
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                if (((Dictionary_2_System_Object_System_Object___Class *)
                                     unaff_EDI.m_Index !=
                                     (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
                                   (TVar3.m_Index != 0)) {
                                  if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                                      (TypeInfo__System__Boolean->_0).element_class)
                                  goto code_?;
                                  pbVar13 = (bool *)func_?();
                                  SettingsToggle::SettingsToggle_Initialize
                                            ((SettingsToggle *)unaff_EDI.m_Index,
                                             StringLiteral_SparksOnHit,*pbVar13,(MethodInfo *)0x0);
                                  pIVar14 = (this->fields).muzzleFlareColorImage;
                                  pDVar1 = (this->fields)._.itemData;
                                  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                                    func_?(TypeInfo__Extensions);
                                  }
                                  pCVar15 = Extensions::Extensions_GetColor
                                                      ((Color *)&stack0xffffffe8,pDVar1,
                                                       StringLiteral_MuzzleFlareColor,
                                                       (MethodInfo *)0x0);
                                  unaff_EDI.m_Index = 0;
                                  if (pIVar14 != (Image *)0x0) {
                                    (*(code *)(pIVar14->klass->vtable).set_color.method)
                                              (pIVar14,pCVar15->r,pCVar15->g,pCVar15->b,pCVar15->a);
                                    pIVar14 = (this->fields).chargeParticlesColorImage;
                                    pCVar15 = Extensions::Extensions_GetColor
                                                        ((Color *)&stack0xffffffe8,
                                                         (this->fields)._.itemData,
                                                         StringLiteral_ChargeParticlesColor,
                                                         (MethodInfo *)0x0);
                                    unaff_EDI.m_Index = 0;
                                    if (pIVar14 != (Image *)0x0) {
                                      (*(code *)(pIVar14->klass->vtable).set_color.method)
                                                (pIVar14,pCVar15->r,pCVar15->g,pCVar15->b,pCVar15->a)
                                      ;
                                      pIVar14 = (this->fields).projectileColorImage;
                                      pCVar15 = Extensions::Extensions_GetColor
                                                          ((Color *)&stack0xffffffe8,
                                                           (this->fields)._.itemData,
                                                           StringLiteral_ProjectileColor,
                                                           (MethodInfo *)0x0);
                                      unaff_EDI.m_Index = 0;
                                      if (pIVar14 != (Image *)0x0) {
                                        (*(code *)(pIVar14->klass->vtable).set_color.method)
                                                  (pIVar14,pCVar15->r,pCVar15->g,pCVar15->b,
                                                   pCVar15->a);
                                        pIVar14 = (this->fields).projectileTrailColorImage;
                                        pCVar15 = Extensions::Extensions_GetColor
                                                            ((Color *)&stack0xffffffe8,
                                                             (this->fields)._.itemData,
                                                             StringLiteral_ProjectileTrailColor,
                                                             (MethodInfo *)0x0);
                                        unaff_EDI.m_Index = 0;
                                        if (pIVar14 != (Image *)0x0) {
                                          (*(code *)(pIVar14->klass->vtable).set_color.method)
                                                    (pIVar14,pCVar15->r,pCVar15->g,pCVar15->b,
                                                     pCVar15->a);
                                          pIVar14 = (this->fields).sparksColorImage;
                                          pCVar15 = Extensions::Extensions_GetColor
                                                              ((Color *)&stack0xffffffe8,
                                                               (this->fields)._.itemData,
                                                               StringLiteral_SparksColor,
                                                               (MethodInfo *)0x0);
                                          unaff_EDI.m_Index = 0;
                                          if (pIVar14 != (Image *)0x0) {
                                            (*(code *)(pIVar14->klass->vtable).set_color.method)
                                                      (pIVar14,pCVar15->r,pCVar15->g,pCVar15->b,
                                                       pCVar15->a);
                                            CustomGunSettings_OnSettingsChangedStateUpdate
                                                      (this,(MethodInfo *)0x0);
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
                  }
                }
              }
            }
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
      value = TVar3;
    }
    if ((String *)value.m_Index != (String *)0x0) goto code_?;
  }
  else {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pMVar16 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_01,woID,(MethodInfo *)0x0);
      if (pMVar16 != (MVWorldObject *)0x0) {
        (this->fields)._.data = (pMVar16->fields).data;
        func_?(&(this->fields)._.data);
        pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                 (*(code *)(this->klass->vtable).ReadWorldObjectItemData.method)
                           (this,(this->fields)._.data,
                            (this->klass->vtable).OnSettingChanged_1.methodPtr);
        (this->fields)._.itemData = pDVar1;
        goto code_?;
      }
    }
code_?:
    TVar3.m_Index = func_?();
code_?:
    func_?(TVar3.m_Index);
code_?:
    func_?(unaff_EDI.m_Index);
    TVar3.m_Index = extraout_ECX;
  }
  func_?(TVar3.m_Index);
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnChargeSettingsClose() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::
     CustomGunSettings::CustomGunSettings_OnChargeSettingsClose
               (CustomGunSettings *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._.content;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).chargeSettingsContent;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_00 = (this->fields)._.canvas;
      value = (Vector2)(*(code *)(this->klass->vtable).get_NormalEditingCanvasSize.method)
                                 (this,(this->klass->vtable).get_ColorEditingCanvasSize.methodPtr);
      if (this_00 != (RectTransform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                  (this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnChargeSettingsOpen() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::
     CustomGunSettings::CustomGunSettings_OnChargeSettingsOpen
               (CustomGunSettings *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._.content;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).chargeSettingsContent;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      this_00 = (this->fields)._.canvas;
      if (this_00 != (RectTransform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                  (this_00,(Vector2)0x447f000044d5c000,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnClickPreviewSound(String, Int32) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::
     CustomGunSettings::CustomGunSettings_OnClickPreviewSound
               (CustomGunSettings *this,String *soundCategory,int32_t index,MethodInfo *method)

{
  pCVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_ChargeSoundEffect);
    func_?(&StringLiteral_HitSoundEffect);
    func_?(&StringLiteral_HitSound);
    func_?(&StringLiteral_FireSound);
    func_?(&StringLiteral_ChargeSound);
    func_?(&StringLiteral_FireSoundEffect);
    cRam_? = '\x01';
  }
  if (index == -1) {
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (soundCategory,StringLiteral_FireSound,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (soundCategory,StringLiteral_ChargeSound,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        this = (CustomGunSettings *)0x0;
        unaff_retaddr = StringLiteral_HitSound;
        bVar2 = mscorlib.dll::System::String::String_op_Equality
                          (soundCategory,StringLiteral_HitSound,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          index = 0;
          goto code_?;
        }
        this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  (pCVar1->fields)._.itemData;
        goto joined_?;
      }
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                (this->fields)._.itemData;
      if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        this = (CustomGunSettings *)
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
        ;
        unaff_retaddr = StringLiteral_ChargeSoundEffect;
        goto code_?;
      }
    }
    else {
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                (this->fields)._.itemData;
joined_?:
      if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
        TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_00,(Object *)unaff_retaddr,(MethodInfo *)this);
        if (TVar3.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          piVar4 = (int32_t *)func_?();
          index = *piVar4;
          goto code_?;
        }
      }
    }
  }
  else {
code_?:
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (soundCategory,StringLiteral_FireSound,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (soundCategory,StringLiteral_ChargeSound,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        bVar2 = mscorlib.dll::System::String::String_op_Equality
                          (soundCategory,StringLiteral_HitSound,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          return;
        }
        pCVar5 = (pCVar1->fields).hitAudioPlayer;
code_?:
        if (pCVar5 != (CustomItemAudioPlayer *)0x0) {
          CustomItemAudioPlayer::CustomItemAudioPlayer_PlayClip
                    (pCVar5,index,1,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pCVar5 = (pCVar1->fields).chargeAudioPlayer;
        if (pCVar5 != (CustomItemAudioPlayer *)0x0) {
          CustomItemAudioPlayer::CustomItemAudioPlayer_PlayClipFraction
                    (pCVar5,index,0.75,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pCVar5 = (pCVar1->fields).fireAudioPlayer;
      if (pCVar5 != (CustomItemAudioPlayer *)0x0) {
        bVar2 = CustomItemAudioPlayer::CustomItemAudioPlayer_IsClipLooped
                          (pCVar5,index,(MethodInfo *)0x0);
        pCVar5 = (pCVar1->fields).fireAudioPlayer;
        if (bVar2 == 0) goto code_?;
        if (pCVar5 != (CustomItemAudioPlayer *)0x0) {
          CustomItemAudioPlayer::CustomItemAudioPlayer_PlayClipFraction
                    (pCVar5,index,0.75,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnColorEdited() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::
     CustomGunSettings::CustomGunSettings_OnColorEdited(CustomGunSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_MuzzleFlareColor);
    func_?(&StringLiteral_ProjectileTrailColor);
    func_?(&StringLiteral_itemData);
    func_?(&StringLiteral_SparksColor);
    func_?(&StringLiteral_ProjectileColor);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_ChargeParticlesColor);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._.editingColorKey;
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar1,StringLiteral_MuzzleFlareColor,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar1,StringLiteral_ChargeParticlesColor,(MethodInfo *)0x0);
    value.y = _UNK_?;
    value.x = _UNK_?;
    if (bVar2 == 0) {
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar1,StringLiteral_ProjectileColor,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        bVar2 = mscorlib.dll::System::String::String_op_Equality
                          (pSVar1,StringLiteral_ProjectileTrailColor,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          bVar2 = mscorlib.dll::System::String::String_op_Equality
                            (pSVar1,StringLiteral_SparksColor,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            func_?();
            this_02 = (NotImplementedException *)func_?();
            mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
                      (this_02,(MethodInfo *)0x0);
            func_?();
            func_?();
            goto code_?;
          }
          pIVar3 = (this->fields).sparksColorImage;
        }
        else {
          pIVar3 = (this->fields).projectileTrailColorImage;
        }
      }
      else {
        pIVar3 = (this->fields).projectileColorImage;
      }
      value.y = _UNK_?;
      value.x = _UNK_?;
      pGVar4 = (this->fields).projectileSettingsContent;
    }
    else {
      pIVar3 = (this->fields).chargeParticlesColorImage;
      pGVar4 = (this->fields).chargeSettingsContent;
    }
  }
  else {
    pIVar3 = (this->fields).muzzleFlareColorImage;
    value = (Vector2)(*(code *)(this->klass->vtable).get_NormalEditingCanvasSize.method)
                               (this,(this->klass->vtable).get_ColorEditingCanvasSize.methodPtr);
    pGVar4 = (this->fields)._.content;
  }
  pSVar5 = (this->fields)._.colorR;
  if (pSVar5 != (SettingsSlider *)0x0) {
    SettingsSlider::SettingsSlider_get_Value(pSVar5,(MethodInfo *)0x0);
    pSVar5 = (this->fields)._.colorG;
    if (pSVar5 != (SettingsSlider *)0x0) {
      fVar6 = SettingsSlider::SettingsSlider_get_Value(pSVar5,(MethodInfo *)0x0);
      pSVar5 = (this->fields)._.colorB;
      if (pSVar5 != (SettingsSlider *)0x0) {
        fVar7 = SettingsSlider::SettingsSlider_get_Value(pSVar5,(MethodInfo *)0x0);
        pSVar5 = (this->fields)._.colorA;
        if (((pSVar5 != (SettingsSlider *)0x0) &&
            (puVar8 = (undefined *)
                      SettingsSlider::SettingsSlider_get_Value(pSVar5,(MethodInfo *)0x0),
            pIVar3 != (Image *)0x0)) &&
           ((*(code *)(pIVar3->klass->vtable).set_color.method)(), pGVar4 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,1,(MethodInfo *)0x0);
          pGVar4 = (this->fields)._.colorPicker;
          if (pGVar4 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,0,(MethodInfo *)0x0);
            this_00 = (this->fields)._.canvas;
            if (this_00 != (RectTransform *)0x0) {
              uVar9 = 0;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                        (this_00,value,(MethodInfo *)0x0);
              hashtable = (this->fields)._.itemData;
              pSVar1 = (this->fields)._.editingColorKey;
              if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                puVar8 = &UNK_?;
                func_?(TypeInfo__Extensions);
              }
              color.g = fVar6;
              color.r = (float)uVar9;
              color.b = fVar7;
              color.a = (float)puVar8;
              Extensions::Extensions_SetColor(hashtable,pSVar1,color,(MethodInfo *)0x0);
              this_01 = (this->fields)._.settingsBase;
              if (this_01 != (SettingsBase *)0x0) {
                SettingsBase::SettingsBase_OnSettingChanged
                          (this_01,StringLiteral_itemData,(Object *)(this->fields)._.itemData,
                           (MethodInfo *)0x0);
                (this->fields)._.editingColorKey = ::StringLiteral__;
                func_?();
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnColorPressed(String) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::
     CustomGunSettings::CustomGunSettings_OnColorPressed
               (CustomGunSettings *this,String *colorKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_MuzzleFlareColor);
    func_?(&StringLiteral_ProjectileTrailColor);
    func_?(&StringLiteral_colorB);
    func_?(&StringLiteral_colorA);
    func_?(&StringLiteral_colorR);
    func_?(&StringLiteral_SparksColor);
    func_?(&StringLiteral_ProjectileColor);
    func_?(&StringLiteral_colorG);
    func_?(&StringLiteral_ChargeParticlesColor);
    cRam_? = '\x01';
  }
  hashtable = (this->fields)._.itemData;
  hashtable_00 = (Dictionary_2_System_Object_System_Object_ *)
                 (*(code *)(this->klass->vtable).get_DefaultItemData.method)
                           (this,(this->klass->vtable).set_DefaultItemData.methodPtr);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pCVar1 = Extensions::Extensions_GetColor
                     ((Color *)&stack0xffffffec,hashtable_00,colorKey,(MethodInfo *)0x0);
  pCVar1 = Extensions::Extensions_GetColorOrDefault
                     ((Color *)&stack0xffffffec,hashtable,colorKey,*pCVar1,(MethodInfo *)0x0);
  value = pCVar1->g;
  this_02 = (this->fields)._.colorR;
  if (this_02 != (SettingsSlider *)0x0) {
    SettingsSlider::SettingsSlider_Initialize
              (this_02,StringLiteral_colorR,pCVar1->r,0.0,1.0,(MethodInfo *)0x0);
    pSVar2 = (this->fields)._.colorG;
    if (pSVar2 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_Initialize
                (pSVar2,StringLiteral_colorG,value,0.0,1.0,(MethodInfo *)0x0);
      pSVar2 = (this->fields)._.colorB;
      if (pSVar2 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar2,StringLiteral_colorB,4.0058702e-29,0.0,1.0,(MethodInfo *)0x0);
        pSVar2 = (this->fields)._.colorA;
        if (pSVar2 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar2,StringLiteral_colorA,(float)this_02,0.0,1.0,(MethodInfo *)0x0);
          pIVar3 = (this->fields)._.colorPickerPreview;
          if (pIVar3 != (Image *)0x0) {
            (*(code *)(pIVar3->klass->vtable).set_color.method)();
            key = Extensions::Extensions_AddSpacesToSentence(colorKey,(MethodInfo *)0x0);
            pTVar4 = (this->fields)._.colorText;
            TM::TM__(key,(MethodInfo *)0x0);
            if (pTVar4 != (Text *)0x0) {
              (*(code *)(pTVar4->klass->vtable).set_text.method)();
              (this->fields)._.editingColorKey = colorKey;
              func_?();
              bVar5 = mscorlib.dll::System::String::String_op_Equality
                                (colorKey,StringLiteral_MuzzleFlareColor,(MethodInfo *)0x0);
              if (bVar5 == 0) {
                bVar5 = mscorlib.dll::System::String::String_op_Equality
                                  (colorKey,StringLiteral_ChargeParticlesColor,(MethodInfo *)0x0);
                if (bVar5 == 0) {
                  bVar5 = mscorlib.dll::System::String::String_op_Equality
                                    (colorKey,StringLiteral_ProjectileColor,(MethodInfo *)0x0);
                  if (bVar5 == 0) {
                    bVar5 = mscorlib.dll::System::String::String_op_Equality
                                      (colorKey,StringLiteral_ProjectileTrailColor,(MethodInfo *)0x0
                                      );
                    if (bVar5 == 0) {
                      bVar5 = mscorlib.dll::System::String::String_op_Equality
                                        (colorKey,StringLiteral_SparksColor,(MethodInfo *)0x0);
                      if (bVar5 == 0) goto code_?;
                    }
                  }
                  pGVar6 = (this->fields).projectileSettingsContent;
                }
                else {
                  pGVar6 = (this->fields).chargeSettingsContent;
                }
              }
              else {
                pGVar6 = (this->fields)._.content;
              }
              if (pGVar6 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar6,0,(MethodInfo *)0x0);
                pGVar6 = (this->fields)._.colorPicker;
                if (pGVar6 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar6,1,(MethodInfo *)0x0);
                  this_00 = (this->fields)._.canvas;
                  value_00 = (Vector2)(*(code *)(this->klass->vtable).get_ColorEditingCanvasSize.
                                                method)();
                  if (this_00 != (RectTransform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                    RectTransform_set_sizeDelta(this_00,value_00,(MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  this_01 = (NotImplementedException *)func_?();
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_01,(MethodInfo *)0x0);
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::
     CustomGunSettings::CustomGunSettings_OnDestroy(CustomGunSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).fireAudioPlayer;
  if (pCVar1 != (CustomItemAudioPlayer *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pCVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pCVar1 = (this->fields).fireAudioPlayer;
      if (pCVar1 == (CustomItemAudioPlayer *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pCVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar2,(MethodInfo *)0x0);
    }
    pCVar1 = (this->fields).chargeAudioPlayer;
    if (pCVar1 != (CustomItemAudioPlayer *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pCVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pGVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pCVar1 = (this->fields).chargeAudioPlayer;
        if (pCVar1 == (CustomItemAudioPlayer *)0x0) goto code_?;
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pCVar1,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar2,(MethodInfo *)0x0);
      }
      pCVar1 = (this->fields).hitAudioPlayer;
      if (pCVar1 != (CustomItemAudioPlayer *)0x0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pCVar1,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pGVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pCVar1 = (this->fields).hitAudioPlayer;
          if (pCVar1 == (CustomItemAudioPlayer *)0x0) goto code_?;
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pCVar1,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar2,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnProjectileSettingsClose() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::
     CustomGunSettings::CustomGunSettings_OnProjectileSettingsClose
               (CustomGunSettings *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._.content;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).projectileSettingsContent;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_00 = (this->fields)._.canvas;
      value = (Vector2)(*(code *)(this->klass->vtable).get_NormalEditingCanvasSize.method)
                                 (this,(this->klass->vtable).get_ColorEditingCanvasSize.methodPtr);
      if (this_00 != (RectTransform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                  (this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnProjectileSettingsOpen() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::
     CustomGunSettings::CustomGunSettings_OnProjectileSettingsOpen
               (CustomGunSettings *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._.content;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).projectileSettingsContent;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      this_00 = (this->fields)._.canvas;
      if (this_00 != (RectTransform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                  (this_00,(Vector2)0x4489800044a28000,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::
     CustomGunSettings::CustomGunSettings_OnSettingChanged
               (CustomGunSettings *this,String *key,Object *value,MethodInfo *method)

{
  Assets::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::SettingsUI::SettingsUI_OnSettingChanged
            ((SettingsUI *)this,key,value,(MethodInfo *)0x0);
  CustomGunSettings_OnSettingsChangedStateUpdate(this,(MethodInfo *)0x0);
  return;
}


/* Void OnSettingsChangedStateUpdate() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::
     CustomGunSettings::CustomGunSettings_OnSettingsChangedStateUpdate
               (CustomGunSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__FireMode
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_ChargeSoundEffect);
    func_?(&StringLiteral_ChargeZoomEnabled);
    func_?(&StringLiteral_MuzzleFlareOnFire);
    func_?(&StringLiteral_ChargeParticlesEnabled);
    func_?(&StringLiteral_FireMode);
    func_?(&StringLiteral_u221E);
    func_?(&StringLiteral_HitSoundEffect);
    func_?(&StringLiteral_SparksOnHit);
    func_?(&StringLiteral_MaxAmmo);
    func_?(&StringLiteral_FireSoundEffect);
    func_?(&StringLiteral_ChargeEnabled);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._.itemData
  ;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (pDVar1,(Object *)StringLiteral_MaxAmmo,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar3 = CONCAT44(TypeInfo__System__Single,TVar2.m_Index);
    if (TVar2.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__System__Single->_0).element_class) goto code_?;
      pfVar4 = (float *)func_?(TVar2.m_Index);
      if (_UNK_? <= *pfVar4) {
        pSVar5 = (this->fields).maxAmmoInputSlider;
        if (pSVar5 == (SettingsInputFieldSlider *)0x0) goto code_?;
        SettingsInputFieldSlider::SettingsInputFieldSlider_SetText
                  (pSVar5,StringLiteral_u221E,(MethodInfo *)0x0);
      }
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._.itemData;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar1,(Object *)StringLiteral_FireSoundEffect,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar3 = CONCAT44(TypeInfo__System__Int32,TVar2.m_Index);
        if (TVar2.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          piVar6 = (int *)func_?(TVar2.m_Index);
          iVar7 = *piVar6;
          pSVar5 = (this->fields).fireSoundVolumeInputSlider;
          if (pSVar5 != (SettingsInputFieldSlider *)0x0) {
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pSVar5,(MethodInfo *)0x0);
            if (pTVar8 != (Transform *)0x0) {
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                                  (pTVar8,(MethodInfo *)0x0);
              if (pTVar8 != (Transform *)0x0) {
                pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pTVar8,(MethodInfo *)0x0);
                if (pGVar9 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar9,0 < iVar7,(MethodInfo *)0x0);
                  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                           (this->fields)._.itemData;
                  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
                  {
                    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,UnityEngine::UIElements::TextureId]::
                             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                       (pDVar1,(Object *)StringLiteral_FireMode,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       );
                    uVar3 = CONCAT44(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__FireMode
                                      ,TVar2.m_Index);
                    if (TVar2.m_Index != 0) {
                      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
                          (
                          TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData__FireMode
                          ->_0).element_class) goto code_?;
                      piVar6 = (int *)func_?(TVar2.m_Index);
                      iVar7 = *piVar6;
                      pSVar5 = (this->fields).shotsPerBurstInputSlider;
                      if (pSVar5 != (SettingsInputFieldSlider *)0x0) {
                        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform((Component *)pSVar5,(MethodInfo *)0x0);
                        if (pTVar8 != (Transform *)0x0) {
                          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_GetParent(pTVar8,(MethodInfo *)0x0);
                          if (pTVar8 != (Transform *)0x0) {
                            pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_gameObject
                                                ((Component *)pTVar8,(MethodInfo *)0x0);
                            if (pGVar9 != (GameObject *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar9,iVar7 == 2,(MethodInfo *)0x0);
                              pSVar5 = (this->fields).burstCooldownBetweenShotsInputSlider;
                              if (pSVar5 != (SettingsInputFieldSlider *)0x0) {
                                pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_transform
                                                    ((Component *)pSVar5,(MethodInfo *)0x0);
                                if (pTVar8 != (Transform *)0x0) {
                                  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_GetParent(pTVar8,(MethodInfo *)0x0);
                                  if (pTVar8 != (Transform *)0x0) {
                                    pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_get_gameObject
                                                        ((Component *)pTVar8,(MethodInfo *)0x0);
                                    if (pGVar9 != (GameObject *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_SetActive(pGVar9,iVar7 == 2,(MethodInfo *)0x0);
                                      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                                *)(this->fields)._.itemData;
                                      if (pDVar1 != (
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                                  *)0x0) {
                                        TVar2 = mscorlib.dll::System::Collections::Generic::
                                                 Dictionary`2[System::Object,UnityEngine::UIElements
                                                 ::TextureId]::
                                                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                                           (pDVar1,(Object *)
                                                                   StringLiteral_MuzzleFlareOnFire,
                                                                                                                        
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                        uVar3 = CONCAT44(TypeInfo__System__Boolean,TVar2.m_Index);
                                        if (TVar2.m_Index != 0) {
                                          if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
                                              (TypeInfo__System__Boolean->_0).element_class)
                                          goto code_?;
                                          pbVar10 = (bool *)func_?(TVar2.m_Index);
                                          bVar11 = *pbVar10;
                                          pSVar5 = (this->fields).muzzleFlareSizeInputSlider;
                                          if (pSVar5 != (SettingsInputFieldSlider *)0x0) {
                                            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_get_transform
                                                                ((Component *)pSVar5,
                                                                 (MethodInfo *)0x0);
                                            if (pTVar8 != (Transform *)0x0) {
                                              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        Transform::Transform_GetParent
                                                                  (pTVar8,(MethodInfo *)0x0);
                                              if (pTVar8 != (Transform *)0x0) {
                                                pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Component::Component_get_gameObject
                                                                    ((Component *)pTVar8,
                                                                     (MethodInfo *)0x0);
                                                if (pGVar9 != (GameObject *)0x0) {
                                                  UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_SetActive
                                                            (pGVar9,bVar11,(MethodInfo *)0x0);
                                                  pIVar12 = (this->fields).muzzleFlareColorImage;
                                                  if (pIVar12 != (Image *)0x0) {
                                                    pTVar8 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_transform
                                                                        ((Component *)pIVar12,
                                                                         (MethodInfo *)0x0);
                                                    if (pTVar8 != (Transform *)0x0) {
                                                      pTVar8 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Transform::
                                                                Transform_GetParent(pTVar8,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar8 != (Transform *)0x0) {
                                                    pTVar8 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_GetParent(pTVar8,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar8 != (Transform *)0x0) {
                                                    pGVar9 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pTVar8,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar9 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar9,bVar11,(MethodInfo *)0x0);
                                                      pDVar1 = (
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                                  *)(this->fields)._.itemData;
                                                  if (pDVar1 != (
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                                  *)0x0) {
                                                    TVar2 = mscorlib.dll::System::Collections::
                                                             Generic::Dictionary`2[System::
                                                             Object,UnityEngine::UIElements::
                                                             TextureId]::
                                                                                                                          
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                                            (pDVar1,(Object *)
                                                                    StringLiteral_ChargeEnabled,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                                  uVar3 = CONCAT44(TypeInfo__System__Boolean,
                                                                    TVar2.m_Index);
                                                  if (TVar2.m_Index != 0) {
                                                    if (*(Il2CppClass **)
                                                         (*(int *)TVar2.m_Index + 0x20) !=
                                                        (TypeInfo__System__Boolean->_0).
                                                        element_class) goto code_?;
                                                    pbVar13 = (byte *)func_?(TVar2.m_Index
                                                                                     );
                                                    bVar14 = *pbVar13;
                                                    pDVar1 = (
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                                  *)(this->fields)._.itemData;
                                                  if (pDVar1 != (
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                                  *)0x0) {
                                                    TVar2 = mscorlib.dll::System::Collections::
                                                             Generic::Dictionary`2[System::
                                                             Object,UnityEngine::UIElements::
                                                             TextureId]::
                                                                                                                          
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                                            (pDVar1,(Object *)
                                                                                                                                        
                                                  StringLiteral_ChargeParticlesEnabled,
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                                  uVar3 = CONCAT44(TypeInfo__System__Boolean,
                                                                    TVar2.m_Index);
                                                  if (TVar2.m_Index != 0) {
                                                    if (*(Il2CppClass **)
                                                         (*(int *)TVar2.m_Index + 0x20) !=
                                                        (TypeInfo__System__Boolean->_0).
                                                        element_class) goto code_?;
                                                    pbVar13 = (byte *)func_?(TVar2.m_Index
                                                                                     );
                                                    bVar15 = *pbVar13;
                                                    pDVar1 = (
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                                  *)(this->fields)._.itemData;
                                                  if (pDVar1 != (
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                                  *)0x0) {
                                                    TVar2 = mscorlib.dll::System::Collections::
                                                             Generic::Dictionary`2[System::
                                                             Object,UnityEngine::UIElements::
                                                             TextureId]::
                                                                                                                          
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                                            (pDVar1,(Object *)
                                                                    StringLiteral_ChargeZoomEnabled,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                                  uVar3 = CONCAT44(TypeInfo__System__Boolean,
                                                                    TVar2.m_Index);
                                                  if (TVar2.m_Index != 0) {
                                                    if (*(Il2CppClass **)
                                                         (*(int *)TVar2.m_Index + 0x20) !=
                                                        (TypeInfo__System__Boolean->_0).
                                                        element_class) goto code_?;
                                                    pbVar13 = (byte *)func_?(TVar2.m_Index
                                                                                     );
                                                    bVar16 = *pbVar13;
                                                    pDVar1 = (
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                                  *)(this->fields)._.itemData;
                                                  if (pDVar1 != (
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                                  *)0x0) {
                                                    TVar2 = mscorlib.dll::System::Collections::
                                                             Generic::Dictionary`2[System::
                                                             Object,UnityEngine::UIElements::
                                                             TextureId]::
                                                                                                                          
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                                            (pDVar1,(Object *)
                                                                    StringLiteral_ChargeSoundEffect,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                                  uVar3 = CONCAT44(TypeInfo__System__Int32,
                                                                    TVar2.m_Index);
                                                  if (TVar2.m_Index != 0) {
                                                    if (*(Il2CppClass **)
                                                         (*(int *)TVar2.m_Index + 0x20) !=
                                                        (TypeInfo__System__Int32->_0).element_class)
                                                    goto code_?;
                                                    piVar6 = (int *)func_?();
                                                    bVar11 = (bool)((uint)TVar2.m_Index >> 0x18);
                                                    iVar7 = *piVar6;
                                                    pSVar5 = (this->fields).chargeTimeInputSlider;
                                                    if (pSVar5 != (SettingsInputFieldSlider *)0x0) {
                                                      pTVar8 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_get_transform
                                                                          ((Component *)pSVar5,
                                                                           (MethodInfo *)0x0);
                                                      if (pTVar8 != (Transform *)0x0) {
                                                        pTVar8 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Transform::
                                                                  Transform_GetParent(pTVar8,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar8 != (Transform *)0x0) {
                                                    pGVar9 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pTVar8,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar9 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar9,bVar11,(MethodInfo *)0x0);
                                                      this_00 = (this->fields).
                                                                chargeSoundEffectDropdown;
                                                      if (this_00 != (SettingsDropdown *)0x0) {
                                                        pTVar8 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)this_00,
                                                                             (MethodInfo *)0x0);
                                                        if (pTVar8 != (Transform *)0x0) {
                                                          pTVar8 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_GetParent(pTVar8,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar8 != (Transform *)0x0) {
                                                    pGVar9 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pTVar8,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar9 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar9,bVar11,(MethodInfo *)0x0);
                                                      pSVar5 = (this->fields).
                                                               chargeSoundVolumeInputSlider;
                                                      if (pSVar5 != (SettingsInputFieldSlider *)0x0)
                                                      {
                                                        pTVar8 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pSVar5,
                                                                             (MethodInfo *)0x0);
                                                        if (pTVar8 != (Transform *)0x0) {
                                                          pTVar8 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_GetParent(pTVar8,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar8 != (Transform *)0x0) {
                                                    pGVar9 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pTVar8,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar9 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar9,0 < iVar7 & bVar14,
                                                                 (MethodInfo *)0x0);
                                                      pSVar17 = (this->fields).chargeParticlesToggle;
                                                      if (pSVar17 != (SettingsToggle *)0x0) {
                                                        pGVar9 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_gameObject
                                                                            ((Component *)pSVar17,
                                                                             (MethodInfo *)0x0);
                                                        if (pGVar9 != (GameObject *)0x0) {
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          GameObject::GameObject_SetActive
                                                                    (pGVar9,bVar11,
                                                                     (MethodInfo *)0x0);
                                                          pSVar5 = (this->fields).
                                                                   chargeParticlesSizeInputSlider;
                                                          if (pSVar5 != (SettingsInputFieldSlider *)
                                                                        0x0) {
                                                            pTVar8 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::Component::
                                                                      Component_get_transform
                                                                                ((Component *)pSVar5
                                                                                 ,(MethodInfo *)0x0)
                                                            ;
                                                            if (pTVar8 != (Transform *)0x0) {
                                                              pTVar8 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::Transform::
                                                                        Transform_GetParent(pTVar8,
                                                  (MethodInfo *)0x0);
                                                  if (pTVar8 != (Transform *)0x0) {
                                                    pGVar9 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pTVar8,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar9 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar9,bVar15 & bVar14,
                                                                 (MethodInfo *)0x0);
                                                      pIVar12 = (this->fields).
                                                               chargeParticlesColorImage;
                                                      if (pIVar12 != (Image *)0x0) {
                                                        pTVar8 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pIVar12,
                                                                             (MethodInfo *)0x0);
                                                        if (pTVar8 != (Transform *)0x0) {
                                                          pTVar8 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_GetParent(pTVar8,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar8 != (Transform *)0x0) {
                                                    pTVar8 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_GetParent(pTVar8,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar8 != (Transform *)0x0) {
                                                    pGVar9 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pTVar8,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar9 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar9,bVar15 & bVar14,
                                                                 (MethodInfo *)0x0);
                                                      pSVar17 = (this->fields).chargeZoomToggle;
                                                      if (pSVar17 != (SettingsToggle *)0x0) {
                                                        pGVar9 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_gameObject
                                                                            ((Component *)pSVar17,
                                                                             (MethodInfo *)0x0);
                                                        if (pGVar9 != (GameObject *)0x0) {
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          GameObject::GameObject_SetActive
                                                                    (pGVar9,bVar11,
                                                                     (MethodInfo *)0x0);
                                                          pSVar5 = (this->fields).
                                                                   chargeZoomAmmountInputSlider;
                                                          if (pSVar5 != (SettingsInputFieldSlider *)
                                                                        0x0) {
                                                            pTVar8 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::Component::
                                                                      Component_get_transform
                                                                                ((Component *)pSVar5
                                                                                 ,(MethodInfo *)0x0)
                                                            ;
                                                            if (pTVar8 != (Transform *)0x0) {
                                                              pTVar8 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::Transform::
                                                                        Transform_GetParent(pTVar8,
                                                  (MethodInfo *)0x0);
                                                  if (pTVar8 != (Transform *)0x0) {
                                                    pGVar9 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pTVar8,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar9 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar9,bVar16 & bVar14,
                                                                 (MethodInfo *)0x0);
                                                      pSVar5 = (this->fields).
                                                               chargeZoomTimeInputSlider;
                                                      if (pSVar5 != (SettingsInputFieldSlider *)0x0)
                                                      {
                                                        pTVar8 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pSVar5,
                                                                             (MethodInfo *)0x0);
                                                        if (pTVar8 != (Transform *)0x0) {
                                                          pTVar8 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_GetParent(pTVar8,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar8 != (Transform *)0x0) {
                                                    pGVar9 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pTVar8,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar9 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar9,bVar16 & bVar14,
                                                                 (MethodInfo *)0x0);
                                                      pDVar1 = (
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                                  *)(this->fields)._.itemData;
                                                  if (pDVar1 != (
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                                  *)0x0) {
                                                    TVar2 = mscorlib.dll::System::Collections::
                                                             Generic::Dictionary`2[System::
                                                             Object,UnityEngine::UIElements::
                                                             TextureId]::
                                                                                                                          
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                                            (pDVar1,(Object *)
                                                                    StringLiteral_HitSoundEffect,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                                  uVar3 = CONCAT44(TypeInfo__System__Int32,
                                                                    TVar2.m_Index);
                                                  if (TVar2.m_Index != 0) {
                                                    if (*(Il2CppClass **)
                                                         (*(int *)TVar2.m_Index + 0x20) !=
                                                        (TypeInfo__System__Int32->_0).element_class)
                                                    goto code_?;
                                                    piVar6 = (int *)func_?(TVar2.m_Index)
                                                    ;
                                                    iVar7 = *piVar6;
                                                    pSVar5 = (this->fields).
                                                             hitSoundVolumeInputSlider;
                                                    if (pSVar5 != (SettingsInputFieldSlider *)0x0) {
                                                      pTVar8 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_get_transform
                                                                          ((Component *)pSVar5,
                                                                           (MethodInfo *)0x0);
                                                      if (pTVar8 != (Transform *)0x0) {
                                                        pTVar8 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Transform::
                                                                  Transform_GetParent(pTVar8,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar8 != (Transform *)0x0) {
                                                    pGVar9 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pTVar8,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar9 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar9,0 < iVar7,(MethodInfo *)0x0
                                                                );
                                                      pDVar1 = (
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                                  *)(this->fields)._.itemData;
                                                  if (pDVar1 != (
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                                  *)0x0) {
                                                    TVar2 = mscorlib.dll::System::Collections::
                                                             Generic::Dictionary`2[System::
                                                             Object,UnityEngine::UIElements::
                                                             TextureId]::
                                                                                                                          
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                                            (pDVar1,(Object *)
                                                                    StringLiteral_SparksOnHit,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                                  uVar3 = CONCAT44(TypeInfo__System__Boolean,
                                                                    TVar2.m_Index);
                                                  if (TVar2.m_Index != 0) {
                                                    if (*(Il2CppClass **)
                                                         (*(int *)TVar2.m_Index + 0x20) !=
                                                        (TypeInfo__System__Boolean->_0).
                                                        element_class) goto code_?;
                                                    pbVar10 = (bool *)func_?(TVar2.m_Index
                                                                                     );
                                                    bVar11 = *pbVar10;
                                                    pSVar5 = (this->fields).sparksSizeInputSlider;
                                                    if (pSVar5 != (SettingsInputFieldSlider *)0x0) {
                                                      pTVar8 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_get_transform
                                                                          ((Component *)pSVar5,
                                                                           (MethodInfo *)0x0);
                                                      if (pTVar8 != (Transform *)0x0) {
                                                        pTVar8 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Transform::
                                                                  Transform_GetParent(pTVar8,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar8 != (Transform *)0x0) {
                                                    pGVar9 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pTVar8,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar9 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar9,bVar11,(MethodInfo *)0x0);
                                                      pIVar12 = (this->fields).sparksColorImage;
                                                      if (pIVar12 != (Image *)0x0) {
                                                        pTVar8 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pIVar12,
                                                                             (MethodInfo *)0x0);
                                                        if (pTVar8 != (Transform *)0x0) {
                                                          pTVar8 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_GetParent(pTVar8,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar8 != (Transform *)0x0) {
                                                    pTVar8 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_GetParent(pTVar8,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar8 != (Transform *)0x0) {
                                                    pGVar9 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pTVar8,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar9 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar9,bVar11,(MethodInfo *)0x0);
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
      }
    }
  }
code_?:
  uVar3 = func_?();
code_?:
  func_?(uVar3);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Dictionary`2[System.Object,System.Object]
   ReadWorldObjectItemData(Dictionary`2[System.Object,System.Object]) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::CustomGunSettings
::CustomGunSettings_ReadWorldObjectItemData
          (CustomGunSettings *this,Dictionary_2_System_Object_System_Object_ *woData,
          MethodInfo *method)

{
  puVar1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__get_Current__
                   );
    func_?(&
                    System__Object_MethodInfo__Extensions__GetValueOrDefault<System::Object>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Object_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__
                   );
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  pOStack_2 = (Object__Class *)0x0;
  this_00 = (RegexCharClass_SingleRange)
            (*(code *)(this->klass->vtable).get_DefaultItemData.method)
                      (this,(this->klass->vtable).set_DefaultItemData.methodPtr);
  if (woData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    method_00 = this_00;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)woData,
                       (Object *)StringLiteral_itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 == 0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (woData,(Object *)StringLiteral_itemData,(Object *)(this->fields)._.itemData,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pDVar4 = (this->fields)._.itemData;
      *unaff_FS_OFFSET = puVar1;
      return pDVar4;
    }
    hashtable = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)woData,
                           (Object *)StringLiteral_itemData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if ((hashtable.m_Index != 0) &&
       ((*(byte *)(*(int *)hashtable.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment ||
        (*(Dictionary_2_System_Object_System_Object___Class **)
          (*(int *)(*(int *)hashtable.m_Index + 100) + -4 +
          (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment * 4) !=
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
    goto code_?;
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData+Keys::
              CustomGunData_Keys_GetKeys((MethodInfo *)0x0);
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&pLStack_6,this_01,
                          MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__
                         );
      pOStack_2 = (Object__Class *)pLVar5->_list;
      key = pLVar5->_current;
      while( true ) {
        pLStack_6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     &UNK_?;
        bVar3 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&pOStack_2,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                          );
        if (bVar3 == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&pOStack_2,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                     ,(MethodInfo *)method_00);
          *unaff_FS_OFFSET = puVar1;
          return (Dictionary_2_System_Object_System_Object_ *)this_00;
        }
        if (method_00 == (RegexCharClass_SingleRange)0x0) break;
        RVar7 = key;
        defaultValue = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  method_00,(Object *)key,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_00 = key;
        value = Extensions::Extensions_GetValueOrDefault_3
                          ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                           (String *)key,(Object *)defaultValue.m_Index,
                           System__Object_MethodInfo__Extensions__GetValueOrDefault<System::Object>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Object_
                          );
        puVar1 = &UNK_?;
        method_00 = this_00;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)key,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        key = RVar7;
      }
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pDVar4 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar8)();
  return pDVar4;
}


/* CustomGunSettings() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::
     CustomGunSettings::CustomGunSettings__ctor(CustomGunSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (this->fields)._.editingColorKey = ::StringLiteral__;
  func_?(&(this->fields)._.editingColorKey,::StringLiteral__);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Vector2 get_ChargeSettingsCanvasSize() */

Vector2 Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::
        CustomGunSettings::CustomGunSettings_get_ChargeSettingsCanvasSize
                  (CustomGunSettings *this,MethodInfo *method)

{
  VVar1.y = 1020.0;
  VVar1.x = 1710.0;
  return VVar1;
}


/* Dictionary`2[System.Object,System.Object] get_DefaultItemData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::CustomGunSettings
::CustomGunSettings_get_DefaultItemData(CustomGunSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  pDVar1 = Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
           CustomGunData_DefaultItemData((MethodInfo *)0x0);
  return pDVar1;
}


/* Vector2 get_NormalEditingCanvasSize() */

Vector2 Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::
        CustomGunSettings::CustomGunSettings_get_NormalEditingCanvasSize
                  (CustomGunSettings *this,MethodInfo *method)

{
  VVar1.y = 1130.0;
  VVar1.x = 2000.0;
  return VVar1;
}


/* Vector2 get_ProjectileSettingsCanvasSize() */

Vector2 Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::CustomGuns::
        CustomGunSettings::CustomGunSettings_get_ProjectileSettingsCanvasSize
                  (CustomGunSettings *this,MethodInfo *method)

{
  VVar1.y = 1100.0;
  VVar1.x = 1300.0;
  return VVar1;
}

