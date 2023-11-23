
/* PickupItemEditable+EditableItemConfiguration GetDefaultConfiguration() */

PickupItemEditable_EditableItemConfiguration *
Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_GetDefaultConfiguration
          (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__PickupItemCostume__CostumeConfiguration);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_TrailEnabled);
    func_?(&StringLiteral_TrailLength);
    func_?(&StringLiteral_TrailColor);
    func_?(&StringLiteral_PlayerInvisible);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_Health);
    func_?(&StringLiteral_MovementSpeed);
    cRam_? = '\x01';
  }
  this_00 = (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)
            func_?(TypeInfo__PickupItemCostume__CostumeConfiguration);
  PickupItemMeleeWeapon+MeleeWeaponConfiguration::
  PickupItemMeleeWeapon_MeleeWeaponConfiguration__ctor(this_00,(MethodInfo *)0x0);
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar1 = (String *)
           Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultValue
                     (StringLiteral_Name,(MethodInfo *)0x0);
  if (this_00 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
    if (pSVar1 == (String *)0x0) {
      (this_00->fields)._.name = (String *)0x0;
    }
    else {
      pSVar2 = (String *)0x0;
      if (pSVar1->klass == TypeInfo__System__String) {
        pSVar2 = pSVar1;
      }
      if (pSVar2 == (String *)0x0) goto code_?;
      (this_00->fields)._.name = pSVar2;
      pSVar2 = (String *)0x0;
      if (pSVar1->klass == TypeInfo__System__String) {
        pSVar2 = pSVar1;
      }
      if (pSVar2 == (String *)0x0) goto code_?;
    }
    func_?();
    pOVar3 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultValue
                       (StringLiteral_Health,(MethodInfo *)0x0);
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
      goto code_?;
      pfVar4 = (float *)func_?();
      (this_00->fields).trailColor.r = *pfVar4;
      pOVar3 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultValue
                         (StringLiteral_MovementSpeed,(MethodInfo *)0x0);
      if (pOVar3 != (Object *)0x0) {
        if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar4 = (float *)func_?();
        (this_00->fields).trailColor.g = *pfVar4;
        pOVar3 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultValue
                           (StringLiteral_TrailLength,(MethodInfo *)0x0);
        if (pOVar3 != (Object *)0x0) {
          if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
          goto code_?;
          pfVar4 = (float *)func_?();
          (this_00->fields).trailColor.b = *pfVar4;
          pOVar3 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultValue
                             (StringLiteral_PlayerInvisible,(MethodInfo *)0x0);
          if (pOVar3 != (Object *)0x0) {
            if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
            goto code_?;
            puVar5 = (undefined1 *)func_?();
            *(undefined1 *)&(this_00->fields).trailColor.a = *puVar5;
            pOVar3 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::
                     CostumeData_DefaultValue(StringLiteral_TrailEnabled,(MethodInfo *)0x0);
            if (pOVar3 != (Object *)0x0) {
              if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class
                 ) {
                puVar5 = (undefined1 *)func_?();
                *(undefined1 *)((int)&(this_00->fields).trailColor.a + 2) = *puVar5;
                pCVar6 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::
                         CostumeData_DefaultColor
                                   ((Color *)&stack0xffffffec,StringLiteral_TrailColor,
                                    (MethodInfo *)0x0);
                fVar7 = pCVar6->g;
                fVar8 = pCVar6->b;
                fVar9 = pCVar6->a;
                (this_00->fields).hitEffectColor.r = pCVar6->r;
                (this_00->fields).hitEffectColor.g = fVar7;
                (this_00->fields).hitEffectColor.b = fVar8;
                (this_00->fields).hitEffectColor.a = fVar9;
                return (PickupItemEditable_EditableItemConfiguration *)this_00;
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  pPVar11 = (PickupItemEditable_EditableItemConfiguration *)(*pcVar10)();
  return pPVar11;
}


/* Void InterruptFire() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_InterruptFire
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshCollider__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshCollider>______
                   );
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&TypeInfo__MVAvatar);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    pMVar2 = (MVAvatarLocal *)(pMVar1->fields)._.worldObjectParent;
    if (pMVar2 == (MVAvatarLocal *)0x0) {
      return;
    }
    if ((pMVar2->klass->_1).naturalAligment < (TypeInfo__MVAvatar->_1).naturalAligment) {
      return;
    }
    if ((MVAvatar__Class *)
        (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVAvatar->_1).naturalAligment - 1] !=
        TypeInfo__MVAvatar) {
      return;
    }
    pPVar3 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar3 != (PickupItemCostume_CostumeConfiguration *)0x0) {
      if ((pPVar3->fields).isPlayerInvisible != 0) {
        PickupItemCostume_SetAvatarInvisibility(this,0,(MVAvatar *)pMVar2,(MethodInfo *)0x0);
      }
      if ((pMVar2->klass->_1).naturalAligment < (TypeInfo__MVAvatarLocal->_1).naturalAligment) {
        return;
      }
      if ((MVAvatarLocal__Class *)
          (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] !=
          TypeInfo__MVAvatarLocal) {
        return;
      }
      pPVar3 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar3 != (PickupItemCostume_CostumeConfiguration *)0x0) {
        if ((int)(pPVar3->fields).health != 100) {
          MVAvatarLocal::MVAvatarLocal_set_BaseMaxHealth(pMVar2,100,(MethodInfo *)0x0);
        }
        pPVar3 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar3 != (PickupItemCostume_CostumeConfiguration *)0x0) {
          if ((float)(int)(pPVar3->fields).movementSpeed != _UNK_?) {
            this_00 = (pMVar2->fields).avatarMotor;
            if (this_00 == (AvatarMotor *)0x0) goto code_?;
            AvatarMotor::AvatarMotor_set_WalkSpeedBase(this_00,8.0,(MethodInfo *)0x0);
          }
          pPVar3 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar3 != (PickupItemCostume_CostumeConfiguration *)0x0) {
            if ((pPVar3->fields).playersCanCollide == 0) {
              return;
            }
            this_01 = (this->fields)._.cubeModelObject;
            if (this_01 != (GameObject *)0x0) {
              pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponentsInChildren
                                 (this_01,
                                  UnityEngine__MeshCollider__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshCollider>______
                                 );
              uVar5 = 0;
              if (pOVar4 != (Object__Array *)0x0) {
                ppOVar6 = pOVar4->vector;
                for (; (int)uVar5 < (int)pOVar4->max_length; uVar5 = uVar5 + 1) {
                  if (pOVar4->max_length <= uVar5) goto code_?;
                  if ((Collider *)*ppOVar6 == (Collider *)0x0) goto code_?;
                  UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                            ((Collider *)*ppOVar6,0,(MethodInfo *)0x0);
                  ppOVar6 = ppOVar6 + 1;
                }
                pBVar7 = (this->fields).costumeTriggerCollider;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                  ((Object_1 *)pBVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar8 == 0) {
                  return;
                }
                pMVar1 = (this->fields)._._._.owner;
                if ((pMVar1 != (MVPickupOwner *)0x0) &&
                   (pMVar2 = (MVAvatarLocal *)(pMVar1->fields)._.worldObjectParent,
                   pMVar2 != (MVAvatarLocal *)0x0)) {
                  if (((pMVar2->klass->_1).naturalAligment <
                       (TypeInfo__MVAvatarLocal->_1).naturalAligment) ||
                     ((MVAvatarLocal__Class *)
                      (pMVar2->klass->_1).typeHierarchy
                      [(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] != TypeInfo__MVAvatarLocal
                     )) goto code_?;
                  this_02 = MVAvatarLocal::MVAvatarLocal_get_TriggingColliders
                                      (pMVar2,(MethodInfo *)0x0);
                  if (this_02 != (ColliderCollection *)0x0) {
                    Assets::Scripts::Tools::ColliderCollection::ColliderCollection_RemoveCollider
                              (this_02,(Collider *)(this->fields).costumeTriggerCollider,
                               (MethodInfo *)0x0);
                    pBVar7 = (this->fields).costumeTriggerCollider;
                    if (pBVar7 != (BoxCollider *)0x0) {
                      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                                ((Collider *)pBVar7,0,(MethodInfo *)0x0);
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
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean IsSameItemData(Dictionary`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_IsSameItemData
               (PickupItemCostume *this,Dictionary_2_System_Object_System_Object_ *itemData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                   );
    func_?(&
                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                   );
    func_?(&
                    System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_TrailEnabled);
    func_?(&StringLiteral_TrailLength);
    func_?(&StringLiteral_PlayersCanCollide);
    func_?(&StringLiteral_TrailColor);
    func_?(&StringLiteral_PlayerInvisible);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_Health);
    func_?(&StringLiteral_MovementSpeed);
    func_?(&StringLiteral_error);
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
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
    pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
      fVar4 = (pPVar1->fields).health;
      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar5 = Extensions::Extensions_GetValueOrDefault_4
                        (itemData,StringLiteral_Health,-1.0,
                         float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                        );
      if (fVar4 != fVar5) {
        return 0;
      }
      pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
        fVar4 = (pPVar1->fields).movementSpeed;
        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Extensions);
        }
        fVar5 = Extensions::Extensions_GetValueOrDefault_4
                          (itemData,StringLiteral_MovementSpeed,-1.0,
                           float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                          );
        if (fVar4 != fVar5) {
          return 0;
        }
        pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
          fVar4 = (pPVar1->fields).trailLength;
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          fVar5 = Extensions::Extensions_GetValueOrDefault_4
                            (itemData,StringLiteral_TrailLength,-1.0,
                             float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                            );
          if (fVar4 != fVar5) {
            return 0;
          }
          pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
            bVar2 = (pPVar1->fields).isPlayerInvisible;
            pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
            if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
              bVar6 = (pPVar1->fields).isPlayerInvisible;
              if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__Extensions);
              }
              bVar6 = Extensions::Extensions_GetValueOrDefault
                                (itemData,StringLiteral_PlayerInvisible,bVar6 == 0,
                                 bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                );
              if (bVar2 != bVar6) {
                return 0;
              }
              pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
              if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                bVar2 = (pPVar1->fields).playersCanCollide;
                pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                  bVar6 = (pPVar1->fields).playersCanCollide;
                  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__Extensions);
                  }
                  bVar6 = Extensions::Extensions_GetValueOrDefault
                                    (itemData,StringLiteral_PlayersCanCollide,bVar6 == 0,
                                     bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                    );
                  if (bVar2 != bVar6) {
                    return 0;
                  }
                  pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                  if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                    bVar2 = (pPVar1->fields).isTrailEnabled;
                    pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                    if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                      bVar6 = (pPVar1->fields).isTrailEnabled;
                      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__Extensions);
                      }
                      bVar6 = Extensions::Extensions_GetValueOrDefault
                                        (itemData,StringLiteral_TrailEnabled,bVar6 == 0,
                                         bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                        );
                      if (bVar2 != bVar6) {
                        return 0;
                      }
                      pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                      if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                        fVar4 = (pPVar1->fields).trailColor.r;
                        fVar5 = (pPVar1->fields).trailColor.g;
                        fVar7 = (pPVar1->fields).trailColor.b;
                        fVar8 = (pPVar1->fields).trailColor.a;
                        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__Extensions);
                        }
                        defaultColor.g = (float)_UNK_?;
                        defaultColor.r = (float)_UNK_?;
                        defaultColor.b = (float)_UNK_?;
                        defaultColor.a = _UNK_?;
                        pCVar9 = Extensions::Extensions_GetColorOrDefault
                                           (&CStack_3,itemData,StringLiteral_TrailColor,
                                            defaultColor,(MethodInfo *)0x0);
                        fVar4 = fVar4 - pCVar9->r;
                        fVar5 = fVar5 - pCVar9->g;
                        fVar7 = fVar7 - pCVar9->b;
                        fVar8 = fVar8 - pCVar9->a;
                        return fVar4 * fVar4 + fVar5 * fVar5 + fVar7 * fVar7 + fVar8 * fVar8 <
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
  func_?();
  pcVar10 = (code *)swi(3);
  bVar2 = (*pcVar10)();
  return bVar2;
}


/* Void OnArcTrailStateChanged() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnArcTrailStateChanged
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GradientAlphaKey);
    func_?(&TypeInfo__UnityEngine__GradientColorKey);
    func_?(&TypeInfo__UnityEngine__Gradient);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).trailRenderer;
  pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
  if ((pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) && (pTVar1 != (TrailRenderer *)0x0))
  {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              ((Renderer *)pTVar1,(pPVar2->fields).isTrailEnabled,(MethodInfo *)0x0);
    pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
      if ((pPVar2->fields).isTrailEnabled == 0) {
        return;
      }
      pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
        fVar3 = (pPVar2->fields).trailLength;
        if (fVar3 <= _UNK_?) {
          fVar3 = _UNK_?;
        }
        fVar3 = _UNK_? / fVar3;
        this_00 = (Gradient *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient__ctor(this_00,(MethodInfo *)0x0)
        ;
        value = (GradientAlphaKey__Array *)func_?();
        VStack_4.Item1 = 0.0;
        VStack_4.Item2 = 0.0;
        mscorlib.dll::System::ValueTuple`2[Single,Single]::ValueTuple_2_Single_Single___ctor
                  (&VStack_4,0.0,fVar3 * _UNK_?,(MethodInfo *)0x0);
        if (value != (GradientAlphaKey__Array *)0x0) {
          if (value->max_length == 0) goto code_?;
          value->vector[0].alpha = VStack_4.Item1;
          value->vector[0].time = VStack_4.Item2;
          pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
            VStack_5.Item1 = 0.0;
            VStack_5.Item2 = 0.0;
            mscorlib.dll::System::ValueTuple`2[Single,Single]::ValueTuple_2_Single_Single___ctor
                      (&VStack_5,(pPVar2->fields).trailColor.a,fVar3 * _UNK_?,
                       (MethodInfo *)0x0);
            if (value->max_length < 2) goto code_?;
            value->vector[1].alpha = VStack_5.Item1;
            value->vector[1].time = VStack_5.Item2;
            VStack_6.Item1 = 0.0;
            VStack_6.Item2 = 0.0;
            mscorlib.dll::System::ValueTuple`2[Single,Single]::ValueTuple_2_Single_Single___ctor
                      (&VStack_6,0.0,1.0,(MethodInfo *)0x0);
            if (value->max_length < 3) goto code_?;
            value->vector[2].alpha = VStack_6.Item1;
            value->vector[2].time = VStack_6.Item2;
            if (this_00 != (Gradient *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_set_alphaKeys
                        (this_00,value,(MethodInfo *)0x0);
              value_00 = (GradientColorKey__Array *)func_?();
              pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
              if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                fVar3 = 0.0;
                UnityEngine.CoreModule.dll::UnityEngine::GradientColorKey::GradientColorKey__ctor
                          ((GradientColorKey *)&stack0xffffffc8,(pPVar2->fields).trailColor,0.0,
                           (MethodInfo *)0x0);
                if (value_00 != (GradientColorKey__Array *)0x0) {
                  if (value_00->max_length == 0) goto code_?;
                  value_00->vector[0].color.r = fVar3;
                  value_00->vector[0].color.g = 0.0;
                  value_00->vector[0].color.b = 0.0;
                  value_00->vector[0].color.a = 0.0;
                  value_00->vector[0].time = 0.0;
                  pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                  if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                    fVar7 = 0.0;
                    fVar3 = 0.0;
                    fVar8 = 0.0;
                    fVar9 = 0.0;
                    fVar10 = 0.0;
                    UnityEngine.CoreModule.dll::UnityEngine::GradientColorKey::
                    GradientColorKey__ctor
                              ((GradientColorKey *)&stack0xffffffb4,(pPVar2->fields).trailColor,1.0,
                               (MethodInfo *)0x0);
                    if (value_00->max_length < 2) goto code_?;
                    value_00->vector[1].color.r = fVar3;
                    value_00->vector[1].color.g = fVar8;
                    value_00->vector[1].color.b = fVar9;
                    value_00->vector[1].color.a = fVar10;
                    value_00->vector[1].time = fVar7;
                    UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_set_colorKeys
                              (this_00,value_00,(MethodInfo *)0x0);
                    pTVar1 = (this->fields).trailRenderer;
                    if (pTVar1 != (TrailRenderer *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::
                      TrailRenderer_SetColorGradient(pTVar1,this_00,(MethodInfo *)0x0);
                      pTVar1 = (this->fields).trailRenderer;
                      pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                      if ((pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) &&
                         (pTVar1 != (TrailRenderer *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::
                        TrailRenderer_set_time
                                  (pTVar1,(pPVar2->fields).trailLength,(MethodInfo *)0x0);
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
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnAvatarInvisibleStateChanged() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnAvatarInvisibleStateChanged
               (PickupItemCostume *this,MethodInfo *method)

{
  this_06 = (AvatarUIHandlerRemote__Class *)this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatar);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._.owner;
  wo = (PickupItemCostume_CostumeConfiguration__Class *)0x0;
  if (pMVar1 == (MVPickupOwner *)0x0) {
code_?:
    func_?();
  }
  else {
    wo = (PickupItemCostume_CostumeConfiguration__Class *)(pMVar1->fields)._.worldObjectParent;
    if (wo == (PickupItemCostume_CostumeConfiguration__Class *)0x0) {
      return;
    }
    pMVar2 = (MVWorldObjectClient__Class *)(wo->_0).image;
    if ((pMVar2->_1).naturalAligment < (TypeInfo__MVAvatar->_1).naturalAligment) {
      return;
    }
    if ((MVAvatar__Class *)(pMVar2->_1).typeHierarchy[(TypeInfo__MVAvatar->_1).naturalAligment - 1]
        != TypeInfo__MVAvatar) {
      return;
    }
    pPVar3 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar3 == (PickupItemCostume_CostumeConfiguration *)0x0) goto code_?;
    bVar4 = (pPVar3->fields).isPlayerInvisible;
    value_00 = bVar4;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__AvatarUIHandlerRemote);
      func_?(&
                      UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                     );
      func_?(&TypeInfo__MVAvatarRemote);
      func_?(&StringLiteral_Default);
      cRam_? = '\x01';
    }
    pMVar5 = wo[1]._1.unity_user_data;
    if (pMVar5 == (MVBody *)0x0) goto code_?;
    MVBody::MVBody_set_ForceHidden(pMVar5,value_00,(MethodInfo *)0x0);
    pMVar5 = wo[1]._1.unity_user_data;
    if ((pMVar5 == (MVBody *)0x0) ||
       (this_03 = MVBody::MVBody_get_BlobShadow(pMVar5,(MethodInfo *)0x0),
       this_03 == (AvatarBlobShadowController *)0x0)) goto code_?;
    this = (PickupItemCostume *)0x0;
    AvatarBlobShadowController::AvatarBlobShadowController_set_ForceHidden
              (this_03,(bool)pMVar5,(MethodInfo *)0x0);
    if (((((MVWorldObjectClient__Class *)(wo->_0).image)->_1).naturalAligment <
         (TypeInfo__MVAvatarRemote->_1).naturalAligment) ||
       ((MVAvatarRemote__Class *)
        (((MVWorldObjectClient__Class *)(wo->_0).image)->_1).typeHierarchy
        [(TypeInfo__MVAvatarRemote->_1).naturalAligment - 1] != TypeInfo__MVAvatarRemote)) {
code_?:
      if (bVar4 == 0) {
        return;
      }
      this_00 = *(Component **)&(this_06->_1).naturalAligment;
      if (this_00 != (Component *)0x0) {
        pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                 Component_GetComponentsInChildren
                           (this_00,
                            UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                           );
        wo = (PickupItemCostume_CostumeConfiguration__Class *)0x0;
        if (pOVar6 != (Object__Array *)0x0) {
          ppOVar7 = pOVar6->vector;
          for (; (int)wo < (int)pOVar6->max_length;
              wo = (PickupItemCostume_CostumeConfiguration__Class *)((int)&(wo->_0).image + 1)) {
            if ((PickupItemCostume_CostumeConfiguration__Class *)pOVar6->max_length <= wo)
            goto code_?;
            this_01 = (Renderer *)*ppOVar7;
            this_06 = (AvatarUIHandlerRemote__Class *)0x0;
            if (this_01 == (Renderer *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                      (this_01,1,(MethodInfo *)0x0);
            this_06 = (AvatarUIHandlerRemote__Class *)
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_01,(MethodInfo *)0x0);
            value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                              (StringLiteral_Default,(MethodInfo *)0x0);
            if (this_06 == (AvatarUIHandlerRemote__Class *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                      ((GameObject *)this_06,value,(MethodInfo *)0x0);
            ppOVar7 = ppOVar7 + 1;
            this = (PickupItemCostume *)this_06;
          }
          this_02 = (this->fields).trailRenderer;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__PickupItemCostume__CostumeConfiguration);
            cRam_? = '\x01';
          }
          pPVar8 = (this->fields)._._Configuration_k__BackingField;
          wo = TypeInfo__PickupItemCostume__CostumeConfiguration;
          this_06 = (AvatarUIHandlerRemote__Class *)this;
          if (pPVar8 != (PickupItemEditable_EditableItemConfiguration *)0x0) {
            this_06 = (AvatarUIHandlerRemote__Class *)pPVar8->klass;
            if (((this_06->_1).naturalAligment <
                 (TypeInfo__PickupItemCostume__CostumeConfiguration->_1).naturalAligment) ||
               ((this_06->_1).typeHierarchy
                [(TypeInfo__PickupItemCostume__CostumeConfiguration->_1).naturalAligment - 1] !=
                (Il2CppClass *)TypeInfo__PickupItemCostume__CostumeConfiguration))
            goto code_?;
            if (this_02 != (TrailRenderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                        ((Renderer *)this_02,*(bool *)((int)&pPVar8[1].fields.cubeModelId + 2),
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_04 == (MVNetworkGame *)0x0) ||
       (this_05 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_04,(MethodInfo *)0x0),
       this_05 == (MVLocalPlayer *)0x0)) goto code_?;
    isFriendly = MVPlayer::MVPlayer_IsOnSameTeam_1
                           ((MVPlayer *)this_05,(MVWorldObjectClient *)wo,(MethodInfo *)0x0);
    iVar9 = (((MVWorldObjectClient__Fields *)&wo[1]._0.gc_desc)->_).id;
    wo = (PickupItemCostume_CostumeConfiguration__Class *)0x0;
    if ((iVar9 == 0) ||
       (wo = *(PickupItemCostume_CostumeConfiguration__Class **)(iVar9 + 0x44),
       this_06 = TypeInfo__AvatarUIHandlerRemote,
       wo == (PickupItemCostume_CostumeConfiguration__Class *)0x0)) goto code_?;
    if (((TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment <=
         (((MVWorldObjectClient__Class *)(wo->_0).image)->_1).naturalAligment) &&
       ((((MVWorldObjectClient__Class *)(wo->_0).image)->_1).typeHierarchy
        [(TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
      AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_ForceHideUI
                ((AvatarUIHandlerRemote *)wo,(isFriendly ^ 1) & bVar4,(MethodInfo *)0x0);
      AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetHealthBarColor
                ((AvatarUIHandlerRemote *)wo,isFriendly,(MethodInfo *)0x0);
      this_06 = (AvatarUIHandlerRemote__Class *)0x0;
      goto code_?;
    }
  }
  func_?(wo,this_06);
code_?:
  func_?();
  pPVar8 = extraout_EDX;
code_?:
  func_?(pPVar8,wo);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnCollisionStateChanged() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnCollisionStateChanged
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__BoxCollider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::BoxCollider>__
                   );
    func_?(&
                    bool_MethodInfo__UnityEngine__Component__TryGetComponent<UnityEngine::MeshCollider>_UnityEngine__MeshCollider__
                   );
    func_?(&
                    UnityEngine__BoxCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::BoxCollider>__
                   );
    func_?(&
                    UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshCollider>__
                   );
    func_?(&
                    UnityEngine__MeshCollider__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshCollider>______
                   );
    func_?(&
                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                   );
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMStack_1 = (MeshCollider *)0x0;
  pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
    pGVar3 = (this->fields)._.cubeModelObject;
    fStack_4 = _UNK_?;
    fStack_5 = _UNK_?;
    fStack_6 = _UNK_?;
    fStack_7 = _UNK_?;
    fStack_8 = _UNK_?;
    fStack_9 = _UNK_?;
    if ((pPVar2->fields).playersCanCollide == 0) {
      if (pGVar3 != (GameObject *)0x0) {
        pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentsInChildren
                            (pGVar3,
                             UnityEngine__MeshCollider__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshCollider>______
                            );
        uVar11 = 0;
        if (pOVar10 != (Object__Array *)0x0) {
          ppOVar12 = pOVar10->vector;
          for (; (int)uVar11 < (int)pOVar10->max_length; uVar11 = uVar11 + 1) {
            if (pOVar10->max_length <= uVar11) goto code_?;
            if ((Collider *)*ppOVar12 == (Collider *)0x0) goto code_?;
            UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                      ((Collider *)*ppOVar12,0,(MethodInfo *)0x0);
            ppOVar12 = ppOVar12 + 1;
          }
          pBVar13 = (this->fields).costumeTriggerCollider;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                             ((Object_1 *)pBVar13,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar14 == 0) {
            return;
          }
          pMVar15 = (this->fields)._._._.owner;
          if ((pMVar15 != (MVPickupOwner *)0x0) &&
             (pMVar16 = (MVAvatarLocal *)(pMVar15->fields)._.worldObjectParent,
             pMVar16 != (MVAvatarLocal *)0x0)) {
            if (((pMVar16->klass->_1).naturalAligment <
                 (TypeInfo__MVAvatarLocal->_1).naturalAligment) ||
               ((MVAvatarLocal__Class *)
                (pMVar16->klass->_1).typeHierarchy
                [(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] != TypeInfo__MVAvatarLocal))
            goto code_?;
            pCVar17 = MVAvatarLocal::MVAvatarLocal_get_TriggingColliders(pMVar16,(MethodInfo *)0x0);
            if (pCVar17 != (ColliderCollection *)0x0) {
              Assets::Scripts::Tools::ColliderCollection::ColliderCollection_RemoveCollider
                        (pCVar17,(Collider *)(this->fields).costumeTriggerCollider,(MethodInfo *)0x0
                        );
              pBVar13 = (this->fields).costumeTriggerCollider;
              if (pBVar13 != (BoxCollider *)0x0) {
                UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                          ((Collider *)pBVar13,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else if (pGVar3 != (GameObject *)0x0) {
      pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_GetComponentsInChildren
                          (pGVar3,
                           UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                          );
      uVar11 = 0;
      if (pOVar10 != (Object__Array *)0x0) {
        ppOVar12 = pOVar10->vector;
        while ((int)uVar11 < (int)pOVar10->max_length) {
          if (pOVar10->max_length <= uVar11) goto code_?;
          this_00 = (Component *)*ppOVar12;
          if (this_00 == (Component *)0x0) goto code_?;
          bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_TryGetComponent_1
                             (this_00,(Object **)&pMStack_1,
                              bool_MethodInfo__UnityEngine__Component__TryGetComponent<UnityEngine::MeshCollider>_UnityEngine__MeshCollider__
                             );
          if (bVar14 == 0) {
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            if ((pGVar3 == (GameObject *)0x0) ||
               (pMStack_1 = (MeshCollider *)
                             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_AddComponent_1
                                       (pGVar3,
                                        UnityEngine__MeshCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshCollider>__
                                       ), pMStack_1 == (MeshCollider *)0x0)) goto code_?;
            UnityEngine.PhysicsModule.dll::UnityEngine::MeshCollider::MeshCollider_set_convex
                      (pMStack_1,0,(MethodInfo *)0x0);
          }
          if (pMStack_1 == (MeshCollider *)0x0) goto code_?;
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                    ((Collider *)pMStack_1,1,(MethodInfo *)0x0);
          pBVar13 = (BoxCollider *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              (this_00,
                               UnityEngine__BoxCollider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::BoxCollider>__
                              );
          if (pBVar13 == (BoxCollider *)0x0) goto code_?;
          pVVar18 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                              ((Vector3 *)&stack0xffffff94,pBVar13,(MethodInfo *)0x0);
          uVar19 = pVVar18->x;
          uVar20 = pVVar18->y;
          fVar21 = (float)uVar19 * _UNK_?;
          fVar22 = (float)uVar20 * _UNK_?;
          fVar23 = pVVar18->z * _UNK_?;
          value_00.y = fVar22;
          value_00.x = fVar21;
          value_00.z = fVar23;
          UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_size
                    (pBVar13,value_00,(MethodInfo *)0x0);
          pVVar18 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                              ((Vector3 *)&stack0xffffff88,pBVar13,(MethodInfo *)0x0);
          uVar24 = pVVar18->x;
          uVar25 = pVVar18->y;
          fVar26 = pVVar18->z - fVar23;
          fVar27 = (float)uVar24 - fVar21;
          if (fStack_4 < (float)uVar24 - fVar21) {
            fVar27 = fStack_4;
          }
          fStack_4 = fVar27;
          fVar27 = (float)uVar25 - fVar22;
          if (fStack_5 < (float)uVar25 - fVar22) {
            fVar27 = fStack_5;
          }
          fStack_5 = fVar27;
          if (fStack_6 < fVar26) {
            fVar26 = fStack_6;
          }
          fStack_6 = fVar26;
          pVVar18 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                              ((Vector3 *)&stack0xffffff7c,pBVar13,(MethodInfo *)0x0);
          uVar28 = pVVar18->x;
          uVar29 = pVVar18->y;
          fVar23 = pVVar18->z + fVar23;
          fVar26 = (float)uVar28 + fVar21;
          if ((float)uVar28 + fVar21 < fStack_7) {
            fVar26 = fStack_7;
          }
          fStack_7 = fVar26;
          fVar26 = (float)uVar29 + fVar22;
          if ((float)uVar29 + fVar22 < fStack_8) {
            fVar26 = fStack_8;
          }
          fStack_8 = fVar26;
          if (fStack_9 <= fVar23) {
            uVar11 = uVar11 + 1;
            ppOVar12 = ppOVar12 + 1;
            fStack_9 = fVar23;
          }
          else {
            uVar11 = uVar11 + 1;
            ppOVar12 = ppOVar12 + 1;
          }
        }
        pMVar15 = (this->fields)._._._.owner;
        if (pMVar15 != (MVPickupOwner *)0x0) {
          pMVar16 = (MVAvatarLocal *)(pMVar15->fields)._.worldObjectParent;
          if (pMVar16 == (MVAvatarLocal *)0x0) {
            return;
          }
          if ((pMVar16->klass->_1).naturalAligment < (TypeInfo__MVAvatarLocal->_1).naturalAligment)
          {
            return;
          }
          if ((MVAvatarLocal__Class *)
              (pMVar16->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1]
              != TypeInfo__MVAvatarLocal) {
            return;
          }
          pBVar13 = (this->fields).costumeTriggerCollider;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                             ((Object_1 *)pBVar13,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar14 != 0) {
            pCVar17 = MVAvatarLocal::MVAvatarLocal_get_TriggingColliders(pMVar16,(MethodInfo *)0x0);
            if (pCVar17 == (ColliderCollection *)0x0) goto code_?;
            Assets::Scripts::Tools::ColliderCollection::ColliderCollection_RemoveCollider
                      (pCVar17,(Collider *)(this->fields).costumeTriggerCollider,(MethodInfo *)0x0);
            pBVar13 = (this->fields).costumeTriggerCollider;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pBVar13,(MethodInfo *)0x0);
          }
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            pBVar13 = (BoxCollider *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar3,
                                 UnityEngine__BoxCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::BoxCollider>__
                                );
            (this->fields).costumeTriggerCollider = pBVar13;
            func_?(&(this->fields).costumeTriggerCollider);
            pGVar3 = (this->fields)._.cubeModelObject;
            if ((pGVar3 != (GameObject *)0x0) &&
               (pTVar30 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar3,(MethodInfo *)0x0),
               pTVar30 != (Transform *)0x0)) {
              pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                                  ((Vector3 *)&stack0xffffff7c,pTVar30,(MethodInfo *)0x0);
              fVar26 = pVVar18->x;
              pTVar30 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this,(MethodInfo *)0x0);
              if (pTVar30 != (Transform *)0x0) {
                fStack_7 = fStack_7 - fStack_4;
                fStack_8 = fStack_8 - fStack_5;
                fStack_9 = fStack_9 - fStack_6;
                pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_lossyScale
                                    ((Vector3 *)&stack0xffffff7c,pTVar30,(MethodInfo *)0x0);
                fVar26 = fVar26 / pVVar18->x;
                pBVar13 = (this->fields).costumeTriggerCollider;
                if (pBVar13 != (BoxCollider *)0x0) {
                  value.y = fVar26 * fStack_8;
                  value.x = fVar26 * fStack_7;
                  value.z = fVar26 * fStack_9;
                  UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_size
                            (pBVar13,value,(MethodInfo *)0x0);
                  pBVar13 = (this->fields).costumeTriggerCollider;
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (pBVar13 != (BoxCollider *)0x0) {
                    UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_center
                              (pBVar13,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                               (MethodInfo *)0x0);
                    pBVar13 = (this->fields).costumeTriggerCollider;
                    if (pBVar13 != (BoxCollider *)0x0) {
                      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_isTrigger
                                ((Collider *)pBVar13,1,(MethodInfo *)0x0);
                      pBVar13 = (this->fields).costumeTriggerCollider;
                      if (pBVar13 != (BoxCollider *)0x0) {
                        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                                  ((Collider *)pBVar13,1,(MethodInfo *)0x0);
                        pCVar17 = MVAvatarLocal::MVAvatarLocal_get_TriggingColliders
                                            (pMVar16,(MethodInfo *)0x0);
                        if (pCVar17 != (ColliderCollection *)0x0) {
                          Assets::Scripts::Tools::ColliderCollection::
                          ColliderCollection_SetActiveCollider
                                    (pCVar17,(Collider *)(this->fields).costumeTriggerCollider,
                                     (MethodInfo *)0x0);
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
code_?:
  func_?();
  pMVar16 = extraout_EDX;
code_?:
  func_?(pMVar16);
code_?:
  func_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnFire
               (PickupItemCostume *this,bool isLocal,MethodInfo *method)

{
  (this->fields)._._.isFiring = 0;
  return;
}


/* Void OnHealthStateChanged() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnHealthStateChanged
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._.owner;
  if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
  this_00 = (MVAvatarLocal *)(pMVar1->fields)._.worldObjectParent;
  if (this_00 != (MVAvatarLocal *)0x0) {
    if (((TypeInfo__MVAvatarLocal->_1).naturalAligment <= (this_00->klass->_1).naturalAligment) &&
       ((MVAvatarLocal__Class *)
        (this_00->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] ==
        TypeInfo__MVAvatarLocal)) {
      iVar2 = (this_00->fields).defaultBaseMaxHealth;
      pPVar3 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar3 == (PickupItemCostume_CostumeConfiguration *)0x0) {
code_?:
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (iVar2 != (int)(pPVar3->fields).health) {
        pPVar3 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
        if (pPVar3 == (PickupItemCostume_CostumeConfiguration *)0x0) goto code_?;
        MVAvatarLocal::MVAvatarLocal_set_BaseMaxHealth
                  (this_00,(int)(pPVar3->fields).health,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void OnSpeedStateChanged() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnSpeedStateChanged
               (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    pMVar2 = (pMVar1->fields)._.worldObjectParent;
    if (((pMVar2 == (MVWorldObjectClient *)0x0) ||
        ((pMVar2->klass->_1).naturalAligment < (TypeInfo__MVAvatarLocal->_1).naturalAligment)) ||
       ((MVAvatarLocal__Class *)
        (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] !=
        TypeInfo__MVAvatarLocal)) {
      return;
    }
    pSVar3 = pMVar2[1].fields.name;
    if (pSVar3 != (String *)0x0) {
      pSVar4 = pSVar3[3].klass;
      pPVar5 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar5 != (PickupItemCostume_CostumeConfiguration *)0x0) {
        if ((float)pSVar4 == (float)(int)(pPVar5->fields).movementSpeed) {
          return;
        }
        this_00 = (AvatarMotor *)pMVar2[1].fields.name;
        pPVar5 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
        if ((pPVar5 != (PickupItemCostume_CostumeConfiguration *)0x0) &&
           (this_00 != (AvatarMotor *)0x0)) {
          AvatarMotor::AvatarMotor_set_WalkSpeedBase
                    (this_00,(float)(int)(pPVar5->fields).movementSpeed,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnStateChanged
               (PickupItemCostume *this,Dictionary_2_System_Object_System_Object_ *newState,
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
  itemData = (Dictionary_2_System_Object_System_Object_ *)
             Extensions::Extensions_GetValueOrDefault_3
                       (newState,StringLiteral_itemData,(Object *)0x0,
                        System__Collections__Generic__Dictionary<System::Object,_System::Object>_MethodInfo__Extensions__GetValueOrDefault<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                       );
  if ((itemData == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (bVar1 = PickupItemEditable::PickupItemEditable_IsSamePickupItem
                        ((PickupItemEditable *)unaff_ESI,itemData,(MethodInfo *)0x0), bVar1 != 0)) {
    return;
  }
  (*(code *)(unaff_ESI->klass->vtable).SetConfiguration.method)();
  PickupItemEditable::PickupItemEditable_OnCubeModelStateChanged
            ((PickupItemEditable *)unaff_ESI,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = (unaff_ESI->fields)._._._.owner;
  if (pMVar2 != (MVPickupOwner *)0x0) {
    this_00 = (MVAvatarLocal *)(pMVar2->fields)._.worldObjectParent;
    if (((this_00 != (MVAvatarLocal *)0x0) &&
        ((TypeInfo__MVAvatarLocal->_1).naturalAligment <= (this_00->klass->_1).naturalAligment)) &&
       ((MVAvatarLocal__Class *)
        (this_00->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] ==
        TypeInfo__MVAvatarLocal)) {
      iVar3 = (this_00->fields).defaultBaseMaxHealth;
      pPVar4 = PickupItemCostume_get_Configuration(unaff_ESI,(MethodInfo *)0x0);
      if (pPVar4 == (PickupItemCostume_CostumeConfiguration *)0x0) goto code_?;
      if (iVar3 != (int)(pPVar4->fields).health) {
        pPVar4 = PickupItemCostume_get_Configuration(unaff_ESI,(MethodInfo *)0x0);
        if (pPVar4 == (PickupItemCostume_CostumeConfiguration *)0x0) goto code_?;
        MVAvatarLocal::MVAvatarLocal_set_BaseMaxHealth
                  (this_00,(int)(pPVar4->fields).health,(MethodInfo *)0x0);
      }
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar2 = (unaff_ESI->fields)._._._.owner;
    if (pMVar2 != (MVPickupOwner *)0x0) {
      pMVar5 = (pMVar2->fields)._.worldObjectParent;
      if (((pMVar5 == (MVWorldObjectClient *)0x0) ||
          ((pMVar5->klass->_1).naturalAligment < (TypeInfo__MVAvatarLocal->_1).naturalAligment)) ||
         ((MVAvatarLocal__Class *)
          (pMVar5->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] !=
          TypeInfo__MVAvatarLocal)) goto code_?;
      pSVar6 = pMVar5[1].fields.name;
      if (pSVar6 != (String *)0x0) {
        pSVar7 = pSVar6[3].klass;
        pPVar4 = PickupItemCostume_get_Configuration(unaff_ESI,(MethodInfo *)0x0);
        if (pPVar4 != (PickupItemCostume_CostumeConfiguration *)0x0) {
          if ((float)pSVar7 != (float)(int)(pPVar4->fields).movementSpeed) {
            this_01 = (AvatarMotor *)pMVar5[1].fields.name;
            pPVar4 = PickupItemCostume_get_Configuration(unaff_ESI,(MethodInfo *)0x0);
            if ((pPVar4 == (PickupItemCostume_CostumeConfiguration *)0x0) ||
               (this_01 == (AvatarMotor *)0x0)) goto code_?;
            AvatarMotor::AvatarMotor_set_WalkSpeedBase
                      (this_01,(float)(int)(pPVar4->fields).movementSpeed,(MethodInfo *)0x0);
          }
code_?:
          PickupItemCostume_OnArcTrailStateChanged(unaff_ESI,(MethodInfo *)0x0);
          PickupItemCostume_OnCollisionStateChanged(unaff_ESI,(MethodInfo *)0x0);
          PickupItemCostume_OnAvatarInvisibleStateChanged(unaff_ESI,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetAvatarInvisibility(Boolean, MVAvatar) */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_SetAvatarInvisibility
               (PickupItemCostume *this,bool isInvisible,MVAvatar *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarUIHandlerRemote);
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    func_?(&TypeInfo__MVAvatarRemote);
    func_?(&StringLiteral_Default);
    cRam_? = '\x01';
  }
  if ((avatar == (MVAvatar *)0x0) || (pMVar1 = (avatar->fields).body, pMVar1 == (MVBody *)0x0)) {
code_?:
    func_?();
  }
  else {
    MVBody::MVBody_set_ForceHidden(pMVar1,isInvisible,(MethodInfo *)0x0);
    pMVar1 = (avatar->fields).body;
    if ((pMVar1 == (MVBody *)0x0) ||
       (this_03 = MVBody::MVBody_get_BlobShadow(pMVar1,(MethodInfo *)0x0),
       this_03 == (AvatarBlobShadowController *)0x0)) goto code_?;
    AvatarBlobShadowController::AvatarBlobShadowController_set_ForceHidden
              (this_03,isInvisible,(MethodInfo *)0x0);
    if (((avatar->klass->_1).naturalAligment < (TypeInfo__MVAvatarRemote->_1).naturalAligment) ||
       ((MVAvatarRemote__Class *)
        (avatar->klass->_1).typeHierarchy[(TypeInfo__MVAvatarRemote->_1).naturalAligment - 1] !=
        TypeInfo__MVAvatarRemote)) {
code_?:
      if (isInvisible == 0) {
        return;
      }
      this_00 = (this->fields)._.cubeModelParent;
      if (this_00 != (Transform *)0x0) {
        this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                  Component_GetComponentsInChildren
                            ((Component *)this_00,
                             UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                            );
        avatar = (MVAvatar *)0x0;
        if (this_06 != (Object__Array *)0x0) {
          ppOVar2 = this_06->vector;
          for (; (int)avatar < (int)this_06->max_length;
              avatar = (MVAvatar *)((int)&((Il2CppClass_0 *)&avatar->klass)->image + 1)) {
            if ((MVAvatar *)this_06->max_length <= avatar) goto code_?;
            this_01 = (Renderer *)*ppOVar2;
            if (this_01 == (Renderer *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                      (this_01,1,(MethodInfo *)0x0);
            this_06 = (Object__Array *)
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_01,(MethodInfo *)0x0);
            value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                              (StringLiteral_Default,(MethodInfo *)0x0);
            if (this_06 == (Object__Array *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                      ((GameObject *)this_06,value,(MethodInfo *)0x0);
            ppOVar2 = ppOVar2 + 1;
          }
          this_02 = (this->fields).trailRenderer;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__PickupItemCostume__CostumeConfiguration);
            cRam_? = '\x01';
          }
          pPVar3 = (this->fields)._._Configuration_k__BackingField;
          avatar = (MVAvatar *)TypeInfo__PickupItemCostume__CostumeConfiguration;
          if (pPVar3 != (PickupItemEditable_EditableItemConfiguration *)0x0) {
            if (((pPVar3->klass->_1).naturalAligment <
                 (TypeInfo__PickupItemCostume__CostumeConfiguration->_1).naturalAligment) ||
               ((pPVar3->klass->_1).typeHierarchy
                [(TypeInfo__PickupItemCostume__CostumeConfiguration->_1).naturalAligment - 1] !=
                (Il2CppClass *)TypeInfo__PickupItemCostume__CostumeConfiguration))
            goto code_?;
            if (this_02 != (TrailRenderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                        ((Renderer *)this_02,*(bool *)((int)&pPVar3[1].fields.cubeModelId + 2),
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_04 == (MVNetworkGame *)0x0) ||
       (this_05 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_04,(MethodInfo *)0x0),
       this_05 == (MVLocalPlayer *)0x0)) goto code_?;
    isFriendly = MVPlayer::MVPlayer_IsOnSameTeam_1
                           ((MVPlayer *)this_05,(MVWorldObjectClient *)avatar,(MethodInfo *)0x0);
    pAVar4 = (avatar->fields).avatar;
    avatar = (MVAvatar *)0x0;
    if ((pAVar4 == (Avatar *)0x0) ||
       (avatar = (MVAvatar *)(pAVar4->fields).avatarUIHandler, avatar == (MVAvatar *)0x0))
    goto code_?;
    if (((TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment <=
         (((AvatarUIHandlerRemote__Class *)((Il2CppClass_0 *)&avatar->klass)->image)->_1).
         naturalAligment) &&
       ((((AvatarUIHandlerRemote__Class *)((Il2CppClass_0 *)&avatar->klass)->image)->_1).
        typeHierarchy[(TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
      AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_ForceHideUI
                ((AvatarUIHandlerRemote *)avatar,(isFriendly ^ 1) & isInvisible,(MethodInfo *)0x0);
      AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetHealthBarColor
                ((AvatarUIHandlerRemote *)avatar,isFriendly,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pPVar3 = extraout_EDX;
code_?:
  func_?(pPVar3,avatar);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetConfiguration(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_SetConfiguration
               (PickupItemCostume *this,Dictionary_2_System_Object_System_Object_ *itemData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                   );
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
    func_?(&StringLiteral_TrailEnabled);
    func_?(&StringLiteral_CubeModelId);
    func_?(&StringLiteral_TrailLength);
    func_?(&StringLiteral_PlayersCanCollide);
    func_?(&StringLiteral_TrailColor);
    func_?(&StringLiteral_PlayerInvisible);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_Health);
    func_?(&StringLiteral_MovementSpeed);
    cRam_? = '\x01';
  }
  pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
  pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
    IVar3 = (pPVar2->fields)._.cubeModelId;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    IVar3 = Extensions::Extensions_GetValueOrDefault_2
                      (itemData,StringLiteral_CubeModelId,IVar3,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
      (pPVar1->fields)._.cubeModelId = IVar3;
      pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
      pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
        pSVar4 = (String *)
                 Extensions::Extensions_GetValueOrDefault_3
                           (itemData,StringLiteral_Name,(Object *)(pPVar2->fields)._.name,
                            System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                           );
        if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
          (pPVar1->fields)._.name = pSVar4;
          func_?();
          pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
          pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
          if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
            fVar5 = Extensions::Extensions_GetValueOrDefault_4
                               (itemData,StringLiteral_Health,(pPVar2->fields).health,
                                float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                               );
            if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
              (pPVar1->fields).health = fVar5;
              pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
              pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
              if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                   (itemData,StringLiteral_MovementSpeed,
                                    (pPVar2->fields).movementSpeed,
                                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                   );
                if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                  (pPVar1->fields).movementSpeed = fVar5;
                  pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                  pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                  if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                    fVar5 = Extensions::Extensions_GetValueOrDefault_4
                                       (itemData,StringLiteral_TrailLength,
                                        (pPVar2->fields).trailLength,
                                        float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                       );
                    if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                      (pPVar1->fields).trailLength = fVar5;
                      pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                      pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                      if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                        bVar6 = Extensions::Extensions_GetValueOrDefault
                                          (itemData,StringLiteral_PlayerInvisible,
                                           (pPVar2->fields).isPlayerInvisible,
                                           bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                          );
                        if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                          (pPVar1->fields).isPlayerInvisible = bVar6;
                          pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                          pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                          if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                            bVar6 = Extensions::Extensions_GetValueOrDefault
                                              (itemData,StringLiteral_PlayersCanCollide,
                                               (pPVar2->fields).playersCanCollide,
                                               bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                              );
                            if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                              (pPVar1->fields).playersCanCollide = bVar6;
                              pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                              pPVar2 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
                              if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                                bVar6 = Extensions::Extensions_GetValueOrDefault
                                                  (itemData,StringLiteral_TrailEnabled,
                                                   (pPVar2->fields).isTrailEnabled,
                                                                                                      
                                                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                                  );
                                if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                                  (pPVar1->fields).isTrailEnabled = bVar6;
                                  pPVar1 = PickupItemCostume_get_Configuration
                                                     (this,(MethodInfo *)0x0);
                                  pPVar2 = PickupItemCostume_get_Configuration
                                                     (this,(MethodInfo *)0x0);
                                  if (pPVar2 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                                    pCVar7 = Extensions::Extensions_GetColorOrDefault
                                                       ((Color *)&stack0xffffffec,itemData,
                                                        StringLiteral_TrailColor,
                                                        (pPVar2->fields).trailColor,
                                                        (MethodInfo *)0x0);
                                    fVar5 = pCVar7->g;
                                    fVar8 = pCVar7->b;
                                    fVar9 = pCVar7->a;
                                    if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
                                      (pPVar1->fields).trailColor.r = pCVar7->r;
                                      (pPVar1->fields).trailColor.g = fVar5;
                                      (pPVar1->fields).trailColor.b = fVar8;
                                      (pPVar1->fields).trailColor.a = fVar9;
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
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* PickupItemCostume() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume__ctor
               (PickupItemCostume *this,MethodInfo *method)

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


/* PickupItemCostume+CostumeConfiguration get_Configuration() */

PickupItemCostume_CostumeConfiguration *
Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_get_Configuration
          (PickupItemCostume *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupItemCostume__CostumeConfiguration);
    cRam_? = '\x01';
  }
  pPVar1 = (PickupItemCostume_CostumeConfiguration *)(this->fields)._._Configuration_k__BackingField
  ;
  if (pPVar1 == (PickupItemCostume_CostumeConfiguration *)0x0) {
    return (PickupItemCostume_CostumeConfiguration *)0x0;
  }
  if (((TypeInfo__PickupItemCostume__CostumeConfiguration->_1).naturalAligment <=
       (pPVar1->klass->_1).naturalAligment) &&
     ((pPVar1->klass->_1).typeHierarchy
      [(TypeInfo__PickupItemCostume__CostumeConfiguration->_1).naturalAligment - 1] ==
      (Il2CppClass *)TypeInfo__PickupItemCostume__CostumeConfiguration)) {
    return pPVar1;
  }
  func_?(pPVar1,TypeInfo__PickupItemCostume__CostumeConfiguration);
  pcVar2 = (code *)swi(3);
  pPVar1 = (PickupItemCostume_CostumeConfiguration *)(*pcVar2)();
  return pPVar1;
}


/* Color get_TrailColor() */

Color * Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_get_TrailColor
                  (Color *__return_storage_ptr__,PickupItemCostume *this,MethodInfo *method)

{
  pPVar1 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
  if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
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

