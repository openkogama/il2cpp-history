
/* InteractionData Create(Vector3) */

InteractionData *
Assembly-CSharp.dll::ImpulseHitPackage::ImpulseHitPackage_Create
          (InteractionData *__return_storage_ptr__,Vector3 impulse,MethodInfo *method)

{
  __return_storage_ptr__->damage = 0.0;
  (__return_storage_ptr__->impulse).x = 0.0;
  (__return_storage_ptr__->impulse).y = 0.0;
  (__return_storage_ptr__->impulse).z = 0.0;
  __return_storage_ptr__->interactionType = 0;
  __return_storage_ptr__->playerKilledByType = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = 0;
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_1
            (__return_storage_ptr__,InteractionPackageType__Enum_ImpulseGunHit,impulse,
             (MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::ImpulseHitPackage::ImpulseHitPackage_ParseAndHandlePackage
               (ImpulseHitPackage *this,MVWorldObjectClient *worldObjectClient,MVPlayer *shooter,
               InteractionData interactionStruct,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    float_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<int,_float>_System__Collections__Generic__IReadOnlyDictionary<int,_float>__int__float_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_float>__set_Item_int__float_
                   );
    func_?(&TypeInfo__MV__WorldObject__InteractionData);
    cRam_? = '\x01';
  }
  if (shooter != (MVPlayer *)0x0) {
    key = MVPlayer::MVPlayer_get_WoId(shooter,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::CollectionExtensions::
    CollectionExtensions_GetValueOrDefault_4
              ((IReadOnlyDictionary_2_System_Int32_System_Single_ *)(this->fields).lastShotTime,key,
               0.0,
               float_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<int,_float>_System__Collections__Generic__IReadOnlyDictionary<int,_float>__int__float_
              );
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedTime((MethodInfo *)0x0);
    if (_UNK_? < fVar1 - fStack_2) {
      if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__InteractionData);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      fVar1 = interactionStruct.impulse.x * interactionStruct.impulse.x +
              interactionStruct.impulse.y * interactionStruct.impulse.y +
              interactionStruct.impulse.z * interactionStruct.impulse.z;
      if (_UNK_? < fVar1) {
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        dVar3 = (double)fVar1;
        if (dVar3 < 0.0) {
          func_?();
        }
        else {
          dVar3 = SQRT(dVar3);
        }
        fVar1 = (float)dVar3;
        interactionStruct.impulse.z = (interactionStruct.impulse.z / fVar1) * _UNK_?;
        uVar4 = CONCAT44((interactionStruct.impulse.y / fVar1) * _UNK_?,
                         (interactionStruct.impulse.x / fVar1) * _UNK_?);
      }
      else {
        uVar4 = interactionStruct.impulse._0_8_;
      }
      impulse.z = interactionStruct.impulse.z;
      impulse.x = (float)(int)uVar4;
      impulse.y = (float)(int)((ulonglong)uVar4 >> 0x20);
      InteractionPackage::InteractionPackage_HandlePackage_3
                ((InteractionPackage *)this,worldObjectClient,shooter,impulse,
                 AvatarModifierPackageType__Enum_NoFriction,(MethodInfo *)0x0);
      this_00 = (this->fields).lastShotTime;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedTime((MethodInfo *)0x0)
      ;
      if (this_00 == (Dictionary_2_System_Int32_System_Single_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
      Dictionary_2_System_Int32_System_Single__set_Item
                (this_00,iStack_5,fVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_float>__set_Item_int__float_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* ImpulseHitPackage() */

void Assembly-CSharp.dll::ImpulseHitPackage::ImpulseHitPackage__ctor
               (ImpulseHitPackage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_float>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_float>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__)
  ;
  method_00 = (MethodInfo *)&this->fields;
  ((ImpulseHitPackage__Fields *)method_00)->lastShotTime =
       (Dictionary_2_System_Int32_System_Single_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

