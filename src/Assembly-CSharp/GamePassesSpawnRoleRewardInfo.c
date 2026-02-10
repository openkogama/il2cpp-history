
/* Void Activate() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Activate
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolePreviewer;
  if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
     (this_00 = (pSVar1->fields).previewCam, this_00 != (Camera *)0x0)) {
    uVar2 = (undefined7)((ulonglong)method >> 8);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    obj = (pSVar1->fields).rootObject;
    if (obj != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,CONCAT71(uVar2,1),0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar4 = (obj->fields)._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar4,1);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void AwaitSpawnThenClose() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_AwaitSpawnThenClose
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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


/* Int32 CalculateSpawnRoleCost() */

int32_t Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
        GamePassesSpawnRoleRewardInfo_CalculateSpawnRoleCost
                  (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
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
    cRam_? = '\x01';
  }
  this_00 = (this->fields).spawnRole;
  if ((this_00 != (MVAvatarSpawnRoleCreator *)0x0) &&
     (this_01 = MVAvatarSpawnRoleCreator::
                MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                          (this_00,(MethodInfo *)0x0), this_01 != (AttributeSettingsManager *)0x0))
  {
    pKVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
             AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                       (this_01,(MethodInfo *)0x0);
    iVar2 = 0;
    if (pKVar1 != (KogamaSettingWrapperBase *)0x0) {
      bVar3 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
              ->_1).naturalAligment;
      if (((pKVar1->klass->_1).naturalAligment < bVar3) ||
         ((pKVar1->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) {
        FUN_?(pKVar1);
        pcVar4 = (code *)swi(3);
        iVar2 = (*pcVar4)();
        return iVar2;
      }
      pKVar5 = pKVar1[1].klass;
      if (pKVar5 == (KogamaSettingWrapperBase__Class *)0x0) goto code_?;
      uStack_6 = 0;
      uStack_7 = 0;
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&pKStack_9 >> 0xc);
        puVar10 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar10;
          LOCK();
          uVar12 = *puVar10;
          if (uVar11 == uVar12) {
            *puVar10 = uVar11 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar12);
      }
      uStack_13 = (ulonglong)*(uint *)&(pKVar5->_0).byval_arg.field_0xc;
      uStack_14 = 2;
      DStack_15._version = (undefined4)uStack_13;
      DStack_15._index = uStack_13._4_4_;
      DStack_15._current.key = (Object *)0x0;
      DStack_15._current.value = (Object *)0x0;
      DStack_15._getEnumeratorRetType = 2;
      DStack_15._36_4_ = 0;
      pKStack_9 = pKVar5;
      DStack_15._dictionary = (Dictionary_2_System_Object_System_Object_ *)pKVar5;
      iVar2 = 0;
      while (bVar16 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                               (&DStack_15,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                               ), this = (GamePassesSpawnRoleRewardInfo *)DStack_15._current.value,
            unaff_RSI = 
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
            , bVar16 != 0) {
        if ((GamePassesSpawnRoleRewardInfo *)DStack_15._current.value ==
            (GamePassesSpawnRoleRewardInfo *)0x0) goto code_?;
        lVar17 = FUN_?(DStack_15._current.value,
                               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                              );
        unaff_R14 = 
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
        ;
        uVar18 = extraout_XMM0_Da;
        if (lVar17 == 0) goto code_?;
        plVar19 = (longlong *)
                  FUN_?(this,
                                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                               );
        unaff_RSI = (IAttributeSetting__Class *)0x0;
        if (plVar19 == (longlong *)0x0) goto code_?;
        lVar17 = *plVar19;
        uVar20 = 0;
        if (*(ushort *)(lVar17 + 0x12e) != 0) {
          do {
            if (*(IAttributeSetting__Class **)
                 (*(longlong *)(lVar17 + 0xb0) + (ulonglong)uVar20 * 0x10) ==
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
               ) {
              puVar21 = (undefined8 *)
                        ((longlong)
                         *(int *)(*(longlong *)(lVar17 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) *
                         0x10 + 0x138 + lVar17);
              goto code_?;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < *(ushort *)(lVar17 + 0x12e));
        }
        puVar21 = (undefined8 *)
                  FUN_?(plVar19,
                                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                ,0);
code_?:
        iVar22 = (*(code *)*puVar21)(plVar19,puVar21[1]);
        iVar2 = iVar2 + iVar22;
      }
    }
    return iVar2;
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  uVar18 = FUN_?(this,unaff_R14);
code_?:
  FUN_?(uVar18,unaff_RSI);
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar2 = (*pcVar4)();
  return iVar2;
}


/* Boolean CanShowFreeTry() */

bool Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_CanShowFreeTry
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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
      bVar2 = false;
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
      bVar2 = (pGVar1->fields).gameMode != 4;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVClientSettings);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVClientSettings->static_fields->flags & 0x4000000U) == 0) {
      return 0;
    }
    bVar3 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
    return (bVar3 ^ 1) & bVar2;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean CanSpawn() */

bool Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_CanSpawn
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
     pMVar3 != (MVNetworkGameStateListener *)0x0)) {
    iVar4 = (pMVar3->fields).currentGameState;
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      bVar7 = (*pcVar5)();
      return bVar7;
    }
    pcRam_? = pcVar5;
    fVar8 = (float)(*pcRam_?)();
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
    if (extraout_RAX != 0) {
      if (iVar4 != 2) {
        return *(float *)(extraout_RAX + 0xfc) <= fVar8;
      }
      return 0;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar7 = (*pcVar5)();
  return bVar7;
}


