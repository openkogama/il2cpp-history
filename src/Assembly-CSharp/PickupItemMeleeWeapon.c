
/* Void CheckHit(Boolean) */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_CheckHit
               (PickupItemMeleeWeapon *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
    radius = (pPVar1->fields)._.radius;
    pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
      this_00 = (this->fields)._.weaponHandle;
      if (this_00 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                  ((Vector3 *)&stack0xffffffdc,this_00,(MethodInfo *)0x0);
        pMVar2 = (this->fields)._._._.owner;
        if (pMVar2 != (MVPickupOwner *)0x0) {
          MVPickupOwner::MVPickupOwner_get_LookDirection
                    ((Vector3 *)&stack0xffffffc4,pMVar2,(MethodInfo *)0x0);
          pMVar2 = (this->fields)._._._.owner;
          if (pMVar2 != (MVPickupOwner *)0x0) {
            pVVar3 = MVPickupOwner::MVPickupOwner_get_LookDirection
                               ((Vector3 *)&stack0xffffffc4,pMVar2,(MethodInfo *)0x0);
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                               ((Vector3 *)&stack0xffffffc4,*pVVar3,(MethodInfo *)0x0);
            pMVar2 = (this->fields)._._._.owner;
            fVar4 = pVVar3->z;
            if (pMVar2 != (MVPickupOwner *)0x0) {
              pMVar5 = pMVar2->klass;
              pIVar6 = pMVar5[1]._0.image;
              ignoreWoIds = (HashSet_1_System_Int32_ *)
                            (*(code *)(pMVar5->vtable).get_IgnoreWOIDs.method)();
              distance = (float)pIVar6 + radius;
              uVar7 = 0;
              layerMask = (this->fields)._.hitLayerMask;
              ray.m_Origin.y = distance;
              ray.m_Origin.x = radius;
              ray.m_Origin.z = (float)ignoreWoIds;
              ray.m_Direction.x = (float)layerMask;
              ray.m_Direction.y = 0.0;
              ray.m_Direction.z = fVar4;
              voxelHits = CollisionDetection::CollisionDetection_MVSphereCastAll
                                    (ray,radius,distance,ignoreWoIds,layerMask,(MethodInfo *)0x0);
              if (voxelHits != (List_1_VoxelHit_ *)0x0) {
                if (0 < (voxelHits->fields)._size) {
                  (*(code *)(this->klass->vtable).OnHit.method)();
                  if (isLocal != 0) {
                    lineOfFire.m_Origin.y = distance;
                    lineOfFire.m_Origin.x = radius;
                    lineOfFire.m_Origin.z = (float)ignoreWoIds;
                    lineOfFire.m_Direction.x = (float)layerMask;
                    lineOfFire.m_Direction.y = (float)uVar7;
                    lineOfFire.m_Direction.z = fVar4;
                    PickupItemEditable::PickupItemEditable_OnLocalHit
                              ((PickupItemEditable *)this,voxelHits,lineOfFire,(MethodInfo *)0x0);
                  }
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* IEnumerator CheckHitCoroutine(Boolean) */

IEnumerator *
Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_CheckHitCoroutine
          (PickupItemMeleeWeapon *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupItemMeleeWeapon___CheckHitCoroutine_d__25);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PickupItemMeleeWeapon___CheckHitCoroutine_d__25;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  *(bool *)&value[2].monitor = isLocal;
  return (IEnumerator *)value;
}


/* PickupItemEditable+EditableItemConfiguration GetDefaultConfiguration() */

PickupItemEditable_EditableItemConfiguration *
Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_GetDefaultConfiguration
          (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_Damage);
    func_?(&StringLiteral_ImpulseStrength);
    func_?(&StringLiteral_Radius);
    func_?(&StringLiteral_TrailColor);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_AttackAnimationTime);
    func_?(&StringLiteral_AttackCooldown);
    func_?(&StringLiteral_HitSoundEffect);
    func_?(&StringLiteral_RecoilStrength);
    func_?(&StringLiteral_FireSoundEffect);
    func_?(&StringLiteral_Range);
    func_?(&StringLiteral_HitEffectColor);
    cRam_? = '\x01';
  }
  pPVar1 = (PickupItemEditable_EditableItemConfiguration *)
           func_?(TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration);
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (pPVar1->fields).name = ::StringLiteral__;
  method_00 = (MethodInfo *)&pPVar1->fields;
  func_?(method_00,::StringLiteral__);
  (pPVar1->fields).cubeModelId = -1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)pPVar1,ExceptionArgument__Enum_obj,method_00);
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar2 = (String *)
           Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
           MeleeWeaponData_DefaultValue(StringLiteral_Name,(MethodInfo *)0x0);
  if (pSVar2 == (String *)0x0) {
    (pPVar1->fields).name = (String *)0x0;
  }
  else {
    pSVar3 = (String *)0x0;
    if (pSVar2->klass == TypeInfo__System__String) {
      pSVar3 = pSVar2;
    }
    if (pSVar3 == (String *)0x0) goto code_?;
    (pPVar1->fields).name = pSVar3;
    pSVar3 = (String *)0x0;
    if (pSVar2->klass == TypeInfo__System__String) {
      pSVar3 = pSVar2;
    }
    if (pSVar3 == (String *)0x0) goto code_?;
  }
  func_?();
  pOVar4 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
           MeleeWeaponData_DefaultValue(StringLiteral_Damage,(MethodInfo *)0x0);
  if (pOVar4 != (Object *)0x0) {
    if ((pOVar4->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar5 = (float *)func_?();
    (pPVar1->fields).damage = *pfVar5;
    pOVar4 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
             MeleeWeaponData_DefaultValue(StringLiteral_ImpulseStrength,(MethodInfo *)0x0);
    if (pOVar4 != (Object *)0x0) {
      if ((pOVar4->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar5 = (float *)func_?();
      (pPVar1->fields).impulseStrength = *pfVar5;
      pOVar4 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
               MeleeWeaponData_DefaultValue(StringLiteral_RecoilStrength,(MethodInfo *)0x0);
      if (pOVar4 != (Object *)0x0) {
        if ((pOVar4->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar5 = (float *)func_?();
        (pPVar1->fields).recoilStrength = *pfVar5;
        pOVar4 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                 MeleeWeaponData_DefaultValue(StringLiteral_AttackAnimationTime,(MethodInfo *)0x0);
        if (pOVar4 != (Object *)0x0) {
          if ((pOVar4->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
          goto code_?;
          pfVar5 = (float *)func_?();
          (pPVar1->fields).fireAnimationTime = *pfVar5;
          pOVar4 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                   MeleeWeaponData_DefaultValue(StringLiteral_AttackCooldown,(MethodInfo *)0x0);
          if (pOVar4 != (Object *)0x0) {
            if ((pOVar4->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
            goto code_?;
            pfVar5 = (float *)func_?();
            (pPVar1->fields).attackCooldown = *pfVar5;
            pOVar4 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                     MeleeWeaponData_DefaultValue(StringLiteral_Range,(MethodInfo *)0x0);
            if (pOVar4 != (Object *)0x0) {
              if ((pOVar4->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
              goto code_?;
              pfVar5 = (float *)func_?();
              (pPVar1->fields).range = *pfVar5;
              pOVar4 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                       MeleeWeaponData_DefaultValue(StringLiteral_Radius,(MethodInfo *)0x0);
              if (pOVar4 != (Object *)0x0) {
                if ((pOVar4->klass->_0).element_class !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                pfVar5 = (float *)func_?();
                (pPVar1->fields).radius = *pfVar5;
                pOVar4 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                         MeleeWeaponData_DefaultValue
                                   (StringLiteral_FireSoundEffect,(MethodInfo *)0x0);
                if (pOVar4 != (Object *)0x0) {
                  if ((pOVar4->klass->_0).element_class !=
                      (TypeInfo__System__Int32->_0).element_class) goto code_?;
                  piVar6 = (int32_t *)func_?();
                  (pPVar1->fields).fireSoundEffect = *piVar6;
                  pOVar4 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                           MeleeWeaponData_DefaultValue
                                     (StringLiteral_HitSoundEffect,(MethodInfo *)0x0);
                  if (pOVar4 != (Object *)0x0) {
                    if ((pOVar4->klass->_0).element_class ==
                        (TypeInfo__System__Int32->_0).element_class) {
                      piVar6 = (int32_t *)func_?();
                      (pPVar1->fields).hitSoundEffect = *piVar6;
                      pCVar7 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                                MeleeWeaponData_DefaultColor
                                          ((Color *)&stack0xffffffec,StringLiteral_TrailColor,
                                           (MethodInfo *)0x0);
                      pMVar8 = (MonitorData *)pCVar7->g;
                      pSVar2 = (String *)pCVar7->b;
                      fVar9 = pCVar7->a;
                      pPVar1[1].klass =
                           (PickupItemEditable_EditableItemConfiguration__Class *)pCVar7->r;
                      pPVar1[1].monitor = pMVar8;
                      pPVar1[1].fields.name = pSVar2;
                      pPVar1[1].fields.cubeModelId = (int32_t)fVar9;
                      pCVar7 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                                MeleeWeaponData_DefaultColor
                                          ((Color *)&stack0xffffffec,StringLiteral_HitEffectColor,
                                           (MethodInfo *)0x0);
                      fVar9 = pCVar7->g;
                      fVar10 = pCVar7->b;
                      fVar11 = pCVar7->a;
                      pPVar1[1].fields.maxAmmo = (int32_t)pCVar7->r;
                      pPVar1[1].fields.damage = fVar9;
                      pPVar1[1].fields.impulseStrength = fVar10;
                      pPVar1[1].fields.recoilStrength = fVar11;
                      return pPVar1;
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
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  pPVar1 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar12)();
  return pPVar1;
}


/* Void InterruptFire() */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_InterruptFire
               (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if ((this->fields)._.animatorRoutine != (IEnumerator *)0x0) {
    Coroutines::Coroutines_Stop((this->fields)._.animatorRoutine,(MethodInfo *)0x0);
    (this->fields)._.animatorRoutine = (IEnumerator *)0x0;
    func_?(&(this->fields)._.animatorRoutine,0);
    PickupItemEditable::PickupItemEditable_DisableAnimation
              ((PickupItemEditable *)this,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).animationEventHandler;
  if (this_00 != (MeleeWeaponAnimationEventHandler *)0x0) {
    MeleeWeaponAnimationEventHandler::MeleeWeaponAnimationEventHandler_MeleeWeaponArcEnd
              (this_00,(MethodInfo *)0x0);
    this_01 = (this->fields)._.fireAudioSource;
    if (this_01 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                (this_01,(MethodInfo *)0x0);
      if ((this->fields).checkHitCoroutine != (IEnumerator *)0x0) {
        Coroutines::Coroutines_Stop((this->fields).checkHitCoroutine,(MethodInfo *)0x0);
        (this->fields).checkHitCoroutine = (IEnumerator *)0x0;
        func_?();
      }
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean IsSameItemData(Dictionary`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_IsSameItemData
               (PickupItemMeleeWeapon *this,Dictionary_2_System_Object_System_Object_ *itemData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                   );
    func_?(&
                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                   );
    func_?(&
                    System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_Damage);
    func_?(&StringLiteral_ImpulseStrength);
    func_?(&StringLiteral_Radius);
    func_?(&StringLiteral_TrailColor);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_AttackAnimationTime);
    func_?(&StringLiteral_AttackCooldown);
    func_?(&StringLiteral_HitSoundEffect);
    func_?(&StringLiteral_RecoilStrength);
    func_?(&StringLiteral_FireSoundEffect);
    func_?(&StringLiteral_Range);
    func_?(&StringLiteral_HitEffectColor);
    func_?(&StringLiteral_error);
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
    a = (pPVar1->fields)._.name;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    b = (String *)
        Extensions::Extensions_GetValueOrDefault_3
                  (itemData,StringLiteral_Name,(Object *)StringLiteral_error,
                   System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                  );
    bVar2 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
    CStack_3.a = (float)&UNK_?;
    pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
      fVar4 = (pPVar1->fields)._.damage;
      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar5 = Extensions::Extensions_GetValueOrDefault_4
                         (itemData,StringLiteral_Damage,-1.0,
                          float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                         );
      if (fVar4 != fVar5) {
        return 0;
      }
      pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
        fVar4 = (pPVar1->fields)._.impulseStrength;
        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Extensions);
        }
        fVar5 = Extensions::Extensions_GetValueOrDefault_4
                           (itemData,StringLiteral_ImpulseStrength,-1.0,
                            float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                           );
        if (fVar4 != fVar5) {
          return 0;
        }
        pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
          fVar4 = (pPVar1->fields)._.recoilStrength;
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          fVar5 = Extensions::Extensions_GetValueOrDefault_4
                             (itemData,StringLiteral_RecoilStrength,-1.0,
                              float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                             );
          if (fVar4 != fVar5) {
            return 0;
          }
          pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
            fVar4 = (pPVar1->fields)._.fireAnimationTime;
            if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Extensions);
            }
            fVar5 = Extensions::Extensions_GetValueOrDefault_4
                               (itemData,StringLiteral_AttackAnimationTime,-1.0,
                                float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                               );
            if (fVar4 != fVar5) {
              return 0;
            }
            pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
            if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
              fVar4 = (pPVar1->fields)._.attackCooldown;
              if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__Extensions);
              }
              fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                 (itemData,StringLiteral_AttackCooldown,-1.0,
                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                 );
              if (fVar4 != fVar5) {
                return 0;
              }
              pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
              if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                fVar4 = (pPVar1->fields)._.range;
                if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__Extensions);
                }
                fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                   (itemData,StringLiteral_Range,-1.0,
                                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                   );
                if (fVar4 != fVar5) {
                  return 0;
                }
                pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                  fVar4 = (pPVar1->fields)._.radius;
                  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__Extensions);
                  }
                  fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                     (itemData,StringLiteral_Radius,-1.0,
                                      float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                     );
                  if (fVar4 != fVar5) {
                    return 0;
                  }
                  pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                  if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                    IVar6 = (pPVar1->fields)._.fireSoundEffect;
                    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__Extensions);
                    }
                    IVar7 = Extensions::Extensions_GetValueOrDefault_2
                                      (itemData,StringLiteral_FireSoundEffect,0xffffffff,
                                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                      );
                    if (IVar6 != IVar7) {
                      return 0;
                    }
                    pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                    if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                      IVar6 = (pPVar1->fields)._.hitSoundEffect;
                      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__Extensions);
                      }
                      IVar7 = Extensions::Extensions_GetValueOrDefault_2
                                        (itemData,StringLiteral_HitSoundEffect,0xffffffff,
                                         int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                        );
                      if (IVar6 != IVar7) {
                        return 0;
                      }
                      pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                      if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                        fVar4 = (pPVar1->fields).trailColor.r;
                        fVar5 = (pPVar1->fields).trailColor.g;
                        fVar8 = (pPVar1->fields).trailColor.b;
                        fVar9 = (pPVar1->fields).trailColor.a;
                        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__Extensions);
                        }
                        defaultColor.g = (float)_UNK_?;
                        defaultColor.r = (float)_UNK_?;
                        defaultColor.b = (float)_UNK_?;
                        defaultColor.a = _UNK_?;
                        pCVar10 = Extensions::Extensions_GetColorOrDefault
                                           (&CStack_3,itemData,StringLiteral_TrailColor,
                                            defaultColor,(MethodInfo *)0x0);
                        fVar4 = fVar4 - pCVar10->r;
                        fVar5 = fVar5 - pCVar10->g;
                        fVar8 = fVar8 - pCVar10->b;
                        fVar9 = fVar9 - pCVar10->a;
                        if (_UNK_? <=
                            fVar4 * fVar4 + fVar5 * fVar5 + fVar8 * fVar8 + fVar9 * fVar9) {
                          return 0;
                        }
                        pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                        if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                          fVar4 = (pPVar1->fields).hitEffectColor.r;
                          fVar5 = (pPVar1->fields).hitEffectColor.g;
                          fVar8 = (pPVar1->fields).hitEffectColor.b;
                          fVar9 = (pPVar1->fields).hitEffectColor.a;
                          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__Extensions);
                          }
                          defaultColor_00.g = (float)_UNK_?;
                          defaultColor_00.r = (float)_UNK_?;
                          defaultColor_00.b = (float)_UNK_?;
                          defaultColor_00.a = _UNK_?;
                          pCVar10 = Extensions::Extensions_GetColorOrDefault
                                             (&CStack_3,itemData,StringLiteral_HitEffectColor,
                                              defaultColor_00,(MethodInfo *)0x0);
                          fVar4 = fVar4 - pCVar10->r;
                          fVar5 = fVar5 - pCVar10->g;
                          fVar8 = fVar8 - pCVar10->b;
                          fVar9 = fVar9 - pCVar10->a;
                          return fVar4 * fVar4 + fVar5 * fVar5 + fVar8 * fVar8 + fVar9 * fVar9 <
                                 _UNK_?;
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
  func_?();
  pcVar11 = (code *)swi(3);
  bVar2 = (*pcVar11)();
  return bVar2;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_OnFire
               (PickupItemMeleeWeapon *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._.fireAudioSource;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pAVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (this->fields)._.fireAudioSource;
    if (pAVar1 != (AudioSource *)0x0) {
      pAVar3 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                         (pAVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pAVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 == 0) goto code_?;
      pAVar1 = (this->fields)._.fireAudioSource;
      if ((pAVar1 != (AudioSource *)0x0) &&
         (pAVar3 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                             (pAVar1,(MethodInfo *)0x0), pAVar3 != (AudioClip *)0x0)) {
        this_01 = (PickupItemMeleeWeapon *)
                  UnityEngine.AudioModule.dll::UnityEngine::AudioClip::AudioClip_get_length
                            (pAVar3,(MethodInfo *)0x0);
        isLocal = 0;
        pPVar4 = PickupItemMeleeWeapon_get_Configuration(this_01,(MethodInfo *)0x0);
        if (pPVar4 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
          value_00 = (float)this_01 / (pPVar4->fields)._.fireAnimationTime;
          if (value_00 < 0.0) {
            value_00 = 0.0;
          }
          else if (_UNK_? < value_00) {
            value_00 = _UNK_?;
          }
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                    (pAVar1,value_00,(MethodInfo *)0x0);
          this_00 = (this->fields)._._._.muzzlePoint;
          if (this_00 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
            pAVar1 = (this->fields)._.fireAudioSource;
            (*(code *)(this->klass->vtable).get_FireSoundEffectName.method)();
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (pAVar1 != (AudioSource *)0x0) {
              pAVar3 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                                 (pAVar1,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                ((Object_1 *)pAVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar2 == 0) {
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                          (pAVar1,(MethodInfo *)0x0);
              }
              goto code_?;
            }
          }
        }
      }
    }
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
code_?:
  PickupItemEditable::PickupItemEditable_PlayAnimation((PickupItemEditable *)this,(MethodInfo *)0x0)
  ;
  if ((this->fields).checkHitCoroutine != (IEnumerator *)0x0) {
    Coroutines::Coroutines_Stop((this->fields).checkHitCoroutine,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PickupItemMeleeWeapon___CheckHitCoroutine_d__25;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?();
  *(bool *)&value[2].monitor = isLocal;
  (this->fields).checkHitCoroutine = (IEnumerator *)value;
  func_?();
  Coroutines::Coroutines_Start((this->fields).checkHitCoroutine,(MethodInfo *)0x0);
  (this->fields)._._.isFiring = 0;
  return;
}


/* Void OnHit(List`1[VoxelHit], Ray) */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_OnHit
               (PickupItemMeleeWeapon *this,List_1_VoxelHit_ *voxelHits,Ray lineOfFire,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__ParticleSystem__Burst);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Color>__Nullable_UnityEngine__Color_)
    ;
    cRam_? = '\x01';
  }
  if (voxelHits != (List_1_VoxelHit_ *)0x0) {
    pGVar1 = mscorlib.dll::System::Collections::Generic::
              List`1[GameTierProgressBar+TierProgressData]::
              List_1_GameTierProgressBar_TierProgressData__get_Item
                        ((GameTierProgressBar_TierProgressData *)&pPStack_2,
                         (List_1_GameTierProgressBar_TierProgressData_ *)voxelHits,0,
                         MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    pPStack_3 = pGVar1->progressBar;
    pTStack_4 = pGVar1->progressText;
    pGStack_5 = pGVar1->progressDivider;
    pGStack_6 = pGVar1->progressBarTextBubble;
    pGStack_7 = pGVar1->avatarHead;
    pRStack_8 = pGVar1->avatarHeadImage;
    pGStack_9 = pGVar1->avatarHeadUI;
    pPStack_10 = pGVar1->disabledProgressBar;
    pGStack_11 = pGVar1->disabledProgressDivider;
    pGStack_12 = pGVar1->disabledBarTextBubble;
    pGStack_13 = pGVar1->tierIconTempUnlock;
    pGStack_14 = pGVar1->tierIconNumber;
    pPStack_15 = pGVar1->endResultProgressBar;
    pGStack_16 = pGVar1->tempProgress;
    pGStack_17 = pGVar1->disabledTempProgress;
    pGStack_18 = pGVar1->freeTryTextBubble;
    uStack_19._0_4_ = pGVar1->hoverInputHandler;
    uStack_19._4_4_ = pGVar1->LockedTierIcon;
    pGVar1 = mscorlib.dll::System::Collections::Generic::
              List`1[GameTierProgressBar+TierProgressData]::
              List_1_GameTierProgressBar_TierProgressData__get_Item
                        ((GameTierProgressBar_TierProgressData *)&stack0xfffffed0,
                         (List_1_GameTierProgressBar_TierProgressData_ *)voxelHits,0,
                         MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    pPStack_2 = pGVar1->progressBar;
    pTStack_20 = pGVar1->progressText;
    pGStack_21 = pGVar1->progressDivider;
    pGStack_22 = pGVar1->progressBarTextBubble;
    pGStack_23 = pGVar1->avatarHead;
    pRStack_24 = pGVar1->avatarHeadImage;
    forward.x = (float)pGVar1->progressBarTextBubble;
    forward.y = (float)pGVar1->avatarHead;
    forward.z = (float)pGVar1->avatarHeadImage;
    pGStack_25 = pGVar1->avatarHeadUI;
    pPStack_26 = pGVar1->disabledProgressBar;
    pGStack_27 = pGVar1->disabledProgressDivider;
    pGStack_28 = pGVar1->disabledBarTextBubble;
    pGStack_29 = pGVar1->tierIconTempUnlock;
    pGStack_30 = pGVar1->tierIconNumber;
    pQVar31 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        (&QStack_32,forward,(MethodInfo *)0x0);
    QStack_32.x = pQVar31->x;
    QStack_32.y = pQVar31->y;
    QStack_32.z = pQVar31->z;
    QStack_32.w = pQVar31->w;
    pPVar33 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar33 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
      value.m_XMin = (pPVar33->fields).hitEffectColor.r;
      value.m_YMin = (pPVar33->fields).hitEffectColor.g;
      value.m_Width = (pPVar33->fields).hitEffectColor.b;
      value.m_Height = (pPVar33->fields).hitEffectColor.a;
      NStack_34.value.m_Height = 0.0;
      NStack_34.hasValue = 0;
      NStack_34._1_3_ = 0;
      NStack_34.value.m_XMin = 0.0;
      NStack_34.value.m_YMin = 0.0;
      NStack_34.value.m_Width = 0.0;
      mscorlib.dll::System::Nullable`1[UnityEngine::Rect]::Nullable_1_UnityEngine_Rect___ctor
                (&NStack_34,value,
                 MethodInfo__System__Nullable<UnityEngine::Color>__Nullable_UnityEngine__Color_);
      position_00.y = (float)pTStack_4;
      position_00.x = (float)pPStack_3;
      position_00.z = (float)pGStack_5;
      rotation.y = QStack_32.y;
      rotation.x = QStack_32.x;
      rotation.z = QStack_32.z;
      rotation.w = QStack_32.w;
      particleColor.value.r = NStack_34.value.m_XMin;
      particleColor.hasValue = NStack_34.hasValue;
      particleColor._1_3_ = NStack_34._1_3_;
      particleColor.value.g = NStack_34.value.m_YMin;
      particleColor.value.b = NStack_34.value.m_Width;
      particleColor.value.a = NStack_34.value.m_Height;
      method_00 = (MethodInfo *)QStack_32.x;
      this_01 = OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                          (PoolEnums__Enum_WhiteSparks,position_00,rotation,particleColor,
                           (MethodInfo *)0x0);
      pPVar33 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar33 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Burst::
        ParticleSystem_Burst__ctor
                  ((ParticleSystem_Burst *)&stack0xffffff60,0.0,
                   (int16_t)(int)(pPVar33->fields)._.damage,(MethodInfo *)0x0);
        if (this_01 != (ParticleSystem *)0x0) {
          PStack_35.m_ParticleSystem =
               (ParticleSystem *)
               UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
               ParticleSystem_get_collision(this_01,(MethodInfo *)0x0);
          iVar36 = 1;
          pPVar37 = TypeInfo__UnityEngine__ParticleSystem__Burst;
          bursts = (ParticleSystem_Burst__Array *)func_?();
          if (bursts != (ParticleSystem_Burst__Array *)0x0) {
            if (bursts->max_length == 0) {
              func_?();
            }
            else {
              bursts->vector[0].m_Time = (float)pPVar37;
              bursts->vector[0].m_Count.m_Mode = iVar36;
              bursts->vector[0].m_Count.m_CurveMultiplier = 0.0;
              bursts->vector[0].m_Count.m_CurveMin = (AnimationCurve *)0x0;
              bursts->vector[0].m_Count.m_CurveMax = (AnimationCurve *)0x0;
              bursts->vector[0].m_Count.m_ConstantMin = 0.0;
              bursts->vector[0].m_Count.m_ConstantMax = 0.0;
              bursts->vector[0].m_RepeatCount = 0;
              bursts->vector[0].m_RepeatInterval = 0.0;
              bursts->vector[0].m_InvProbability = 0.0;
              func_?(&bursts->vector[0].m_Count.m_CurveMin,0);
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
              ParticleSystem_EmissionModule_SetBursts(&PStack_35,bursts,(MethodInfo *)0x0);
              this_00 = (this->fields)._.hitAudioSource;
              pSStack_38 = (String *)
                          (*(code *)(this->klass->vtable).get_HitSoundEffectName.method)
                                    (this,(this->klass->vtable).get_AttackAnimationName.methodPtr);
              pGVar1 = mscorlib.dll::System::Collections::Generic::
                        List`1[GameTierProgressBar+TierProgressData]::
                        List_1_GameTierProgressBar_TierProgressData__get_Item
                                  ((GameTierProgressBar_TierProgressData *)&stack0xfffffed0,
                                   (List_1_GameTierProgressBar_TierProgressData_ *)voxelHits,0,
                                   MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                                  );
              pPStack_3 = pGVar1->progressBar;
              pTStack_4 = pGVar1->progressText;
              pGStack_5 = pGVar1->progressDivider;
              pGStack_6 = pGVar1->progressBarTextBubble;
              pGStack_7 = pGVar1->avatarHead;
              pRStack_8 = pGVar1->avatarHeadImage;
              pGStack_9 = pGVar1->avatarHeadUI;
              pPStack_10 = pGVar1->disabledProgressBar;
              pGStack_11 = pGVar1->disabledProgressDivider;
              pGStack_12 = pGVar1->disabledBarTextBubble;
              pGStack_13 = pGVar1->tierIconTempUnlock;
              pGStack_14 = pGVar1->tierIconNumber;
              pPStack_15 = pGVar1->endResultProgressBar;
              pGStack_16 = pGVar1->tempProgress;
              pGStack_17 = pGVar1->disabledTempProgress;
              pGStack_18 = pGVar1->freeTryTextBubble;
              uStack_19._0_4_ = pGVar1->hoverInputHandler;
              uStack_19._4_4_ = pGVar1->LockedTierIcon;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__UnityEngine__Object);
                cRam_? = '\x01';
              }
              if (this_00 != (AudioSource *)0x0) {
                x = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                              (this_00,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                bVar39 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                   ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar39 == 0) {
                  this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                      ((MethodInfo *)0x0);
                  if (this_02 == (AudioManager *)0x0) goto code_?;
                  position.y = (float)pTStack_4;
                  position.x = (float)pPStack_3;
                  position.z = (float)pGStack_5;
                  AudioManager::AudioManager_Play_2
                            (this_02,pSStack_38,this_00,position,(MethodInfo *)0x0);
                }
                for (index = 0; index < (voxelHits->fields)._size; index = index + 1) {
                  pGVar1 = mscorlib.dll::System::Collections::Generic::
                            List`1[GameTierProgressBar+TierProgressData]::
                            List_1_GameTierProgressBar_TierProgressData__get_Item
                                      ((GameTierProgressBar_TierProgressData *)&stack0xfffffed0,
                                       (List_1_GameTierProgressBar_TierProgressData_ *)voxelHits,
                                       index,
                                       MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                                      );
                  uVar40 = pGVar1->LockedTierIcon;
                  uVar41 = pGVar1->progressText;
                  uVar42 = pGVar1->progressDivider;
                  uVar43 = pGVar1->progressBarTextBubble;
                  uVar44 = pGVar1->avatarHead;
                  uVar45 = pGVar1->avatarHeadImage;
                  uVar46 = pGVar1->avatarHeadUI;
                  uVar47 = pGVar1->disabledProgressBar;
                  uVar48 = pGVar1->disabledProgressDivider;
                  uVar49 = pGVar1->disabledBarTextBubble;
                  uVar50 = pGVar1->tierIconTempUnlock;
                  uVar51 = pGVar1->tierIconNumber;
                  uVar52 = pGVar1->endResultProgressBar;
                  uVar53 = pGVar1->tempProgress;
                  uVar54 = pGVar1->disabledTempProgress;
                  uVar55 = pGVar1->freeTryTextBubble;
                  uVar56 = pGVar1->hoverInputHandler;
                  voxelHit._60_4_ = uVar56;
                  voxelHit.transform = (Transform *)uVar55;
                  voxelHit.collider = (Collider *)uVar54;
                  voxelHit.distance = (float)uVar53;
                  voxelHit.cube = (Cube *)uVar52;
                  voxelHit.woId = uVar51;
                  voxelHit._36_4_ = uVar50;
                  voxelHit.face = uVar49;
                  voxelHit._28_4_ = uVar48;
                  voxelHit.cubePos._0_4_ = uVar47;
                  voxelHit.normal.z = (float)uVar46;
                  voxelHit.normal.y = (float)uVar45;
                  voxelHit.normal.x = (float)uVar44;
                  voxelHit.point.z = (float)uVar43;
                  voxelHit.point.y = (float)uVar42;
                  voxelHit.point.x = (float)uVar41;
                  voxelHit.interactionFlags._0_4_ = uVar40;
                  voxelHit.interactionFlags._4_4_ = lineOfFire.m_Origin.x;
                  auVar57 = lineOfFire._4_20_;
                  lineOfFire_00.m_Direction.z = 0.0;
                  auVar58 = auVar57._0_12_;
                  lineOfFire_00.m_Origin.x = (float)auVar58._0_4_;
                  lineOfFire_00.m_Origin.y = (float)auVar58._4_4_;
                  lineOfFire_00.m_Origin.z = (float)auVar58._8_4_;
                  lineOfFire_00.m_Direction.x = (float)auVar57._12_4_;
                  lineOfFire_00.m_Direction.y = (float)auVar57._16_4_;
                  PickupItemEditable::PickupItemEditable_OnHit_1
                            ((PickupItemEditable *)this,voxelHit,lineOfFire_00,method_00);
                }
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
  pcVar59 = (code *)swi(3);
  (*pcVar59)();
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_OnStateChanged
               (PickupItemMeleeWeapon *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__Dictionary<System::Object,_System::Object>_MethodInfo__Extensions__GetValueOrDefault<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              Extensions::Extensions_GetValueOrDefault_3
                        (newState,StringLiteral_itemData,(Object *)0x0,
                         System__Collections__Generic__Dictionary<System::Object,_System::Object>_MethodInfo__Extensions__GetValueOrDefault<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                        );
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?(&TypeInfo__Extensions);
      func_?(&StringLiteral_CubeModelId);
      cRam_? = '\x01';
    }
    pPVar1 = (this->fields)._._Configuration_k__BackingField;
    if (pPVar1 == (PickupItemEditable_EditableItemConfiguration *)0x0) goto code_?;
    IVar2 = (pPVar1->fields).cubeModelId;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    IVar3 = Extensions::Extensions_GetValueOrDefault_2
                      (hashtable,StringLiteral_CubeModelId,0xffffffff,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    bVar4 = (*(code *)(this->klass->vtable).IsSameItemData.method)(this,hashtable);
    if ((IVar2 == IVar3 & bVar4) == 0) {
      (*(code *)(this->klass->vtable).SetConfiguration.method)(this,hashtable);
      PickupItemEditable::PickupItemEditable_SetValuesBasedOnConfiguration
                ((PickupItemEditable *)this,(MethodInfo *)0x0);
    }
  }
  pTVar5 = (this->fields)._._._.muzzlePoint;
  if (pTVar5 != (Transform *)0x0) {
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                        ((Vector3 *)&stack0xffffffe0,pTVar5,(MethodInfo *)0x0);
    fVar7 = pVVar6->z;
    pTVar5 = (this->fields)._._._.muzzlePoint;
    if (pTVar5 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                ((Vector3 *)&stack0xffffffe0,pTVar5,(MethodInfo *)0x0);
      pPVar8 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar8 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
        fVar9 = (pPVar8->fields)._.radius;
        puVar10 = &UNK_?;
        pPVar8 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar8 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
          pTVar5 = (this->fields)._._._.muzzlePoint;
          if (pTVar5 != (Transform *)0x0) {
            auVar11._4_4_ = fVar7;
            auVar11._0_4_ = (fVar9 + (pPVar8->fields)._.range) * (_UNK_? / (float)puVar10) *
                           _UNK_?;
            auVar11._8_4_ = 0;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar5,(Vector3)(auVar11 << 0x20),(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnUnequip() */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_OnUnequip
               (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  pPVar1 = this->klass;
  (this->fields).isUnequipped = 1;
  (*(code *)(pPVar1->vtable).InterruptFire.method)(this,pPVar1[1]._0.image);
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_OnValidate
               (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__System__Array__Resize<UnityEngine::AudioClip>_UnityEngine__AudioClip___int_
                   );
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
  }
  pSVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields
           ->fireSoundEffects;
  if (pSVar1 != (String__Array *)0x0) {
    pAVar2 = (this->fields)._.fireAudioClips;
    if (pAVar2 != (AudioClip__Array *)0x0) {
      iVar3 = pSVar1->max_length;
      if (pAVar2->max_length != iVar3) {
        mscorlib.dll::System::Array::Array_Resize_86
                  ((BindingRestrictions_TestBuilder_AndNode__Array **)
                   &(this->fields)._.fireAudioClips,iVar3,
                   void_MethodInfo__System__Array__Resize<UnityEngine::AudioClip>_UnityEngine__AudioClip___int_
                  );
      }
      if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
      }
      pSVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->
               static_fields->hitSoundEffects;
      if ((pSVar1 != (String__Array *)0x0) &&
         (pAVar2 = (this->fields)._.hitAudioClips, pAVar2 != (AudioClip__Array *)0x0)) {
        iVar3 = pSVar1->max_length;
        if (pAVar2->max_length != iVar3) {
          mscorlib.dll::System::Array::Array_Resize_86
                    ((BindingRestrictions_TestBuilder_AndNode__Array **)
                     &(this->fields)._.hitAudioClips,iVar3,
                     void_MethodInfo__System__Array__Resize<UnityEngine::AudioClip>_UnityEngine__AudioClip___int_
                    );
        }
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetConfiguration(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_SetConfiguration
               (PickupItemMeleeWeapon *this,Dictionary_2_System_Object_System_Object_ *itemData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                   );
    func_?(&
                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                   );
    func_?(&
                    System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_Damage);
    func_?(&StringLiteral_CubeModelId);
    func_?(&StringLiteral_ImpulseStrength);
    func_?(&StringLiteral_Radius);
    func_?(&StringLiteral_TrailColor);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_AttackAnimationTime);
    func_?(&StringLiteral_AttackCooldown);
    func_?(&StringLiteral_HitSoundEffect);
    func_?(&StringLiteral_RecoilStrength);
    func_?(&StringLiteral_FireSoundEffect);
    func_?(&StringLiteral_Range);
    func_?(&StringLiteral_HitEffectColor);
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
    IVar3 = (pPVar2->fields)._.cubeModelId;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    IVar3 = Extensions::Extensions_GetValueOrDefault_2
                      (itemData,StringLiteral_CubeModelId,IVar3,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
      (pPVar1->fields)._.cubeModelId = IVar3;
      pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
      pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
        pSVar4 = (String *)
                 Extensions::Extensions_GetValueOrDefault_3
                           (itemData,StringLiteral_Name,(Object *)(pPVar2->fields)._.name,
                            System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                           );
        if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
          (pPVar1->fields)._.name = pSVar4;
          func_?();
          pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
          pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
            fVar5 = Extensions::Extensions_GetValueOrDefault_4
                              (itemData,StringLiteral_Damage,(pPVar2->fields)._.damage,
                               float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                              );
            if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
              (pPVar1->fields)._.damage = fVar5;
              pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
              pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
              if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                  (itemData,StringLiteral_ImpulseStrength,
                                   (pPVar2->fields)._.impulseStrength,
                                   float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                  );
                if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                  (pPVar1->fields)._.impulseStrength = fVar5;
                  pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                  pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                  if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                    fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                      (itemData,StringLiteral_RecoilStrength,
                                       (pPVar2->fields)._.recoilStrength,
                                       float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                      );
                    if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                      (pPVar1->fields)._.recoilStrength = fVar5;
                      pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                      pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                      if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                        fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                          (itemData,StringLiteral_AttackAnimationTime,
                                           (pPVar2->fields)._.fireAnimationTime,
                                           float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                          );
                        if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                          (pPVar1->fields)._.fireAnimationTime = fVar5;
                          pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                          pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
                          if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                            fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                              (itemData,StringLiteral_AttackCooldown,
                                               (pPVar2->fields)._.attackCooldown,
                                               float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                              );
                            if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                              (pPVar1->fields)._.attackCooldown = fVar5;
                              pPVar1 = PickupItemMeleeWeapon_get_Configuration
                                                 (this,(MethodInfo *)0x0);
                              pPVar2 = PickupItemMeleeWeapon_get_Configuration
                                                 (this,(MethodInfo *)0x0);
                              if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
                                fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                                  (itemData,StringLiteral_Range,
                                                   (pPVar2->fields)._.range,
                                                                                                      
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0)
                                {
                                  (pPVar1->fields)._.range = fVar5;
                                  pPVar1 = PickupItemMeleeWeapon_get_Configuration
                                                     (this,(MethodInfo *)0x0);
                                  pPVar2 = PickupItemMeleeWeapon_get_Configuration
                                                     (this,(MethodInfo *)0x0);
                                  if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
                                                0x0) {
                                    fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                                      (itemData,StringLiteral_Radius,
                                                       (pPVar2->fields)._.radius,
                                                                                                              
                                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                                  );
                                    if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
                                                  0x0) {
                                      (pPVar1->fields)._.radius = fVar5;
                                      pPVar1 = PickupItemMeleeWeapon_get_Configuration
                                                         (this,(MethodInfo *)0x0);
                                      pPVar2 = PickupItemMeleeWeapon_get_Configuration
                                                         (this,(MethodInfo *)0x0);
                                      if (pPVar2 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration
                                                     *)0x0) {
                                        IVar3 = Extensions::Extensions_GetValueOrDefault_2
                                                          (itemData,StringLiteral_FireSoundEffect,
                                                           (pPVar2->fields)._.fireSoundEffect,
                                                                                                                      
                                                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                                  );
                                        if (pPVar1 != (
                                                  PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
                                                  0x0) {
                                          (pPVar1->fields)._.fireSoundEffect = IVar3;
                                          pPVar1 = PickupItemMeleeWeapon_get_Configuration
                                                             (this,(MethodInfo *)0x0);
                                          pPVar2 = PickupItemMeleeWeapon_get_Configuration
                                                             (this,(MethodInfo *)0x0);
                                          if (pPVar2 != (
                                                  PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
                                                  0x0) {
                                            IVar3 = Extensions::Extensions_GetValueOrDefault_2
                                                              (itemData,StringLiteral_HitSoundEffect
                                                               ,(pPVar2->fields)._.hitSoundEffect,
                                                                                                                              
                                                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                                  );
                                            if (pPVar1 != (
                                                  PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
                                                  0x0) {
                                              (pPVar1->fields)._.hitSoundEffect = IVar3;
                                              pPVar1 = PickupItemMeleeWeapon_get_Configuration
                                                                 (this,(MethodInfo *)0x0);
                                              pPVar2 = PickupItemMeleeWeapon_get_Configuration
                                                                 (this,(MethodInfo *)0x0);
                                              if (pPVar2 != (
                                                  PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
                                                  0x0) {
                                                pCVar6 = Extensions::Extensions_GetColorOrDefault
                                                                   ((Color *)&stack0xffffffec,
                                                                    itemData,
                                                  StringLiteral_TrailColor,
                                                  (pPVar2->fields).trailColor,(MethodInfo *)0x0);
                                                fVar5 = pCVar6->g;
                                                fVar7 = pCVar6->b;
                                                fVar8 = pCVar6->a;
                                                if (pPVar1 != (
                                                  PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
                                                  0x0) {
                                                  (pPVar1->fields).trailColor.r = pCVar6->r;
                                                  (pPVar1->fields).trailColor.g = fVar5;
                                                  (pPVar1->fields).trailColor.b = fVar7;
                                                  (pPVar1->fields).trailColor.a = fVar8;
                                                  pPVar1 = PickupItemMeleeWeapon_get_Configuration
                                                                     (this,(MethodInfo *)0x0);
                                                  pPVar2 = PickupItemMeleeWeapon_get_Configuration
                                                                     (this,(MethodInfo *)0x0);
                                                  if (pPVar2 != (
                                                  PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
                                                  0x0) {
                                                    pCVar6 = Extensions::
                                                             Extensions_GetColorOrDefault
                                                                       ((Color *)&stack0xffffffec,
                                                                        itemData,
                                                  StringLiteral_HitEffectColor,
                                                  (pPVar2->fields).hitEffectColor,(MethodInfo *)0x0)
                                                  ;
                                                  fVar5 = pCVar6->g;
                                                  fVar7 = pCVar6->b;
                                                  fVar8 = pCVar6->a;
                                                  if (pPVar1 != (
                                                  PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
                                                  0x0) {
                                                    (pPVar1->fields).hitEffectColor.r = pCVar6->r;
                                                    (pPVar1->fields).hitEffectColor.g = fVar5;
                                                    (pPVar1->fields).hitEffectColor.b = fVar7;
                                                    (pPVar1->fields).hitEffectColor.a = fVar8;
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
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* PickupItemMeleeWeapon() */

void Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon__ctor
               (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._._.crossHairCannotFireLow.r = _UNK_?;
  (this->fields)._._.crossHairCannotFireLow.g = fVar3;
  (this->fields)._._.crossHairCannotFireLow.b = fVar2;
  (this->fields)._._.crossHairCannotFireLow.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._._.crossHairCannotFireHigh.r = _UNK_?;
  (this->fields)._._.crossHairCannotFireHigh.g = fVar3;
  (this->fields)._._.crossHairCannotFireHigh.b = fVar2;
  (this->fields)._._.crossHairCannotFireHigh.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._._.crossHairCanFire.r = _UNK_?;
  (this->fields)._._.crossHairCanFire.g = fVar3;
  (this->fields)._._.crossHairCanFire.b = fVar2;
  (this->fields)._._.crossHairCanFire.a = fVar1;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit(&OStack_5,1.0,(MethodInfo *)0x0);
  AVar6 = pOVar4->hiddenValue;
  pBVar7 = pOVar4->hiddenValueOld;
  fVar3 = pOVar4->fakeValue;
  bVar8 = pOVar4->inited;
  uVar9 = *(undefined3 *)&pOVar4->field_0x11;
  (this->fields)._._.fireInterval.currentCryptoKey = pOVar4->currentCryptoKey;
  (this->fields)._._.fireInterval.hiddenValue = AVar6;
  (this->fields)._._.fireInterval.hiddenValueOld = pBVar7;
  (this->fields)._._.fireInterval.fakeValue = fVar3;
  (this->fields)._._.fireInterval.inited = bVar8;
  *(undefined3 *)&(this->fields)._._.fireInterval.field_0x11 = uVar9;
  func_?(&(this->fields)._._.fireInterval.hiddenValueOld,0);
  PickupItem::PickupItem__ctor((PickupItem *)this,(MethodInfo *)0x0);
  return;
}


/* String get_AttackAnimationName() */

String * Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_get_AttackAnimationName
                   (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_MeleeWeaponSwing);
    cRam_? = '\x01';
  }
  return StringLiteral_MeleeWeaponSwing;
}


/* PickupItemMeleeWeapon+MeleeWeaponConfiguration get_Configuration() */

PickupItemMeleeWeapon_MeleeWeaponConfiguration *
Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_get_Configuration
          (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration);
    cRam_? = '\x01';
  }
  pPVar1 = (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
           (this->fields)._._Configuration_k__BackingField;
  if (pPVar1 == (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
    return (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0;
  }
  if (((TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration->_1).naturalAligment <=
       (pPVar1->klass->_1).naturalAligment) &&
     ((pPVar1->klass->_1).typeHierarchy
      [(TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration->_1).naturalAligment - 1] ==
      (Il2CppClass *)TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration)) {
    return pPVar1;
  }
  func_?(pPVar1,TypeInfo__PickupItemMeleeWeapon__MeleeWeaponConfiguration);
  pcVar2 = (code *)swi(3);
  pPVar1 = (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)(*pcVar2)();
  return pPVar1;
}


/* String get_FireSoundEffectName() */

String * Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_get_FireSoundEffectName
                   (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
  }
  pSVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields
           ->fireSoundEffects;
  pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  if ((pPVar2 == (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) ||
     (pSVar1 == (String__Array *)0x0)) {
    func_?();
  }
  else {
    uVar3 = (pPVar2->fields)._.fireSoundEffect;
    if (uVar3 < pSVar1->max_length) {
      return pSVar1->vector[uVar3];
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* Color get_HitEffectColor() */

Color * Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_get_HitEffectColor
                  (Color *__return_storage_ptr__,PickupItemMeleeWeapon *this,MethodInfo *method)

{
  pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
    fVar2 = (pPVar1->fields).hitEffectColor.g;
    fVar3 = (pPVar1->fields).hitEffectColor.b;
    fVar4 = (pPVar1->fields).hitEffectColor.a;
    __return_storage_ptr__->r = (pPVar1->fields).hitEffectColor.r;
    __return_storage_ptr__->g = fVar2;
    __return_storage_ptr__->b = fVar3;
    __return_storage_ptr__->a = fVar4;
    return __return_storage_ptr__;
  }
  uVar5 = func_?(&stack0xfffffff8);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pCVar7 = (Color *)(*pcVar6)();
  return pCVar7;
}


/* String get_HitSoundEffectName() */

String * Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_get_HitSoundEffectName
                   (PickupItemMeleeWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
  }
  pSVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields
           ->hitSoundEffects;
  pPVar2 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  if ((pPVar2 == (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) ||
     (pSVar1 == (String__Array *)0x0)) {
    func_?();
  }
  else {
    uVar3 = (pPVar2->fields)._.hitSoundEffect;
    if (uVar3 < pSVar1->max_length) {
      return pSVar1->vector[uVar3];
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar4)();
  return pSVar5;
}


/* Color get_TrailColor() */

Color * Assembly-CSharp.dll::PickupItemMeleeWeapon::PickupItemMeleeWeapon_get_TrailColor
                  (Color *__return_storage_ptr__,PickupItemMeleeWeapon *this,MethodInfo *method)

{
  pPVar1 = PickupItemMeleeWeapon_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
    fVar2 = (pPVar1->fields).trailColor.g;
    fVar3 = (pPVar1->fields).trailColor.b;
    fVar4 = (pPVar1->fields).trailColor.a;
    __return_storage_ptr__->r = (pPVar1->fields).trailColor.r;
    __return_storage_ptr__->g = fVar2;
    __return_storage_ptr__->b = fVar3;
    __return_storage_ptr__->a = fVar4;
    return __return_storage_ptr__;
  }
  uVar5 = func_?(&stack0xfffffff8);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pCVar7 = (Color *)(*pcVar6)();
  return pCVar7;
}

