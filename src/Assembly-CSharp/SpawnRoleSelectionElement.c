
/* Void AwaitSpawnThenClose() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_AwaitSpawnThenClose
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).awaitingSpawn = 1;
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (extraout_RAX != 0) {
    lVar1 = *(longlong *)(extraout_RAX + 0x88);
    b = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
    FUN_?(b,this);
    if (lVar1 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<int>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      plVar2 = (longlong *)(lVar1 + 0x20);
      a = *(Delegate **)(lVar1 + 0x20);
      do {
        pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine(a,b,(MethodInfo *)0x0);
        pAVar4 = TypeInfo__System__Action<int>;
        if (pDVar3 == (Delegate *)0x0) {
          lVar1 = 0;
        }
        else {
          lVar1 = FUN_?(pDVar3,TypeInfo__System__Action<int>);
          if (lVar1 == 0) {
            FUN_?(pDVar3,pAVar4);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        LOCK();
        pDVar3 = (Delegate *)*plVar2;
        bVar6 = a == pDVar3;
        if (bVar6) {
          *plVar2 = lVar1;
          pDVar3 = a;
        }
        UNLOCK();
        pDVar7 = a;
        if (!bVar6) {
          pDVar7 = pDVar3;
        }
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)plVar2 >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar10 == *puVar11;
            if (bVar6) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        bVar6 = pDVar7 != a;
        a = pDVar7;
      } while (bVar6);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Int32 CalculateTotalSpawnRoleCost(Int32) */

int32_t Assembly-CSharp.dll::SpawnRoleSelectionElement::
        SpawnRoleSelectionElement_CalculateTotalSpawnRoleCost
                  (SpawnRoleSelectionElement *this,int32_t spawnRoleId,MethodInfo *method)