/* Void ChangeBackground(GamePassTier) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_ChangeBackground
               (GamePassesSpawnRoleRewardInfo *this,GamePassTier__Enum tier,MethodInfo *method)

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

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Close
               (GamePassesSpawnRoleRewardInfo *this,int32_t spawnRoleID,MethodInfo *method)

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
                  MethodInfo__GamePassesSpawnRoleRewardInfo____c___Close_b__38_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
  }
  this_00 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__38_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    }
    object = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__GamePassesSpawnRoleRewardInfo____c___Close_b__38_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__38_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)
                     &TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__38_0 >> 0xc)
      ;
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


/* Void Deactivate() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Deactivate
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRolePreviewer;
  if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
     (this_00 = (pSVar1->fields).previewCam, this_00 != (Camera *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    obj = (pSVar1->fields).rootObject;
    if (obj != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (obj->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Color GetTeamRequirementColor(MVTeam) */

Color * Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
        GamePassesSpawnRoleRewardInfo_GetTeamRequirementColor
                  (Color *__return_storage_ptr__,GamePassesSpawnRoleRewardInfo *this,
                  MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (team == MVTeam__Enum_Blue) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamBlue;
  }
  else if (team == MVTeam__Enum_Red) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamRed;
  }
  else if (team == MVTeam__Enum_Green) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamGreen;
  }
  else if (team == MVTeam__Enum_Yellow) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamYellow;
  }
  else {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamNone;
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


/* Void HandleLockedUIVisibility(Boolean, Boolean) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_HandleLockedUIVisibility
               (GamePassesSpawnRoleRewardInfo *this,bool playerHasUnlockedTier,bool isTierUnlockable
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IEditModeUI);
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
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar1->fields).gameMode == 0) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) goto code_?;
    bVar2 = FUN_?(1);
    bVar2 = bVar2 ^ 1;
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
    if ((pGVar1->fields).gameMode == 4) goto code_?;
    bVar2 = 0;
  }
  pGVar3 = (this->fields).lockedUI;
  if (playerHasUnlockedTier == 0) {
    if (isTierUnlockable == 0) {
      bVar4 = 1;
    }
    else {
      bVar5 = GamePassesSpawnRoleRewardInfo_CanShowFreeTry(this,(MethodInfo *)0x0);
      bVar4 = bVar5 ^ 1;
    }
  }
  else {
    bVar4 = 0;
  }
  if (pGVar3 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,bVar4 | bVar2,(MethodInfo *)0x0);
    pGVar3 = (this->fields).freeTryUI;
    if (((isTierUnlockable & (playerHasUnlockedTier ^ 1)) == 0) || (bVar2 != 0)) {
      bVar5 = 0;
    }
    else {
      bVar5 = GamePassesSpawnRoleRewardInfo_CanShowFreeTry(this,(MethodInfo *)0x0);
    }
    if (pGVar3 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,bVar5,(MethodInfo *)0x0);
      pGVar3 = (this->fields).unlockedUI;
      bVar2 = (bVar2 ^ 1) & playerHasUnlockedTier;
      if (pGVar3 != (GameObject *)0x0) {
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
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pvVar7 = (pGVar3->fields)._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar3,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar7,bVar2);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HandleTeamSwitching() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_HandleTeamSwitching
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  iVar1 = (this->fields).team;
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
                (this_01,(this->fields).team,(MethodInfo *)0x0);
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
                (pMVar5->fields)._._Team_k__BackingField = (this->fields).team;
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


/* Void Initialize(Int32, GameObject, MVAvatarSpawnRoleCreator, GamePassTier) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Initialize
               (GamePassesSpawnRoleRewardInfo *this,int32_t spawnRoleIndex,
               GameObject *spawnRolePreviewObject,MVAvatarSpawnRoleCreator *spawnRole,
               GamePassTier__Enum tierRequirment,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayPressed__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesSpawnRoleRewardInfo__OnSpawnRoleBodyUpdate__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).spawnRoleIndex = spawnRoleIndex;
  (this->fields).spawnRole = spawnRole;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).spawnRole >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields).tierRequirment = (undefined1)tierRequirment;
  if (spawnRole == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
  MVar6 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team(spawnRole,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).team = MVar6;
  (this->fields).spawnRolePreviewObject = spawnRolePreviewObject;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).spawnRolePreviewObject >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pIVar7 = (this->fields).spawnRoleTeamImage;
  (this->fields).woid = (spawnRole->fields)._._._._.id;
  MVar6 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team(spawnRole,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (MVar6 == MVTeam__Enum_Blue) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    CVar8 = ColorStyle__Enum_TeamBlue;
  }
  else if (MVar6 == MVTeam__Enum_Red) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    CVar8 = ColorStyle__Enum_TeamRed;
  }
  else if (MVar6 == MVTeam__Enum_Green) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    CVar8 = ColorStyle__Enum_TeamGreen;
  }
  else if (MVar6 == MVTeam__Enum_Yellow) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    CVar8 = ColorStyle__Enum_TeamYellow;
  }
  else {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    CVar8 = ColorStyle__Enum_TeamNone;
  }
  pCVar9 = Styles::Styles_GetColor(&CStack_10,CVar8,(MethodInfo *)0x0);
  uVar11._0_4_ = pCVar9->r;
  uVar11._4_4_ = pCVar9->g;
  uVar12._0_4_ = pCVar9->b;
  uVar12._4_4_ = pCVar9->a;
  if (pIVar7 == (Image *)0x0) goto code_?;
  CStack_10._0_8_ = uVar11;
  CStack_10._8_8_ = uVar12;
  (*(pIVar7->klass->vtable).set_color.methodPtr)(pIVar7,&CStack_10);
  GamePassesSpawnRoleRewardInfo_ChangeBackground(this,tierRequirment & 0xff,(MethodInfo *)0x0);
  GamePassesSpawnRoleRewardInfo_SetupPreviewImage(this,spawnRolePreviewObject,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar13 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar13 == (GameSessionData *)0x0) goto code_?;
  bVar1 = true;
  if ((pGVar13->fields).gameMode == 0) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) goto code_?;
    cVar14 = FUN_?(1);
    if (cVar14 != '\0') goto code_?;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar13 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar13 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar13->fields).gameMode == 4) goto code_?;
code_?:
    this_00 = (this->fields).spawnRoleEditButton;
    if (this_00 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
  }
  uStack_15 = (undefined *)CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  value = GamePassesSpawnRoleRewardInfo_CalculateSpawnRoleCost(this,(MethodInfo *)0x0);
  pTVar16 = (this->fields).spawnRoleCostAmount;
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
  CStack_10.r = 0.0;
  CStack_10.g = 0.0;
  CStack_10.b = 0.0;
  CStack_10.a = 0.0;
  pSVar17 = mscorlib.dll::System::Number::Number_FormatInt32
                      (value,(ReadOnlySpan_1_Char_ *)&CStack_10,(IFormatProvider *)0x0,
                       (MethodInfo *)0x0);
  if (pTVar16 != (Text *)0x0) {
    (*(pTVar16->klass->vtable).set_text.methodPtr)(pTVar16,pSVar17);
    pTVar16 = (this->fields).spawnRoleCostAmount;
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
      CVar8 = ColorStyle__Enum_NegativeRed;
    }
    else {
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      CVar8 = ColorStyle__Enum_OffWhite;
    }
    pCVar9 = Styles::Styles_GetColor(&CStack_10,CVar8,(MethodInfo *)0x0);
    uVar18._0_4_ = pCVar9->r;
    uVar18._4_4_ = pCVar9->g;
    uVar19._0_4_ = pCVar9->b;
    uVar19._4_4_ = pCVar9->a;
    if (pTVar16 != (Text *)0x0) {
      CStack_10._0_8_ = uVar18;
      CStack_10._8_8_ = uVar19;
      (*(pTVar16->klass->vtable).set_color.methodPtr)
                (pTVar16,&CStack_10,(pTVar16->klass->vtable).set_color.method);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar20 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar20 != (PlayerPlanetData *)0x0) {
        pAVar21 = (Action *)0x0;
        if ((pPVar20->fields).gamePassTier < (byte)(undefined1)tierRequirment) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__GamePassesManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar20 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if (pPVar20 == (PlayerPlanetData *)0x0) goto code_?;
          bVar1 = (byte)(undefined1)tierRequirment <= (pPVar20->fields).previewGamePassTier;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar20 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar20 != (PlayerPlanetData *)0x0) {
          GamePassesSpawnRoleRewardInfo_HandleLockedUIVisibility
                    (this,bVar1,
                     (undefined1)tierRequirment ==
                     (undefined1)((pPVar20->fields).gamePassTier + GamePassTier__Enum_Tier1),
                     (MethodInfo *)0x0);
          pAVar22 = (spawnRole->fields).OnBodyUpdate;
          pNVar23 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar23,(Object *)this,
                     MethodInfo__GamePassesSpawnRoleRewardInfo__OnSpawnRoleBodyUpdate__,
                     (MethodInfo *)0x0);
          pAVar22 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar22,(Delegate *)pNVar23,(MethodInfo *)0x0);
          if (pAVar22 == (Action *)0x0) {
            (spawnRole->fields).OnBodyUpdate = (Action *)0x0;
          }
          else {
            pAVar24 = pAVar21;
            if (pAVar22->klass == TypeInfo__System__Action) {
              pAVar24 = pAVar22;
            }
            if (pAVar24 == (Action *)0x0) {
              FUN_?();
              pcVar25 = (code *)swi(3);
              (*pcVar25)();
              return;
            }
            (spawnRole->fields).OnBodyUpdate = pAVar24;
            pAVar24 = pAVar21;
            if (pAVar22->klass == TypeInfo__System__Action) {
              pAVar24 = pAVar22;
            }
            if (pAVar24 == (Action *)0x0) {
              FUN_?();
              pcVar25 = (code *)swi(3);
              (*pcVar25)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&(spawnRole->fields).OnBodyUpdate >> 0xc);
            lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
              puVar5 = (ulonglong *)(lVar3 + 0xADDR);
              LOCK();
              bVar1 = uVar4 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
          pAVar22 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
          pNVar23 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar23,(Object *)this,
                     MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__,
                     (MethodInfo *)0x0);
          pAVar22 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar22,(Delegate *)pNVar23,(MethodInfo *)0x0);
          if (pAVar22 == (Action *)0x0) {
            TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
          }
          else {
            pAVar24 = pAVar21;
            if (pAVar22->klass == TypeInfo__System__Action) {
              pAVar24 = pAVar22;
            }
            if (pAVar24 == (Action *)0x0) {
              FUN_?(pAVar22,TypeInfo__System__Action);
              pcVar25 = (code *)swi(3);
              (*pcVar25)();
              return;
            }
            TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar24;
            pAVar24 = pAVar21;
            if (pAVar22->klass == TypeInfo__System__Action) {
              pAVar24 = pAVar22;
            }
            if (pAVar24 == (Action *)0x0) {
              FUN_?(pAVar22);
              pcVar25 = (code *)swi(3);
              (*pcVar25)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)
                            &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated
                           >> 0xc);
            lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
              puVar5 = (ulonglong *)(lVar3 + 0xADDR);
              LOCK();
              bVar1 = uVar4 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
          pCVar26 = (this->fields).continueButtonHandler;
          if (pCVar26 != (ContinueButtonHandler *)0x0) {
            pAVar22 = (pCVar26->fields).OnClick;
            pNVar23 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar23,(Object *)this,
                       MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayPressed__,(MethodInfo *)0x0)
            ;
            pAVar22 = (Action *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar22,(Delegate *)pNVar23,(MethodInfo *)0x0);
            if (pAVar22 == (Action *)0x0) {
              (pCVar26->fields).OnClick = (Action *)0x0;
            }
            else {
              pAVar24 = pAVar21;
              if (pAVar22->klass == TypeInfo__System__Action) {
                pAVar24 = pAVar22;
              }
              if (pAVar24 == (Action *)0x0) {
                FUN_?(pAVar22);
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              (pCVar26->fields).OnClick = pAVar24;
              if (pAVar22->klass == TypeInfo__System__Action) {
                pAVar21 = pAVar22;
              }
              if (pAVar21 == (Action *)0x0) {
                FUN_?(pAVar22);
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar2 = (uint)((ulonglong)&(pCVar26->fields).OnClick >> 0xc);
              lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
              do {
                uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                LOCK();
                bVar1 = uVar4 == *puVar5;
                if (bVar1) {
                  *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar1);
            }
            pIVar7 = (this->fields).buttonAdImage;
            pTVar27 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0)
            ;
            if ((pTVar27 != (TogglePreviewState *)0x0) && (pIVar7 != (Image *)0x0)) {
              bVar1 = (pTVar27->fields).freeTry == 0;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                              ,bVar1,0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pIVar7 == (Image *)0x0) {
                FUN_?();
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              CVar28._.m_CachedPtr = (pIVar7->fields)._._._._._._._;
              if (CVar28._.m_CachedPtr == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pIVar7,(MethodInfo *)0x0);
                pcVar25 = (code *)swi(3);
                (*pcVar25)();
                return;
              }
              pcVar25 = pcRam_?;
              if (pcRam_? == (code *)0x0) {
                pcVar25 = (code *)FUN_?(&UNK_?);
                if (pcVar25 == (code *)0x0) {
                  uVar11 = func_?(&UNK_?);
                  FUN_?(uVar11,0);
                  pcVar25 = (code *)swi(3);
                  (*pcVar25)();
                  return;
                }
              }
              pcRam_? = pcVar25;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(CVar28._.m_CachedPtr,bVar1);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_OnDestroy
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesSpawnRoleRewardInfo__Close_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayPressed__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesSpawnRoleRewardInfo__OnSpawnRoleBodyUpdate__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).spawnRole;
  if (pMVar1 != (MVAvatarSpawnRoleCreator *)0x0) {
    pAVar2 = (pMVar1->fields).OnBodyUpdate;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,
               MethodInfo__GamePassesSpawnRoleRewardInfo__OnSpawnRoleBodyUpdate__,(MethodInfo *)0x0)
    ;
    pAVar4 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
    pAVar2 = (Action *)0x0;
    if (pAVar4 == (Action *)0x0) {
      (pMVar1->fields).OnBodyUpdate = (Action *)0x0;
    }
    else {
      pAVar5 = pAVar2;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar4;
      }
      if (pAVar5 == (Action *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (pMVar1->fields).OnBodyUpdate = pAVar5;
      pAVar5 = pAVar2;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar4;
      }
      if (pAVar5 == (Action *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(pMVar1->fields).OnBodyUpdate >> 0xc);
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
    pAVar4 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,
               MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar4 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar4,(Delegate *)pNVar3,(MethodInfo *)0x0);
    if (pAVar4 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar5 = pAVar2;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar4;
      }
      if (pAVar5 == (Action *)0x0) {
        FUN_?(pAVar4,TypeInfo__System__Action);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar5;
      pAVar5 = pAVar2;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar4;
      }
      if (pAVar5 == (Action *)0x0) {
        FUN_?(pAVar4);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)
                      &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc)
      ;
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pCVar12 = (this->fields).continueButtonHandler;
    if (pCVar12 != (ContinueButtonHandler *)0x0) {
      pAVar4 = (pCVar12->fields).OnClick;
      pNVar3 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar3,(Object *)this,MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayPressed__,
                 (MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      pAVar4 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar4,(Delegate *)pNVar3,(MethodInfo *)0x0);
      player = TypeInfo__System__Action;
      if (pAVar4 == (Action *)0x0) {
        (pCVar12->fields).OnClick = (Action *)0x0;
      }
      else {
        pAVar5 = pAVar2;
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar4;
        }
        if (pAVar5 == (Action *)0x0) {
          FUN_?(pAVar4);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (pCVar12->fields).OnClick = pAVar5;
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar2 = pAVar4;
        }
        player = TypeInfo__System__Action;
        if (pAVar2 == (Action *)0x0) {
          FUN_?(pAVar4);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&(pCVar12->fields).OnClick >> 0xc);
        player = (Action__Class *)(ulonglong)((uVar7 & 0x1fffff) >> 6);
        method_00 = (MethodInfo *)(ulonglong)(uVar7 & 0x3f);
        do {
          uVar8 = *(ulonglong *)((longlong)player * 8 + 0xADDR);
          puVar10 = (ulonglong *)((longlong)player * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar8 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar8 | 1L << (longlong)method_00;
          }
          UNLOCK();
        } while (!bVar11);
      }
      if ((this->fields).awaitingSpawn == 0) {
code_?:
        pSVar13 = (this->fields).spawnRolePreviewer;
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
        if (pSVar13 != (SpawnRolePreviewer *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pSVar13->fields)._._._._.m_CachedPtr != (void *)0x0) {
            pSVar13 = (this->fields).spawnRolePreviewer;
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
                      ((Object_1 *)pSVar13,0.0,(MethodInfo *)0x0);
          }
        }
        return;
      }
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)player,method_00);
      if (extraout_RAX != 0) {
        this_00 = *(SpawnRolesManager **)(extraout_RAX + 0x88);
        value = (Action_1_Int32_ *)FUN_?(TypeInfo__System__Action<int>);
        FUN_?(value,this);
        if (this_00 != (SpawnRolesManager *)0x0) {
          SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
                    (this_00,value,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnEditPressed() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_OnEditPressed
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass33_0___OnEditPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass33_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass33_0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar1 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar1->fields).gameMode != 4) {
        return;
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
        (IEditModeUI *)0x0) {
      cVar2 = FUN_?(1,TypeInfo__IEditModeUI);
      if (cVar2 != '\0') {
        return;
      }
      original = (this->fields).spawnRoleEditorMenuPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar3 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                         );
      if (object != (Object *)0x0) {
        bVar4 = iRam_? != 0;
        object[1].klass = pOVar3;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)(object + 1) >> 0xc);
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
        pMVar9 = (this->fields).spawnRole;
        if ((pMVar9 != (MVAvatarSpawnRoleCreator *)0x0) && (object[1].klass != (Object__Class *)0x0)
           ) {
          SpawnRoleEditorMenu::SpawnRoleEditorMenu_Initialize
                    ((SpawnRoleEditorMenu *)object[1].klass,(pMVar9->fields)._._._._.id,
                     (MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_00,object,
                     MethodInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass33_0___OnEditPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,this_00,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnLockedPressed() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_OnLockedPressed
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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
      if (((byte)(uVar2 + 1) < (this->fields).tierRequirment) &&
         ((byte)((pPVar1->fields).previewGamePassTier + 1) < (this->fields).tierRequirment)) {
        pSVar3 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
        auStackX_18[0] = (this->fields).tierRequirment - 1;
      }
      else {
        pSVar3 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
        auStackX_18[0] = (uint)(this->fields).tierRequirment;
      }
      arg0 = (Object *)FUN_?(uRam_?,auStackX_18);
      PStack_4._arg0 = (Object *)0x0;
      PStack_4._arg1 = (Object *)0x0;
      PStack_4._arg2 = (Object *)0x0;
      PStack_4._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_4,arg0,(MethodInfo *)0x0);
      PStack_5._arg0 = PStack_4._arg0;
      PStack_5._arg1 = PStack_4._arg1;
      PStack_5._arg2 = PStack_4._arg2;
      PStack_5._args = PStack_4._args;
      pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar3,&PStack_5,(MethodInfo *)0x0);
      this_00 = (this->fields).lockedTipTextBubble;
      if (this_00 != (GamePassesTextBubble *)0x0) {
        GamePassesTextBubble::GamePassesTextBubble_Activate(this_00,pSVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnPlayPressed() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_OnPlayPressed
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesSpawnRoleRewardInfo____c___OnPlayPressed_b__36_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c);
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
        GamePassesSpawnRoleRewardInfo_HandleTeamSwitching(this,(MethodInfo *)0x0);
      }
      pMVar5 = (MVPlayer *)0x0;
      bVar6 = GamePassesSpawnRoleRewardInfo_CanSpawn(this,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
        }
        this_02 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__36_0;
        if (this_02 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
          if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
          }
          object = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
          this_02 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                     MethodInfo__GamePassesSpawnRoleRewardInfo____c___OnPlayPressed_b__36_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__36_0 = this_02;
          if (iRam_? != 0) {
            uVar7 = (uint)((ulonglong)
                            &TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__36_0
                           >> 0xc);
            puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar9 = *puVar8;
              LOCK();
              uVar10 = *puVar8;
              if (uVar9 == uVar10) {
                *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (uVar9 != uVar10);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02
                   ,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        (this->fields).enterPlayWhenPlayerCanSpawn = 1;
        return;
      }
      pMVar11 = (this->fields).spawnRole;
      if (pMVar11 != (MVAvatarSpawnRoleCreator *)0x0) {
        avatarSpawnerWoId = (pMVar11->fields)._._._._.id;
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar5,in_R8);
        if ((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 200) != 0)) {
          cVar12 = FUN_?(avatarSpawnerWoId,
                                 *(undefined8 *)(*(longlong *)(extraout_RAX + 200) + 0x30));
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__FirstTimePressPlayController);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar5 = (MVPlayer *)TypeInfo__FirstTimePressPlayController->static_fields;
          if (*(bool *)&pMVar5->klass == 0) {
            FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
                      ((MethodInfo *)0x0);
          }
          if (cVar12 != '\0') {
            GamePassesSpawnRoleRewardInfo_Close(this,0,(MethodInfo *)0x0);
            GamePassesSpawnRoleRewardInfo_StartPlaying(this,(MethodInfo *)0x0);
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
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,pMVar5,in_R8);
          if (extraout_RAX_00 != 0) {
            this_00 = *(SpawnRolesManager **)(extraout_RAX_00 + 0x88);
            value = (Action_1_Int32_ *)FUN_?(TypeInfo__System__Action<int>);
            FUN_?(value,this);
            if (this_00 != (SpawnRolesManager *)0x0) {
              SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                        (this_00,value,(MethodInfo *)0x0);
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar2 != (MVNetworkGame *)0x0) &&
                  (this_01 = (pMVar2->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0)
                  ) && (this_03 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                            (this_01,(MethodInfo *)0x0),
                       this_03 != (MVLocalPlayer *)0x0)) {
                MVLocalPlayer::MVLocalPlayer_CreateSpawnRole
                          (this_03,avatarSpawnerWoId,(MethodInfo *)0x0);
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
                if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField
                    == 0) {
                  pMVar13 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance
                                      ((MethodInfo *)0x0);
                  if ((pMVar13 == (MVGameControllerDesktop *)0x0) ||
                     (pIVar14 = (pMVar13->fields).lockCursorManager,
                     pIVar14 == (ILockCursorManager *)0x0)) goto code_?;
                  FUN_?(4,TypeInfo__ILockCursorManager,pIVar14,1);
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
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_OnPlayerPlanetDataUpdated
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
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
    FUN_?(&MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__);
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
    FUN_?(&
                  MethodInfo__GamePassesSpawnRoleRewardInfo____c___OnPlayerPlanetDataUpdated_b__53_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesSpawnRoleRewardInfo____c___OnPlayerPlanetDataUpdated_b__53_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass53_0___OnPlayerPlanetDataUpdated_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass53_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PLAY_WOID_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = (this->fields).tierRequirment;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar2 != (PlayerPlanetData *)0x0) {
    if ((pPVar2->fields).gamePassTier < bVar1) {
      bVar1 = (this->fields).tierRequirment;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar2 == (PlayerPlanetData *)0x0) goto code_?;
      bVar3 = bVar1 <= (pPVar2->fields).previewGamePassTier;
    }
    else {
      bVar3 = true;
    }
    uVar4 = (this->fields).tierRequirment;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar2 != (PlayerPlanetData *)0x0) {
      GamePassesSpawnRoleRewardInfo_HandleLockedUIVisibility
                (this,bVar3,uVar4 == (uint8_t)((pPVar2->fields).gamePassTier + 1),(MethodInfo *)0x0
                );
      if ((this->fields).isWaitingForFreeTryTier != 0) {
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
        }
        pEVar6 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__53_0;
        if (pEVar6 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
          }
          pGVar7 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
          pEVar6 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,(Object *)pGVar7,
                     MethodInfo__GamePassesSpawnRoleRewardInfo____c___OnPlayerPlanetDataUpdated_b__53_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__53_0 = pEVar6;
          if (iRam_? != 0) {
            uVar8 = (uint)((ulonglong)
                            &TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__53_0
                           >> 0xc);
            lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
            do {
              uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
              puVar11 = (ulonglong *)(lVar9 + 0xADDR);
              LOCK();
              bVar3 = uVar10 == *puVar11;
              if (bVar3) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar3);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar5,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,
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
      pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar2 != (PlayerPlanetData *)0x0) {
        if (((pPVar2->fields).previewGamePassTier < (this->fields).tierRequirment) ||
           ((this->fields).haveShownFreeTryUnlock != 0)) {
          return;
        }
        object = (Object *)
                 FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass53_0);
        pAVar12 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
        this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_00,(Object *)this,
                   MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__,
                   (MethodInfo *)0x0);
        pAVar12 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pAVar12,(Delegate *)this_00,(MethodInfo *)0x0);
        if (pAVar12 == (Action *)0x0) {
          TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
        }
        else {
          pAVar13 = (Action *)0x0;
          if (pAVar12->klass == TypeInfo__System__Action) {
            pAVar13 = pAVar12;
          }
          if (pAVar13 == (Action *)0x0) {
            FUN_?(pAVar12,TypeInfo__System__Action);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar13;
          pAVar13 = (Action *)0x0;
          if (pAVar12->klass == TypeInfo__System__Action) {
            pAVar13 = pAVar12;
          }
          if (pAVar13 == (Action *)0x0) {
            FUN_?(pAVar12);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)
                          &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >>
                         0xc);
          lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
          do {
            uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar11 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar3 = uVar10 == *puVar11;
            if (bVar3) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
        }
        pEVar6 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__53_1;
        if (pEVar6 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
          }
          pGVar7 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
          pEVar6 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,(Object *)pGVar7,
                     MethodInfo__GamePassesSpawnRoleRewardInfo____c___OnPlayerPlanetDataUpdated_b__53_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__53_1 = pEVar6;
          func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->
                               __9__53_1);
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar5,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar6,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        original = (this->fields).spawnRoleUnlockPopupPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar15 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             SpawnRoleUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleUnlockedPopupController>_SpawnRoleUnlockedPopupController_
                            );
        if (object != (Object *)0x0) {
          bVar3 = iRam_? != 0;
          object[1].klass = pOVar15;
          if (bVar3) {
            uVar8 = (uint)((ulonglong)(object + 1) >> 0xc);
            lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
            do {
              uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
              puVar11 = (ulonglong *)(lVar9 + 0xADDR);
              LOCK();
              bVar3 = uVar10 == *puVar11;
              if (bVar3) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar3);
          }
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_01,object,
                     MethodInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass53_0___OnPlayerPlanetDataUpdated_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar5,(BaseEventData *)0x0,this_01,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          if (object[1].klass != (Object__Class *)0x0) {
            SpawnRoleUnlockedPopupController::SpawnRoleUnlockedPopupController_Initialize
                      ((SpawnRoleUnlockedPopupController *)object[1].klass,
                       (uint)(this->fields).tierRequirment,0,1,(this->fields).woid,(MethodInfo *)0x0
                      );
            pSVar16 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&(this->fields).woid,(MethodInfo *)0x0);
            pSVar16 = mscorlib.dll::System::String::String_Concat_4
                                (StringLiteral_PLAY_WOID_,pSVar16,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar16,(MethodInfo *)0x0);
            (this->fields).haveShownFreeTryUnlock = 1;
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnPressFreePlay() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_OnPressFreePlay
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__GamePassesSpawnRoleRewardInfo__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesSpawnRoleRewardInfo____c___ShowAd_b__50_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
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
      if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
      }
      this_01 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__50_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
        }
        object = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__GamePassesSpawnRoleRewardInfo____c___ShowAd_b__50_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__50_0 = this_01;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)
                          &TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__50_0 >>
                         0xc);
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
                   MethodInfo__GamePassesSpawnRoleRewardInfo__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar15 != (IAdManager *)0x0) {
          FUN_?();
          return;
        }
      }
      else {
        GamePassesSpawnRoleRewardInfo_PreviewTier(this,(MethodInfo *)0x0);
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


/* Void OnPressed() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_OnPressed
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
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
    FUN_?(&
                  SpawnRoleSelectionSkillMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleSelectionSkillMenu>_SpawnRoleSelectionSkillMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass32_0___OnPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass32_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_LOOK_WOID_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass32_0);
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
               MethodInfo__GamePassesSpawnRoleRewardInfo____c__DisplayClass32_0___OnPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                ((SpawnRoleSelectionSkillMenu *)object[1].klass,(this->fields).woid,
                 (uint)(this->fields).tierRequirment,(this->fields).spawnRolePreviewObject,
                 (MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&(this->fields).woid,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_LOOK_WOID_,pSVar7,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar8 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar8 == (ILogger_1 *)0x0) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar8,3,pSVar7);
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnSpawnRoleBodyUpdate() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_OnSpawnRoleBodyUpdate
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  this_01 = (this->fields).spawnRole;
  if (this_01 != (MVAvatarSpawnRoleCreator *)0x0) {
    auStack_1._8_8_ = &UNK_?;
    pMVar2 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_AvatarPrototype
                        (this_01,(MethodInfo *)0x0);
    if (pMVar2 != (MVPreviewAvatar *)0x0) {
      pGVar3 = (pMVar2->fields)._._.gameObject;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__GameObject);
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Preview_Root___TierShopItem);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_SpawnRole);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar4 = (this->fields).spawnRolePreviewer;
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
      if (pSVar4 != (SpawnRolePreviewer *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pSVar4->fields)._._._._.m_CachedPtr != (void *)0x0) {
          pSVar4 = (this->fields).spawnRolePreviewer;
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
                    ((Object_1 *)pSVar4,0.0,(MethodInfo *)0x0);
        }
      }
      pSVar4 = (this->fields).spawnRolePreviewerPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar4 = (SpawnRolePreviewer *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pSVar4,
                          SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                         );
      bVar5 = iRam_? != 0;
      (this->fields).spawnRolePreviewer = pSVar4;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).spawnRolePreviewer >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pGVar3 = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pGVar3,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
      if (pGVar3 == (GameObject *)0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar3,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar12 = TypeInfo__UnityEngine__Quaternion->static_fields;
      if (pTVar11 != (Transform *)0x0) {
        fStack_13 = (pQVar12->identityQuaternion).x;
        fStack_14 = (pQVar12->identityQuaternion).y;
        fStack_15 = (pQVar12->identityQuaternion).z;
        fStack_16 = (pQVar12->identityQuaternion).w;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar17 = (pTVar11->fields)._._.m_CachedPtr;
        if (pvVar17 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar18 = func_?(&UNK_?);
          FUN_?(uVar18,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar17,&fStack_13);
        self = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
        name = StringLiteral_Preview_Root___TierShopItem;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
                  (self,name,(MethodInfo *)0x0);
        if (self != (GameObject *)0x0) {
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (self,(MethodInfo *)0x0);
          pSVar4 = (this->fields).spawnRolePreviewer;
          if (pSVar4 != (SpawnRolePreviewer *)0x0) {
            auStack_1._4_4_ = _UNK_?;
            auStack_1._0_4_ = _UNK_?;
            auStack_1._8_4_ = (float)(this->fields).spawnRoleIndex * _UNK_?;
            VStack_19.z = _UNK_?;
            VStack_19._0_8_ = (ulonglong)_UNK_? << 0x20;
            SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                      (pSVar4,(this->fields).previewWidth,(this->fields).previewHeight,
                       CameraClearFlags__Enum_Color,
                       LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,&VStack_19,pTVar11,
                       (Vector3 *)auStack_1,StringLiteral_SpawnRole,(this->fields).spawnRoleIndex,
                       pGVar3,(MethodInfo *)0x0);
            pSVar4 = (this->fields).spawnRolePreviewer;
            if ((pSVar4 != (SpawnRolePreviewer *)0x0) &&
               (this_00 = (this->fields).spawnRoleImage, this_00 != (RawImage *)0x0)) {
              UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                        (this_00,(Texture *)(pSVar4->fields).previewTexture,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  auStack_1._8_8_ = &UNK_?;
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void PreviewTier() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_PreviewTier
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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
    FUN_?(&MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesSpawnRoleRewardInfo____c___PreviewTier_b__52_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesSpawnRoleRewardInfo____c___PreviewTier_b__52_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
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
    if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    }
    pEVar4 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__52_1;
    if (pEVar4 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
      }
      pGVar5 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
      pEVar4 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,(Object *)pGVar5,
                 MethodInfo__GamePassesSpawnRoleRewardInfo____c___PreviewTier_b__52_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__52_1 = pEVar4;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)
                        &TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__52_1 >>
                       0xc);
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
               MethodInfo__GamePassesSpawnRoleRewardInfo__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
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
    if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    }
    pEVar4 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__52_0;
    if (pEVar4 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
      }
      pGVar5 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
      pEVar4 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,(Object *)pGVar5,
                 MethodInfo__GamePassesSpawnRoleRewardInfo____c___PreviewTier_b__52_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__52_0 = pEVar4;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)
                        &TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__52_0 >>
                       0xc);
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
    (this->fields).haveShownFreeTryUnlock = 0;
  }
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_RewardedAdCallback
               (GamePassesSpawnRoleRewardInfo *this,RewardedAdResult__Enum result,MethodInfo *method
               )

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
                  MethodInfo__GamePassesSpawnRoleRewardInfo____c___RewardedAdCallback_b__51_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesSpawnRoleRewardInfo____c___RewardedAdCallback_b__51_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c);
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
    GamePassesSpawnRoleRewardInfo_PreviewTier(this,(MethodInfo *)0x0);
    return;
  }
  if ((result == RewardedAdResult__Enum_ErrorClient) ||
     (result == RewardedAdResult__Enum_ErrorInternal)) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    }
    this_01 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__51_1;
    if (this_01 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
    goto code_?;
    if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    }
    pGVar2 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pGVar2,
               MethodInfo__GamePassesSpawnRoleRewardInfo____c___RewardedAdCallback_b__51_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__51_1 = this_01;
    ppEVar3 = &TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__51_1;
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
    if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    }
    this_01 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__51_0;
    if (this_01 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
    goto code_?;
    if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    }
    pGVar2 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pGVar2,
               MethodInfo__GamePassesSpawnRoleRewardInfo____c___RewardedAdCallback_b__51_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__51_0 = this_01;
    ppEVar3 = &TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__51_0;
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


/* Void SetupPreviewImage(GameObject) */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::
     GamePassesSpawnRoleRewardInfo_SetupPreviewImage
               (GamePassesSpawnRoleRewardInfo *this,GameObject *spawnRolePreviewObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_Root___TierShopItem);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SpawnRole);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRolePreviewer;
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
  if (pSVar1 != (SpawnRolePreviewer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pSVar1 = (this->fields).spawnRolePreviewer;
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
                ((Object_1 *)pSVar1,0.0,(MethodInfo *)0x0);
    }
  }
  pSVar1 = (this->fields).spawnRolePreviewerPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = (SpawnRolePreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pSVar1,
                      SpawnRolePreviewer_MethodInfo__UnityEngine__Object__Instantiate<SpawnRolePreviewer>_SpawnRolePreviewer_
                     );
  bVar2 = iRam_? != 0;
  (this->fields).spawnRolePreviewer = pSVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).spawnRolePreviewer >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_01 = (GameObject *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)spawnRolePreviewObject,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                      );
  if (this_01 == (GameObject *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (this_01,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
  if (pTVar8 != (Transform *)0x0) {
    fStack_10 = (pQVar9->identityQuaternion).x;
    fStack_11 = (pQVar9->identityQuaternion).y;
    fStack_12 = (pQVar9->identityQuaternion).z;
    fStack_13 = (pQVar9->identityQuaternion).w;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar14 = (pTVar8->fields)._._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar14,&fStack_10);
    self = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
    name = StringLiteral_Preview_Root___TierShopItem;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
              (self,name,(MethodInfo *)0x0);
    if (self != (GameObject *)0x0) {
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (self,(MethodInfo *)0x0);
      pSVar1 = (this->fields).spawnRolePreviewer;
      if (pSVar1 != (SpawnRolePreviewer *)0x0) {
        VStack_16.y = _UNK_?;
        VStack_16.x = _UNK_?;
        VStack_17.z = _UNK_?;
        VStack_17._0_8_ = (ulonglong)_UNK_? << 0x20;
        VStack_16.z = (float)(this->fields).spawnRoleIndex * _UNK_?;
        SpawnRolePreviewer::SpawnRolePreviewer_Initialize
                  (pSVar1,(this->fields).previewWidth,(this->fields).previewHeight,
                   CameraClearFlags__Enum_Color,
                   LayerFlags__Enum_CamRotateTarget|LayerFlags__Enum_Default,&VStack_17,pTVar8,
                   &VStack_16,StringLiteral_SpawnRole,(this->fields).spawnRoleIndex,this_01,
                   (MethodInfo *)0x0);
        pSVar1 = (this->fields).spawnRolePreviewer;
        if ((pSVar1 != (SpawnRolePreviewer *)0x0) &&
           (this_00 = (this->fields).spawnRoleImage, this_00 != (RawImage *)0x0)) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (this_00,(Texture *)(pSVar1->fields).previewTexture,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ShowAd() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_ShowAd
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__GamePassesSpawnRoleRewardInfo__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesSpawnRoleRewardInfo____c___ShowAd_b__50_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
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
      if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
      }
      this_01 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__50_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
        }
        object = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__GamePassesSpawnRoleRewardInfo____c___ShowAd_b__50_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__50_0 = this_01;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)
                          &TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__50_0 >>
                         0xc);
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
                   MethodInfo__GamePassesSpawnRoleRewardInfo__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar15 != (IAdManager *)0x0) {
          FUN_?();
          return;
        }
      }
      else {
        GamePassesSpawnRoleRewardInfo_PreviewTier(this,(MethodInfo *)0x0);
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


/* Void StartPlaying() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_StartPlaying
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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


/* Void Update() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Update
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

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
                  MethodInfo__GamePassesSpawnRoleRewardInfo____c___Update_b__43_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).enterPlayWhenPlayerCanSpawn != 0) {
    bVar1 = GamePassesSpawnRoleRewardInfo_CanSpawn(this,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
      }
      this_00 = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__43_0;
      if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__GamePassesSpawnRoleRewardInfo____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__GamePassesSpawnRoleRewardInfo____c);
        }
        object = TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9;
        this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                   MethodInfo__GamePassesSpawnRoleRewardInfo____c___Update_b__43_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__43_0 = this_00;
        func_?(&TypeInfo__GamePassesSpawnRoleRewardInfo____c->static_fields->__9__43_0)
        ;
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      (this->fields).enterPlayWhenPlayerCanSpawn = 0;
      GamePassesSpawnRoleRewardInfo_OnPlayPressed(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* GamePassesSpawnRoleRewardInfo() */

void Assembly-CSharp.dll::GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo__ctor
               (GamePassesSpawnRoleRewardInfo *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).haveShownFreeTryUnlock = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052aacd,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

