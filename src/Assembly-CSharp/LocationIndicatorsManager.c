
/* Void Awake() */

void Assembly-CSharp.dll::LocationIndicatorsManager::LocationIndicatorsManager_Awake
               (LocationIndicatorsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LocationIndicatorsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = TypeInfo__LocationIndicatorsManager->static_fields->_Instance_k__BackingField;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pLVar1 != (LocationIndicatorsManager *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pLVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                      ,0,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pvVar2 = (void *)0x0;
      if (this != (LocationIndicatorsManager *)0x0) {
        pvVar2 = (this->fields)._._._._.m_CachedPtr;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar2,0);
      return;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LocationIndicatorsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__LocationIndicatorsManager->static_fields->_Instance_k__BackingField = this;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)TypeInfo__LocationIndicatorsManager->static_fields >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  return;
}


/* Boolean CreateIndicatorIfNotDefined(MVPlayer) */

bool Assembly-CSharp.dll::LocationIndicatorsManager::
     LocationIndicatorsManager_CreateIndicatorIfNotDefined
               (LocationIndicatorsManager *this,MVPlayer *player,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__Add_int__LocationIndicator_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  LocationIndicator_MethodInfo__UnityEngine__Object__Instantiate<LocationIndicator>_LocationIndicator__UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((player != (MVPlayer *)0x0) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).indicators,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    key = (player->fields)._ProfileID_k__BackingField;
    player_00 = (MVPlayer *)(ulonglong)key;
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__ContainsKey_int_
                ->klass->rgctx_data[0x21].method;
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,key,method_00);
    if (-1 < iVar1) {
      return 0;
    }
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player_00,method_00);
    if (extraout_RAX != 0) {
      if (key == *(uint *)(extraout_RAX + 0x58)) {
        return 0;
      }
      original = (this->fields).indicatorPrefab;
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      value = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                        ((Object *)original,parent,
                         LocationIndicator_MethodInfo__UnityEngine__Object__Instantiate<LocationIndicator>_LocationIndicator__UnityEngine__Transform_
                        );
      if (value != (Object *)0x0) {
        bVar2 = iRam_? != 0;
        value[5].klass = (Object__Class *)player;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)(value + 5) >> 0xc);
          puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar5 = *puVar4;
            LOCK();
            uVar6 = *puVar4;
            if (uVar5 == uVar6) {
              *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (uVar5 != uVar6);
        }
        pUVar7 = (player->fields)._UserProfileData_k__BackingField;
        if ((pUVar7 != (UserProfileData *)0x0) &&
           (pOVar8 = value[3].klass, pOVar8 != (Object__Class *)0x0)) {
          pIVar9 = (pOVar8->_0).image;
          (*(code *)pIVar9[0x15].name)(pOVar8,(pUVar7->fields).UserName,pIVar9[0x15].nameNoExt);
          this_01 = (this->fields).indicators;
          if (this_01 != (Dictionary_2_System_Int32_LocationIndicator_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryInsert
                      ((Dictionary_2_System_Int32_System_Object_ *)this_01,key,value,
                       CONCAT31((int3)((uint)in_R9D >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__Add_int__LocationIndicator_
                       ->klass->rgctx_data[0x22].method);
            return 1;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Void CreateOrDestroyIndicators() */

void Assembly-CSharp.dll::LocationIndicatorsManager::
     LocationIndicatorsManager_CreateOrDestroyIndicators
               (LocationIndicatorsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<MVPlayer>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1.klass =
       (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
        *)0x0;
  DStack_1.monitor._0_4_ = 0;
  DStack_1.monitor._4_4_ = 0;
  DStack_1.fields._dictionary =
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pDVar4 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
    pDVar5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)(this->fields).indicators;
    if (pDVar5 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) {
      unaff_RBX = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                            (pDVar5,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__get_Keys__
                            );
      this_01 = (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                 *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32___ctor_1
                ((List_1_System_Int32_ *)this_01,(IEnumerable_1_System_Int32_ *)unaff_RBX,
                 MethodInfo__System__Collections__Generic__List<int>__List_System__Collections__Generic__IEnumerable<int>_
                );
      bVar6 = 0;
      if (pDVar4 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0) {
        pDVar7 = this_01;
        pDStackX_20 = (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                       *)FUN_?(0,
                                       TypeInfo__System__Collections__Generic__IEnumerable<MVPlayer>
                                       ,pDVar4);
        uStack_8 = 0;
        unaff_RBX = (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)&pDStackX_20;
        pDStack_9 = unaff_RBX;
code_?:
        if (pDStackX_20 !=
            (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
             *)0x0) {
          cVar10 = FUN_?(0);
          pDVar11 = pDStackX_20;
          if (cVar10 != '\0') {
            if (pDStackX_20 !=
                (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                 *)0x0) goto code_?;
            goto code_?;
          }
          if (pDStackX_20 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
               *)0x0) {
            FUN_?(0,TypeInfo__System__IDisposable,pDStackX_20);
          }
          if (this_01 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
               *)0x0) {
            if (iRam_? != 0) {
              uVar12 = (uint)((ulonglong)&uStack_8 >> 0xc);
              uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
              do {
                uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
                puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
                LOCK();
                bVar16 = uVar14 == *puVar15;
                if (bVar16) {
                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (!bVar16);
            }
            DStack_1.monitor._4_4_ = *(int32_t *)((longlong)&(this_01->_0).namespaze + 4);
            uStack_17 = 0;
            DStack_1.monitor._0_4_ = 0;
            DStack_1.fields._dictionary =
                 (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0;
            uStack_8 = 0;
            pDStack_9 = &DStack_1;
            DStack_1.klass = this_01;
            while( true ) {
              if (DStack_1.klass ==
                  (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                   *)0x0) goto code_?;
              if ((DStack_1.monitor._4_4_ !=
                   *(int32_t *)((longlong)&((DStack_1.klass)->_0).namespaze + 4)) ||
                 (*(uint *)&((DStack_1.klass)->_0).namespaze <= (uint)DStack_1.monitor)) break;
              pIVar18 = ((List_1_System_Int32___Fields *)&((DStack_1.klass)->_0).name)->_items;
              if (pIVar18 == (Int32__Array *)0x0) goto code_?;
              if ((uint)pIVar18->max_length <= (uint)DStack_1.monitor) goto code_?;
              key = pIVar18->vector[(int)(uint)DStack_1.monitor];
              DStack_1.fields._dictionary._0_4_ = key;
              DStack_1.monitor._0_4_ = (uint)DStack_1.monitor + 1;
              pDVar19 = (this->fields).indicators;
              if (pDVar19 == (Dictionary_2_System_Int32_LocationIndicator_ *)0x0)
              goto code_?;
              unaff_RBX = (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                           *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,System::Object]::
                             Dictionary_2_System_Int32_System_Object__get_Item
                                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar19,key,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__get_Item_int_
                                       );
              if (unaff_RBX ==
                  (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) goto code_?;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pDVar5 = (unaff_RBX->fields)._dictionary;
              if (pDVar5 == (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                             *)0x0) goto code_?;
              pcVar20 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0))
              goto code_?;
              pcRam_? = pcVar20;
              gcHandlePtr = (void *)(*pcRam_?)(pDVar5);
              unaff_RBX = (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                           *)UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                             Unmarshal_UnmarshalUnityObject
                                       (gcHandlePtr,
                                        UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                       );
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                        ((Object_1 *)unaff_RBX,0.0,(MethodInfo *)0x0);
              pDVar19 = (this->fields).indicators;
              if (pDVar19 == (Dictionary_2_System_Int32_LocationIndicator_ *)0x0)
              goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Remove
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar19,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__Remove_int_
                        );
            }
            if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__->
                 klass->field_0x135 & 1) == 0) {
              FUN_?();
            }
            if (DStack_1.klass !=
                (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
                 *)0x0) {
              if (DStack_1.monitor._4_4_ ==
                  *(int32_t *)((longlong)&((DStack_1.klass)->_0).namespaze + 4)) {
                DStack_1.monitor._0_4_ = *(int *)&((DStack_1.klass)->_0).namespaze + 1;
                DStack_1.fields._dictionary = DStack_1.fields._dictionary & 0xffffffff00000000;
                if (bVar6 == 0) {
                  return;
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__PlanetOwnershipsManager);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pPVar21 = TypeInfo__PlanetOwnershipsManager->static_fields->
                          _Instance_k__BackingField;
                if (pPVar21 != (PlanetOwnershipsManager *)0x0) {
                  if ((pPVar21->fields)._RecievedPlanetOwnershipData_k__BackingField == 0) {
                    return;
                  }
                  LocationIndicatorsManager_SetIndicatorsOwnership(this,(MethodInfo *)0x0);
                  return;
                }
                goto code_?;
              }
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
code_?:
  uVar22 = func_?(&UNK_?);
  FUN_?(uVar22);
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)unaff_RBX,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
code_?:
  pIVar23 = (pDStackX_20->_0).image;
  uVar24 = 0;
  uVar25 = *(ushort *)((longlong)&pIVar23[4].nameNoExt + 6);
  if (uVar25 != 0) {
    do {
      if (*(IEnumerator_1_MVPlayer___Class **)
           (*(longlong *)&pIVar23[2].customAttributeCount + (ulonglong)uVar24 * 0x10) ==
          TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>) {
        puVar26 = &pIVar23[4].typeCount +
                  (longlong)
                  *(int *)(*(longlong *)&pIVar23[2].customAttributeCount + 8 +
                          (ulonglong)uVar24 * 0x10) * 4;
        goto code_?;
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar25);
  }
  puVar26 = (uint32_t *)
            FUN_?(pDStackX_20,TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>,
                          0,TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>,pDVar7);
code_?:
  player = (MVPlayer *)(**(code **)puVar26)(pDVar11,*(undefined8 *)(puVar26 + 2));
  bVar27 = LocationIndicatorsManager_CreateIndicatorIfNotDefined(this,player,(MethodInfo *)0x0);
  bVar6 = bVar6 | bVar27;
  if (bVar27 == 0) {
    if (player == (MVPlayer *)0x0) goto code_?;
    if (this_01 ==
        (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Class
         *)0x0) goto code_?;
    FUN_?(this_01,(player->fields)._ProfileID_k__BackingField,
                  MethodInfo__System__Collections__Generic__List<int>__Remove_int_);
  }
  goto code_?;
}


/* Void JSON_Unstripper() */

void Assembly-CSharp.dll::LocationIndicatorsManager::LocationIndicatorsManager_JSON_Unstripper
               (LocationIndicatorsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__OwnershipData__PlanetOwnershipsData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__OwnershipData__PlanetOwnershipsEntry);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (PlanetOwnershipsData *)
            FUN_?(TypeInfo__MV__WorldObject__OwnershipData__PlanetOwnershipsData);
  MVWorldObject.dll::MV::WorldObject::OwnershipData::PlanetOwnershipsData::
  PlanetOwnershipsData__ctor(this_00,(MethodInfo *)0x0);
  pIVar1 = (Il2CppClass *)TypeInfo__MV__WorldObject__OwnershipData__PlanetOwnershipsEntry;
  FUN_?();
  if (((((PlanetOwnershipsEntry__Class *)pIVar1)->_0).generic_class != (Il2CppGenericClass *)0x0) &&
     (((((PlanetOwnershipsEntry__Class *)pIVar1)->_1).field_0x6d & 8) != 0)) {
    pIVar1 = (((PlanetOwnershipsEntry__Class *)pIVar1)->_0).element_class;
  }
  uVar2 = pIVar1->instance_size;
  if ((pIVar1->field_0x135 & 0x20) == 0) {
    puVar3 = (undefined8 *)FUN_?(uVar2);
    *puVar3 = pIVar1;
    puVar4 = puVar3 + 2;
    puVar3[1] = 0;
    if (pIVar1->instance_size < 0x80) {
      puVar5 = (undefined8 *)((longlong)puVar3 + (ulonglong)pIVar1->instance_size);
      uVar6 = (ulonglong)((longlong)puVar5 + (7 - (longlong)puVar4)) >> 3;
      if (puVar5 < puVar4) {
        uVar6 = 0;
      }
      if (uVar6 != 0) {
        FUN_?(puVar4,0,uVar6 << 3);
      }
    }
    else {
      FUN_?(puVar4,0,(ulonglong)pIVar1->instance_size - 0x10);
    }
  }
  else {
    if (pIVar1->gc_desc != (void *)0x0) {
      puVar3 = (undefined8 *)FUN_?(uVar2,pIVar1);
      goto code_?;
    }
    puVar3 = (undefined8 *)FUN_?(uVar2,1);
    *puVar3 = pIVar1;
  }
  LOCK();
  lRam_? = lRam_? + 1;
  UNLOCK();
code_?:
  if ((pIVar1->field_0x136 & 2) != 0) {
    FUN_?(puVar3,FUN_?);
  }
  if ((bRam_? & 0x80) != 0) {
    FUN_?(puVar3,pIVar1);
  }
  FUN_?(pIVar1);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LocationIndicatorsManager::LocationIndicatorsManager_OnDestroy
               (LocationIndicatorsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_LocationIndicator>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_LocationIndicator>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_LocationIndicator>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_LocationIndicator>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LocationIndicatorsManager__RecievedPlanetOwnershipsDataCallback_System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar2 == (MVGameControllerBase *)0x0) goto code_?;
    if ((pMVar2->fields).game != (MVNetworkGame *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PlanetOwnershipsManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      unaff_RBX = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
      this_02 = (UnityAction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_02,(Object *)this,
                 MethodInfo__LocationIndicatorsManager__RecievedPlanetOwnershipsDataCallback_System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_
                 ,(MethodInfo *)0x0);
      if (unaff_RBX == (PlanetOwnershipsManager *)0x0) goto code_?;
      PlanetOwnershipsManager::PlanetOwnershipsManager_remove_OnReceivedPlanetOwnershipData
                (unaff_RBX,
                 (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
                  *)this_02,(MethodInfo *)0x0);
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
            ((MonoBehaviour *)this,(this->fields).updateCoroutine,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).indicators;
  if ((this_00 !=
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     && (pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__get_Keys__
                            ),
        pDVar3 != (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    uStack_4 = (pDVar3->fields)._dictionary;
    puStack_5 = (undefined4 *)0x0;
    uStack_6 = 0;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&uStack_4 >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    if (uStack_4 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iStack_13 = (uStack_4->fields)._version;
    uStack_6 = 0;
    uStack_4._4_4_ = (undefined4)((ulonglong)uStack_4 >> 0x20);
    uStack_14 = (undefined4)uStack_4;
    uStack_15 = uStack_4._4_4_;
    uStack_16 = 0;
    uStack_17 = 0;
    uStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
    puStack_5 = &uStack_14;
    do {
      lVar18 = CONCAT44(uStack_15,uStack_14);
      if (lVar18 == 0) {
code_?:
        FUN_?();
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if (iStack_13 != *(int *)(lVar18 + 0x2c)) {
code_?:
        mscorlib.dll::System::ThrowHelper::
        ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                  ((MethodInfo *)0x0);
        goto code_?;
      }
      do {
        if (lVar18 == 0) goto code_?;
        if (*(uint *)(lVar18 + 0x20) <= uStack_16) {
          return;
        }
        lVar19 = *(longlong *)(lVar18 + 0x18);
        lVar20 = (longlong)(int)uStack_16;
        uVar7 = uStack_16 + 1;
        if (lVar19 == 0) goto code_?;
        if (*(uint *)(lVar19 + 0x18) <= uStack_16) {
          uStack_16 = uVar7;
          FUN_?();
          goto code_?;
        }
        uStack_16 = uVar7;
      } while (*(int *)(lVar19 + 0x20 + lVar20 * 0x18) < 0);
      key = *(int32_t *)(lVar19 + 0x28 + lVar20 * 0x18);
      uStack_17 = CONCAT44(uStack_17._4_4_,key);
      this_01 = (this->fields).indicators;
      if (this_01 == (Dictionary_2_System_Int32_LocationIndicator_ *)0x0) {
code_?:
        FUN_?();
        uVar7 = uStack_16;
code_?:
        uStack_16 = uVar7;
        FUN_?();
code_?:
        FUN_?();
        goto code_?;
      }
      unaff_RBX = (PlanetOwnershipsManager *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)this_01,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__get_Item_int_
                            );
      if (unaff_RBX == (PlanetOwnershipsManager *)0x0) {
code_?:
        FUN_?();
        goto code_?;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar21 = (unaff_RBX->fields)._._._._.m_CachedPtr;
      if (pvVar21 == (void *)0x0) {
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)unaff_RBX,(MethodInfo *)0x0);
        goto code_?;
      }
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
code_?:
        uVar22 = func_?(&UNK_?);
        FUN_?(uVar22);
        goto code_?;
      }
      pcRam_? = pcVar12;
      pvVar21 = (void *)(*pcRam_?)(pvVar21);
      unaff_RBX = (PlanetOwnershipsManager *)
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar21,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                            );
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)unaff_RBX,0.0,(MethodInfo *)0x0);
    } while( true );
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void 
   RecievedPlanetOwnershipsDataCallback(Dictionary`2[System.Int32,MV.WorldObject.OwnershipData.PlanetOwnershipsEntry])
    */

void Assembly-CSharp.dll::LocationIndicatorsManager::
     LocationIndicatorsManager_RecievedPlanetOwnershipsDataCallback
               (LocationIndicatorsManager *this,
               Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__ContainsKey_int_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_LocationIndicator>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_LocationIndicator>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_LocationIndicator>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_LocationIndicator>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_LocationIndicator>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlanetOwnershipsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
  if (pPVar1 != (PlanetOwnershipsManager *)0x0) {
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
              (pPVar1->fields)._PlanetOwnershipsEntries_k__BackingField;
    pDStack_2 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).indicators;
    if (pDStack_2 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      uStack_3 = 0;
      uStack_4 = 0;
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&pDStack_2 >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      uStack_9 = (ulonglong)(uint)(pDStack_2->fields)._version;
      uStack_10 = 2;
      DStack_11._version = (undefined4)uStack_9;
      DStack_11._index = uStack_9._4_4_;
      DStack_11._current.key = 0;
      DStack_11._current._4_4_ = 0;
      DStack_11._current.value = (Object *)0x0;
      DStack_11._getEnumeratorRetType = 2;
      DStack_11._36_4_ = 0;
      DStack_11._dictionary = pDStack_2;
code_?:
      do {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_11,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_LocationIndicator>__MoveNext__
                          );
        this_01 = DStack_11._current.value;
        if (bVar12 == 0) {
          return;
        }
        key = DStack_11._current.key;
        if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
        goto code_?;
        iVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                          (this_00,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__ContainsKey_int_
                           ->klass->rgctx_data[0x21].method);
      } while (iVar13 < 0);
      pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Item_int_
                         );
      if (pOVar14 != (Object *)0x0) {
        if ((LocationIndicator *)this_01 != (LocationIndicator *)0x0) {
          LocationIndicator::LocationIndicator_SetOwnership
                    ((LocationIndicator *)this_01,(uint)*(byte *)((longlong)&pOVar14[1].klass + 4),
                     (MethodInfo *)0x0);
          goto code_?;
        }
        FUN_?();
      }
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void SetIndicatorsOwnership() */

void Assembly-CSharp.dll::LocationIndicatorsManager::
     LocationIndicatorsManager_SetIndicatorsOwnership
               (LocationIndicatorsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_LocationIndicator>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_LocationIndicator>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_LocationIndicator>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_LocationIndicator>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_LocationIndicator>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlanetOwnershipsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
  if (pPVar1 != (PlanetOwnershipsManager *)0x0) {
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
              (pPVar1->fields)._PlanetOwnershipsEntries_k__BackingField;
    pDStack_2 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).indicators;
    if (pDStack_2 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      uStack_3 = 0;
      uStack_4 = 0;
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&pDStack_2 >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      uStack_9 = (ulonglong)(uint)(pDStack_2->fields)._version;
      uStack_10 = 2;
      DStack_11._version = (undefined4)uStack_9;
      DStack_11._index = uStack_9._4_4_;
      DStack_11._current.key = 0;
      DStack_11._current._4_4_ = 0;
      DStack_11._current.value = (Object *)0x0;
      DStack_11._getEnumeratorRetType = 2;
      DStack_11._36_4_ = 0;
      DStack_11._dictionary = pDStack_2;
code_?:
      do {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_11,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_LocationIndicator>__MoveNext__
                          );
        this_01 = DStack_11._current.value;
        if (bVar12 == 0) {
          return;
        }
        key = DStack_11._current.key;
        if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
        goto code_?;
        iVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                          (this_00,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__ContainsKey_int_
                           ->klass->rgctx_data[0x21].method);
      } while (iVar13 < 0);
      pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Item_int_
                         );
      if (pOVar14 != (Object *)0x0) {
        if ((LocationIndicator *)this_01 != (LocationIndicator *)0x0) {
          LocationIndicator::LocationIndicator_SetOwnership
                    ((LocationIndicator *)this_01,(uint)*(byte *)((longlong)&pOVar14[1].klass + 4),
                     (MethodInfo *)0x0);
          goto code_?;
        }
        FUN_?();
      }
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LocationIndicatorsManager::LocationIndicatorsManager_Start
               (LocationIndicatorsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LocationIndicatorsManager__RecievedPlanetOwnershipsDataCallback_System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (obj->fields)._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar1);
    this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_LocationIndicator>__Dictionary__
              );
    bVar4 = iRam_? != 0;
    (this->fields).indicators = (Dictionary_2_System_Int32_LocationIndicator_ *)this_00;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).indicators >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PlanetOwnershipsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar9 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
    if (pPVar9 != (PlanetOwnershipsManager *)0x0) {
      if ((pPVar9->fields)._RecievedPlanetOwnershipData_k__BackingField == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__PlanetOwnershipsManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar9 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
        this_01 = (UnityAction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__LocationIndicatorsManager__RecievedPlanetOwnershipsDataCallback_System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_
                   ,(MethodInfo *)0x0);
        if (pPVar9 == (PlanetOwnershipsManager *)0x0) goto code_?;
        PlanetOwnershipsManager::PlanetOwnershipsManager_add_OnReceivedPlanetOwnershipData
                  (pPVar9,(Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
                           *)this_01,(MethodInfo *)0x0);
      }
      else {
        LocationIndicatorsManager_SetIndicatorsOwnership(this,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__LocationIndicatorsManager___UpdateCoroutine_d__13);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar10 = (IEnumerator *)
               FUN_?(TypeInfo__LocationIndicatorsManager___UpdateCoroutine_d__13);
      iVar11 = iRam_?;
      *(undefined4 *)&pIVar10[1].klass = 0;
      pIVar10[2].klass = (IEnumerator__Class *)this;
      if (iVar11 != 0) {
        uVar5 = (uint)((ulonglong)(pIVar10 + 2) >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
          iVar11 = iRam_?;
        } while (!bVar4);
      }
      (this->fields).updateCoroutine = pIVar10;
      if (iVar11 != 0) {
        uVar5 = (uint)((ulonglong)&(this->fields).updateCoroutine >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      pIVar10 = (this->fields).updateCoroutine;
      if (pIVar10 == (IEnumerator *)0x0) {
        uVar3 = func_?(&TypeInfo__System__NullReferenceException);
        this_02 = (NullReferenceException *)func_?(uVar3);
        pSVar12 = (String *)func_?(&StringLiteral_routine_is_null);
        mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                  (this_02,pSVar12,(MethodInfo *)0x0);
        uVar3 = func_?(&
                                    MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                   );
        FUN_?(this_02,uVar3);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar13 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
      if (bVar13 == 0) {
        uVar3 = func_?(&TypeInfo__System__ArgumentException);
        this_03 = (InvalidEnumArgumentException *)func_?(uVar3);
        pSVar12 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1(this_03,pSVar12,(MethodInfo *)0x0);
        uVar3 = func_?(&
                                    MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                   );
        FUN_?(this_03,uVar3);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this == (LocationIndicatorsManager *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar1 = (this->fields)._._._._.m_CachedPtr;
      if (pvVar1 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar1,pIVar10);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* IEnumerator UpdateCoroutine() */

IEnumerator *
Assembly-CSharp.dll::LocationIndicatorsManager::LocationIndicatorsManager_UpdateCoroutine
          (LocationIndicatorsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LocationIndicatorsManager___UpdateCoroutine_d__13);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__LocationIndicatorsManager___UpdateCoroutine_d__13)
  ;
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* LocationIndicatorsManager get_Instance() */

LocationIndicatorsManager *
Assembly-CSharp.dll::LocationIndicatorsManager::LocationIndicatorsManager_get_Instance
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LocationIndicatorsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__LocationIndicatorsManager->static_fields->_Instance_k__BackingField;
}


/* Void set_Instance(LocationIndicatorsManager) */

void Assembly-CSharp.dll::LocationIndicatorsManager::LocationIndicatorsManager_set_Instance
               (LocationIndicatorsManager *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LocationIndicatorsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__LocationIndicatorsManager->static_fields->_Instance_k__BackingField = value;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__LocationIndicatorsManager->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}

