
/* GameObject CreatePreviewObjectClone() */

GameObject *
Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement_CreatePreviewObjectClone
          (TierUnlockedItemElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).previewObject;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    (*(code *)(pMVar1->klass->vtable).SetupTierInventory.method)
              (pMVar1,(pMVar1->klass->vtable).UnSetupTierInventory.methodPtr);
    pMVar1 = (this->fields).previewObject;
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      pCVar2 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
      if (pCVar2 != (CelestialParam *)0x0) {
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                           ((GameObject *)pCVar2,(MethodInfo *)0x0);
        pMVar1 = (this->fields).previewObject;
        if (pMVar1 != (MVWorldObjectClient *)0x0) {
          pCVar2 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                              ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
          if (pCVar2 != (CelestialParam *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      ((GameObject *)pCVar2,0,(MethodInfo *)0x0);
            bVar4 = false;
            pMVar1 = (this->fields).previewObject;
            if (pMVar1 != (MVWorldObjectClient *)0x0) {
              pCVar2 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                  ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
              if (pCVar2 != (CelestialParam *)0x0) {
                pUVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponentsInChildren_29
                                    ((GameObject *)pCVar2,
                                     GreyOutObjectScript__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<GreyOutObjectScript>______
                                    );
                uVar6 = 0;
                if (pUVar5 != (UseInteratorVisualization__Array *)0x0) {
                  ppUVar7 = pUVar5->vector;
                  ppUVar8 = ppUVar7;
                  while( true ) {
                    if ((int)pUVar5->max_length <= (int)uVar6) break;
                    if (pUVar5->max_length <= uVar6) goto code_?;
                    pUVar9 = *ppUVar8;
                    if (pUVar9 == (UseInteratorVisualization *)0x0) goto code_?;
                    uVar10 = System.Core.dll::System::Linq::
                             Enumerable+<CreateCastIterator>c__Iterator0`1[System::Byte]::
                             Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                                       ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)
                                        pUVar9,(MethodInfo *)0x0);
                    if (uVar10 == 0) {
                      GreyOutObjectScript::GreyOutObjectScript_GreyIn
                                ((GreyOutObjectScript *)pUVar9,(MethodInfo *)0x0);
                      bVar4 = true;
                    }
                    uVar6 = uVar6 + 1;
                    ppUVar8 = ppUVar8 + 1;
                  }
                  pMVar1 = (this->fields).previewObject;
                  if (pMVar1 != (MVWorldObjectClient *)0x0) {
                    pCVar2 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                        ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
                    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000
                         ) != 0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                      func_?(TypeInfo__UnityEngine__Object);
                    }
                    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_Instantiate_251
                                        ((XpBoostParticlePreviewer *)pCVar2,
                                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                        );
                    pMVar1 = (this->fields).previewObject;
                    if (pMVar1 != (MVWorldObjectClient *)0x0) {
                      pCVar2 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                          ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
                      if (pCVar2 != (CelestialParam *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  ((GameObject *)pCVar2,bVar3,(MethodInfo *)0x0);
                        pCStack_11 = (Component_1 *)0x0;
                        if (this_00 != (XpBoostParticlePreviewer *)0x0) {
                          pUVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_GetComponentsInChildren_29
                                              ((GameObject *)this_00,
                                               UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                                              );
                          uVar6 = 0;
                          if (pUVar12 != (UseInteratorVisualization__Array *)0x0) {
                            ppUVar8 = pUVar12->vector;
                            while( true ) {
                              if ((int)pUVar12->max_length <= (int)uVar6) break;
                              if (pUVar12->max_length <= uVar6) goto code_?;
                              pUVar9 = *ppUVar8;
                              if (pUVar9 == (UseInteratorVisualization *)0x0) goto code_?;
                              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                              Behaviour_set_enabled((Behaviour *)pUVar9,0,(MethodInfo *)0x0);
                              bVar13 = (TypeInfo__TintObject->_1).naturalAligment;
                              if (((((Behaviour__Class *)pUVar9->klass)->_1).naturalAligment < bVar13
                                  ) || ((((Behaviour__Class *)pUVar9->klass)->_1).typeHierarchy
                                        [bVar13 - 1] != (Il2CppClass *)TypeInfo__TintObject)) {
                                bVar14 = false;
                              }
                              else {
                                bVar14 = true;
                              }
                              pUVar15 = (UseInteratorVisualization *)0x0;
                              if (bVar14) {
                                pUVar15 = pUVar9;
                              }
                              if (pUVar15 != (UseInteratorVisualization *)0x0) {
                                iVar16 = (this->fields).team;
                                iVar17 = func_?(pUVar9,TypeInfo__TintObject);
                                if (iVar17 == 0) goto code_?;
                                uVar18 = func_?(pUVar9,TypeInfo__TintObject,iVar16);
                                func_?(5,uVar18);
                              }
                              pMVar19 = TypeInfo__MVPickupOwner;
                              iVar17 = func_?(pUVar9,TypeInfo__MVPickupOwner);
                              if (iVar17 != 0) {
                                iVar17 = func_?(pUVar9,pMVar19);
                                if (iVar17 == 0) goto code_?;
                                iVar17 = func_?(pUVar9,TypeInfo__MVPickupOwner);
                                *(undefined1 *)(iVar17 + 0xc) = 0;
                              }
                              pJVar20 = TypeInfo__JetPackVisualization;
                              iVar17 = func_?(pUVar9,TypeInfo__JetPackVisualization);
                              if (iVar17 != 0) {
                                pCStack_11 = (Component_1 *)func_?(pUVar9,pJVar20);
                              }
                              uVar6 = uVar6 + 1;
                              ppUVar8 = ppUVar8 + 1;
                            }
                            pUVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_GetComponentsInChildren_29
                                                ((GameObject *)this_00,
                                                 UnityEngine__ParticleSystem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::ParticleSystem>______
                                                );
                            uVar6 = 0;
                            if (pUVar12 != (UseInteratorVisualization__Array *)0x0) {
                              ppUVar8 = pUVar12->vector;
                              while( true ) {
                                if ((int)pUVar12->max_length <= (int)uVar6) break;
                                if (pUVar12->max_length <= uVar6) goto code_?;
                                pUVar9 = *ppUVar8;
                                if (pUVar9 == (UseInteratorVisualization *)0x0)
                                goto code_?;
                                UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                                ParticleSystem_Stop_2((ParticleSystem *)pUVar9,(MethodInfo *)0x0);
                                pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_1_get_gameObject
                                                    ((Component_1 *)pUVar9,(MethodInfo *)0x0);
                                if (pGVar21 == (GameObject *)0x0) goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar21,0,(MethodInfo *)0x0);
                                uVar6 = uVar6 + 1;
                                ppUVar8 = ppUVar8 + 1;
                              }
                              pUVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_GetComponentsInChildren_29
                                                  ((GameObject *)this_00,
                                                                                                      
                                                  UseInteratorVisualization__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UseInteratorVisualization>______
                                                  );
                              uVar6 = 0;
                              if (pUVar12 != (UseInteratorVisualization__Array *)0x0) {
                                ppUVar8 = pUVar12->vector;
                                for (; (int)uVar6 < (int)pUVar12->max_length; uVar6 = uVar6 + 1)
                                {
                                  if (pUVar12->max_length <= uVar6) goto code_?;
                                  if (*ppUVar8 == (UseInteratorVisualization *)0x0)
                                  goto code_?;
                                  UseInteratorVisualization::UseInteratorVisualization_Disable
                                            (*ppUVar8,(MethodInfo *)0x0);
                                  ppUVar8 = ppUVar8 + 1;
                                }
                                if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr
                                     & 0x2000000) != 0) &&
                                   ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                                  func_?(TypeInfo__UnityEngine__Object);
                                }
                                bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                         Object_1_op_Equality
                                                   ((Object_1 *)pCStack_11,(Object_1 *)0x0,
                                                    (MethodInfo *)0x0);
                                if (bVar3 == 0) {
                                  if (pCStack_11 != (Component_1 *)0x0) {
                                    pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_1_get_gameObject
                                                        (pCStack_11,(MethodInfo *)0x0);
                                    if (pGVar21 != (GameObject *)0x0) {
                                      pWVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_AddComponent_85
                                                          (pGVar21,
                                                  RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__
                                                  );
                                      if (pWVar22 != (Worker *)0x0) {
                                        pWVar22[1].klass = (Worker__Class *)0x428c0000;
                                        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component
                                                  ::Component_1_get_transform
                                                            (pCStack_11,(MethodInfo *)0x0);
                                        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.
                                                    methodPtr & 0x2000000) != 0) &&
                                           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)
                                           ) {
                                          func_?();
                                        }
                                        pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3_get_zero((Vector3 *)&stack0xffffffd4,
                                                                   (MethodInfo *)0x0);
                                        if (this_01 != (Transform *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                          Transform_set_localPosition
                                                    (this_01,*pVVar23,(MethodInfo *)0x0);
                                          (this->fields).cameraOffset.x =
                                               (this->fields).cameraOffset.x + _UNK_?;
                                          (this->fields).cameraOffset.z =
                                               (this->fields).cameraOffset.z - _UNK_?;
                                          goto code_?;
                                        }
                                      }
                                    }
                                  }
                                }
                                else {
                                  pWVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_AddComponent_85
                                                      ((GameObject *)this_00,
                                                                                                              
                                                  RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__
                                                  );
                                  if (pWVar22 != (Worker *)0x0) {
                                    pWVar22[1].klass = (Worker__Class *)0x428c0000;
code_?:
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_SetActive((GameObject *)this_00,1,(MethodInfo *)0x0);
                                    if (bVar4) {
                                      for (uVar6 = 0; (int)uVar6 < (int)pUVar5->max_length;
                                          uVar6 = uVar6 + 1) {
                                        if (pUVar5->max_length <= uVar6) goto code_?;
                                        if (*ppUVar7 == (UseInteratorVisualization *)0x0)
                                        goto code_?;
                                        GreyOutObjectScript::GreyOutObjectScript_GreyOut
                                                  ((GreyOutObjectScript *)*ppUVar7,
                                                   (MethodInfo *)0x0);
                                        ppUVar7 = ppUVar7 + 1;
                                      }
                                    }
                                    return (GameObject *)this_00;
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
  func_?(0);
code_?:
  uVar18 = func_?(0,0);
  func_?(uVar18);
  pcVar24 = (code *)swi(3);
  pGVar21 = (GameObject *)(*pcVar24)();
  return pGVar21;
}


/* Color GetTeamColor(MVTeam) */

Color * Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement_GetTeamColor
                  (Color *__return_storage_ptr__,TierUnlockedItemElement *this,MVTeam__Enum team,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(team) {
  case MVTeam__Enum_Blue:
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamBlue;
    break;
  case MVTeam__Enum_Red:
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamRed;
    break;
  case MVTeam__Enum_Green:
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamGreen;
    break;
  case MVTeam__Enum_Yellow:
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamYellow;
    break;
  default:
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_OffWhite;
  }
  pCVar1 = Styles::Styles_GetColor(&CStack_2,colorStyle,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* Void Initialize(List`1[MVWorldObjectClient], Int32) */

void Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement_Initialize
               (TierUnlockedItemElement *this,List_1_MVWorldObjectClient_ *tierShopItemData,
               int32_t itemIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  pIVar2 = (this->fields).objectPreviewerPrefab;
  pOStack_3 = (Object *)0x0;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pIVar2 = (InventoryItemPreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pIVar2,
                      InventoryItemPreviewer_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreviewer>_InventoryItemPreviewer_
                     );
  (this->fields).objectPreviewer = pIVar2;
  if (tierShopItemData != (List_1_MVWorldObjectClient_ *)0x0) {
    pMVar4 = (MVWorldObjectClient *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)tierShopItemData,0,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                       );
    (this->fields).previewObject = pMVar4;
    if ((((uint)(TypeInfo__InventoryItem->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__InventoryItem->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar4 = (this->fields).previewObject;
    pDVar5 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
    if (pMVar4 != (MVWorldObjectClient *)0x0) {
      MVar6 = (*(code *)(pMVar4->klass->vtable).get_DocumentationType.method)();
      if (pDVar5 != (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)
                    0x0) {
        bVar7 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
                Dictionary_2_MVWorldObjectDocumentationType_System_Object__ContainsKey
                          ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)pDVar5,
                           MVar6,
                           MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                          );
        if (bVar7 != 0) {
          if ((((uint)(TypeInfo__InventoryItem->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__InventoryItem->_1).cctor_started == 0)) {
            func_?(TypeInfo__InventoryItem);
          }
          pMVar4 = (this->fields).previewObject;
          pDVar5 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
          if (pMVar4 == (MVWorldObjectClient *)0x0) goto code_?;
          MVar6 = (*(code *)(pMVar4->klass->vtable).get_DocumentationType.method)();
          if (pDVar5 == (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_
                         *)0x0) goto code_?;
          this_02 = (InventoryItem_ItemDescription *)
                    mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
                    Dictionary_2_MVWorldObjectDocumentationType_System_Object__get_Item
                              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)pDVar5,
                               MVar6,
                               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                              );
          if (this_02 == (InventoryItem_ItemDescription *)0x0) goto code_?;
          pVVar8 = InventoryItem+ItemDescription::
                   InventoryItem_ItemDescription_get_CameraPreviewerOffset
                             ((Vector3 *)(auStack_9 + 4),this_02,(MethodInfo *)0x0);
          fVar10 = pVVar8->y;
          fVar11 = pVVar8->z;
          (this->fields).cameraOffset.x = pVVar8->x;
          (this->fields).cameraOffset.y = fVar10;
          (this->fields).cameraOffset.z = fVar11;
        }
        this_03 = TierUnlockedItemElement_CreatePreviewObjectClone(this,(MethodInfo *)0x0);
        if (this_03 != (GameObject *)0x0) {
          pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_03,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Quaternion);
          }
          pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                              ((Quaternion *)auStack_9,(MethodInfo *)0x0);
          if (pTVar12 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar12,*pQVar13,(MethodInfo *)0x0);
            this_04 = (GameObject *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                      (this_04,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
            if (this_04 != (GameObject *)0x0) {
              pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(this_04,(MethodInfo *)0x0);
              (this->fields).rootTransform = pTVar12;
              auStack_9._0_4_ = 0.0;
              fVar11 = (float)itemIndex * _UNK_?;
              uVar14 = 0x43960000;
              uVar15 = 0x43960000;
              func_?(&stack0xffffffb4);
              pIVar2 = (this->fields).objectPreviewer;
              iStack_16 = (this->fields).previewWidth;
              iStack_17 = (this->fields).previewHeight;
              this_00 = (PrefabPool *)(this->fields).previewObject;
              if (this_00 != (PrefabPool *)0x0) {
                pOStack_18 = PrefabPool::PrefabPool_get_MVSpawnPointYellowPrefab
                                       (this_00,(MethodInfo *)0x0);
                auStack_9._8_4_ = (this->fields).cameraOffset.x;
                auStack_9._12_4_ = (this->fields).cameraOffset.y;
                fStack_19 = (this->fields).cameraOffset.z;
                pTStack_20 = (this->fields).rootTransform;
                uStack_21 = CONCAT44(uVar14,uVar15);
                pMVar4 = (this->fields).previewObject;
                fStack_22 = fVar11;
                if (pMVar4 != (MVWorldObjectClient *)0x0) {
                  pOStack_1 = System.Core.dll::System::Linq::
                              Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System
                              ::Object]::
                              Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                        ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                                          *)pMVar4,(MethodInfo *)0x0);
                  piVar23 = (int *)func_?();
                  if (piVar23 != (int *)0x0) {
                    pSStack_24 = (String *)(**(code **)(*piVar23 + 0xd8))();
                    puVar25 = (undefined4 *)func_?(piVar23);
                    pOStack_1 = (Object *)*puVar25;
                    if (pIVar2 != (InventoryItemPreviewer *)0x0) {
                      cameraOffset.z = fStack_19;
                      cameraOffset.x = (float)auStack_9._8_4_;
                      cameraOffset.y = (float)auStack_9._12_4_;
                      previewPosition.z = fStack_22;
                      previewPosition.x = (float)(undefined4)uStack_21;
                      previewPosition.y = (float)uStack_21._4_4_;
                      InventoryItemPreviewer::InventoryItemPreviewer_Initialize
                                (pIVar2,iStack_16,iStack_17,CameraClearFlags__Enum_Color,
                                 (LayerFlags__Enum)pOStack_18,cameraOffset,pTStack_20,
                                 previewPosition,pSStack_24,(this->fields).previewObject,this_03,
                                 (MethodInfo *)0x0);
                      pIVar2 = (this->fields).objectPreviewer;
                      this_01 = (this->fields).previewImage;
                      if (pIVar2 != (InventoryItemPreviewer *)0x0) {
                        value = (Texture *)
                                GamePointGainEffect::GamePointGainEffect_get_ID
                                          ((GamePointGainEffect *)pIVar2,(MethodInfo *)0x0);
                        if (this_01 != (RawImage *)0x0) {
                          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                                    (this_01,value,(MethodInfo *)0x0);
                          pTVar26 = (this->fields).itemAmountText;
                          pOStack_3 = mscorlib.dll::System::Collections::ObjectModel::
                                      Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                                  *)tierShopItemData,
                                                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                                                );
                          str1 = (String *)func_?();
                          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__System__String->_1).cctor_started == 0)) {
                            func_?(TypeInfo__System__String);
                          }
                          mscorlib.dll::System::String::String_Concat_2
                                    (StringLiteral_x,str1,(MethodInfo *)0x0);
                          if (pTVar26 != (Text *)0x0) {
                            (*(code *)(pTVar26->klass->vtable).set_text.method)(pTVar26);
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
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement_OnDestroy
               (TierUnlockedItemElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).rootTransform;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).rootTransform;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  pMStack3 = (this->fields).previewObject;
  (this->fields).rootTransform = (Transform *)0x0;
  if (pMStack3 != (MVWorldObjectClient *)0x0) {
    pIStack4 = (pMStack3->klass->vtable).Destroy.methodPtr;
    (*(code *)(pMStack3->klass->vtable).UnSetupTierInventory.method)();
    return;
  }
code_?:
  pIStack4 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetTeam(MVTeam) */

void Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement_SetTeam
               (TierUnlockedItemElement *this,MVTeam__Enum team,MethodInfo *method)

{
  pIVar1 = (this->fields).teamRequirementImage;
  (this->fields).team = team;
  if ((pIVar1 == (Image *)0x0) ||
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pIVar1,(MethodInfo *)0x0), this_00 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_00,1,(MethodInfo *)0x0);
  pIVar1 = (this->fields).teamRequirementImage;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  switch(team) {
  case MVTeam__Enum_Blue:
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    colorStyle = 1.12104e-44;
    pCVar2 = &CStack_3;
    break;
  case MVTeam__Enum_Red:
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    colorStyle = 1.26117e-44;
    pCVar2 = &CStack_4;
    break;
  case MVTeam__Enum_Green:
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    colorStyle = 1.54143e-44;
    pCVar2 = &CStack_5;
    break;
  case MVTeam__Enum_Yellow:
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    colorStyle = 1.4013e-44;
    pCVar2 = &CStack_6;
    break;
  default:
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar2 = (Color *)&stack0xffffff9c;
    goto code_?;
  case MVTeam__Enum_None:
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?();
    }
    pCVar2 = &CStack_7;
code_?:
    colorStyle = 3.64338e-44;
  }
  pCVar2 = Styles::Styles_GetColor(pCVar2,(ColorStyle__Enum)colorStyle,(MethodInfo *)0x0);
  CStack_7.r = pCVar2->a;
  if (pIVar1 != (Image *)0x0) {
    pIVar8 = pIVar1->klass;
    CStack_7.g = (float)(pIVar8->vtable).get_raycastTarget.methodPtr;
    (*(code *)(pIVar8->vtable).set_color.method)();
    return;
  }
code_?:
  CStack_7.g = 0.0;
  CStack_7.r = (float)&UNK_?;
  func_?();
  pcVar9 = (code *)swi(0x39);
  (*pcVar9)();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* TierUnlockedItemElement() */

void Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement__ctor
               (TierUnlockedItemElement *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  uStack_2 = 0;
  func_?(&uStack_2,0,0,0,0);
  (this->fields).cameraOffset.x = (float)(undefined4)uStack_2;
  (this->fields).cameraOffset.y = (float)uStack_2._4_4_;
  (this->fields).cameraOffset.z = fStack_1;
  (this->fields).team = 5;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

