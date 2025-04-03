
/* GameObject CreatePreviewObjectClone() */

GameObject *
Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement_CreatePreviewObjectClone
          (TierUnlockedItemElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__);
    func_?(&
                    GreyOutObjectScript__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<GreyOutObjectScript>______
                   );
    func_?(&
                    UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                   );
    func_?(&
                    UnityEngine__ParticleSystem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::ParticleSystem>______
                   );
    func_?(&
                    UseInteractorVisualization__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UseInteractorVisualization>______
                   );
    func_?(&TypeInfo__JetPackVisualization);
    func_?(&TypeInfo__MVPickupOwner);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__TintObject);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).previewObject;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    (*(code *)(pMVar1->klass->vtable).SetupTierInventory.method)
              (pMVar1,(pMVar1->klass->vtable).UnSetupTierInventory.methodPtr);
    pMVar1 = (this->fields).previewObject;
    if ((pMVar1 != (MVWorldObjectClient *)0x0) &&
       (pGVar2 = (pMVar1->fields).gameObject, pGVar2 != (GameObject *)0x0)) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      pMVar1 = (this->fields).previewObject;
      if ((pMVar1 != (MVWorldObjectClient *)0x0) &&
         (pGVar2 = (pMVar1->fields).gameObject, pGVar2 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        bVar4 = false;
        pMVar1 = (this->fields).previewObject;
        if ((pMVar1 != (MVWorldObjectClient *)0x0) &&
           (pGVar2 = (pMVar1->fields).gameObject, pGVar2 != (GameObject *)0x0)) {
          pMVar5 = (MVPickupOwner__Class *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentsInChildren
                             (pGVar2,
                              GreyOutObjectScript__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<GreyOutObjectScript>______
                             );
          unaff_ESI = (Behaviour *)0x0;
          if (pMVar5 != (MVPickupOwner__Class *)0x0) {
            unaff_EDI = (MVPickupOwner__Class *)&(pMVar5->_0).byval_arg;
            ppVVar6 = (Vector3__Class **)unaff_EDI;
            for (; pBVar7 = (Behaviour *)(pMVar5->_0).namespaze, (int)unaff_ESI < (int)pBVar7;
                unaff_ESI = (Behaviour *)((int)&unaff_ESI->klass + 1)) {
              if (pBVar7 <= unaff_ESI) goto code_?;
              this_00 = (unaff_EDI->_0).image;
              if (this_00 == (Il2CppImage *)0x0) goto code_?;
              if (*(bool *)&this_00->codeGenModule == 0) {
                GreyOutObjectScript::GreyOutObjectScript_GreyIn
                          ((GreyOutObjectScript *)this_00,(MethodInfo *)0x0);
                bVar4 = true;
              }
              unaff_EDI = (MVPickupOwner__Class *)&(unaff_EDI->_0).gc_desc;
            }
            pMVar1 = (this->fields).previewObject;
            if (pMVar1 != (MVWorldObjectClient *)0x0) {
              unaff_ESI = (Behaviour *)(pMVar1->fields).gameObject;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              this_02 = (MVPickupOwner__Class *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)unaff_ESI,
                                   UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                  );
              pMVar1 = (this->fields).previewObject;
              unaff_EDI = this_02;
              if ((pMVar1 != (MVWorldObjectClient *)0x0) &&
                 (pGVar2 = (pMVar1->fields).gameObject, pGVar2 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,bVar3,(MethodInfo *)0x0);
                unaff_ESI = (Behaviour *)0x0;
                pBStack_8 = (Behaviour *)0x0;
                if (this_02 != (MVPickupOwner__Class *)0x0) {
                  pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_GetComponentsInChildren
                                     ((GameObject *)this_02,
                                      UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                                     );
                  uVar10 = 0;
                  if (pOVar9 != (Object__Array *)0x0) {
                    ppOVar11 = pOVar9->vector;
                    for (; (int)uVar10 < (int)pOVar9->max_length; uVar10 = uVar10 + 1) {
                      if (pOVar9->max_length <= uVar10) goto code_?;
                      unaff_ESI = (Behaviour *)*ppOVar11;
                      if (unaff_ESI == (Behaviour *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                (unaff_ESI,0,(MethodInfo *)0x0);
                      unaff_EDI = (MVPickupOwner__Class *)unaff_ESI->klass;
                      bVar12 = (TypeInfo__TintObject->_1).naturalAligment;
                      if ((bVar12 <= (unaff_EDI->_1).naturalAligment) &&
                         ((unaff_EDI->_1).typeHierarchy[bVar12 - 1] ==
                          (Il2CppClass *)TypeInfo__TintObject)) {
                        bVar12 = (TypeInfo__TintObject->_1).naturalAligment;
                        pTVar13 = TypeInfo__TintObject;
                        if (((unaff_EDI->_1).naturalAligment < bVar12) ||
                           ((unaff_EDI->_1).typeHierarchy[bVar12 - 1] !=
                            (Il2CppClass *)TypeInfo__TintObject)) goto code_?;
                        func_?(5,unaff_ESI,(this->fields).team);
                      }
                      unaff_EDI = TypeInfo__MVPickupOwner;
                      iVar14 = func_?(unaff_ESI,TypeInfo__MVPickupOwner);
                      if (iVar14 != 0) {
                        bVar12 = (unaff_EDI->_1).naturalAligment;
                        if (((unaff_ESI->klass->_1).naturalAligment < bVar12) ||
                           ((unaff_ESI->klass->_1).typeHierarchy[bVar12 - 1] !=
                            (Il2CppClass *)unaff_EDI)) goto code_?;
                        *(undefined1 *)&unaff_ESI[1].monitor = 0;
                      }
                      unaff_EDI = (MVPickupOwner__Class *)TypeInfo__JetPackVisualization;
                      iVar14 = func_?(unaff_ESI,TypeInfo__JetPackVisualization);
                      if (iVar14 != 0) {
                        bVar12 = (((JetPackVisualization__Class *)unaff_EDI)->_1).naturalAligment;
                        if (((unaff_ESI->klass->_1).naturalAligment < bVar12) ||
                           (pBStack_8 = unaff_ESI,
                           (unaff_ESI->klass->_1).typeHierarchy[bVar12 - 1] !=
                           (Il2CppClass *)unaff_EDI)) goto code_?;
                      }
                      ppOVar11 = ppOVar11 + 1;
                    }
                    pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_GetComponentsInChildren
                                       ((GameObject *)this_02,
                                        UnityEngine__ParticleSystem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::ParticleSystem>______
                                       );
                    unaff_EDI = (MVPickupOwner__Class *)0x0;
                    if (pOVar9 != (Object__Array *)0x0) {
                      ppOVar11 = pOVar9->vector;
                      for (; (int)unaff_EDI < (int)pOVar9->max_length;
                          unaff_EDI = (MVPickupOwner__Class *)((int)&(unaff_EDI->_0).image + 1)) {
                        if ((MVPickupOwner__Class *)pOVar9->max_length <= unaff_EDI)
                        goto code_?;
                        unaff_ESI = (Behaviour *)*ppOVar11;
                        if (unaff_ESI == (Behaviour *)0x0) goto code_?;
                        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                        ParticleSystem_Stop_2((ParticleSystem *)unaff_ESI,(MethodInfo *)0x0);
                        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)unaff_ESI,(MethodInfo *)0x0)
                        ;
                        if (pGVar2 == (GameObject *)0x0) goto code_?;
                        ppVVar6 = (Vector3__Class **)0x0;
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar2,0,(MethodInfo *)0x0);
                        ppOVar11 = ppOVar11 + 1;
                      }
                      pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_GetComponentsInChildren
                                         ((GameObject *)this_02,
                                          UseInteractorVisualization__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UseInteractorVisualization>______
                                         );
                      unaff_ESI = (Behaviour *)0x0;
                      if (pOVar9 != (Object__Array *)0x0) {
                        unaff_EDI = (MVPickupOwner__Class *)pOVar9->vector;
                        for (; (int)unaff_ESI < (int)pOVar9->max_length;
                            unaff_ESI = (Behaviour *)((int)&unaff_ESI->klass + 1)) {
                          if ((Behaviour *)pOVar9->max_length <= unaff_ESI) goto code_?;
                          this_01 = (UseInteractorVisualization *)(unaff_EDI->_0).image;
                          if (this_01 == (UseInteractorVisualization *)0x0) goto code_?;
                          UseInteractorVisualization::UseInteractorVisualization_Disable
                                    (this_01,(MethodInfo *)0x0);
                          unaff_EDI = (MVPickupOwner__Class *)&(unaff_EDI->_0).gc_desc;
                        }
                        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__UnityEngine__Object);
                        }
                        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                Object_1_op_Equality
                                          ((Object_1 *)pBStack_8,(Object_1 *)0x0,(MethodInfo *)0x0)
                        ;
                        unaff_ESI = pBStack_8;
                        if (bVar3 == 0) {
                          if (((pBStack_8 != (Behaviour *)0x0) &&
                              (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_get_gameObject
                                                   ((Component *)pBStack_8,(MethodInfo *)0x0),
                              pGVar2 != (GameObject *)0x0)) &&
                             (pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_AddComponent_1
                                                  (pGVar2,
                                                  RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__
                                                  ), pOVar15 != (Object *)0x0)) {
                            pOVar15[2].klass = (Object__Class *)0x428c0000;
                            this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_transform
                                                ((Component *)pBStack_8,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              ppVVar6 = &TypeInfo__UnityEngine__Vector3;
                              func_?();
                              cRam_? = '\x01';
                            }
                            unaff_ESI = (Behaviour *)0x0;
                            if (this_03 != (Transform *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_localPosition
                                        (this_03,TypeInfo__UnityEngine__Vector3->static_fields->
                                                 zeroVector,(MethodInfo *)0x0);
                              (this->fields).cameraOffset.x =
                                   (this->fields).cameraOffset.x + _UNK_?;
                              (this->fields).cameraOffset.z =
                                   (this->fields).cameraOffset.z - _UNK_?;
                              goto code_?;
                            }
                          }
                        }
                        else {
                          pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_AddComponent_1
                                              ((GameObject *)this_02,
                                               RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__
                                              );
                          if (pOVar15 != (Object *)0x0) {
                            pOVar15[2].klass = (Object__Class *)0x428c0000;
code_?:
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive((GameObject *)this_02,1,(MethodInfo *)0x0);
                            if (bVar4) {
                              for (unaff_ESI = (Behaviour *)0x0;
                                  pBVar7 = (Behaviour *)(pMVar5->_0).namespaze,
                                  (int)unaff_ESI < (int)pBVar7;
                                  unaff_ESI = (Behaviour *)((int)&unaff_ESI->klass + 1)) {
                                if (pBVar7 <= unaff_ESI) goto code_?;
                                unaff_EDI = pMVar5;
                                if ((GreyOutObjectScript *)
                                    (((Il2CppType *)ppVVar6)->data).typeHandle ==
                                    (GreyOutObjectScript *)0x0) goto code_?;
                                GreyOutObjectScript::GreyOutObjectScript_GreyOut
                                          ((GreyOutObjectScript *)
                                           (((Il2CppType *)ppVVar6)->data).typeHandle,
                                           (MethodInfo *)0x0);
                                ppVVar6 = (Vector3__Class **)&((Il2CppType *)ppVVar6)->attrs;
                              }
                            }
                            return (GameObject *)this_02;
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
  pTVar13 = extraout_EDX;
code_?:
  func_?(unaff_ESI,pTVar13);
code_?:
  func_?(unaff_ESI,unaff_EDI);
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  pGVar2 = (GameObject *)(*pcVar16)();
  return pGVar2;
}


/* Color GetTeamColor(MVTeam) */

Color * Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement_GetTeamColor
                  (Color *__return_storage_ptr__,TierUnlockedItemElement *this,MVTeam__Enum team,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  switch(team) {
  case MVTeam__Enum_Blue:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamBlue;
    break;
  case MVTeam__Enum_Red:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamRed;
    break;
  case MVTeam__Enum_Green:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamGreen;
    break;
  case MVTeam__Enum_Yellow:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamYellow;
    break;
  default:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__InventoryItem);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&
                    InventoryItemPreviewer_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreviewer>_InventoryItemPreviewer_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    func_?(&StringLiteral_x);
    func_?(&StringLiteral_Preview_Root___TierShopItem);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).objectPreviewerPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pIVar1 = (InventoryItemPreviewer *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pIVar1,
                       InventoryItemPreviewer_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreviewer>_InventoryItemPreviewer_
                      );
  ppIVar2 = &(this->fields).objectPreviewer;
  *ppIVar2 = pIVar1;
  func_?(ppIVar2,pIVar1);
  if (tierShopItemData != (List_1_MVWorldObjectClient_ *)0x0) {
    RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        tierShopItemData,0,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                       );
    ppMVar4 = &(this->fields).previewObject;
    *ppMVar4 = (MVWorldObjectClient *)RVar3;
    func_?(ppMVar4,RVar3);
    if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__InventoryItem);
    }
    pMVar5 = *ppMVar4;
    pDVar6 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
    if (pMVar5 != (MVWorldObjectClient *)0x0) {
      IVar7 = (*(code *)(pMVar5->klass->vtable).get_DocumentationType.method)
                         (pMVar5,(pMVar5->klass->vtable).TraverseRecursiveTail.methodPtr);
      if (pDVar6 != (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)
                    0x0) {
        bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                           ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar6,IVar7,
                            MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                           );
        if (bVar8 != 0) {
          if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__InventoryItem);
          }
          pMVar5 = *ppMVar4;
          pDVar6 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
          if (pMVar5 == (MVWorldObjectClient *)0x0) goto code_?;
          IVar7 = (*(code *)(pMVar5->klass->vtable).get_DocumentationType.method)
                             (pMVar5,(pMVar5->klass->vtable).TraverseRecursiveTail.methodPtr);
          if (pDVar6 == (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_
                         *)0x0) goto code_?;
          pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,IVar7,
                               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                              );
          if (pOVar9 == (Object *)0x0) goto code_?;
          uVar10 = *(undefined8 *)&pOVar9[2].monitor;
          pMVar11 = pOVar9[3].monitor;
          (this->fields).cameraOffset.x = (float)(int)uVar10;
          (this->fields).cameraOffset.y = (float)(int)((ulonglong)uVar10 >> 0x20);
          (this->fields).cameraOffset.z = (float)pMVar11;
        }
        this_01 = TierUnlockedItemElement_CreatePreviewObjectClone(this,(MethodInfo *)0x0);
        if (this_01 != (GameObject *)0x0) {
          pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_01,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Quaternion);
            cRam_? = '\x01';
          }
          if (pTVar12 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar12,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                       (MethodInfo *)0x0);
            this_02 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                      (this_02,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
            if (this_02 != (GameObject *)0x0) {
              pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(this_02,(MethodInfo *)0x0);
              ppTVar13 = &(this->fields).rootTransform;
              *ppTVar13 = pTVar12;
              func_?(ppTVar13,pTVar12);
              pIVar1 = (this->fields).objectPreviewer;
              pMVar5 = *ppMVar4;
              iStack_14 = (this->fields).previewWidth;
              iStack_15 = (this->fields).previewHeight;
              uStack_16 = 0x43960000;
              uStack_17 = 0x43960000;
              fStack_18 = (float)itemIndex * _UNK_?;
              if (pMVar5 != (MVWorldObjectClient *)0x0) {
                LStack_19 = (pMVar5->fields).previewLayerMask;
                iStack_20 = (pMVar5->fields)._.type;
                uStack_21._0_4_ = (this->fields).cameraOffset.x;
                uStack_21._4_4_ = (this->fields).cameraOffset.y;
                fStack_22 = (this->fields).cameraOffset.z;
                pTStack_23 = (this->fields).rootTransform;
                EStack_24.klass = (Enum__Class *)TypeInfo__MV__WorldObject__WorldObjectType;
                EStack_24.monitor = (MonitorData *)0xffffffff;
                pSVar25 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_24,(MethodInfo *)0x0);
                if (pIVar1 != (InventoryItemPreviewer *)0x0) {
                  previewPosition.y = (float)uStack_17;
                  previewPosition.x = (float)uStack_16;
                  cameraOffset.z = fStack_22;
                  cameraOffset.x = (float)(undefined4)uStack_21;
                  cameraOffset.y = (float)uStack_21._4_4_;
                  previewPosition.z = fStack_18;
                  InventoryItemPreviewer::InventoryItemPreviewer_Initialize
                            (pIVar1,iStack_14,iStack_15,CameraClearFlags__Enum_Color,LStack_19,
                             cameraOffset,pTStack_23,previewPosition,pSVar25,*ppMVar4,this_01,
                             (MethodInfo *)0x0);
                  pIVar1 = (this->fields).objectPreviewer;
                  if ((pIVar1 != (InventoryItemPreviewer *)0x0) &&
                     (this_00 = (this->fields).previewImage, this_00 != (RawImage *)0x0)) {
                    UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                              (this_00,(Texture *)(pIVar1->fields).previewTexture,(MethodInfo *)0x0
                              );
                    pTVar26 = (this->fields).itemAmountText;
                    IStack_27.m_value = (tierShopItemData->fields)._size;
                    pSVar25 = mscorlib.dll::System::Int32::Int32_ToString
                                        (&IStack_27,(MethodInfo *)0x0);
                    pSVar25 = mscorlib.dll::System::String::String_Concat_3
                                        (StringLiteral_x,pSVar25,(MethodInfo *)0x0);
                    if (pTVar26 != (Text *)0x0) {
                      (*(code *)(pTVar26->klass->vtable).set_text.method)
                                (pTVar26,pSVar25,
                                 (pTVar26->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
                      ;
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
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement_OnDestroy
               (TierUnlockedItemElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).rootTransform;
  ppTVar2 = &(this->fields).rootTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pTVar1 = *ppTVar2;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)pTVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  *ppTVar2 = (Transform *)0x0;
  func_?();
  pMVar4 = (this->fields).previewObject;
  if (pMVar4 != (MVWorldObjectClient *)0x0) {
    (*(code *)(pMVar4->klass->vtable).UnSetupTierInventory.method)
              (pMVar4,(pMVar4->klass->vtable).Destroy.methodPtr);
    return;
  }
code_?:
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
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pIVar1,(MethodInfo *)0x0), this_00 == (GameObject *)0x0))
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
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    colorStyle = 1.12104e-44;
    pCVar2 = &CStack_3;
    break;
  case MVTeam__Enum_Red:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    colorStyle = 1.26117e-44;
    pCVar2 = &CStack_4;
    break;
  case MVTeam__Enum_Green:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    colorStyle = 1.54143e-44;
    pCVar2 = &CStack_5;
    break;
  case MVTeam__Enum_Yellow:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    colorStyle = 1.4013e-44;
    pCVar2 = &CStack_6;
    break;
  default:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCVar2 = (Color *)&stack0xffffff9c;
    goto code_?;
  case MVTeam__Enum_None:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
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
  bVar9 = 0;
  CStack_7.g = (float)&UNK_?;
  func_?();
  bVar10 = in(extraout_DX);
  bVar11 = bVar10 < 0x47 || (byte)(bVar10 + 0xb9) < bVar9;
  bVar9 = (bVar10 + 0xb9) - bVar9;
  pbVar12 = (byte *)(unaff_EBX + 0x1d291047);
  bVar13 = CARRY1(*pbVar12,extraout_CL) || CARRY1(*pbVar12 + extraout_CL,bVar11);
  *pbVar12 = *pbVar12 + extraout_CL + bVar11;
  pbVar12 = (byte *)(team + 0x1d);
  bVar10 = *pbVar12 + bVar9;
  bVar11 = CARRY1(*pbVar12,bVar9) || CARRY1(bVar10,bVar13);
  *pbVar12 = bVar10 + bVar13;
  pbVar12 = &stack0x00000043 + unaff_EBX;
  bVar10 = *pbVar12;
  bVar14 = (byte)((uint)unaff_EBX >> 8);
  bVar9 = *pbVar12 + bVar14;
  *pbVar12 = bVar9 + bVar11;
  *(char *)(unaff_EBX + 0x1d) =
       *(char *)(unaff_EBX + 0x1d) + extraout_AH + (CARRY1(bVar10,bVar14) || CARRY1(bVar9,bVar11));
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* TierUnlockedItemElement() */

void Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement__ctor
               (TierUnlockedItemElement *this,MethodInfo *method)

{
  (this->fields).cameraOffset.x = 0.0;
  (this->fields).cameraOffset.y = 0.0;
  (this->fields).cameraOffset.z = 0.0;
  (this->fields).team = 5;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

