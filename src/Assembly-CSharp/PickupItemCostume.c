
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
  if (this_00 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) {
    PickupItemMeleeWeapon+MeleeWeaponConfiguration::
    PickupItemMeleeWeapon_MeleeWeaponConfiguration__ctor(this_00,(MethodInfo *)0x0);
    if ((TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar1 = (String *)
             Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultValue
                       (StringLiteral_Name,(MethodInfo *)0x0);
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
    if ((pMVar2->klass->_1).typeHierarchyDepth < (TypeInfo__MVAvatar->_1).typeHierarchyDepth) {
      return;
    }
    if ((MVAvatar__Class *)
        (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVAvatar->_1).typeHierarchyDepth - 1] !=
        TypeInfo__MVAvatar) {
      return;
    }
    pPVar3 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar3 != (PickupItemCostume_CostumeConfiguration *)0x0) {
      if ((pPVar3->fields).isPlayerInvisible != 0) {
        PickupItemCostume_SetAvatarInvisibility(this,0,(MVAvatar *)pMVar2,(MethodInfo *)0x0);
      }
      if ((pMVar2->klass->_1).typeHierarchyDepth < (TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth)
      {
        return;
      }
      if ((MVAvatarLocal__Class *)
          (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1] !=
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
            source = (this->fields)._.cubeModelObject;
            if (source != (GameObject *)0x0) {
              pIVar4 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                 ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                                  UnityEngine__MeshCollider__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshCollider>______
                                 );
              pMVar5 = (MonitorData *)0x0;
              if (pIVar4 != (IEnumerable_1_System_Object_ *)0x0) {
                pIVar6 = pIVar4 + 2;
                for (; (int)pMVar5 < (int)pIVar4[1].monitor; pMVar5 = pMVar5 + 1) {
                  if (pIVar4[1].monitor <= pMVar5) goto code_?;
                  if (pIVar6->klass == (IEnumerable_1_System_Object___Class *)0x0)
                  goto code_?;
                  UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                            ((Collider *)pIVar6->klass,0,(MethodInfo *)0x0);
                  pIVar6 = (IEnumerable_1_System_Object_ *)&pIVar6->monitor;
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
                  if (((pMVar2->klass->_1).typeHierarchyDepth <
                       (TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth) ||
                     ((MVAvatarLocal__Class *)
                      (pMVar2->klass->_1).typeHierarchy
                      [(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1] !=
                      TypeInfo__MVAvatarLocal)) goto code_?;
                  this_01 = MVAvatarLocal::MVAvatarLocal_get_TriggingColliders
                                      (pMVar2,(MethodInfo *)0x0);
                  if (this_01 != (ColliderCollection *)0x0) {
                    Assets::Scripts::Tools::ColliderCollection::ColliderCollection_RemoveCollider
                              (this_01,(Collider *)(this->fields).costumeTriggerCollider,
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
        if (this_00 != (Gradient *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient__ctor
                    (this_00,(MethodInfo *)0x0);
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
              UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_set_alphaKeys
                        (this_00,value,(MethodInfo *)0x0);
              value_00 = (GradientColorKey__Array *)
                         func_?(TypeInfo__UnityEngine__GradientColorKey,2);
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
                    UnityEngine.CoreModule.dll::UnityEngine::GradientColorKey::
                    GradientColorKey__ctor
                              ((GradientColorKey *)&stack0xffffffb4,(pPVar2->fields).trailColor,1.0,
                               (MethodInfo *)0x0);
                    if (value_00->max_length < 2) goto code_?;
                    value_00->vector[1].color.r = fVar3;
                    value_00->vector[1].color.g = 0.0;
                    value_00->vector[1].color.b = fVar8;
                    value_00->vector[1].color.a = fVar9;
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnAvatarInvisibleStateChanged() */

void Assembly-CSharp.dll::PickupItemCostume::PickupItemCostume_OnAvatarInvisibleStateChanged
               (PickupItemCostume *this,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatar);
    cRam_? = '\x01';
  }
  pMVar2 = (this->fields)._._._.owner;
  wo = (PickupItemCostume_CostumeConfiguration__Class *)0x0;
  if (pMVar2 == (MVPickupOwner *)0x0) {
code_?:
    func_?();
    pAVar3 = extraout_EDX;
  }
  else {
    wo = (PickupItemCostume_CostumeConfiguration__Class *)(pMVar2->fields)._.worldObjectParent;
    if (wo == (PickupItemCostume_CostumeConfiguration__Class *)0x0) {
      return;
    }
    pMVar4 = (MVWorldObjectClient__Class *)(wo->_0).image;
    if ((pMVar4->_1).typeHierarchyDepth < (TypeInfo__MVAvatar->_1).typeHierarchyDepth) {
      return;
    }
    if ((MVAvatar__Class *)
        (pMVar4->_1).typeHierarchy[(TypeInfo__MVAvatar->_1).typeHierarchyDepth - 1] !=
        TypeInfo__MVAvatar) {
      return;
    }
    pPVar5 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
    if (pPVar5 == (PickupItemCostume_CostumeConfiguration *)0x0) goto code_?;
    bVar6 = (pPVar5->fields).isPlayerInvisible;
    value_00 = bVar6;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__AvatarUIHandlerRemote);
      func_?(&
                      UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                     );
      func_?(&TypeInfo__MVAvatarRemote);
      func_?(&StringLiteral_Default);
      cRam_? = '\x01';
    }
    pMVar7 = wo[1]._1.unity_user_data;
    if (pMVar7 == (MVBody *)0x0) goto code_?;
    MVBody::MVBody_set_ForceHidden(pMVar7,value_00,(MethodInfo *)0x0);
    pMVar7 = wo[1]._1.unity_user_data;
    if ((pMVar7 == (MVBody *)0x0) ||
       (this_02 = MVBody::MVBody_get_BlobShadow(pMVar7,(MethodInfo *)0x0),
       this_02 == (AvatarBlobShadowController *)0x0)) goto code_?;
    this = (PickupItemCostume *)0x0;
    AvatarBlobShadowController::AvatarBlobShadowController_set_ForceHidden
              (this_02,(bool)pMVar7,(MethodInfo *)0x0);
    if (((((MVWorldObjectClient__Class *)(wo->_0).image)->_1).typeHierarchyDepth <
         (TypeInfo__MVAvatarRemote->_1).typeHierarchyDepth) ||
       ((MVAvatarRemote__Class *)
        (((MVWorldObjectClient__Class *)(wo->_0).image)->_1).typeHierarchy
        [(TypeInfo__MVAvatarRemote->_1).typeHierarchyDepth - 1] != TypeInfo__MVAvatarRemote)) {
code_?:
      if (bVar6 == 0) {
        return;
      }
      source = (pPVar1->fields)._.cubeModelParent;
      if (source != (Transform *)0x0) {
        pIVar8 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                           ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                            UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                           );
        wo = (PickupItemCostume_CostumeConfiguration__Class *)0x0;
        if (pIVar8 != (IEnumerable_1_System_Object_ *)0x0) {
          pIVar9 = pIVar8 + 2;
          for (; (int)wo < (int)pIVar8[1].monitor;
              wo = (PickupItemCostume_CostumeConfiguration__Class *)((int)&(wo->_0).image + 1)) {
            if ((PickupItemCostume_CostumeConfiguration__Class *)pIVar8[1].monitor <= wo)
            goto code_?;
            this_00 = pIVar9->klass;
            if (this_00 == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                      ((Renderer *)this_00,1,(MethodInfo *)0x0);
            this = (PickupItemCostume *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0);
            value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                              (StringLiteral_Default,(MethodInfo *)0x0);
            if (this == (PickupItemCostume *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                      ((GameObject *)this,value,(MethodInfo *)0x0);
            pIVar9 = (IEnumerable_1_System_Object_ *)&pIVar9->monitor;
          }
          this_01 = (this->fields).trailRenderer;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__PickupItemCostume__CostumeConfiguration);
            cRam_? = '\x01';
          }
          pPVar10 = (this->fields)._._Configuration_k__BackingField;
          wo = TypeInfo__PickupItemCostume__CostumeConfiguration;
          if (pPVar10 != (PickupItemEditable_EditableItemConfiguration *)0x0) {
            if (((pPVar10->klass->_1).typeHierarchyDepth <
                 (TypeInfo__PickupItemCostume__CostumeConfiguration->_1).typeHierarchyDepth) ||
               ((pPVar10->klass->_1).typeHierarchy
                [(TypeInfo__PickupItemCostume__CostumeConfiguration->_1).typeHierarchyDepth - 1] !=
                (Il2CppClass *)TypeInfo__PickupItemCostume__CostumeConfiguration))
            goto code_?;
            if (this_01 != (TrailRenderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                        ((Renderer *)this_01,*(bool *)((int)&pPVar10[1].fields.cubeModelId + 2),
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_03 == (MVNetworkGame *)0x0) ||
       (this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0),
       this_04 == (MVLocalPlayer *)0x0)) goto code_?;
    isFriendly = MVPlayer::MVPlayer_IsOnSameTeam_1
                           ((MVPlayer *)this_04,(MVWorldObjectClient *)wo,(MethodInfo *)0x0);
    iVar11 = (((MVWorldObjectClient__Fields *)&wo[1]._0.gc_desc)->_).id;
    wo = (PickupItemCostume_CostumeConfiguration__Class *)0x0;
    if ((iVar11 == 0) ||
       (wo = *(PickupItemCostume_CostumeConfiguration__Class **)(iVar11 + 0x40),
       wo == (PickupItemCostume_CostumeConfiguration__Class *)0x0)) goto code_?;
    pAVar3 = TypeInfo__AvatarUIHandlerRemote;
    if (((TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth <=
         (((MVWorldObjectClient__Class *)(wo->_0).image)->_1).typeHierarchyDepth) &&
       ((((MVWorldObjectClient__Class *)(wo->_0).image)->_1).typeHierarchy
        [(TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
      AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_ForceHideUI
                ((AvatarUIHandlerRemote *)wo,isFriendly == 0 & bVar6,(MethodInfo *)0x0);
      AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetHealthBarColor
                ((AvatarUIHandlerRemote *)wo,isFriendly,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  func_?(wo,pAVar3);
code_?:
  func_?();
  pPVar10 = extraout_EDX_00;
code_?:
  func_?(pPVar10,wo);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
    uStack_8 = 0;
    uStack_9 = 0;
    uStack_10 = 0;
    fStack_11 = _UNK_?;
    fStack_12 = _UNK_?;
    if ((pPVar2->fields).playersCanCollide == 0) {
      if (pGVar3 != (GameObject *)0x0) {
        pBStack_13 = (BoxCollider *)
                     Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                               ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar3,
                                UnityEngine__MeshCollider__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshCollider>______
                               );
        pBVar14 = (BoxCollider__Class *)0x0;
        if (pBStack_13 != (BoxCollider *)0x0) {
          pBVar15 = pBStack_13 + 1;
          for (; pBVar15 = (BoxCollider *)&pBVar15->monitor, (int)pBVar14 < (int)pBStack_13[1].klass;
              pBVar14 = (BoxCollider__Class *)((int)&(pBVar14->_0).image + 1)) {
            if (pBStack_13[1].klass <= pBVar14) goto code_?;
            if (*(Collider **)pBVar15 == (Collider *)0x0) goto code_?;
            UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                      (*(Collider **)pBVar15,0,(MethodInfo *)0x0);
          }
          pBVar15 = (this->fields).costumeTriggerCollider;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar16 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pBVar15,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar16 == 0) {
            return;
          }
          pMVar17 = (this->fields)._._._.owner;
          if ((pMVar17 != (MVPickupOwner *)0x0) &&
             (pMVar18 = (MVAvatarLocal *)(pMVar17->fields)._.worldObjectParent,
             pMVar18 != (MVAvatarLocal *)0x0)) {
            if (((pMVar18->klass->_1).typeHierarchyDepth <
                 (TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth) ||
               ((MVAvatarLocal__Class *)
                (pMVar18->klass->_1).typeHierarchy
                [(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1] != TypeInfo__MVAvatarLocal))
            goto code_?;
            pCVar19 = MVAvatarLocal::MVAvatarLocal_get_TriggingColliders(pMVar18,(MethodInfo *)0x0);
            if (pCVar19 != (ColliderCollection *)0x0) {
              Assets::Scripts::Tools::ColliderCollection::ColliderCollection_RemoveCollider
                        (pCVar19,(Collider *)(this->fields).costumeTriggerCollider,(MethodInfo *)0x0)
              ;
              pBVar15 = (this->fields).costumeTriggerCollider;
              if (pBVar15 != (BoxCollider *)0x0) {
                UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                          ((Collider *)pBVar15,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else if (pGVar3 != (GameObject *)0x0) {
      pBStack_20 = (BoxCollider *)
                   Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                             ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar3,
                              UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                             );
      pBVar14 = (BoxCollider__Class *)0x0;
      if (pBStack_20 != (BoxCollider *)0x0) {
        pBStack_13 = pBStack_20 + 1;
        for (; pBStack_13 = (BoxCollider *)&pBStack_13->monitor,
            (int)pBVar14 < (int)pBStack_20[1].klass;
            pBVar14 = (BoxCollider__Class *)((int)&(pBVar14->_0).image + 1)) {
          if (pBStack_20[1].klass <= pBVar14) goto code_?;
          this_00 = *(Component **)pBStack_13;
          if (this_00 == (Component *)0x0) goto code_?;
          bVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_TryGetComponent
                            (this_00,(Object **)&pMStack_1,
                             bool_MethodInfo__UnityEngine__Component__TryGetComponent<UnityEngine::MeshCollider>_UnityEngine__MeshCollider__
                            );
          if (bVar16 == 0) {
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
          pBVar15 = (BoxCollider *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                             (this_00,
                              UnityEngine__BoxCollider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::BoxCollider>__
                             );
          if (pBVar15 == (BoxCollider *)0x0) goto code_?;
          pVVar21 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
                             ((Vector3 *)&stack0xffffff18,pBVar15,(MethodInfo *)0x0);
          uStack_22._0_4_ = pVVar21->x;
          uStack_22._4_4_ = pVVar21->y;
          fStack_23 = pVVar21->z;
          fStack_24 = fStack_23 * _UNK_?;
          fStack_25 = (float)(undefined4)uStack_22 * _UNK_?;
          fStack_26 = (float)uStack_22._4_4_ * _UNK_?;
          value_00.y = fStack_26;
          value_00.x = fStack_25;
          value_00.z = fStack_24;
          UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_size
                    (pBVar15,value_00,(MethodInfo *)0x0);
          pVVar21 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                             ((Vector3 *)&stack0xffffff08,pBVar15,(MethodInfo *)0x0);
          uStack_27._0_4_ = pVVar21->x;
          uStack_27._4_4_ = pVVar21->y;
          fStack_28 = pVVar21->z;
          if ((float)(undefined4)uStack_27 - fStack_25 <= fStack_5) {
            fStack_5 = (float)(undefined4)uStack_27 - fStack_25;
          }
          fVar29 = fStack_4;
          if ((float)uStack_27._4_4_ - fStack_26 <= fStack_4) {
            fVar29 = (float)uStack_27._4_4_ - fStack_26;
          }
          fStack_30 = fStack_6;
          if (fStack_28 - fStack_24 <= fStack_6) {
            fStack_30 = fStack_28 - fStack_24;
          }
          uStack_31 = CONCAT44(fVar29,fStack_5);
          pVVar21 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                             (&VStack_32,pBVar15,(MethodInfo *)0x0);
          uStack_33._0_4_ = pVVar21->x;
          uStack_33._4_4_ = pVVar21->y;
          fStack_34 = pVVar21->z;
          if (fStack_7 <= (float)(undefined4)uStack_33 + fStack_25) {
            fStack_7 = (float)(undefined4)uStack_33 + fStack_25;
          }
          if (fStack_11 <= (float)uStack_33._4_4_ + fStack_26) {
            fStack_11 = (float)uStack_33._4_4_ + fStack_26;
          }
          fStack_35 = fStack_12;
          if (fStack_12 <= fStack_34 + fStack_24) {
            fStack_35 = fStack_34 + fStack_24;
          }
          uStack_36 = CONCAT44(fStack_11,fStack_7);
          fStack_6 = fStack_30;
          fStack_4 = uStack_31._4_4_;
          fStack_5 = (float)uStack_31;
          uStack_8 = 0;
          uStack_9 = 0;
          uStack_10 = 0;
          fStack_12 = fStack_35;
        }
        pMVar17 = (this->fields)._._._.owner;
        if (pMVar17 != (MVPickupOwner *)0x0) {
          pMVar18 = (MVAvatarLocal *)(pMVar17->fields)._.worldObjectParent;
          if (pMVar18 == (MVAvatarLocal *)0x0) {
            return;
          }
          if ((pMVar18->klass->_1).typeHierarchyDepth <
              (TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth) {
            return;
          }
          if ((MVAvatarLocal__Class *)
              (pMVar18->klass->_1).typeHierarchy
              [(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1] != TypeInfo__MVAvatarLocal) {
            return;
          }
          pBStack_20 = (this->fields).costumeTriggerCollider;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar16 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pBStack_20,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar16 != 0) {
            pCVar19 = MVAvatarLocal::MVAvatarLocal_get_TriggingColliders(pMVar18,(MethodInfo *)0x0);
            if (pCVar19 == (ColliderCollection *)0x0) goto code_?;
            Assets::Scripts::Tools::ColliderCollection::ColliderCollection_RemoveCollider
                      (pCVar19,(Collider *)(this->fields).costumeTriggerCollider,(MethodInfo *)0x0);
            pBStack_20 = (this->fields).costumeTriggerCollider;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)pBStack_20,(MethodInfo *)0x0);
          }
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            pBVar15 = (BoxCollider *)
                     UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                               (pGVar3,
                                UnityEngine__BoxCollider_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::BoxCollider>__
                               );
            (this->fields).costumeTriggerCollider = pBVar15;
            func_?();
            pGVar3 = (this->fields)._.cubeModelObject;
            if ((pGVar3 != (GameObject *)0x0) &&
               (pTVar37 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar3,(MethodInfo *)0x0),
               pTVar37 != (Transform *)0x0)) {
              pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                                 (&VStack_32,pTVar37,(MethodInfo *)0x0);
              pBStack_20 = (BoxCollider *)pVVar21->x;
              pTVar37 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this,(MethodInfo *)0x0);
              if (pTVar37 != (Transform *)0x0) {
                fStack_7 = fStack_7 - fStack_5;
                fStack_11 = fStack_11 - fStack_4;
                fStack_12 = fStack_12 - fStack_6;
                pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_lossyScale(&VStack_32,pTVar37,(MethodInfo *)0x0);
                fVar29 = (float)pBStack_20 / pVVar21->x;
                uStack_36 = CONCAT44(fStack_11 * fVar29,fStack_7 * fVar29);
                fStack_35 = fStack_12 * fVar29;
                pBVar15 = (this->fields).costumeTriggerCollider;
                if (pBVar15 != (BoxCollider *)0x0) {
                  value.y = fStack_11 * fVar29;
                  value.x = fStack_7 * fVar29;
                  value.z = fStack_35;
                  UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_size
                            (pBVar15,value,(MethodInfo *)0x0);
                  pBStack_20 = (this->fields).costumeTriggerCollider;
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (pBStack_20 != (BoxCollider *)0x0) {
                    UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_center
                              (pBStack_20,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                               (MethodInfo *)0x0);
                    pBVar15 = (this->fields).costumeTriggerCollider;
                    if (pBVar15 != (BoxCollider *)0x0) {
                      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_isTrigger
                                ((Collider *)pBVar15,1,(MethodInfo *)0x0);
                      pBVar15 = (this->fields).costumeTriggerCollider;
                      if (pBVar15 != (BoxCollider *)0x0) {
                        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                                  ((Collider *)pBVar15,1,(MethodInfo *)0x0);
                        pCVar19 = MVAvatarLocal::MVAvatarLocal_get_TriggingColliders
                                           (pMVar18,(MethodInfo *)0x0);
                        if (pCVar19 != (ColliderCollection *)0x0) {
                          Assets::Scripts::Tools::ColliderCollection::
                          ColliderCollection_SetActiveCollider
                                    (pCVar19,(Collider *)(this->fields).costumeTriggerCollider,
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
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
    if (((TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth <= (this_00->klass->_1).typeHierarchyDepth
        ) && ((MVAvatarLocal__Class *)
              (this_00->klass->_1).typeHierarchy
              [(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1] == TypeInfo__MVAvatarLocal)) {
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
        ((pMVar2->klass->_1).typeHierarchyDepth < (TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth))
       || ((MVAvatarLocal__Class *)
           (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1]
           != TypeInfo__MVAvatarLocal)) {
      return;
    }
    pSVar3 = pMVar2[1].fields.name;
    if (pSVar3 != (String *)0x0) {
      fVar4 = *(float *)&pSVar3[2].fields._firstChar;
      pPVar5 = PickupItemCostume_get_Configuration(this,(MethodInfo *)0x0);
      if (pPVar5 != (PickupItemCostume_CostumeConfiguration *)0x0) {
        if (fVar4 == (float)(int)(pPVar5->fields).movementSpeed) {
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
  (*(unaff_ESI->klass->vtable).SetConfiguration.methodPtr)();
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
        ((TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth <= (this_00->klass->_1).typeHierarchyDepth
        )) && ((MVAvatarLocal__Class *)
               (this_00->klass->_1).typeHierarchy
               [(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1] == TypeInfo__MVAvatarLocal)) {
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
          ((pMVar5->klass->_1).typeHierarchyDepth < (TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth
          )) || ((MVAvatarLocal__Class *)
                 (pMVar5->klass->_1).typeHierarchy
                 [(TypeInfo__MVAvatarLocal->_1).typeHierarchyDepth - 1] != TypeInfo__MVAvatarLocal))
      goto code_?;
      pSVar6 = pMVar5[1].fields.name;
      if (pSVar6 != (String *)0x0) {
        fVar7 = *(float *)&pSVar6[2].fields._firstChar;
        pPVar4 = PickupItemCostume_get_Configuration(unaff_ESI,(MethodInfo *)0x0);
        if (pPVar4 != (PickupItemCostume_CostumeConfiguration *)0x0) {
          if (fVar7 != (float)(int)(pPVar4->fields).movementSpeed) {
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
       (this_02 = MVBody::MVBody_get_BlobShadow(pMVar1,(MethodInfo *)0x0),
       this_02 == (AvatarBlobShadowController *)0x0)) goto code_?;
    AvatarBlobShadowController::AvatarBlobShadowController_set_ForceHidden
              (this_02,isInvisible,(MethodInfo *)0x0);
    if (((avatar->klass->_1).typeHierarchyDepth < (TypeInfo__MVAvatarRemote->_1).typeHierarchyDepth)
       || ((MVAvatarRemote__Class *)
           (avatar->klass->_1).typeHierarchy[(TypeInfo__MVAvatarRemote->_1).typeHierarchyDepth - 1]
           != TypeInfo__MVAvatarRemote)) {
code_?:
      if (isInvisible == 0) {
        return;
      }
      source = (this->fields)._.cubeModelParent;
      if (source != (Transform *)0x0) {
        pIVar2 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                           ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                            UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                           );
        avatar = (MVAvatar *)0x0;
        if (pIVar2 != (IEnumerable_1_System_Object_ *)0x0) {
          pIVar3 = pIVar2 + 2;
          for (; (int)avatar < (int)pIVar2[1].monitor;
              avatar = (MVAvatar *)((int)&((Il2CppClass_0 *)&avatar->klass)->image + 1)) {
            if ((MVAvatar *)pIVar2[1].monitor <= avatar) goto code_?;
            this_00 = pIVar3->klass;
            if (this_00 == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                      ((Renderer *)this_00,1,(MethodInfo *)0x0);
            this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_00,(MethodInfo *)0x0);
            this = (PickupItemCostume *)
                   UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Default,(MethodInfo *)0x0);
            if (this_05 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                      (this_05,(int32_t)this,(MethodInfo *)0x0);
            pIVar3 = (IEnumerable_1_System_Object_ *)&pIVar3->monitor;
          }
          this_01 = (this->fields).trailRenderer;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__PickupItemCostume__CostumeConfiguration);
            cRam_? = '\x01';
          }
          pPVar4 = (this->fields)._._Configuration_k__BackingField;
          avatar = (MVAvatar *)TypeInfo__PickupItemCostume__CostumeConfiguration;
          if (pPVar4 != (PickupItemEditable_EditableItemConfiguration *)0x0) {
            if (((pPVar4->klass->_1).typeHierarchyDepth <
                 (TypeInfo__PickupItemCostume__CostumeConfiguration->_1).typeHierarchyDepth) ||
               ((pPVar4->klass->_1).typeHierarchy
                [(TypeInfo__PickupItemCostume__CostumeConfiguration->_1).typeHierarchyDepth - 1] !=
                (Il2CppClass *)TypeInfo__PickupItemCostume__CostumeConfiguration))
            goto code_?;
            if (this_01 != (TrailRenderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                        ((Renderer *)this_01,*(bool *)((int)&pPVar4[1].fields.cubeModelId + 2),
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_03 == (MVNetworkGame *)0x0) ||
       (this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0),
       this_04 == (MVLocalPlayer *)0x0)) goto code_?;
    isFriendly = MVPlayer::MVPlayer_IsOnSameTeam_1
                           ((MVPlayer *)this_04,(MVWorldObjectClient *)avatar,(MethodInfo *)0x0);
    pAVar5 = (avatar->fields).avatar;
    avatar = (MVAvatar *)0x0;
    if ((pAVar5 == (Avatar *)0x0) ||
       (avatar = (MVAvatar *)(pAVar5->fields).avatarUIHandler, avatar == (MVAvatar *)0x0))
    goto code_?;
    pAVar6 = (AvatarUIHandlerRemote__Class *)((Il2CppClass_0 *)&avatar->klass)->image;
    if (((TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth <= (pAVar6->_1).typeHierarchyDepth
        ) && ((pAVar6->_1).typeHierarchy
              [(TypeInfo__AvatarUIHandlerRemote->_1).typeHierarchyDepth - 1] ==
              (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
      value = 0;
      if (isFriendly == 0) {
        value = isInvisible;
      }
      AvatarUIHandlerRemote::AvatarUIHandlerRemote_set_ForceHideUI
                ((AvatarUIHandlerRemote *)avatar,value,(MethodInfo *)0x0);
      AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetHealthBarColor
                ((AvatarUIHandlerRemote *)avatar,isFriendly,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pPVar4 = extraout_EDX;
code_?:
  func_?(pPVar4,avatar);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    iVar3 = (pPVar2->fields)._.cubeModelId;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iVar3 = Extensions::Extensions_GetValueOrDefault_1
                      (itemData,StringLiteral_CubeModelId,iVar3,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    if (pPVar1 != (PickupItemCostume_CostumeConfiguration *)0x0) {
      (pPVar1->fields)._.cubeModelId = iVar3;
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
  if (((TypeInfo__PickupItemCostume__CostumeConfiguration->_1).typeHierarchyDepth <=
       (pPVar1->klass->_1).typeHierarchyDepth) &&
     ((pPVar1->klass->_1).typeHierarchy
      [(TypeInfo__PickupItemCostume__CostumeConfiguration->_1).typeHierarchyDepth - 1] ==
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