{
  pOVar1 = (Object *)(ulonglong)(uint)spawnRoleId;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_00 != (MVWorldObjectClientManager *)0x0) &&
     (this_01 = (MVAvatarSpawnRoleCreator *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_00,spawnRoleId,(MethodInfo *)0x0),
     this_01 != (MVAvatarSpawnRoleCreator *)0x0)) {
    bVar2 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
    if (((this_01->klass->_1).naturalAligment < bVar2) ||
       ((MVAvatarSpawnRoleCreator__Class *)(this_01->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1]
        != TypeInfo__MVAvatarSpawnRoleCreator)) {
      FUN_?(this_01);
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    this_02 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                        (this_01,(MethodInfo *)0x0);
    if (this_02 != (AttributeSettingsManager *)0x0) {
      pKVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
               AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                         (this_02,(MethodInfo *)0x0);
      iVar4 = 0;
      if (pKVar5 != (KogamaSettingWrapperBase *)0x0) {
        bVar2 = (
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                ->_1).naturalAligment;
        if (((pKVar5->klass->_1).naturalAligment < bVar2) ||
           ((pKVar5->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
           )) {
          FUN_?(pKVar5);
          pcVar3 = (code *)swi(3);
          iVar4 = (*pcVar3)();
          return iVar4;
        }
        iVar4 = 0;
        pKVar6 = pKVar5[1].klass;
        if (pKVar6 == (KogamaSettingWrapperBase__Class *)0x0) goto code_?;
        uStack_7 = 0;
        uStack_8 = 0;
        if (iRam_? != 0) {
          uVar9 = (uint)((ulonglong)&pKStack_10 >> 0xc);
          puVar11 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar12 = *puVar11;
            LOCK();
            uVar13 = *puVar11;
            if (uVar12 == uVar13) {
              *puVar11 = uVar12 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (uVar12 != uVar13);
        }
        uStack_14 = (ulonglong)*(uint *)&(pKVar6->_0).byval_arg.field_0xc;
        uStack_15 = 2;
        DStack_16._version = (undefined4)uStack_14;
        DStack_16._index = uStack_14._4_4_;
        DStack_16._current.key = (Object *)0x0;
        DStack_16._current.value = (Object *)0x0;
        DStack_16._getEnumeratorRetType = 2;
        DStack_16._36_4_ = 0;
        pKStack_10 = pKVar6;
        DStack_16._dictionary = (Dictionary_2_System_Object_System_Object_ *)pKVar6;
        while (bVar17 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                       Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                 (&DStack_16,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                                 ), pOVar1 = DStack_16._current.value,
              unaff_RSI = 
              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
              , bVar17 != 0) {
          if (DStack_16._current.value == (Object *)0x0) goto code_?;
          lVar18 = FUN_?(DStack_16._current.value,
                                 TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                );
          unaff_R14 = 
          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
          ;
          uVar19 = extraout_XMM0_Da;
          if (lVar18 == 0) goto code_?;
          plVar20 = (longlong *)
                    FUN_?(pOVar1,
                                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                 );
          unaff_RSI = (IAttributeSetting__Class *)0x0;
          if (plVar20 == (longlong *)0x0) goto code_?;
          lVar18 = *plVar20;
          uVar21 = 0;
          if (*(ushort *)(lVar18 + 0x12e) != 0) {
            do {
              if (*(IAttributeSetting__Class **)
                   (*(longlong *)(lVar18 + 0xb0) + (ulonglong)uVar21 * 0x10) ==
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                 ) {
                puVar22 = (undefined8 *)
                          ((longlong)
                           *(int *)(*(longlong *)(lVar18 + 0xb0) + 8 + (ulonglong)uVar21 * 0x10) *
                           0x10 + 0x138 + lVar18);
                goto code_?;
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 < *(ushort *)(lVar18 + 0x12e));
          }
          puVar22 = (undefined8 *)
                    FUN_?(plVar20,
                                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                  ,0);
code_?:
          iVar23 = (*(code *)*puVar22)(plVar20,puVar22[1]);
          iVar4 = iVar4 + iVar23;
        }
      }
      return iVar4;
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  uVar19 = FUN_?(pOVar1,unaff_R14);
code_?:
  FUN_?(uVar19,unaff_RSI);
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Boolean CanShowFreeTry() */

bool Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_CanShowFreeTry
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      bVar2 = true;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar1 == (GameSessionData *)0x0) goto code_?;
      bVar2 = (pGVar1->fields).gameMode == 4;
    }
    if ((this->fields).isSubscriber == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVClientSettings);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVClientSettings->static_fields->flags & 0x4000000U) == 0) {
        bVar3 = 0;
      }
      else {
        bVar4 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
        bVar3 = bVar4 ^ 1;
      }
    }
    else {
      bVar3 = 1;
    }
    bVar5 = 0;
    if (!bVar2) {
      bVar5 = bVar3;
    }
    return bVar5;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Void ChangeBackground(GamePassTier) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_ChangeBackground
               (SpawnRoleSelectionElement *this,GamePassTier__Enum tier,MethodInfo *method)

{
  pGVar1 = (this->fields).backgroundTier1;
  cVar2 = (char)tier;
  if (pGVar1 != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pGVar1->fields)._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    cVar6 = (*pcRam_?)(pvVar3);
    if ((bool)cVar6 != (cVar2 == '\x01')) {
      pGVar1 = (this->fields).backgroundTier1;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,cVar2 == '\x01',(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields).backgroundTier2;
    if (pGVar1 != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pGVar1->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      cVar6 = (*pcRam_?)(pvVar3);
      if ((bool)cVar6 != (cVar2 == '\x02')) {
        pGVar1 = (this->fields).backgroundTier2;
        if (pGVar1 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,cVar2 == '\x02',(MethodInfo *)0x0);
      }
      pGVar1 = (this->fields).backgroundTier3;
      if (pGVar1 != (GameObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (pGVar1->fields)._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        cVar6 = (*pcRam_?)(pvVar3);
        if ((bool)cVar6 != (cVar2 == '\x03')) {
          pGVar1 = (this->fields).backgroundTier3;
          if (pGVar1 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,cVar2 == '\x03',(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Close(Int32) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_Close
               (SpawnRoleSelectionElement *this,int32_t spawnRoleID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSelectionElement____c___Close_b__39_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleSelectionElement____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
  }
  this_00 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__39_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    object = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__SpawnRoleSelectionElement____c___Close_b__39_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__39_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__39_0
                    >> 0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar5 != (MainCameraManager *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_CamRotateTarget);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    (pMVar5->fields).maskMode = 0;
    pCVar6 = (pMVar5->fields).mainCamera;
    if (pCVar6 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar6,(pMVar5->fields).cullingMask,(MethodInfo *)0x0);
      bVar7 = (pMVar5->fields).isLogicRendered;
      (pMVar5->fields).blueModeEnabled = 0;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_Logic);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pCVar6 = (pMVar5->fields).mainCamera;
      if (bVar7 == 0) {
        if (pCVar6 == (Camera *)0x0) {
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (pCVar6,(MethodInfo *)0x0);
        uVar9 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        uVar1 = uVar1 & ~(1 << (uVar9 & 0x1f));
      }
      else {
        if (pCVar6 == (Camera *)0x0) goto code_?;
        uVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (pCVar6,(MethodInfo *)0x0);
        uVar9 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        uVar1 = uVar1 | 1 << (uVar9 & 0x1f);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar6,uVar1,(MethodInfo *)0x0);
      (pMVar5->fields).isLogicRendered = bVar7;
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HandlePlayButtonVisibility() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::
     SpawnRoleSelectionElement_HandlePlayButtonVisibility
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData != (PlayerPlanetData *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    bVar2 = (pPVar1->fields).gamePassTier;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    if ((bVar2 < (this->fields).tierRequirement) &&
       ((pPVar1->fields).previewGamePassTier < (this->fields).tierRequirement)) {
      pGVar3 = (this->fields).playButton;
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      if ((this->fields).tierRequirement == (uint8_t)(bVar2 + 1)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        pGVar3 = (this->fields).freeTryButton;
        bVar4 = SpawnRoleSelectionElement_CanShowFreeTry(this,(MethodInfo *)0x0);
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,bVar4,(MethodInfo *)0x0);
          pGVar3 = (this->fields).lockedButton;
          bVar4 = SpawnRoleSelectionElement_CanShowFreeTry(this,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            bVar2 = bVar4 ^ 1;
            goto code_?;
          }
        }
        goto code_?;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      pGVar3 = (this->fields).freeTryButton;
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      pGVar3 = (this->fields).lockedButton;
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      bVar2 = 1;
      goto code_?;
    }
  }
  pGVar3 = (this->fields).playButton;
  if (pGVar3 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,1,(MethodInfo *)0x0);
    pGVar3 = (this->fields).freeTryButton;
    if (pGVar3 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      pGVar3 = (this->fields).lockedButton;
      if (pGVar3 != (GameObject *)0x0) {
        bVar2 = 0;
code_?:
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,bVar2,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar3 == (GameObject *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar6 = (pGVar3->fields)._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar3,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar6,bVar2);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandleTeamSwitching() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_HandleTeamSwitching
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  iVar1 = (this->fields).teamRequirement;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
      (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) &&
     (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
     pMVar5 != (MVLocalPlayer *)0x0)) {
    if (iVar1 == (pMVar5->fields)._._Team_k__BackingField) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTeam
                (this_01,(this->fields).teamRequirement,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar2 != (MVGameControllerBase *)0x0) &&
         (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
        this_00 = (pMVar3->fields).gameStatCounterManager;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar2 != (MVGameControllerBase *)0x0) &&
            (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
           ((pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0 &&
            (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0)
            , pMVar5 != (MVLocalPlayer *)0x0)))) {
          actorNr = (pMVar5->fields)._._ActorNr_k__BackingField;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
               (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
              (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) &&
             ((pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (pMVar4,(MethodInfo *)0x0), pMVar5 != (MVLocalPlayer *)0x0 &&
              (this_00 != (GameStatCounterManager *)0x0)))) {
            MVWorldObject.dll::GameStatCounterManager::
            GameStatCounterManager_RemoveTeamScoreOnActorLeave
                      (this_00,actorNr,(pMVar5->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar2 != (MVGameControllerBase *)0x0) &&
                (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
               ((pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0 &&
                (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                    (pMVar4,(MethodInfo *)0x0), pMVar5 != (MVLocalPlayer *)0x0)))) {
              bVar6 = cRam_? == '\0';
              (pMVar5->fields)._.checkpointWOID = -1;
              if (bVar6) {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
                   (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
                  (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0))
                 && (pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                        (pMVar4,(MethodInfo *)0x0), pMVar5 != (MVLocalPlayer *)0x0))
              {
                (pMVar5->fields)._._Team_k__BackingField = (this->fields).teamRequirement;
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize(Int32, Int32, GamePassTier, MVTeam, UnityAction`1[System.Int32],
   UnityAction`1[System.Int32]) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_Initialize
               (SpawnRoleSelectionElement *this,int32_t spawnRoleIndex,int32_t woId,
               GamePassTier__Enum tierRequirement,MVTeam__Enum team,
               UnityAction_1_System_Int32_ *onSelectedCallback,
               UnityAction_1_System_Int32_ *onActivatedCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleSelectionElement__OnPressPlay__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields)._.onSelectedCallback = onSelectedCallback;
  (this->fields)._.spawnRoleIndex = spawnRoleIndex;
  (this->fields)._.woId = woId;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.onSelectedCallback >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields)._.onActivatedCallback = onActivatedCallback;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.onActivatedCallback >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  (this->fields).teamRequirement = team;
  (this->fields).tierRequirement = (uint8_t)tierRequirement;
  value = SpawnRoleSelectionElement_CalculateTotalSpawnRoleCost(this,woId,(MethodInfo *)0x0);
  pTVar7 = (this->fields).spawnRoleCostAmount;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  BStack_8._value = (void *)0x0;
  uStack_9._0_4_ = 0.0;
  uStack_9._4_4_ = 0.0;
  pSVar10 = mscorlib.dll::System::Number::Number_FormatInt32
                      (value,(ReadOnlySpan_1_Char_ *)&BStack_8,(IFormatProvider *)0x0,
                       (MethodInfo *)0x0);
  if (pTVar7 != (Text *)0x0) {
    (*(pTVar7->klass->vtable).set_text.methodPtr)(pTVar7,pSVar10);
    pTVar7 = (this->fields).spawnRoleCostAmount;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Styles);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (value < 0) {
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      colorStyle = ColorStyle__Enum_NegativeRed;
    }
    else {
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      colorStyle = ColorStyle__Enum_OffWhite;
    }
    pCVar11 = Styles::Styles_GetColor((Color *)&BStack_8,colorStyle,(MethodInfo *)0x0);
    uVar12._0_4_ = pCVar11->b;
    uVar12._4_4_ = pCVar11->a;
    if (pTVar7 != (Text *)0x0) {
      BStack_8._value = *(void **)pCVar11;
      uStack_9 = uVar12;
      (*(pTVar7->klass->vtable).set_color.methodPtr)(pTVar7);
      pGVar13 = (this->fields).spawnRoleCostObject;
      if (pGVar13 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar13,0,(MethodInfo *)0x0);
        pGVar13 = (this->fields).moreInfoButton;
        if (pGVar13 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar13,0,(MethodInfo *)0x0);
          pNVar14 = (this->fields).spawnRoleCostFader;
          if (pNVar14 != (NotificationFade *)0x0) {
            (pNVar14->fields).shouldHideWhenDone = 0;
            pNVar14 = (this->fields).moreInfoButtonFader;
            if (pNVar14 != (NotificationFade *)0x0) {
              (pNVar14->fields).shouldHideWhenDone = 0;
              SpawnRoleSelectionElement_ChangeBackground
                        (this,tierRequirement & 0xff,(MethodInfo *)0x0);
              SpawnRoleSelectionElement_HandlePlayButtonVisibility(this,(MethodInfo *)0x0);
              pCVar15 = (this->fields).continueButtonHandler;
              if (pCVar15 != (ContinueButtonHandler *)0x0) {
                pAVar16 = (pCVar15->fields).OnClick;
                this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (this_00,(Object *)this,
                           MethodInfo__SpawnRoleSelectionElement__OnPressPlay__,(MethodInfo *)0x0);
                pAVar16 = (Action *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar16,(Delegate *)this_00,(MethodInfo *)0x0);
                if (pAVar16 == (Action *)0x0) {
                  (pCVar15->fields).OnClick = (Action *)0x0;
                }
                else {
                  pAVar17 = (Action *)0x0;
                  if (pAVar16->klass == TypeInfo__System__Action) {
                    pAVar17 = pAVar16;
                  }
                  if (pAVar17 == (Action *)0x0) {
                    FUN_?();
                    pcVar18 = (code *)swi(3);
                    (*pcVar18)();
                    return;
                  }
                  (pCVar15->fields).OnClick = pAVar17;
                  pAVar17 = (Action *)0x0;
                  if (pAVar16->klass == TypeInfo__System__Action) {
                    pAVar17 = pAVar16;
                  }
                  if (pAVar17 == (Action *)0x0) {
                    FUN_?();
                    pcVar18 = (code *)swi(3);
                    (*pcVar18)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar2 = (uint)((ulonglong)&(pCVar15->fields).OnClick >> 0xc);
                  lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                    puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                    LOCK();
                    bVar6 = uVar4 == *puVar5;
                    if (bVar6) {
                      *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar6);
                }
                bVar19 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
                pIVar20 = (this->fields).tryFreeButtonIcon;
                (this->fields).isSubscriber = bVar19;
                if (pIVar20 != (Image *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pIVar20,0,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__GamePassesManager);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField
                      != 0) {
                    pIVar20 = (this->fields).tryFreeButtonIcon;
                    if ((this->fields).isSubscriber == 0) {
                      pTVar21 = GamePassesManager::GamePassesManager_get_TogglePreviewState
                                          ((MethodInfo *)0x0);
                      if (pTVar21 == (TogglePreviewState *)0x0) goto code_?;
                      bVar6 = (pTVar21->fields).freeTry == 0;
                    }
                    else {
                      bVar6 = true;
                    }
                    if (pIVar20 == (Image *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)pIVar20,bVar6,(MethodInfo *)0x0);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnDestroy
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleSelectionElement__Close_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleSelectionElement__OnPressPlay__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = (this->fields)._.spawnRolePreviewer;
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
  method_00 = (MethodInfo *)0x0;
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
            ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
  if ((this->fields).awaitingSpawn != 0) {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,method_00);
    if (extraout_RAX == 0) goto code_?;
    this_00 = *(SpawnRolesManager **)(extraout_RAX + 0x88);
    value = (Action_1_Int32_ *)FUN_?(TypeInfo__System__Action<int>);
    FUN_?(value,this);
    if (this_00 == (SpawnRolesManager *)0x0) goto code_?;
    SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
              (this_00,value,(MethodInfo *)0x0);
  }
  pCVar1 = (this->fields).continueButtonHandler;
  if (pCVar1 != (ContinueButtonHandler *)0x0) {
    pAVar2 = (pCVar1->fields).OnClick;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__SpawnRoleSelectionElement__OnPressPlay__,
               (MethodInfo *)0x0);
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar2 == (Action *)0x0) {
      (pCVar1->fields).OnClick = (Action *)0x0;
    }
    else {
      pAVar3 = (Action *)0x0;
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar2;
      }
      if (pAVar3 == (Action *)0x0) {
        FUN_?(pAVar2,TypeInfo__System__Action);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (pCVar1->fields).OnClick = pAVar3;
      pAVar3 = (Action *)0x0;
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar2;
      }
      if (pAVar3 == (Action *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&(pCVar1->fields).OnClick >> 0xc);
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
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::
     SpawnRoleSelectionElement_OnPlayerPlanetDataUpdated
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleUnlockedPopupController>_SpawnRoleUnlockedPopupController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleSelectionElement__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSelectionElement____c___OnPlayerPlanetDataUpdated_b__44_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSelectionElement____c___OnPlayerPlanetDataUpdated_b__44_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSelectionElement____c__DisplayClass44_0___OnPlayerPlanetDataUpdated_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleSelectionElement____c__DisplayClass44_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleSelectionElement____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isWaitingForFreeTryTier != 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    pEVar2 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__44_0;
    if (pEVar2 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
      }
      pSVar3 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
      pEVar2 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,(Object *)pSVar3,
                 MethodInfo__SpawnRoleSelectionElement____c___OnPlayerPlanetDataUpdated_b__44_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__44_0 = pEVar2;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)
                        &TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__44_0 >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    (this->fields).isWaitingForFreeTryTier = 0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar9 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar9 != (PlayerPlanetData *)0x0) {
    if (((pPVar9->fields).previewGamePassTier < (this->fields).tierRequirement) ||
       ((this->fields).haveShownFreeTryUnlock != 0)) {
      return;
    }
    object = (Object *)FUN_?(TypeInfo__SpawnRoleSelectionElement____c__DisplayClass44_0);
    pAVar10 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__SpawnRoleSelectionElement__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0)
    ;
    pAVar10 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar10,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar10 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar11 = (Action *)0x0;
      if (pAVar10->klass == TypeInfo__System__Action) {
        pAVar11 = pAVar10;
      }
      if (pAVar11 == (Action *)0x0) {
        FUN_?(pAVar10,TypeInfo__System__Action);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar11;
      pAVar11 = (Action *)0x0;
      if (pAVar10->klass == TypeInfo__System__Action) {
        pAVar11 = pAVar10;
      }
      if (pAVar11 == (Action *)0x0) {
        FUN_?(pAVar10);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)
                      &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc)
      ;
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    pEVar2 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__44_1;
    if (pEVar2 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
      }
      pSVar3 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
      pEVar2 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,(Object *)pSVar3,
                 MethodInfo__SpawnRoleSelectionElement____c___OnPlayerPlanetDataUpdated_b__44_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__44_1 = pEVar2;
      func_?(&TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__44_1);
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    original = (this->fields).spawnRoleUnlockPopupPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar13 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         SpawnRoleUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleUnlockedPopupController>_SpawnRoleUnlockedPopupController_
                        );
    if (object != (Object *)0x0) {
      bVar8 = iRam_? != 0;
      object[1].klass = pOVar13;
      if (bVar8) {
        uVar4 = (uint)((ulonglong)(object + 1) >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__SpawnRoleSelectionElement____c__DisplayClass44_0___OnPlayerPlanetDataUpdated_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (object[1].klass != (Object__Class *)0x0) {
        SpawnRoleUnlockedPopupController::SpawnRoleUnlockedPopupController_Initialize
                  ((SpawnRoleUnlockedPopupController *)object[1].klass,
                   (uint)(this->fields).tierRequirement,0,1,(this->fields)._.woId,(MethodInfo *)0x0)
        ;
        (this->fields).haveShownFreeTryUnlock = 1;
        return;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnPressFreePlayAd() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnPressFreePlayAd
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSelectionElement__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSelectionElement____c___ShowAd_b__41_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    if (((pTVar1->fields).previewTier == 0) && ((pTVar1->fields).currentTier == 3)) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
      }
      this_01 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__41_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
        }
        object = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__SpawnRoleSelectionElement____c___ShowAd_b__41_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__41_0 = this_01;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)
                          &TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__41_0 >> 0xc
                         );
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
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar7 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar7);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar2,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar8 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar9 = (longlong)(pLVar8->fields)._size;
        uVar3 = 0;
        if (0 < lVar9) {
          lVar10 = 0;
          lVar11 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar8 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar8->fields)._size <= uVar3) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar13 = (pLVar8->fields)._items;
            if (pTVar13 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar13->max_length <= uVar3) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar2,(BaseEventData *)0x0,
                               (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                               (pMVar7->field7_0x38).rgctx_data[1].method);
            if (bVar14 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar3 = uVar3 + 1;
            lVar10 = lVar10 + 1;
            lVar11 = lVar11 + 8;
          } while (lVar10 < lVar9);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
    if (pTVar1 != (TogglePreviewState *)0x0) {
      if ((pTVar1->fields).freeTry == 0) {
        pIVar15 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        this_02 = (UnityAction_1_System_Int32Enum_ *)
                  FUN_?(
                               TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_02,(Object *)this,
                   MethodInfo__SpawnRoleSelectionElement__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar15 != (IAdManager *)0x0) {
          FUN_?();
          return;
        }
      }
      else {
        SpawnRoleSelectionElement_PreviewTier(this,(MethodInfo *)0x0);
        pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (pTVar1 != (TogglePreviewState *)0x0) {
          (pTVar1->fields).freeTry = 0;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnPressFreePlaySubscriber() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::
     SpawnRoleSelectionElement_OnPressFreePlaySubscriber
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleSelectionElement__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 == (TogglePreviewState *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((pTVar1->fields).previewTier == 0) && ((pTVar1->fields).currentTier == 3)) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    pEVar4 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_1;
    if (pEVar4 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
      }
      pSVar5 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
      pEVar4 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,(Object *)pSVar5,
                 MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_1 = pEVar4;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)
                        &TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_1 >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
  }
  else {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto DAT_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
              (this_00,(MethodInfo *)0x0);
    pAVar11 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__SpawnRoleSelectionElement__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0)
    ;
    pAVar11 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar11,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar11 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar12 = (Action *)0x0;
      if (pAVar11->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar11;
      }
      if (pAVar12 == (Action *)0x0) {
        FUN_?(pAVar11,TypeInfo__System__Action);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar12;
      pAVar12 = (Action *)0x0;
      if (pAVar11->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar11;
      }
      if (pAVar12 == (Action *)0x0) {
        FUN_?(pAVar11,TypeInfo__System__Action);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)
                      &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc)
      ;
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    pEVar4 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_0;
    if (pEVar4 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
      }
      pSVar5 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
      pEVar4 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,(Object *)pSVar5,
                 MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_0 = pEVar4;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)
                        &TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_0 >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    (this->fields).isWaitingForFreeTryTier = 1;
  }
  return;
}


/* Void OnPressLockedPlay() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnPressLockedPlay
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_You_need_to_unlock_Tier__0__befo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_need_to_unlock_Tier__0__befo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    uVar2 = (pPVar1->fields).gamePassTier;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      if (((byte)(uVar2 + 1) < (this->fields).tierRequirement) &&
         ((byte)((pPVar1->fields).previewGamePassTier + 1) < (this->fields).tierRequirement)) {
        pSVar3 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
        bVar4 = (*(this->klass->vtable).get_Tier.methodPtr)
                          (this,(this->klass->vtable).get_Tier.method);
        auStackX_18[0] = bVar4 - 1;
      }
      else {
        pSVar3 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
        bVar4 = (*(this->klass->vtable).get_Tier.methodPtr)
                          (this,(this->klass->vtable).get_Tier.method);
        auStackX_18[0] = (uint)bVar4;
      }
      arg0 = (Object *)FUN_?(uRam_?,auStackX_18);
      PStack_5._arg0 = (Object *)0x0;
      PStack_5._arg1 = (Object *)0x0;
      PStack_5._arg2 = (Object *)0x0;
      PStack_5._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_5,arg0,(MethodInfo *)0x0);
      PStack_6._arg0 = PStack_5._arg0;
      PStack_6._arg1 = PStack_5._arg1;
      PStack_6._arg2 = PStack_5._arg2;
      PStack_6._args = PStack_5._args;
      pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar3,&PStack_6,(MethodInfo *)0x0);
      this_00 = (this->fields).lockedTierBubble;
      if (this_00 != (GamePassesTextBubble *)0x0) {
        GamePassesTextBubble::GamePassesTextBubble_Activate(this_00,pSVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnPressPlay() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnPressPlay
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar4 = (pMVar3->fields).teams;
    if (pDVar4 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
      if (1 < (pDVar4->fields)._count - (pDVar4->fields)._freeCount) {
        method = (MethodInfo *)0x0;
        SpawnRoleSelectionElement_HandleTeamSwitching(this,(MethodInfo *)0x0);
      }
      avatarSpawnerWoId = (this->fields)._.woId;
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
      if ((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 200) != 0)) {
        cVar5 = FUN_?(avatarSpawnerWoId,
                              *(undefined8 *)(*(longlong *)(extraout_RAX + 200) + 0x30));
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__FirstTimePressPlayController);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        player = (MVPlayer *)TypeInfo__FirstTimePressPlayController->static_fields;
        if (*(bool *)&player->klass == 0) {
          FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
                    ((MethodInfo *)0x0);
        }
        if (cVar5 != '\0') {
          SpawnRoleSelectionElement_Close(this,0,(MethodInfo *)0x0);
          SpawnRoleSelectionElement_StartPlaying(this,(MethodInfo *)0x0);
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action<int>);
          LOCK();
          UNLOCK();
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        (this->fields).awaitingSpawn = 1;
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,in_R8);
        if (extraout_RAX_00 != 0) {
          this_00 = *(SpawnRolesManager **)(extraout_RAX_00 + 0x88);
          value = (Action_1_Int32_ *)FUN_?(TypeInfo__System__Action<int>);
          FUN_?(value,this);
          if (this_00 != (SpawnRolesManager *)0x0) {
            SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                      (this_00,value,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
               ((this_01 = (pMVar2->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0 &&
                (this_02 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                     (this_01,(MethodInfo *)0x0), this_02 != (MVLocalPlayer *)0x0)))
               ) {
              MVLocalPlayer::MVLocalPlayer_CreateSpawnRole
                        (this_02,avatarSpawnerWoId,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__ILockCursorManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField ==
                  0) {
                pMVar6 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance
                                   ((MethodInfo *)0x0);
                if ((pMVar6 == (MVGameControllerDesktop *)0x0) ||
                   (pIVar7 = (pMVar6->fields).lockCursorManager, pIVar7 == (ILockCursorManager *)0x0
                   )) goto code_?;
                FUN_?(2,TypeInfo__ILockCursorManager,pIVar7,1);
              }
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnSelctionHighlight() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnSelctionHighlight
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._.spawnRolePreviewer;
  (this->fields)._.isSelected = 1;
  if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
     (this_01 = (pSVar1->fields).grayScaleEffect, this_01 != (GrayscaleEffect *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_01,0,(MethodInfo *)0x0);
    pSVar1 = (this->fields)._.spawnRolePreviewer;
    if (pSVar1 != (SpawnRolePreviewer *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Walk);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = (pSVar1->fields).body;
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
      if (pMVar2 != (MVBodyObject *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pMVar2->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          pMVar2 = (pSVar1->fields).body;
          if (((pMVar2 != (MVBodyObject *)0x0) &&
              (pBVar3 = (pMVar2->fields).boneAnimation, pBVar3 != (BoneAnimation *)0x0)) &&
             ((pBVar3->fields).fallbackWalkSpeed = 5.6, pMVar2 != (MVBodyObject *)0x0)) {
            pBVar3 = (pMVar2->fields).boneAnimation;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar4 != (MVGameControllerBase *)0x0) &&
                (this_00 = (pMVar4->fields).game, this_00 != (MVNetworkGame *)0x0)) &&
               (iVar5 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                                  (this_00,(MethodInfo *)0x0), pBVar3 != (BoneAnimation *)0x0)) {
              BoneAnimation::BoneAnimation_StartAnimation
                        (pBVar3,StringLiteral_Walk,iVar5 + -500,(MethodInfo *)0x0);
              return;
            }
          }
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnSelected() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnSelected
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._.spawnRolePreviewer;
  (this->fields)._.isSelected = 1;
  if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
     (this_00 = (pSVar1->fields).grayScaleEffect, this_00 != (GrayscaleEffect *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    pSVar1 = (this->fields)._.spawnRolePreviewer;
    if (pSVar1 != (SpawnRolePreviewer *)0x0) {
      SpawnRolePreviewer::SpawnRolePreviewer_StartActiveAnimation(pSVar1,(MethodInfo *)0x0);
      pGVar2 = (this->fields).spawnRoleCostObject;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        pGVar2 = (this->fields).moreInfoButton;
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,1,(MethodInfo *)0x0);
          pNVar3 = (this->fields).playButtonFader;
          if (pNVar3 != (NotificationFade *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pNVar3,(MethodInfo *)0x0);
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,1,(MethodInfo *)0x0);
              pNVar3 = (this->fields).spawnRoleCostFader;
              if (pNVar3 != (NotificationFade *)0x0) {
                pCVar4 = (pNVar3->fields).group;
                (pNVar3->fields).playing = 1;
                (pNVar3->fields).pauseAt = (pNVar3->fields).duration;
                if (pCVar4 != (CanvasGroup *)0x0) {
                  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                            (pCVar4,0.0,(MethodInfo *)0x0);
                  (pNVar3->fields).currentTime = 0.0;
                  pNVar3 = (this->fields).moreInfoButtonFader;
                  if (pNVar3 != (NotificationFade *)0x0) {
                    pCVar4 = (pNVar3->fields).group;
                    (pNVar3->fields).playing = 1;
                    (pNVar3->fields).pauseAt = (pNVar3->fields).duration;
                    if (pCVar4 != (CanvasGroup *)0x0) {
                      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                                (pCVar4,0.0,(MethodInfo *)0x0);
                      (pNVar3->fields).currentTime = 0.0;
                      pNVar3 = (this->fields).playButtonFader;
                      if (pNVar3 != (NotificationFade *)0x0) {
                        pCVar4 = (pNVar3->fields).group;
                        (pNVar3->fields).playing = 1;
                        (pNVar3->fields).pauseAt = (pNVar3->fields).duration;
                        if (pCVar4 != (CanvasGroup *)0x0) {
                          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                                    (pCVar4,0.0,(MethodInfo *)0x0);
                          (pNVar3->fields).currentTime = 0.0;
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
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnShowSkillMenu() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnShowSkillMenu
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleSelectionSkillMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionSkillMenu>_SpawnRoleSelectionSkillMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSelectionElement____c__DisplayClass28_0___OnShowSkillMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleSelectionElement____c__DisplayClass28_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SpawnRoleSelectionElement____c__DisplayClass28_0);
  original = (this->fields).skillMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      SpawnRoleSelectionSkillMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionSkillMenu>_SpawnRoleSelectionSkillMenu_
                     );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__SpawnRoleSelectionElement____c__DisplayClass28_0___OnShowSkillMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (object[1].klass != (Object__Class *)0x0) {
      SpawnRoleSelectionSkillMenu::SpawnRoleSelectionSkillMenu_Initialize
                ((SpawnRoleSelectionSkillMenu *)object[1].klass,(this->fields)._.woId,
                 (uint)(this->fields).tierRequirement,(this->fields)._.spawnRolePreviewObject,
                 (MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnUnSelected() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_OnUnSelected
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._.spawnRolePreviewer;
  (this->fields)._.isSelected = 0;
  if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
     (this_00 = (pSVar1->fields).grayScaleEffect, this_00 != (GrayscaleEffect *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    pSVar1 = (this->fields)._.spawnRolePreviewer;
    if (pSVar1 != (SpawnRolePreviewer *)0x0) {
      SpawnRolePreviewer::SpawnRolePreviewer_StartInactiveAnimation(pSVar1,(MethodInfo *)0x0);
      pGVar2 = (this->fields).spawnRoleCostObject;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        pGVar2 = (this->fields).moreInfoButton;
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
          this_01 = (this->fields).playButtonFader;
          if ((this_01 != (NotificationFade *)0x0) &&
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_01,(MethodInfo *)0x0),
             pGVar2 != (GameObject *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                            ,0,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pGVar2 == (GameObject *)0x0) {
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pvVar4 = (pGVar2->fields)._.m_CachedPtr;
            if (pvVar4 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar5 = func_?(&UNK_?);
              FUN_?(uVar5,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar4,0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PreviewTier() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_PreviewTier
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SpawnRoleSelectionElement__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 == (TogglePreviewState *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((pTVar1->fields).previewTier == 0) && ((pTVar1->fields).currentTier == 3)) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    pEVar4 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_1;
    if (pEVar4 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
      }
      pSVar5 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
      pEVar4 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,(Object *)pSVar5,
                 MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_1 = pEVar4;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)
                        &TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_1 >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
  }
  else {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto DAT_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
              (this_00,(MethodInfo *)0x0);
    pAVar11 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__SpawnRoleSelectionElement__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0)
    ;
    pAVar11 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar11,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar11 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar12 = (Action *)0x0;
      if (pAVar11->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar11;
      }
      if (pAVar12 == (Action *)0x0) {
        FUN_?(pAVar11,TypeInfo__System__Action);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar12;
      pAVar12 = (Action *)0x0;
      if (pAVar11->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar11;
      }
      if (pAVar12 == (Action *)0x0) {
        FUN_?(pAVar11,TypeInfo__System__Action);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)
                      &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc)
      ;
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    pEVar4 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_0;
    if (pEVar4 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
      }
      pSVar5 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
      pEVar4 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,(Object *)pSVar5,
                 MethodInfo__SpawnRoleSelectionElement____c___PreviewTier_b__43_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_0 = pEVar4;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)
                        &TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__43_0 >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    (this->fields).isWaitingForFreeTryTier = 1;
  }
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_RewardedAdCallback
               (SpawnRoleSelectionElement *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSelectionElement____c___RewardedAdCallback_b__42_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSelectionElement____c___RewardedAdCallback_b__42_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleSelectionElement____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
code_?:
    SpawnRoleSelectionElement_PreviewTier(this,(MethodInfo *)0x0);
    return;
  }
  if ((result == RewardedAdResult__Enum_ErrorClient) ||
     (result == RewardedAdResult__Enum_ErrorInternal)) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    this_01 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__42_1;
    if (this_01 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
    goto code_?;
    if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    pSVar2 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pSVar2,
               MethodInfo__SpawnRoleSelectionElement____c___RewardedAdCallback_b__42_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__42_1 = this_01;
    ppEVar3 = &TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__42_1;
  }
  else {
    if (result == RewardedAdResult__Enum_ErrorTimeout) {
      return;
    }
    if (result == RewardedAdResult__Enum_RewardUnlocked) goto code_?;
    if (result != RewardedAdResult__Enum_RewardNotUnlocked) {
      return;
    }
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    this_01 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__42_0;
    if (this_01 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
    goto code_?;
    if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
    }
    pSVar2 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pSVar2,
               MethodInfo__SpawnRoleSelectionElement____c___RewardedAdCallback_b__42_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__42_0 = this_01;
    ppEVar3 = &TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__42_0;
  }
  func_?(ppEVar3);
code_?:
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar4 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar4->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar5 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar5 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar6 = (longlong)(pLVar5->fields)._size;
    uVar7 = 0;
    if (0 < lVar6) {
      lVar8 = 0;
      lVar9 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar5 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar5 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar5->fields)._size <= uVar7) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar11 = (pLVar5->fields)._items;
        if (pTVar11 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar11->max_length <= uVar7) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar11->vector + lVar9 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar12 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar4->field7_0x38).rgctx_data[1].method);
        if (bVar12 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 8;
      } while (lVar8 < lVar6);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ShowAd() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_ShowAd
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSelectionElement__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSelectionElement____c___ShowAd_b__41_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    if (((pTVar1->fields).previewTier == 0) && ((pTVar1->fields).currentTier == 3)) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
      }
      this_01 = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__41_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if (*(int *)&(TypeInfo__SpawnRoleSelectionElement____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__SpawnRoleSelectionElement____c);
        }
        object = TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__SpawnRoleSelectionElement____c___ShowAd_b__41_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__41_0 = this_01;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)
                          &TypeInfo__SpawnRoleSelectionElement____c->static_fields->__9__41_0 >> 0xc
                         );
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
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar7 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar7);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar2,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar8 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar9 = (longlong)(pLVar8->fields)._size;
        uVar3 = 0;
        if (0 < lVar9) {
          lVar10 = 0;
          lVar11 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar8 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar8->fields)._size <= uVar3) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar13 = (pLVar8->fields)._items;
            if (pTVar13 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar13->max_length <= uVar3) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar2,(BaseEventData *)0x0,
                               (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                               (pMVar7->field7_0x38).rgctx_data[1].method);
            if (bVar14 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar3 = uVar3 + 1;
            lVar10 = lVar10 + 1;
            lVar11 = lVar11 + 8;
          } while (lVar10 < lVar9);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
    if (pTVar1 != (TogglePreviewState *)0x0) {
      if ((pTVar1->fields).freeTry == 0) {
        pIVar15 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        this_02 = (UnityAction_1_System_Int32Enum_ *)
                  FUN_?(
                               TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_02,(Object *)this,
                   MethodInfo__SpawnRoleSelectionElement__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar15 != (IAdManager *)0x0) {
          FUN_?();
          return;
        }
      }
      else {
        SpawnRoleSelectionElement_PreviewTier(this,(MethodInfo *)0x0);
        pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (pTVar1 != (TogglePreviewState *)0x0) {
          (pTVar1->fields).freeTry = 0;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ShowSkillMenu() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_ShowSkillMenu
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleSelectionSkillMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionSkillMenu>_SpawnRoleSelectionSkillMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SpawnRoleSelectionElement____c__DisplayClass28_0___OnShowSkillMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnRoleSelectionElement____c__DisplayClass28_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SpawnRoleSelectionElement____c__DisplayClass28_0);
  original = (this->fields).skillMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      SpawnRoleSelectionSkillMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionSkillMenu>_SpawnRoleSelectionSkillMenu_
                     );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__SpawnRoleSelectionElement____c__DisplayClass28_0___OnShowSkillMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (object[1].klass != (Object__Class *)0x0) {
      SpawnRoleSelectionSkillMenu::SpawnRoleSelectionSkillMenu_Initialize
                ((SpawnRoleSelectionSkillMenu *)object[1].klass,(this->fields)._.woId,
                 (uint)(this->fields).tierRequirement,(this->fields)._.spawnRolePreviewObject,
                 (MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_StartPlaying
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pIVar1 != (IPlayModeUI *)0x0) {
      FUN_?(8,TypeInfo__IPlayModeUI,pIVar1,0);
      pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if ((pSVar2 == (SpawnRoleDataMediator *)0x0) ||
         (pSVar3 = (pSVar2->fields).SpawnRoleModeTypeWrapper,
         pSVar3 == (SpawnRoleModeTypeWrapper *)0x0)) goto code_?;
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar4 = (pSVar3->fields).spawnRoleType;
      if ((pSVar4 == (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) ||
         (pSVar5 = (pSVar4->fields).subscribableVariable,
         pSVar5 == (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0))
      goto code_?;
      if (((pSVar5->fields)._.value & 4) == 0) {
        return;
      }
      pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar6 == (GameEventManager *)0x0) ||
         (pGVar7 = (pGVar6->fields).AvatarCommandsPlayMode,
         pGVar7 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
      goto code_?;
      if ((pGVar7->fields).OnEnterPlaymode == (Action *)0x0) {
        return;
      }
      pAVar8 = (pGVar7->fields).OnEnterPlaymode;
      goto code_?;
    }
    goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ILockCursorManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pMVar9 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
    if ((pMVar9 == (MVGameControllerDesktop *)0x0) ||
       (pIVar10 = (pMVar9->fields).lockCursorManager, pIVar10 == (ILockCursorManager *)0x0))
    goto code_?;
    FUN_?(1,TypeInfo__ILockCursorManager,pIVar10,1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar11 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar11 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar11->fields).gameMode == 0) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar11 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar11 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar11->fields).gameMode != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar11 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar11 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar11->fields).gameMode != 4) {
        return;
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) goto code_?;
    cVar12 = FUN_?(1,TypeInfo__IEditModeUI);
    if (cVar12 == '\0') {
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar11 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar11 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar11->fields).gameMode == 4) goto code_?;
  }
  pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar6 != (GameEventManager *)0x0) &&
     (pGVar7 = (pGVar6->fields).AvatarCommandsPlayMode,
     pGVar7 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
    if ((pGVar7->fields).OnSetToSpawnPoint == (Action *)0x0) {
      return;
    }
    pAVar8 = (pGVar7->fields).OnSetToSpawnPoint;
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar8->fields)._._.invoke_impl)
              ((pAVar8->fields)._._.method_code,(pAVar8->fields)._._.method);
    return;
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateButtonUI() */

void Assembly-CSharp.dll::SpawnRoleSelectionElement::SpawnRoleSelectionElement_UpdateButtonUI
               (SpawnRoleSelectionElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData != (PlayerPlanetData *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    bVar2 = (pPVar1->fields).gamePassTier;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    if ((bVar2 < (this->fields).tierRequirement) &&
       ((pPVar1->fields).previewGamePassTier < (this->fields).tierRequirement)) {
      pGVar3 = (this->fields).playButton;
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      if ((this->fields).tierRequirement == (uint8_t)(bVar2 + 1)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        pGVar3 = (this->fields).freeTryButton;
        bVar4 = SpawnRoleSelectionElement_CanShowFreeTry(this,(MethodInfo *)0x0);
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,bVar4,(MethodInfo *)0x0);
          pGVar3 = (this->fields).lockedButton;
          bVar4 = SpawnRoleSelectionElement_CanShowFreeTry(this,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            bVar2 = bVar4 ^ 1;
            goto code_?;
          }
        }
        goto code_?;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      pGVar3 = (this->fields).freeTryButton;
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      pGVar3 = (this->fields).lockedButton;
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      bVar2 = 1;
      goto code_?;
    }
  }
  pGVar3 = (this->fields).playButton;
  if (pGVar3 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,1,(MethodInfo *)0x0);
    pGVar3 = (this->fields).freeTryButton;
    if (pGVar3 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
      pGVar3 = (this->fields).lockedButton;
      if (pGVar3 != (GameObject *)0x0) {
        bVar2 = 0;
code_?:
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,bVar2,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar3 == (GameObject *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar6 = (pGVar3->fields)._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar3,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar6,bVar2);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

